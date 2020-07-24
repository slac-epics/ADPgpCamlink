#include <string>
#include <string.h>
#include "ImageStream.h"
#include "pgpCamlink.h"
#include <rogue/interfaces/stream/Frame.h>
#include <rogue/interfaces/stream/FrameIterator.h>

extern int	DEBUG_PGP_CAMLINK;

// TDEST 0 is Timing Event
// Offset 0:  4 byte ?
// Offset 4:  4 byte ?
// Offset 8:  4 byte nsec of timestamp
// Offset 12: 4 byte sec  of timestamp
// TODO: Fix offsets
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


void ImageStream::acceptFrame ( rogue::interfaces::stream::FramePtr frame )
{
	char        	acBuff[40];
	const char	*	functionName	= "ImageStream::acceptFrame";
	if ( !frame ) {
		if ( DEBUG_PGP_CAMLINK >= 2 )
			printf( "%s: No frame!\n", functionName );
		return;
	}
	uint8_t	errNum = frame->getError();
	if ( errNum ) {
		// Error code 0x80 is expected when stopping acquisition as it indicates
		// image data that arrived after we stopped.
		if ( ( errNum != 0x80 ) || ( DEBUG_PGP_CAMLINK >= 3 ) )
			printf( "%s: frame error 0x%X!\n", functionName, errNum );
		return;
	}
	// Above test not sufficient to avoid:
	// terminate called after throwing an instance of 'std::bad_weak_ptr'
	//   what():  bad_weak_ptr
	//   Aborted (core dumped)

	// Acquire lock on frame. Will be release when lock class goes out of scope
	rogue::interfaces::stream::FrameLockPtr lock = frame->lock();

	// Here we get an iterator to the frame data
	rogue::interfaces::stream::FrameIterator it;
	it = frame->begin();

	if ( DEBUG_PGP_CAMLINK >= 4 )
	{
		printf( "\n" );
		// Print the values in the first 10 locations
		printf( "ImageStream::acceptFrame: SuperFrameSize=%u bytes:", frame->getPayload() );
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
	}

	// Timestamp should default to TOD
	epicsTimeStamp		ts;
	epicsTimeGetCurrent( &ts );

	// Process frame via CoreV1 protocol
	m_FrameCore.processFrame(frame);
	if ( DEBUG_PGP_CAMLINK >= 4 )
		printf( "ImageStream::acceptFrame: core count=%u, seq=%u, hdrSize=%u, tailSize=%u\n",
				m_FrameCore.count(), m_FrameCore.sequence(), m_FrameCore.headerSize(), m_FrameCore.tailSize() );
	for ( uint32_t sf = 0; sf < m_FrameCore.count(); sf++ )
	{
		rogue::protocols::batcher::DataPtr	data = m_FrameCore.record(sf);
		// FUSER_BIT_1 = StartOfFrame
		// LUSER_BIT_0 = FrameError
		if ( DEBUG_PGP_CAMLINK >= 4 )
			printf( "ImageStream::acceptFrame SubFrame %d, dest=%u, size=%u, fUser=0x%02x, lUser=0x%02x\n",
					sf, data->dest(), data->size(), data->fUser(), data->lUser() );
		if ( data->dest() == 0 )
		{	// TDEST 0 is Trigger (Timing Event)
			it = data->begin();
			it += 8;	// Skipping ?
			fromFrame( it, 4, &ts.nsec );
			fromFrame( it, 4, &ts.secPastEpoch );
			epicsTimeToStrftime( acBuff, 40, "%H:%M:%S.%04f", &ts );
			if ( DEBUG_PGP_CAMLINK >= 4 )
			{
				printf( "%s TDEST 0 SubFrame %d, ts %s, pulseId 0x%X\n",
						functionName, sf, acBuff, ts.nsec & 0x1FFFF );
				if ( DEBUG_PGP_CAMLINK >= 6 )
				{
					//printf( "Invalid timing frame:" );
					for ( uint32_t x=0; x < 24; x++)
					{ printf( " 0x%02x", *it ); it++; }
					printf( "\n" );
				}
			}
		}
		else if ( data->dest() == 1 )
		{	// TDEST 1 is event
			if ( DEBUG_PGP_CAMLINK >= 4 )
				printf( "ImageStream::acceptFrame TDEST 1 SubFrame %d, Event: \n", sf );
			//it = data->begin();
			//it = data->end();
		}
		else if ( data->dest() == 2 )
		{	// TDEST 2 is framegrabber image data
			m_ImageInfo.m_ImageDataPtr = data;
			uint32_t	size	= data->end() - data->begin();
			//uint8_t	*	dataPtr	= data->begin().ptr();
			if ( DEBUG_PGP_CAMLINK >= 4 )
				printf( "ImageStream::acceptFrame TDEST 2 SubFrame %d, size %u\n", sf, size );
		}
	}

	// Process image
	if ( m_pClDev )
	{
		m_ImageInfo.m_tsImage			= ts;
		m_ImageInfo.m_pFrame			= frame;
		if ( !m_ImageInfo.m_ImageDataPtr && ( DEBUG_PGP_CAMLINK >= 4 ) )
			printf( "ts %s, pulseId 0x%X, no image!\n", acBuff, ts.nsec & 0x1FFFF );
		m_pClDev->ProcessImage( &m_ImageInfo );
	}

#if 0 // Not ready to enable
	// Check for ImageCallback
	if ( m_CallbackClientFunc )
	{
		m_ImageInfo.m_pClientContext	= m_pCallbackClient;
		m_ImageInfo.m_tsImage			= ts;
		m_ImageInfo.m_pFrame			= frame;
		(*m_CallbackClientFunc)( &m_ImageInfo );
	}
#endif
}
