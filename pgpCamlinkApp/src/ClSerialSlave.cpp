#include <exception>
#include <chrono>
#include <iostream>
#include <string.h>
#include "ClSerialSlave.h"
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>
#include <rogue/interfaces/stream/FrameLock.h>

int clSerialSlaveDebug = 0;

ClSerialSlave::ClSerialSlave()
    : rogue::interfaces::stream::Slave(),
      m_diagBuffer(),
      m_replyBuffer(),
      m_nBytesInBuffer( 0 ),
      m_nBytesReq( 0 ),
      m_replyReady(),
      m_replyLock(),
      m_bufferLock(),
      m_inputEosLen( 0 ),         // *** ADD ***
      m_eosFound( false ),        // *** ADD ***
      m_interCharTimeoutMs( 100 ) // *** ADD: 100ms default ***
{
    memset( m_inputEos, 0, sizeof(m_inputEos) );  // *** ADD ***
    if ( clSerialSlaveDebug >= 1 )
        printf( "Creating ClSerialSlave\n" );
}

ClSerialSlave::~ClSerialSlave()
{
    if ( clSerialSlaveDebug >= 1 )
        printf( "Destructor for ClSerialSlave\n" );
}

// *** ADD: New method ***
void ClSerialSlave::setInputEos( const char *eos, int eosLen )
{
    std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
    if ( eosLen > 0 && eosLen < (int)sizeof(m_inputEos) && eos != nullptr )
    {
        memcpy( m_inputEos, eos, eosLen );
        m_inputEosLen = eosLen;
    }
    else
    {
        memset( m_inputEos, 0, sizeof(m_inputEos) );
        m_inputEosLen = 0;
    }
    if ( clSerialSlaveDebug >= 2 )
        printf( "ClSerialSlave::setInputEos: eosLen=%d\n", m_inputEosLen );
}

// *** MODIFIED: Two-phase timeout + EOS-aware ***
int ClSerialSlave::readBytes( unsigned char * buffer, double timeout, size_t nBytesReq )
{
    const char      *   functionName = "ClSerialSlave::readBytes";
    unsigned char   *   pBufNext    = buffer;

    if ( clSerialSlaveDebug >= 3 )
        printf( "%s: %zu bytes, timeout %.3f sec, eosLen %d\n",
                functionName, nBytesReq, timeout, m_inputEosLen );

    // Phase 1 timeout: wait up to 'timeout' for the first byte (reply timeout)
    std::chrono::milliseconds   initialTimeout( (int)(timeout * 1000) );
    // Phase 2 timeout: after first byte, wait only this long for subsequent bytes
    std::chrono::milliseconds   interCharTimeout( m_interCharTimeoutMs );

    std::unique_lock<std::mutex>    lockIt( m_replyLock );
    int     nBytesRead  = 0;
    m_nBytesReq = nBytesReq;
    m_eosFound  = false;

    bool gotFirstByte = false;

    while ( (pBufNext - buffer) < (int)nBytesReq )
    {
        nBytesRead = pBufNext - buffer;
        int nBytesToRead = m_replyBuffer.size();
        if ( nBytesToRead > (int)(nBytesReq - nBytesRead) )
            nBytesToRead = (int)(nBytesReq - nBytesRead);

        if ( nBytesToRead > 0 )
        {
            nBytesRead = readFromBuffer( pBufNext, nBytesToRead );
        }
        else
        {
            nBytesRead = 0;
        }

        if ( nBytesRead > 0 )
        {
            pBufNext += nBytesRead;
            gotFirstByte = true;

            // Only check for EOS if one is configured
            if ( m_inputEosLen > 0 && (pBufNext - buffer) >= m_inputEosLen )
            {
                if ( memcmp( pBufNext - m_inputEosLen, m_inputEos, m_inputEosLen ) == 0 )
                {
                    m_eosFound = true;
                    if ( clSerialSlaveDebug >= 3 )
                        printf( "%s: EOS found after %d bytes\n",
                                functionName, (int)(pBufNext - buffer) );
                    break;
                }
            }

            if ( clSerialSlaveDebug >= 4 )
            {
                epicsTimeStamp  now;
                char tsBuffer[40];
                (void) epicsTimeGetCurrent(&now);
                tsBuffer[0] = 0;
                epicsTimeToStrftime( tsBuffer, sizeof(tsBuffer),
                    "%Y/%m/%d %H:%M:%S.%03f", &now );
                printf("%s %s: read %d bytes (total %d)\n",
                       tsBuffer, functionName, nBytesRead, (int)(pBufNext - buffer));
            }
            continue;
        }

        // No bytes available. Wait for more.
        nBytesRead = pBufNext - buffer;
        if ( clSerialSlaveDebug >= 4 )
            printf( "%s: Waiting for %d more bytes (have %d)\n",
                    functionName, (int)nBytesReq - nBytesRead, nBytesRead );

        // Use the appropriate timeout phase:
        //   Before first byte: full initial timeout (reply timeout)
        //   After first byte:  short inter-character timeout
        auto waitTimeout = gotFirstByte ? interCharTimeout : initialTimeout;

        std::cv_status cvStatus = m_replyReady.wait_for( lockIt, waitTimeout );

        if ( m_replyBuffer.size() > 0 )
            continue;

        if ( cvStatus == std::cv_status::timeout )
        {
            if ( clSerialSlaveDebug >= 3 )
            {
                if ( gotFirstByte )
                    printf( "%s: inter-char timeout after %d bytes (no EOS).\n",
                            functionName, (int)(pBufNext - buffer) );
                else
                    printf( "%s: initial timeout waiting for first byte.\n",
                            functionName );
            }
            break;
        }
    }

    m_nBytesReq = 0;
    nBytesRead = pBufNext - buffer;

    if ( clSerialSlaveDebug >= 3 )
        printf( "%s: returning %d bytes, eosFound=%d\n",
                functionName, nBytesRead, (int)m_eosFound );

    return nBytesRead;
}

int ClSerialSlave::readFromBuffer( unsigned char * buffer, size_t nBytesMax )
{
    if ( !buffer )
        return -1;
    unsigned char * next = buffer;

    if ( clSerialSlaveDebug >= 4 )
        printf( "ClSerialSlave::readFromBuffer: %zu of %zu bytes\n",
                m_replyBuffer.size(), nBytesMax );

    try
    {
        std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
        while ( !m_replyBuffer.empty() )
        {
            if ( next >= (buffer + nBytesMax) )
                break;
            *next++ = m_replyBuffer.front();
            m_replyBuffer.pop();
        }
    }
    catch ( std::exception & e )
    {
        std::cerr << "ClSerialSlave::readFromBuffer caught exception: "
                  << e.what() << std::endl;
    }

    int nBytesRead = next - buffer;
    if ( clSerialSlaveDebug >= 4 )
        printf( "ClSerialSlave::readFromBuffer: Read %d bytes\n", nBytesRead );

    return nBytesRead;
}

void ClSerialSlave::flush()
{
    try
    {
        std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
        while ( !m_replyBuffer.empty() )
        {
            m_replyBuffer.pop();
        }
    }
    catch ( std::exception & e )
    {
        std::cerr << "ClSerialSlave::flush caught exception: "
                  << e.what() << std::endl;
    }
    return;
}

// *** MODIFIED: Always notify when reader is waiting ***
void ClSerialSlave::addToBuffer( unsigned char c )
{
    std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
    m_replyBuffer.push( c );

    // Always notify reader when data arrives and someone is waiting.
    // The reader (readBytes) handles EOS detection and inter-char timeout.
    if ( m_nBytesReq != 0 )
        m_replyReady.notify_one();
}

void ClSerialSlave::acceptFrame( std::shared_ptr<rogue::interfaces::stream::Frame> frame )
{
    if ( !frame ) {
        printf( ": No frame!\n" );
        return;
    }
    // Acquire lock on frame. Will be released when lock class goes out of scope
    rogue::interfaces::stream::FrameLockPtr lock = frame->lock();

    // Here we get an iterator to the frame data
    rogue::interfaces::stream::FrameIterator it;
    it = frame->begin();

    if ( 0 ) printf( "ClSerialSlave::acceptFrame: SuperFrameSize = %u bytes:\n",
                     frame->getPayload() );

    for ( uint32_t x=0; x*4 < frame->getPayload() && x < 20; x++)
    {
        uint32_t    uartData;
        fromFrame( it, 4, &uartData );
        unsigned char   cData = uartData;
        addToBuffer( cData );

        if ( 0 )
        {
            if ( isprint(cData) )
            {
                m_diagBuffer += cData;
            }
            else
            {
                switch( cData )
                {
                default:    m_diagBuffer += cData;          break;
                case 0x06:  printf( "<ACK>(0x%02X)\n", cData ); m_diagBuffer.clear(); break;
                case 0x15:  printf( "<NAK>(0x%02X)\n", cData ); m_diagBuffer.clear(); break;
                case '\n':
                    printf( "<NL> (0x%02X)\n", cData );
                    break;
                case '\r':
                    printf( "<CR> (0x%02X)\n", cData );
                    printf( "rcvdString: %s\n", m_diagBuffer.c_str() );
                    break;
                }
            }
        }
    }
}
