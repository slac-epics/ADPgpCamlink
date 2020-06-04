#include <exception>
#include <chrono>
#include <iostream>
#include "ClSerialSlave.h"
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>
#include <rogue/interfaces/stream/FrameLock.h>


int		clSerialSlaveDebug	= 2;

ClSerialSlave::ClSerialSlave()
	:	rogue::interfaces::stream::Slave(),
		m_diagBuffer(	),
		m_replyBuffer(	),
		m_nBytesInBuffer( 0 ),
		m_nBytesReq( 0 ),
		m_replyReady( ),
		m_replyLock( ),
		m_bufferLock( )
{
	if ( clSerialSlaveDebug >= 1 )
		printf( "Creating ClSerialSlave\n" );
}

ClSerialSlave::~ClSerialSlave()
{
	if ( clSerialSlaveDebug >= 1 )
		printf( "Destructor for ClSerialSlave\n" );
}

int ClSerialSlave::readBytes( unsigned char * buffer, double timeout, size_t nBytesMax )
{
	if ( clSerialSlaveDebug >= 3 )
		printf( "ClSerialSlave::readBytes: %zu bytes, timeout %.3f sec\n", nBytesMax, timeout );
	std::chrono::milliseconds	timeoutDur( (int) (timeout * 1000) );
	std::unique_lock<std::mutex>	lockIt(m_replyLock);

	m_nBytesReq	= nBytesMax;
	while ( m_replyBuffer.size() < m_nBytesReq )
	{
		std::cv_status	 cvStatus = m_replyReady.wait_for( lockIt, timeoutDur );
		if ( cvStatus == std::cv_status::timeout )
		{
			if ( clSerialSlaveDebug >= 3 )
				printf( "ClSerialSlave::readBytes: timeout waiting for %zu bytes.\n", m_nBytesReq );
			break;
		}
	}

	int	nBytesRead = readFromBuffer( buffer, nBytesMax );
	m_nBytesReq	= 0;
	return nBytesRead;
}

int ClSerialSlave::readFromBuffer( unsigned char * buffer, size_t nBytesMax )
{
	if ( !buffer )
		return -1;
	unsigned char *	next	= buffer;
	if ( clSerialSlaveDebug >= 4 )
		printf( "ClSerialSlave::readFromBuffer: %zu of %zu bytes\n", m_replyBuffer.size(), nBytesMax );
	try
	{
		std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
		while ( !m_replyBuffer.empty() )
		{
			if ( next >= (buffer + nBytesMax ) )
				break;
			*next++ = m_replyBuffer.front();
			m_replyBuffer.pop();
		}
	}
	catch ( std::exception & e )
	{
		std::cerr << "ClSerialSlave::readFromBuffer caught exception: " << e.what() << std::endl;
	}
	int		nBytesRead = next - buffer;
	if ( clSerialSlaveDebug >= 4 )
		printf( "ClSerialSlave::readFromBuffer: Read %u bytes\n", nBytesRead );
	return nBytesRead;
}

void ClSerialSlave::flush( )
{
	try
	{
		std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
		while ( !m_replyBuffer.empty() )
		{
			// unsigned char cNext = m_replyBuffer.front();
			m_replyBuffer.pop();
		}
	}
	catch ( std::exception & e )
	{
		std::cerr << "ClSerialSlave::flush caught exception: " << e.what() << std::endl;
	}
	return;
}

void ClSerialSlave::addToBuffer( unsigned char c )
{
	std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
	m_replyBuffer.push( c );
	if ( m_nBytesReq != 0 && m_replyBuffer.size() >= m_nBytesReq )
		m_replyReady.notify_one();
}


void ClSerialSlave::acceptFrame ( std::shared_ptr<rogue::interfaces::stream::Frame> frame )
{
	if ( !frame ) {
		printf( ": No frame!\n" );
		return;
	}

	// Acquire lock on frame. Will be release when lock class goes out of scope
	rogue::interfaces::stream::FrameLockPtr lock = frame->lock();

	// Here we get an iterator to the frame data
	rogue::interfaces::stream::FrameIterator it;
	it = frame->begin();

	// Print the values in the first 10 locations
	if ( 0 ) printf( "ClSerialSlave::acceptFrame: SuperFrameSize = %u bytes:\n", frame->getPayload() );
	for ( uint32_t x=0; x*4 < frame->getPayload() && x < 20; x++)
	{
		uint32_t	uartData;
		fromFrame( it, 4, &uartData );
		unsigned char	cData = uartData;
		addToBuffer( cData );
		if ( 0 )
		{
			if ( isprint(cData) )
			{
				//printf( " %c (0x%02X)", cData, cData );
				m_diagBuffer += cData;
			}
			else
			{
				switch( cData )
				{
				//default:	printf( " ? (0x%02X)", cData );	break;
				default:	m_diagBuffer += cData;			break;
				case 0x06:	printf( "<ACK>(0x%02X)\n", cData );	m_diagBuffer.clear(); break;
				case 0x15:	printf( "<NAK>(0x%02X)\n", cData );	m_diagBuffer.clear(); break;
				//case 0x25:	printf( "<NAK>(0x%02X)\n", cData );	m_diagBuffer.clear(); break;
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
