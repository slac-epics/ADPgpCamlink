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
//	device support using rogue PgpCamlink serial interface via CamLink
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
namespace rim = rogue::interfaces::memory;

typedef	std::map< std::string, rim::VariablePtr >	mapVarPtr_t;

int		DEBUG_PGP_CAMLINK	= 2;
extern int	DEBUG_ROGUE_DEV;



int		pgpClDev::setTriggerEnable( unsigned int triggerNum, bool fEnable )
{
	int		status	= 0;
#if 0
	// TODO: Replace this code w/ invoking cannedSequences StartRun and StopRun seq PVs
	const char * varPathMasterEnable	= "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].MasterEnable";
	const char * varPathBlowoff			= "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.Blowoff";
	const char * varPathSoftRst			= "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.SoftRst";
	if ( fEnable )
	{
		setVariable( varPathBlowoff,		0, false );
		setVariable( varPathSoftRst,		1, false );
		setVariable( varPathSoftRst,		0, false );
		setVariable( varPathMasterEnable,	1, false );
	}
	else
	{
		setVariable( varPathMasterEnable,	0, false );
		setVariable( varPathBlowoff,		1, false );
	}
#endif
	return status;
}

bool	pgpClDev::getTriggerEnable( unsigned int triggerNum )
{
	return false;
}





///	Constructor
pgpClDev::pgpClDev(
	unsigned int				board,
	unsigned int				lane )
:	rogue::LibraryBase(),
	m_board(		board	),
	m_lane(			lane	),
	m_fConnected(	0		),
	m_devName(				),
	m_devLock(				),
//	m_pAxiMemMap(			),
//	m_pFebRegChan(			),
	m_pFebFrameChan(		),
//	m_pClMemMaster(			),	// Not needed
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
	// Connect Rogue Library
	//
	//m_pRogueLib = rogue::LibraryBase::create();
	//m_pRogueLib = rogueAddrMap::create();

	//
	// Create FEB Data Channels
	// TODO: Make a function than encapsulates this
	uint32_t	dest; dest = (0x100 * m_lane) + PGPCL_DATACHAN_FEB_REG_ACCESS;
//	m_pFebRegChan	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);
	dest = (0x100 * m_lane) + PGPCL_DATACHAN_FEB_FRAME_ACCESS;
	m_pFebFrameChan	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);

	//
	// Connect DATACHAN 0 ClinkDev KCU1500 Register Access
	//
//	m_pAxiMemMap		= rogue::hardware::axi::AxiMemMap::create( m_devName );
//	m_pClMemMaster		= ClMemoryMaster::create( );
//	m_pClMemMaster->setSlave( m_pAxiMemMap );
//	const char	*	szMemName = "Unnamed_3";
//	addMemory( szMemName, m_pAxiMemMap );
//	m_pRogueLib->addMemory( szMemName, m_pAxiMemMap );
//	printf("pgpClDev: addMemory AxiMemMap interface %s\n", szMemName );

#if 0
	//
	// Connect DATACHAN 0 FEB Register Access
	//
	m_pSrpFeb = rogue::protocols::srp::SrpV3::create();	// Serial Rouge Protocol handler
	// Create bidirectional links between SRP and FebRegChan 
	m_pFebRegChan->addSlave( m_pSrpFeb );
	m_pSrpFeb->addSlave( m_pFebRegChan );
	switch ( m_lane )
	{
		default:
		case 0:	szMemName = "Unnamed_186";	break;
		case 1:	szMemName = "Unnamed_215";	break;
		case 2:	szMemName = "Unnamed_244";	break;
		case 3:	szMemName = "Unnamed_273";	break;
	}
	addMemory( szMemName, m_pSrpFeb );
	m_pRogueLib->addMemory( szMemName, m_pSrpFeb );
	printf("pgpClDev: addMemory srpFeb interface %s\n", szMemName );
	// Create FebMemMaster and link it to SRP
	m_pFebMemMaster = FebMemoryMaster::create( );
	m_pFebMemMaster->setSlave( m_pSrpFeb );
#endif


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
