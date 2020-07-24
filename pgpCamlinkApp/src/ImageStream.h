#ifndef	CL_STREAM_SLAVE_H
#define	CL_STREAM_SLAVE_H

#ifndef	__STDC_FORMAT_MACROS
#define	__STDC_FORMAT_MACROS
#endif /* __STDC_FORMAT_MACROS */
#include <inttypes.h>
#include <callback.h>
#include <epicsTime.h>
#include <rogue/interfaces/stream/Slave.h>
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>
#include <rogue/interfaces/stream/FrameLock.h>
#include <rogue/hardware/axi/AxiStreamDma.h>
#include <rogue/protocols/batcher/CoreV1.h>
#include <rogue/protocols/batcher/Data.h>

class pgpClDev;

typedef struct _ImageCbInfo
{
	epicsTimeStamp						m_tsImage;
	rogue::protocols::batcher::DataPtr	m_ImageDataPtr;

#if 0
	// Do we need image characteristics like these?
	size_t								m_frameCounter;
	size_t								m_height;
	size_t								m_width;
	size_t								m_xStart;
	size_t								m_yStart;
	unsigned long						m_tyData;
	unsigned long						m_colorMode;
	size_t								m_nBits;
#endif
}	ImageCbInfo;

// TODO: Should this typedef move to pgpClDev.h
typedef int (* ImageCallback)( void * pClientContext, const ImageCbInfo * pCbInfo );


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

	//void acceptFrame ( std::shared_ptr<rogue::interfaces::stream::Frame> frame );
	void acceptFrame ( rogue::interfaces::stream::FramePtr frame );

	void frameCallback( CALLBACK * pCallbackPvt );

	void cancelImageCallbacks( )
	{
		m_pCallbackClient		= NULL;
		m_CallbackClientFunc	= NULL;
	}

	void requestImageCallbacks(	void			*	pCallbackClient,
								// CALLBACKFUNC		CallbackClientFunc
								ImageCallback		CallbackClientFunc )
	{
		m_pCallbackClient		= pCallbackClient;
		m_CallbackClientFunc	= CallbackClientFunc;
	}

private:
	pgpClDev		*	m_pClDev;
	void			*	m_pCallbackClient;
//	CALLBACKFUNC		m_CallbackClientFunc;
	ImageCallback		m_CallbackClientFunc;
	ImageCbInfo			m_ImageInfo;
	rogue::protocols::batcher::CoreV1	m_FrameCore;
};

// Shared pointer alias
typedef std::shared_ptr<ImageStream> ImageStreamPtr;

#endif	/* CL_STREAM_SLAVE_H */
