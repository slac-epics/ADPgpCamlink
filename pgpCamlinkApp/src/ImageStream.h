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

class pgpCamlink;

class ImageStream : public rogue::interfaces::stream::Slave
//class ImageStream : public rogue::hardware::axi::AxiStreamDma
{
public:

	// Create a static class creator to return our custom class
	// wrapped with a shared pointer
	static std::shared_ptr<ImageStream> create( pgpCamlink * pCamDev )
	{
		static std::shared_ptr<ImageStream> ret = std::make_shared<ImageStream>( pCamDev );
		return(ret);
	}

	ImageStream( pgpCamlink * pCamDev )
		:	rogue::interfaces::stream::Slave( ),
			m_pCamDev(	pCamDev	)
	{
	}

	void acceptFrame ( std::shared_ptr<rogue::interfaces::stream::Frame> frame );

private:
	pgpCamlink		*	m_pCamDev;
};

// Shared pointer alias
typedef std::shared_ptr<ImageStream> ImageStreamPtr;

#endif	/* CL_STREAM_SLAVE_H */
