#ifndef	CL_SERIAL_MASTER_H
#define	CL_SERIAL_MASTER_H

#ifndef	__STDC_FORMAT_MACROS
#define	__STDC_FORMAT_MACROS
#endif /* __STDC_FORMAT_MACROS */
#include <inttypes.h>
#include <epicsTime.h>
#include <rogue/GeneralError.h>
#include <rogue/interfaces/stream/Master.h>
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>
#include <rogue/interfaces/stream/FrameLock.h>
#include <rogue/hardware/axi/AxiStreamDma.h>
#include <rogue/protocols/batcher/CoreV1.h>
#include <rogue/protocols/batcher/Data.h>

class ClSerialMaster : public rogue::interfaces::stream::Master
{
public:

	// Create a static class creator to return our custom class
	// wrapped with a shared pointer
	static std::shared_ptr<ClSerialMaster> create()
	{
		static std::shared_ptr<ClSerialMaster> ret = std::make_shared<ClSerialMaster>();
		return(ret);
	}

	ClSerialMaster() : rogue::interfaces::stream::Master() { }

	/// sendBytes function can handle binary data containing zeroes.
	int sendBytes( const char * buffer, size_t nBytes );

	/// sendString function treats zero as the end of the string.
	int sendString( const char * toSend )
	{
		return sendBytes( toSend, strlen(toSend) );
	}

	int sendString( const std::string	& toSend )
	{
		return sendBytes( toSend.c_str(), toSend.size() );
	}

	// stream::Master provides a reqFrame implementation that gets an empty
	// frame from either slave 0, or if we haven't added a slave yet, it's defSlave_.
	// i.e. Our Camlink Master gets an addSlave( dataChan[lane][2] ) so it's AxiStreamDma::acceptReq.
	//std::shared_ptr<rogue::interfaces::stream::Frame> reqFrame ( uint32_t size, bool zeroCopyEn);

	// stream::Master provides a sendFrame implementation
	// that calls acceptFrame() for each slave.
	//void sendFrame( std::shared_ptr<rogue::interfaces::stream::Frame> frame );

};

// Shared pointer alias
typedef std::shared_ptr<ClSerialMaster> ClSerialMasterPtr;

#endif	/* CL_SERIAL_MASTER_H */
