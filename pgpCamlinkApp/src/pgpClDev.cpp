//////////////////////////////////////////////////////////////////////////////
// This file is part of 'ADPgpCamlink'.
// It is subject to the license terms in the LICENSE.txt file found in the 
// top-level directory of this distribution and at: 
//    https://confluence.slac.stanford.edu/display/ppareg/LICENSE.html. 
// No part of 'ADPgpCamlink', including this file,
// may be copied, modified, propagated, or distributed except according to 
// the terms contained in the LICENSE.txt file.
//////////////////////////////////////////////////////////////////////////////
//
//	pgpClDev driver
//
//	EPICS device support for the cameraLink-gateway firmware which
//	implements a Camlink frame-grabber via a KCU1500 pciE card.
//	Camer image stream and serial I/O streams are accessed via
//	the SLAC Rogue streaming API.
//

#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <typeinfo>

// rogue headers
//#include "rogue/GeneralError.h"
//#include "rogue/Logging.h"
#include "rogue/Version.h"

// aes-stream-drivers headers 
//#include <AxisDriver.h>
#include <AxiVersion.h>
//#include <DmaDriver.h>

// ADPgpCamlink headers
#include "pgpClDev.h"

using namespace	std;

int		DEBUG_PGP_CAMLINK	= 1;


int		pgpClDev::setTriggerEnable( unsigned int triggerNum, bool fEnable )
{
	int		status	= 0;
	return status;
}


///	Constructor
pgpClDev::pgpClDev(
	unsigned int				board,
	unsigned int				lane )
:
	m_board(		board	),
	m_lane(			lane	),
	m_fConnected(	0		),
	m_devName(				),
	m_devLock(				),
	m_pFebFrameChan(		),
//	m_pFebMemMaster(		),	// not needed
	m_pImageStream(			)
{
//	const char		*	functionName	= "pgpClDev::pgpClDev";

	// Create mutexes
    m_devLock	= epicsMutexMustCreate();

	/*
	 * Check arguments
	 */

	char	acDevName[60];
	sprintf( acDevName, "/dev/datadev_%u", board );
	m_devName = acDevName;

#if 0
	uint8_t mask[DMA_MASK_SIZE];
	dmaInitMaskBytes(mask);
	for (unsigned lane=0; lane<4; lane++) {
		dmaAddMaskBytes((uint8_t*)mask, (lane<<8 | channel));
	}
#endif

	m_LibVersion = rogue::Version::current();
	// See if we can connect to the device
	m_fd = open(m_devName.c_str(), O_RDWR);
	if (m_fd < 0) {
		std::cout << "Error opening " << m_devName << std::endl;
	}
	else
	{
		AxiVersion vsn;
		if ( axiVersionGet(m_fd, &vsn) >= 0 )
		{
			printf("pgpClDev: -- Core Axi Version --\n");
			printf("firmwareVersion : %x\n", vsn.firmwareVersion);
			printf("buildString     : %s\n", vsn.buildString); 
			//printf("upTimeCount     : %u\n", vsn.upTimeCount);
			//printf("deviceId        : %x\n", vsn.deviceId);
			//printf("buildString     : %s\n", vsn.buildString);

			// TODO: Need a better mapping of these version strings to EPICS PVs
			m_DrvVersion = vsn.firmwareVersion;
			//m_LibVersion = vsn.buildString;
		}
	}

	//
	// Create FEB Data Channels
	// TODO: Make a function than encapsulates this
	uint32_t	dest;
	dest = (0x100 * m_lane) + PGPCL_DATACHAN_FEB_FRAME_ACCESS;
	m_pFebFrameChan	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);
	if ( m_pFebFrameChan )
		printf("pgpClDev: AxiStreamDma::create( %s, 0x%X, true ) succeeded!\n", m_devName.c_str(), dest );
	else
	{
		printf("pgpClDev: Error from AxiStreamDma::create( %s, 0x%X, true )\n", m_devName.c_str(), dest );
		return;
	}

	//
	// Connect DATACHAN 1 Camera Frames
	m_pImageStream	= ImageStream::create(this);
	m_pFebFrameChan->addSlave( m_pImageStream );
	// or rogueStreamConnect( m_pFebFrameChan, m_pImageStream );

	m_fConnected = 1;	// Do we need this?
	//StartRun( m_fd );
}

/// virtual Destructor
pgpClDev::~pgpClDev()
{
	close( m_fd );
}

/// Configure timing for LCLS-I






void pgpClDev::connect( )
{
}

void pgpClDev::disconnect( )
{
}

void pgpClDev::ProcessImage(
	ImageCbInfo		* pImageInfo )
{
	const char		*	functionName	= "pgpClDev::ProcessImage";
	if ( DEBUG_PGP_CAMLINK >= 5 ) printf( "%s\n", functionName );
	//epicsTimeStamp		tsImage	= pImageInfo->m_tsImage;

	if  ( m_CallbackClientFunc != NULL )
		(*m_CallbackClientFunc)( m_pCallbackClient, pImageInfo );

	return;
}

void pgpClDev::cancelImageCallbacks( )
{
	m_pCallbackClient		= NULL;
	m_CallbackClientFunc	= NULL;
}

void pgpClDev::requestImageCallbacks( void * pClientContext, ImageCallback callbackFunction )
{
	m_pCallbackClient		= pClientContext;
	m_CallbackClientFunc	= callbackFunction;
}
