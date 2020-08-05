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
//	pgpRogueDev.h
//
//	Header file for pgpRogueDev class.
//	It provides a device class to encapsulate
//	PglCl framegrabber based camlink cameras
//	via the SLAC Rogue API
//
#ifndef	pgpRogueDev_H
#define	pgpRogueDev_H

#include <memory>
#include <string>
#include <string.h>
#include <epicsMutex.h>
#include <epicsTime.h>

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
//#include "ImageStream.h"
#include "FebMemoryMaster.h"

//#define	N_AXI_LANES	4
//#define	N_AXI_CHAN	4

#define PGPCL_DATACHAN_FEB_REG_ACCESS	0
#define PGPCL_DATACHAN_FEB_FRAME_ACCESS	1
class rogueAddrMap;
typedef std::shared_ptr<rogueAddrMap> rogueAddrMapPtr;


///	pgpRogueDev class
class pgpRogueDev :	public rogue::LibraryBase
{
public:		//	Public member functions
	// Create a static class creator to return our custom class wrapped with a shared pointer
	static std::shared_ptr<pgpRogueDev> create( unsigned int board, unsigned int lane ) {
		static std::shared_ptr<pgpRogueDev> ret = std::make_shared<pgpRogueDev>( board, lane );

		return(ret);
	}

	///	Constructor
	pgpRogueDev(	unsigned int				board,
					unsigned int				channel	);

	/// Destructor
	virtual ~pgpRogueDev();

	void connect( );
	void disconnect( );

	/// dumpVariables() allows dumping the value of rogue variables to a file
	void dumpVariables( const char * pszFilePath, bool fWriteOnly, bool fForceRead, bool verbose );

	// Functions to allow setting or showing the value of rogue variables
	void setVariable(  const char * pszVarPath, double value, bool verbose = false );
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

	/// Configure timing for LCLS-I
	void ConfigureLclsTimingV1();

	/// Load Config file
	void LoadConfigFile( const char * pszFilePath );

	void Feb0PllConfig();

	void ResetCounters();

	int		setTriggerEnable( unsigned int triggerNum, bool fEnable );
	bool	getTriggerEnable( unsigned int triggerNum );

	template<class R> int readVarPath(	const char * pVarPath, R & valueRet );
	template<class R> int writeVarPath(	const char * pVarPath, const R & value );
	template<class R> int writeVarPath( rogue::interfaces::memory::VariablePtr pVar, const R & value );

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

	///
	// Firmware Lane assignments:
	// Lane 0: First camera
	// Lane 1: 2nd camera,
	// Lane 2: 3rd camera
	// Lane 3: 4th camera
	//
	// PGP channel mapping
	// PGP[lane].VC[0] = SRPv3 (register access)
	// PGP[lane].VC[1] = Camera Image (streaming data)
	// PGP[lane].VC[2] = Camera UART (serial I/O)
	// PGP[lane].VC[3] = Unused
	//
	// DMA channel mapping
	// DMA[lane].DEST[0] = SRPv3
	// DMA[lane].DEST[1] = Event Builder Batcher (super-frame)
	// DMA[lane].DEST[1].DEST[0] = XPM Trigger Message (sub-frame)
	// DMA[lane].DEST[1].DEST[1] = XPM Transition Message (sub-frame)
	// DMA[lane].DEST[1].DEST[2] = Camera Image (sub-frame)
	// DMA[lane].DEST[2] = Camera UART
	// DMA[lane].DEST[255:3] = Unused
	///
	rogue::hardware::axi::AxiMemMapPtr 			m_pAxiMemMap;
	// For dataChan we only use dataChan[2]
//	rogue::hardware::axi::AxiStreamDmaPtr		m_pDataChan[N_AXI_CHAN];
	rogue::hardware::axi::AxiStreamDmaPtr		m_pFebRegChan;
//	rogue::hardware::axi::AxiStreamDmaPtr		m_pFebFrameChan;
	ClMemoryMasterPtr				 			m_pClMemMaster;	// not needed
	FebMemoryMasterPtr				 			m_pFebMemMaster;
	rogue::protocols::srp::SrpV3Ptr				m_pSrpFeb;
	//rogue::LibraryBasePtr						m_pRogueLib;
	rogueAddrMapPtr								m_pRogueLib;
};

// Shared pointer alias
typedef std::shared_ptr<pgpRogueDev> pgpRogueDevPtr;

//__inline__ unsigned dmaDest(unsigned lane, unsigned vc)
//{
//    return (lane<<8) | vc;
//}

#endif	//	pgpRogueDev_H
