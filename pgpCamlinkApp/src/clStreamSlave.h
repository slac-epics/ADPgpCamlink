#ifndef	CL_STREAM_SLAVE_H
#define	CL_STREAM_SLAVE_H

#include <rogue/interfaces/stream/Slave.h>
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>
#include <rogue/interfaces/stream/FrameLock.h>

class MyCustomSlave : public rogue::interfaces::stream::Slave
{
public:

	// Create a static class creator to return our custom class
	// wrapped with a shared pointer
	static std::shared_ptr<MyCustomSlave> create()
	{
		static std::shared_ptr<MyCustomSlave> ret = std::make_shared<MyCustomSlave>();
		return(ret);
	}

	MyCustomSlave() : rogue::interfaces::stream::Slave() { }

	void acceptFrame ( std::shared_ptr<rogue::interfaces::stream::Frame> frame )
	{
		rogue::interfaces::stream::FrameIterator it;
		uint32_t x;

		// Acquire lock on frame. Will be release when lock class goes out of scope
		rogue::interfaces::stream::FrameLockPtr lock = frame->lock();

		// Here we get an iterator to the frame data
		it = frame->begin();

		// Print the values in the first 10 locations
		for (x=0; x < 10; x++)
		{
			printf("Location %u = 0x%x\n", x, *it);
			it++;
		}

		// Use std::copy to copy data to a data buffer
		// Here we copy the entire frame payload to the data buffer
//		std::copy(frame->begin(), frame->end(), data);
	}
};

// Shared pointer alias
typedef std::shared_ptr<MyCustomSlave> MyCustomSlavePtr;

#endif	/* CL_STREAM_SLAVE_H */
