#include <string>
#include <string.h>
#include "ClSerialMaster.h"
#include <rogue/GeneralError.h>
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>

int ClSerialMaster::sendBytes( unsigned const char * buffer, size_t nBytes )
{
	if ( nBytes == 0 )
		return 0;
	uint32_t	lValue;
	if ( 1 and strlen( (const char *) buffer ) <= nBytes )
		printf( "ClSerialMaster::sendBytes: %zu bytes.\n'%s'\n", nBytes, buffer );
	std::shared_ptr<rogue::interfaces::stream::Frame> frame;
	frame = reqFrame ( nBytes * 4, true );
	if ( ! frame )
	{
		printf( "ClSerialMaster::sendBytes: reqFrame %zd bytes failed!\n", nBytes * 4 );
		return -1;
	}

	rogue::interfaces::stream::FrameIterator it;
	frame->setPayload( nBytes * 4 );
	it = frame->begin();
	for ( size_t i = 0; i < nBytes; i++ )
	{
		lValue = buffer[i];
		toFrame( it, 4, &lValue );
	}

	if ( 0 ) printf( "ClSerialMaster::sendBytes: Frame size %u, payload %u, avail %u\n",
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

	return nBytes;
}
