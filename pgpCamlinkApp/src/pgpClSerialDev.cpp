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
#include <unistd.h>
#include <iostream>
#include <DmaDriver.h>
#include <AxiVersion.h>

#include "pgpClSerialDev.h"

using namespace	std;

int	DEBUG_PGPCL_SER	= 2;

///	Constructor
pgpClSerialDev::pgpClSerialDev(
	unsigned int				board,
	unsigned int				lane )
:	m_board(	board		),
	m_lane(		lane		),
	m_devName(				),
	m_devLock(				)
{
	const char		*	functionName	= "pgpClSerialDev::pgpClSerialDev";

	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s constructor: board %u lane %u\n", functionName, board, lane );

	// Create mutexes
    m_devLock	= epicsMutexMustCreate();

	/*
	 * Check arguments
	 */

	char	acDevName[60];
	sprintf( acDevName, "/dev/datadev_%u", board );
	m_devName = acDevName;
	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s constructor: devName %s\n", functionName, m_devName.c_str() );

#if 0
	uint8_t mask[DMA_MASK_SIZE];
	dmaInitMaskBytes(mask);
	for (unsigned lane=0; lane<4; lane++) {
		dmaAddMaskBytes((uint8_t*)mask, (lane<<8 | channel));
	}
#endif

}

void pgpClSerialDev::connect( )
{
	size_t		lane	= 0;
	uint32_t	dest	= 0;
	const char		*	functionName	= "pgpClSerialDev::connect";
	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s: board %u lane %u\n", functionName, m_board, m_lane );
	sleep(2);
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

	int fd = open(m_devName.c_str(), O_RDWR);
	if (fd < 0) {
		std::cout << "Error opening " << m_devName << std::endl;
	}
	else {
		AxiVersion vsn;
		if ( axiVersionGet(fd, &vsn) >= 0 )
		{
			printf("-- Core Axi Version --\n");
			printf("firmwareVersion : %x\n", vsn.firmwareVersion);
			printf("buildString     : %s\n", vsn.buildString); 
		}
		close( fd );
	}
}

void pgpClSerialDev::disconnect( )
{
	const char		*	functionName	= "pgpClSerialDev::disconnect";
	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s: board %u lane %u\n", functionName, m_board, m_lane );
}

/// virtual Destructor
pgpClSerialDev::~pgpClSerialDev()
{
}

int pgpClSerialDev::sendBytes( const unsigned char * buffer, size_t nBytes )
{
	const char		*	functionName	= "pgpClSerialDev::sendBytes";
	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s: board %u lane %u, sending %zu bytes\n", functionName, m_board, m_lane, nBytes );
	return clSerialTx[0]->sendBytes( buffer, nBytes );
}

int pgpClSerialDev::readBytes( unsigned char * buffer, double timeout, size_t nBytes )
{
	const char		*	functionName	= "pgpClSerialDev::readBytes";
	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s: board %u lane %u\n", functionName, m_board, m_lane );
	return clSerialRx[0]->readBytes( buffer, timeout, nBytes );
}
