#ifndef	CL_SERIAL_SLAVE_H
#define	CL_SERIAL_SLAVE_H

#ifndef	__STDC_FORMAT_MACROS
#define	__STDC_FORMAT_MACROS
#endif /* __STDC_FORMAT_MACROS */
#include <inttypes.h>
#include <ctype.h>
#include <epicsTime.h>
#include <rogue/interfaces/stream/Slave.h>
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>
#include <rogue/interfaces/stream/FrameLock.h>
#include <rogue/hardware/axi/AxiStreamDma.h>
#include <rogue/protocols/batcher/CoreV1.h>
#include <rogue/protocols/batcher/Data.h>

class ClSerialSlave : public rogue::interfaces::stream::Slave
{
private:
	std::string		replyBuffer;

public:

	// Create a static class creator to return our custom class
	// wrapped with a shared pointer
	static std::shared_ptr<ClSerialSlave> create()
	{
		static std::shared_ptr<ClSerialSlave> ret = std::make_shared<ClSerialSlave>();
		return(ret);
	}

	ClSerialSlave() : rogue::interfaces::stream::Slave() { }

	void acceptFrame ( std::shared_ptr<rogue::interfaces::stream::Frame> frame )
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
		if ( 0 ) printf( "ClSerialSlave::acceptFrame: SuperFrameSize=%u bytes:", frame->getPayload() );
#if 1
		for ( uint32_t x=0; x*4 < frame->getPayload() && x < 20; x++)
		{
			uint32_t	uartData;
			fromFrame( it, 4, &uartData );
			char		cData = uartData;
			if ( isprint(cData) )
			{
				//printf( " %c (0x%X)", cData, cData );
				replyBuffer += cData;
			}
			else
			{
				switch( cData )
				{
				//default:	printf( " ? (0x%X)", cData );	break;
				default:	replyBuffer += cData;			break;
				case 0x06:	printf( " ACK (0x%X)\n", cData );	replyBuffer.clear(); break;
				case 0x25:	printf( " NAK (0x%X)\n", cData );	replyBuffer.clear(); break;
				case '\n':	printf( " NL (0x%X)\n", cData );	break;
				case '\r':	printf( "recvString: %s\n", replyBuffer.c_str() );	break;
				}
			}
		}
#endif
		//printf( " ...\n" );

		// Use std::copy to copy data to a data buffer
		// Here we copy the entire frame payload to the data buffer
//		std::copy(frame->begin(), frame->end(), data);
	}
};

// Shared pointer alias
typedef std::shared_ptr<ClSerialSlave> ClSerialSlavePtr;

#endif	/* CL_SERIAL_SLAVE_H */
