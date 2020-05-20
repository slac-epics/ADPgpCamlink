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
//	pgpClDev.h
//
//	Header file for pgpClDev class.
//	It provides a device class to encapsulate
//	PglCl framegrabber based camlink cameras
//	via the SLAC Rogue API
//
#ifndef	pgpClDev_H
#define	pgpClDev_H

#include <string>
#include <string.h>
#include <epicsMutex.h>
#include <rogue/hardware/axi/AxiMemMap.h>
#include <rogue/hardware/axi/AxiStreamDma.h>

#define	N_AXI_LANES	4
#define	N_AXI_CHAN	4

///	pgpClDev class
class pgpClDev
{
public:		//	Public member functions

	///	Constructor
	pgpClDev(	unsigned int				board,
				unsigned int				channel	);

	/// Destructor
	virtual ~pgpClDev();

	void connect( )
	{
	}
	void disconnect( )
	{
	}

private:
	//	Private member variables
	unsigned int		m_board;
	unsigned int		m_lane;
	bool				m_fConnected;
	std::string			m_devName;
	epicsMutexId		m_DevLock;

	// TODO: We only use one of each of these.
	// lane is always 0 for first camera and 1 for 2nd.
	//ClSerialSlavePtr	clSerialRx[N_AXI_LANES];
	//ClSerialMasterPtr	clSerialTx[N_AXI_LANES];
	//rogue::hardware::axi::AxiMemMapPtr 			memMap[N_AXI_LANES];
	// For dataChan we only use dataChan[0][2]
	rogue::hardware::axi::AxiStreamDmaPtr		dataChan[N_AXI_LANES][N_AXI_CHAN];
};

#endif	//	pgpClDev_H
