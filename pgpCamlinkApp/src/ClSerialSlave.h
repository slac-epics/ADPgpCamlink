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
		for ( uint32_t x=0; x < frame->getSize() && x < 20; x++)
		{
			uint32_t	uartData;
			fromFrame( it, 4, &uartData );
			printf( " 0x%08x", uartData );
		}
#endif
		printf( " ...\n" );

		// Use std::copy to copy data to a data buffer
		// Here we copy the entire frame payload to the data buffer
//		std::copy(frame->begin(), frame->end(), data);

#if 1
		// Process frame via CoreV1 protocol
		rogue::protocols::batcher::CoreV1		core;
		core.processFrame(frame);
		printf( "ClSerialSlave::acceptFrame: core count=%u, seq=%u, hdrSize=%u, tailSize=%u\n",
				core.count(), core.sequence(), core.headerSize(), core.tailSize() );
		for ( uint32_t sf = 0; sf < core.count(); sf++ )
		{
			rogue::protocols::batcher::DataPtr	data;
			data = core.record(sf);
			// FUSER_BIT_1 = StartOfFrame
			// LUSER_BIT_0 = FrameError
			printf( "ClSerialSlave::acceptFrame SubFrame %d: dest=%u, size=%u, fUser=0x%02x, lUser=0x%02x\n",
					sf, data->dest(), data->size(), data->fUser(), data->lUser() );
			if ( data->dest() == 0 )
			{	// TDEST 0 is ?
				it = data->begin();
				if ( 0 )
				{
					for ( uint32_t x=0; x < 24; x++)
					{
						printf( " 0x%02x", *it );
						it++;
					}
					printf( "\n" );
				}
			}
		}
#endif
	}
};

// Shared pointer alias
typedef std::shared_ptr<ClSerialSlave> ClSerialSlavePtr;

#endif	/* CL_SERIAL_SLAVE_H */
