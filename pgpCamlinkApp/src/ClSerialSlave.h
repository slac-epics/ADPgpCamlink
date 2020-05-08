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

	ClSerialSlave();

	~ClSerialSlave();

	void acceptFrame ( std::shared_ptr<rogue::interfaces::stream::Frame> frame );
};

// Shared pointer alias
typedef std::shared_ptr<ClSerialSlave> ClSerialSlavePtr;

#endif	/* CL_SERIAL_SLAVE_H */
