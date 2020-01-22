#ifndef	CL_STREAM_SLAVE_H
#define	CL_STREAM_SLAVE_H

#include <rogue/interfaces/stream/Slave.h>
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>
#include <rogue/interfaces/stream/FrameLock.h>
#include <rogue/hardware/axi/AxiStreamDma.h>

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
		printf( "ClStreamSlave::acceptFrame" );
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

		// Here we get an iterator to the frame data
		rogue::interfaces::stream::FrameIterator it;
		it = frame->begin();

		// Print the values in the first 10 locations
		printf( " %u bytes:", frame->getSize() );
		for ( uint32_t x=0; x < 16; x++)
		{
#if 1
			uint16_t	pixelData;
			fromFrame( it, 2, &pixelData );
			printf( " 0x%04x", pixelData );
#else
			printf( " 0x%02x", *it );
			it++;
#endif
		}
		printf( "\n" );

		// Use std::copy to copy data to a data buffer
		// Here we copy the entire frame payload to the data buffer
//		std::copy(frame->begin(), frame->end(), data);
	}
};

// Shared pointer alias
typedef std::shared_ptr<ClStreamSlave> ClStreamSlavePtr;

#endif	/* CL_STREAM_SLAVE_H */
