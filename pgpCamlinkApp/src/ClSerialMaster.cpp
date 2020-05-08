#include <string>
#include <string.h>
#include "ClSerialMaster.h"

int ClSerialMaster::sendBytes( const char * buffer, size_t nBytes )
{
	uint32_t	lValue;
	if ( strlen( buffer ) <= nBytes )
		printf( "ClSerialMaster::sendBytes: %zu bytes.\n'%s'\n", nBytes, buffer );
	std::shared_ptr<rogue::interfaces::stream::Frame> frame;
	frame = reqFrame ( nBytes * 4, true );
	if ( ! frame )
	{
		printf( "ClSerialMaster::sendBytes: reqFrame %zd bytes failed!\n", nBytes * 4 );
		return -1;
	}
	rogue::interfaces::stream::FrameIterator it;
#if 1
	// Test incorrect setPayload size.  Should throw exception
	//frame->setPayload( nBytes );
	frame->setPayload( nBytes * 4 );
	it = frame->begin();
	for ( size_t i = 0; i < nBytes; i++ )
	{
#if 1
		printf( "ClSerialMaster::sendBytes: Byte 0x%02X, Frame size %u, payload %u, remBuffer %u, avail %u\n",
				buffer[i], frame->getSize(), frame->getPayload(), it.remBuffer(), frame->getAvailable() );
#endif
		lValue = buffer[i];
		toFrame( it, 4, &lValue );
	}
#else
	frame->setPayload( nBytes * 4 );
	it = frame->begin();
	for ( size_t i = 0; i < nBytes; i++ )
	{
		lValue = buffer[i];
		toFrame( it, 4, &lValue );
	}
#endif
	printf( "ClSerialMaster::sendBytes: Frame size %u, payload %u, avail %u\n",
			frame->getSize(), frame->getPayload(), frame->getAvailable() );
	try
	{
		sendFrame( frame );
	}
	catch ( rogue::GeneralError &e )
	{
		printf( "ClSerialMaster::sendBytes: Error %s!\n", e.what() );
		return -1;
	}

	return 0;
}
