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
//	pgpClSerialDev driver
//
//	device support using rogue PgpCamlink serial interface via CamLink
//

#include <stdio.h>
#include <iostream>
#include <DmaDriver.h>
#include <AxiVersion.h>

#include "pgpClSerialDev.h"

using namespace	std;

///	Constructor
pgpClSerialDev::pgpClSerialDev(
	int						board,
	int						channel )
:	m_fConnected(	0		),
	m_devName(				),
	m_DevLock(				)
{
//	const char		*	functionName	= "pgpClSerialDev::pgpClSerialDev";

	// Create mutexes
    m_DevLock	= epicsMutexMustCreate();

	/*
	 * Check arguments
	 */

	char	acDevName[60];
	sprintf( acDevName, "/dev/datadev_%u", board );
	m_devName = acDevName;

#if 1
	uint8_t mask[DMA_MASK_SIZE];
	dmaInitMaskBytes(mask);
	for (unsigned lane=0; lane<4; lane++) {
		dmaAddMaskBytes((uint8_t*)mask, (lane<<8 | channel));
	}
#endif

	if ( 1 )
	{
		size_t		lane	= 0;
		uint32_t	dest	= 0;
		for ( uint32_t	ch = 0; ch < N_AXI_CHAN;	ch++ ) {
			dest = (0x100 * lane) + ch;	// Derived from python code
			dataChan[lane][ch]	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);
		}

		// CHAN 2: Camera Serial Tx
		clSerialTx[lane] = ClSerialMaster::create();
		clSerialTx[lane]->addSlave( dataChan[lane][2] );

		// CHAN 3: Camera Serial Rx
		clSerialRx[lane] = ClSerialSlave::create();
		dataChan[lane][2]->addSlave( clSerialRx[lane] );
	}

	int fd = open(m_devName.c_str(), O_RDWR);
	if (fd < 0) {
		std::cout << "Error opening " << m_devName << std::endl;
	}
	else {
		AxiVersion vsn;
		if ( axiVersionGet(fd, &vsn) >= 0 )
		{
			printf("\n");
			printf("-- Core Axi Version --\n");
			printf("firmwareVersion : %x\n", vsn.firmwareVersion);
			printf("buildString     : %s\n", vsn.buildString); 
		}
	}
}

/// virtual Destructor
pgpClSerialDev::~pgpClSerialDev()
{
}

int pgpClSerialDev::sendBytes( const unsigned char * buffer, size_t nBytes )
{
	return clSerialTx[0]->sendBytes( buffer, nBytes );
}
