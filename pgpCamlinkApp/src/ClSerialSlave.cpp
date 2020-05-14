#include <exception>
#include <iostream>
#include "ClSerialSlave.h"
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>
#include <rogue/interfaces/stream/FrameLock.h>



ClSerialSlave::ClSerialSlave()
	:	rogue::interfaces::stream::Slave(),
		m_diagBuffer(	),
		m_replyBuffer(	),
		m_nBytesInBuffer( 0 ),
		m_nBytesReq( 0 ),
		m_bufferLock( )
{
	printf( "Creating ClSerialSlave\n" );
}

ClSerialSlave::~ClSerialSlave()
{
	printf( "Destructor for ClSerialSlave\n" );
}

int ClSerialSlave::readBytes( unsigned char * buffer, double timeout, size_t nBytesMax )
{
	return 0;
}

int ClSerialSlave::readFromBuffer( unsigned char * buffer, size_t nBytesMax )
{
	if ( !buffer )
		return -1;
	unsigned char *	next	= buffer;
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
	return (int) ( next - buffer );
}

void ClSerialSlave::addToBuffer( unsigned char c )
{
	std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
	m_replyBuffer.push( c );
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
		if ( 1 )
		{
			if ( isprint(cData) )
			{
				//printf( " %c (0x%X)", cData, cData );
				m_diagBuffer += cData;
			}
			else
			{
				switch( cData )
				{
				//default:	printf( " ? (0x%X)", cData );	break;
				default:	m_diagBuffer += cData;			break;
				case 0x06:	printf( " ACK (0x%X)\n", cData );	m_diagBuffer.clear(); break;
				case 0x25:	printf( " NAK (0x%X)\n", cData );	m_diagBuffer.clear(); break;
				case '\n':	printf( " NL (0x%X)\n", cData );	break;
				case '\r':	printf( "recvString: %s\n", m_diagBuffer.c_str() );	break;
				}
			}
		}
	}
}
