#ifndef	CL_MEMORY_MASTER_H
#define	CL_MEMORY_MASTER_H

#include <rogue/interfaces/memory/Master.h>
//#include <rogue/interfaces/stream/Slave.h>
//#include <rogue/interfaces/stream/Master.h>
//#include <rogue/interfaces/stream/Frame.h>
//#include <rogue/interfaces/stream/FrameLock.h>
//#include <rogue/interfaces/stream/FrameIterator.h>

// Custom stream master class
class ClMemoryMaster : public rogue::interfaces::memory::Master
{
	// Total frame counter, exposed to Python
	uint32_t frameCount_;

	// Total byte count, exposed to Python
	uint32_t byteCount_;

	// Frame size configuration
	uint32_t frameSize_;

public:
	// Create a static class creator to return our custom class wrapped with a shared pointer
	static std::shared_ptr<ClMemoryMaster> create() {
		static std::shared_ptr<ClMemoryMaster> ret = std::make_shared<ClMemoryMaster>();
		return(ret);
	}

	// Standard class creator which is called by create
	ClMemoryMaster() : rogue::interfaces::memory::Master() {
		frameCount_ = 0;
		byteCount_  = 0;
		frameSize_  = 0;
	}

	// Return received frame counter
	uint32_t getFrameCount() {
		return frameCount_;
	}

	// Return total bytes received
	uint32_t getTotalBytes() {
		return byteCount_;
	}

	// Set frame size
	void setFrameSize(uint32_t size) {
		frameSize_ = size;
	}

	// Get frame size
	uint32_t getFrameSize() {
		return frameSize_;
	}

	// Generate and send a frame
	void myFrameGen()
	{
#if 0
		rogue::interfaces::stream::FramePtr frame;
		rogue::interfaces::stream::FrameIterator it;
		uint32_t x;

		// Here we request a frame capable of holding 100 bytes
		frame = reqFrame(frameSize_,true);

		// Unlike the python API we must now specify the new payload size
		frame->setPayload(frameSize_);

		// Set an incrementing value to the first 10 locations
		x = 0;
		for ( it=frame->begin(); it < frame->end(); ++it )
			*it = x++;

		//Send frame
		sendFrame(frame);

		// Increment frame counter
		frameCount_++;

		// Increment byte  counter
		byteCount_ += frameSize_;
#endif
	}
};

// Shared pointer alias
typedef std::shared_ptr<ClMemoryMaster> ClMemoryMasterPtr;

#endif	/*	CL_MEMORY_MASTER_H */
