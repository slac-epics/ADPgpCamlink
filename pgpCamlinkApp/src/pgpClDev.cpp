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

#include <stdio.h>
#include <iostream>

// aes-stream-drivers headers 
#include <AxisDriver.h>
#include <AxiVersion.h>
#include <DmaDriver.h>

// ADPgpCamlink headers
#include "pgpClDev.h"

using namespace	std;

///	Constructor
pgpClDev::pgpClDev(
	unsigned int				board,
	unsigned int				lane )
:	m_board(		board	),
	m_lane(			lane	),
	m_fConnected(	0		),
	m_devName(				),
	m_devLock(				),
	m_pAxiMemMap(			),
	m_pDataChan(			),
	m_pClMemMaster(			),
	m_pClStreamSlave(		),
	m_pFebMemMaster(		),
	m_pSrpFeb(				)
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

}

void pgpClDev::connect( )
{
	size_t		lane	= 0;
	uint32_t	dest	= 0;
	for ( uint32_t	ch = 0; ch < N_AXI_CHAN;	ch++ ) {
		dest = (0x100 * lane) + ch;	// Derived from python code
		m_pDataChan[ch]	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);
	}

	int fd = open(m_devName.c_str(), O_RDWR);
	if (fd < 0) {
		std::cout << "Error opening " << m_devName << std::endl;
	}
	else {
		AxiVersion vsn;
		if ( axiVersionGet(fd, &vsn) >= 0 )
		{
			printf("pgpClDev: -- Core Axi Version --\n");
			printf("firmwareVersion : %x\n", vsn.firmwareVersion);
			printf("buildString     : %s\n", vsn.buildString); 
		}
		close( fd );
	}
}

void pgpClDev::disconnect( )
{
}

/// virtual Destructor
pgpClDev::~pgpClDev()
{
}

