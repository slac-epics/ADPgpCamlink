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

class pgpClDev;

class ImageStream : public rogue::interfaces::stream::Slave
{
public:

	// Create a static class creator to return our custom class
	// wrapped with a shared pointer
	static std::shared_ptr<ImageStream> create( pgpClDev * pClDev )
	{
		static std::shared_ptr<ImageStream> ret = std::make_shared<ImageStream>( pClDev );
		return(ret);
	}

	ImageStream( pgpClDev * pClDev )
		:	rogue::interfaces::stream::Slave( )
		,	m_pClDev(	pClDev	)
	{
	}

	void acceptFrame ( rogue::interfaces::stream::FramePtr frame );

private:
	pgpClDev		*	m_pClDev;
	rogue::protocols::batcher::CoreV1	m_FrameCore;
};

// Shared pointer alias
typedef std::shared_ptr<ImageStream> ImageStreamPtr;

#endif	/* CL_STREAM_SLAVE_H */
