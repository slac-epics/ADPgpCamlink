#ifndef	CL_SERIAL_SLAVE_H
#define	CL_SERIAL_SLAVE_H

#ifndef	__STDC_FORMAT_MACROS
#define	__STDC_FORMAT_MACROS
#endif /* __STDC_FORMAT_MACROS */
#include <inttypes.h>
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
#if 0	// Test frame ptr?
		if ( frame->expired() )
			return;
#else
		if ( !frame ) {
			printf( ": No frame!\n" );
			return;
		}
		// Above test not sufficient to avoid:
		// terminate called after throwing an instance of 'std::bad_weak_ptr'
		//   what():  bad_weak_ptr
		//   Aborted (core dumped)
#endif

		// Acquire lock on frame. Will be release when lock class goes out of scope
		rogue::interfaces::stream::FrameLockPtr lock = frame->lock();

		printf( "ClSerialSlave::acceptFrame" );
		// Here we get an iterator to the frame data
		rogue::interfaces::stream::FrameIterator it;
		it = frame->begin();

		// Print the values in the first 10 locations
		printf( " SuperFrameSize=%u bytes:", frame->getSize() );
#if 1
		for ( uint32_t x=0; x*4 < frame->getPayload() && x < 20; x++)
		{
			uint32_t	uartData;
			fromFrame( it, 4, &uartData );
			char		cData = uartData;
			printf( " %c (0x%X)", cData, cData );
		}
#endif
		printf( " ...\n" );

		// Use std::copy to copy data to a data buffer
		// Here we copy the entire frame payload to the data buffer
//		std::copy(frame->begin(), frame->end(), data);
	}
};

// Shared pointer alias
typedef std::shared_ptr<ClSerialSlave> ClSerialSlavePtr;

#endif	/* CL_SERIAL_SLAVE_H */
