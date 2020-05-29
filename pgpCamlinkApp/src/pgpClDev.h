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

#include <memory>
#include <string>
#include <string.h>
#include <epicsMutex.h>

// rogue headers 
#include <rogue/Helpers.h>
#include <rogue/LibraryBase.h>
#include <rogue/hardware/axi/AxiMemMap.h>
#include <rogue/hardware/axi/AxiStreamDma.h>
#include <rogue/interfaces/memory/Constants.h>
#include <rogue/interfaces/stream/Slave.h>
#include <rogue/interfaces/stream/Master.h>
#include <rogue/protocols/srp/SrpV3.h>

// ADPgpCamlink headers
#include "ClMemoryMaster.h"
#include "ClStreamSlave.h"
#include "FebMemoryMaster.h"

#define	N_AXI_LANES	4
#define	N_AXI_CHAN	4

#define PGPCL_DATACHAN_FEB_REG_ACCESS	0
#define PGPCL_DATACHAN_FEB_FRAME_ACCESS	1
class pgpClAddrMap;
typedef std::shared_ptr<pgpClAddrMap> pgpClAddrMapPtr;

///	pgpClDev class
class pgpClDev
{
public:		//	Public member functions
	// Create a static class creator to return our custom class wrapped with a shared pointer
	static std::shared_ptr<pgpClDev> create( unsigned int board, unsigned int lane ) {
		static std::shared_ptr<pgpClDev> ret = std::make_shared<pgpClDev>( board, lane );

		return(ret);
	}

	///	Constructor
	pgpClDev(	unsigned int				board,
				unsigned int				channel	);

	/// Destructor
	virtual ~pgpClDev();

	void connect( );
	void disconnect( );

	void showVariable( const char * pszVarPath, bool verbose );
	void showVariableList( bool verbose );

	///	Get Driver Version
	const std::string	&	GetDrvVersion( ) const
	{
		return m_DrvVersion;
	}

	///	Get Library Version
	const std::string	&	GetLibVersion( ) const
	{
		return m_LibVersion;
	}

private:
	//	Private member variables
	unsigned int		m_fd;
	unsigned int		m_board;
	unsigned int		m_lane;
	bool				m_fConnected;
	std::string			m_devName;
	std::string			m_DrvVersion;	// Driver Version
	std::string			m_LibVersion;	// Library Version
	epicsMutexId		m_devLock;

	// TODO: We only use one of each of these.
	// lane is always 0 for first camera and 1 for 2nd.
	//ClSerialSlavePtr	clSerialRx[N_AXI_LANES];
	//ClSerialMasterPtr	clSerialTx[N_AXI_LANES];
	//rogue::hardware::axi::AxiMemMapPtr 			memMap[N_AXI_LANES];
	// For dataChan we only use dataChan[0][2]
	//rogue::hardware::axi::AxiStreamDmaPtr		dataChan[N_AXI_LANES][N_AXI_CHAN];
	rogue::hardware::axi::AxiMemMapPtr 			m_pAxiMemMap;
	rogue::hardware::axi::AxiStreamDmaPtr		m_pDataChan[N_AXI_CHAN];
	rogue::hardware::axi::AxiStreamDmaPtr		m_pFebRegChan;
	rogue::hardware::axi::AxiStreamDmaPtr		m_pFebFrameChan;
	ClMemoryMasterPtr				 			m_pClMemMaster;
	ClStreamSlavePtr							m_pClStreamSlave;
	FebMemoryMasterPtr				 			m_pFebMemMaster;
	rogue::protocols::srp::SrpV3Ptr				m_pSrpFeb;
	//rogue::LibraryBasePtr						m_pRogueLib;
	pgpClAddrMapPtr								m_pRogueLib;
};

// Shared pointer alias
typedef std::shared_ptr<pgpClDev> pgpClDevPtr;

__inline__ unsigned dmaDest(unsigned lane, unsigned vc)
{
    return (lane<<8) | vc;
}

#endif	//	pgpClDev_H