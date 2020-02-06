#ifndef	CL_STREAM_SLAVE_H
#define	CL_STREAM_SLAVE_H

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

class ClStreamSlave : public rogue::interfaces::stream::Slave
//class ClStreamSlave : public rogue::hardware::axi::AxiStreamDma
{
public:

	// Create a static class creator to return our custom class
	// wrapped with a shared pointer
	static std::shared_ptr<ClStreamSlave> create()
	{
		static std::shared_ptr<ClStreamSlave> ret = std::make_shared<ClStreamSlave>();
		return(ret);
	}

	ClStreamSlave() : rogue::interfaces::stream::Slave() { }

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

		printf( "ClStreamSlave::acceptFrame" );
		// Here we get an iterator to the frame data
		rogue::interfaces::stream::FrameIterator it;
		it = frame->begin();

		// Print the values in the first 10 locations
		printf( " SuperFrameSize=%u bytes:", frame->getSize() );
#if 0
		for ( uint32_t x=0; x < 20; x++)
		{
#if 0
			uint16_t	pixelData;
			fromFrame( it, 2, &pixelData );
			printf( " 0x%04x", pixelData );
#else
			printf( " 0x%02x", *it );
			it++;
#endif
		}
#endif
		printf( " ...\n" );

		// Use std::copy to copy data to a data buffer
		// Here we copy the entire frame payload to the data buffer
//		std::copy(frame->begin(), frame->end(), data);

		// Process frame via CoreV1 protocol
		rogue::protocols::batcher::CoreV1		core;
		core.processFrame(frame);
		printf( "ClStreamSlave::acceptFrame: core count=%u, seq=%u, hdrSize=%u, tailSize=%u\n",
				core.count(), core.sequence(), core.headerSize(), core.tailSize() );
		for ( uint32_t sf = 0; sf < core.count(); sf++ )
		{
			rogue::protocols::batcher::DataPtr	data;
			data = core.record(sf);
			// FUSER_BIT_1 = StartOfFrame
			// LUSER_BIT_0 = FrameError
			printf( "ClStreamSlave::acceptFrame SubFrame %d: dest=%u, size=%u, fUser=0x%02x, lUser=0x%02x\n",
					sf, data->dest(), data->size(), data->fUser(), data->lUser() );
			if ( data->dest() == 0 )
			{	// TDEST 0 is Timing Event
				// Offset 0:  4 byte nsec of timestamp
				// Offset 4:  4 byte sec  of timestamp
				// Offset 8:  4 byte edefAvgDoneMask
				// Offset 12: 4 byte edefAvgMinorMask
				// Offset 16: 4 byte edefAvgMajorMask
				// Offset 20: 4 byte edefInitMask
				// Offset 24: 4 byte Modifier1
				// Offset 28: 4 byte Modifier2
				// Offset 32: 4 byte Modifier3
				// Offset 36: 4 byte Modifier4
				// Offset 40: 4 byte Modifier5
				// Offset 44: 4 byte Modifier6
				it = data->begin();
				epicsTimeStamp		ts;
				fromFrame( it, 4, &ts.nsec );
				fromFrame( it, 4, &ts.secPastEpoch );
				char        acBuff[40];
				epicsTimeToStrftime( acBuff, 40, "%H:%M:%S.%04f", &ts );
				printf( "ts %s, pulseId 0x%X\n", acBuff, ts.nsec & 0x1FFFF );
				if ( 0 )
				{
					printf( "Invalid timing frame:" );
					for ( uint32_t x=0; x < 24; x++)
					{
						printf( " 0x%02x", *it );
						it++;
					}
					printf( "\n" );
				}
			}
			else if ( data->dest() == 1 && 0 )
			{	// TDEST 1 is framegrabber image data
				//printf( "ClStreamSlave::acceptFrame SubFrame %d: ", sf );
				//it = data->begin();
				it = data->end();
				for ( uint32_t x=0; x < 1030; x++)
				{
#if 1
					if ( (x % 16) == 0 )
						printf( "\n" );
					uint16_t	pixelData;
					it -= 2;
					fromFrame( it, 2, &pixelData );
					printf( " 0x%04x", pixelData );
					it -= 2;
#else
					printf( " 0x%02x", *it );
					it++;
#endif
				}
				printf( "\n" );
			}
		}
	}
};

// Shared pointer alias
typedef std::shared_ptr<ClStreamSlave> ClStreamSlavePtr;

#endif	/* CL_STREAM_SLAVE_H */
