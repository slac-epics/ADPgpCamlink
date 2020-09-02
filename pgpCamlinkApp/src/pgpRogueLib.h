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
//	pgpRogueLib.h
//
//	Header file for pgpRogueLib class.
//	It provides a templated interface to SLAC Generic PGP Hardware registers
//	via the Rogue LibraryBase C++ API
//
#ifndef	pgpRogueLib_H
#define	pgpRogueLib_H

#include <memory>
#include <string>
#include <string.h>

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
#include "FebMemoryMaster.h"

#define	N_AXI_LANES	4
#define	N_AXI_CHAN	4	// Needed?

#define PGPCL_DATACHAN_FEB_REG_ACCESS	0
#define PGPCL_DATACHAN_FEB_FRAME_ACCESS	1

class rogueAddrMap;
typedef std::shared_ptr<rogueAddrMap> rogueAddrMapPtr;


///	pgpRogueLib class
class pgpRogueLib :	public rogue::LibraryBase
{
public:		//	Public member functions
	// Create a static class creator to return our custom class wrapped with a shared pointer
	static std::shared_ptr<pgpRogueLib> create( unsigned int board ) {
		static std::shared_ptr<pgpRogueLib> ret = std::make_shared<pgpRogueLib>( board );

		return(ret);
	}

	///	Constructor
	pgpRogueLib(	unsigned int				board	);

	/// Destructor
	virtual ~pgpRogueLib();

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
	void LoadConfigFile( const char * pszFilePath, double stepDelay );

	void FebFpgaReload();

	void FebPllConfig();

	bool FebReady( size_t iFeb );

	void ResetCounters();

	void WaitForRxLinkUp( const char * pszDiagLabel );

	int		setTriggerEnable( unsigned int triggerNum, bool fEnable );
	bool	getTriggerEnable( unsigned int triggerNum );

	template<class R> int readVarPath(	const char * pVarPath, R & valueRet );
	template<class R> int writeVarPath(	const char * pVarPath, const R & value );
	template<class R> int writeVarPath( rogue::interfaces::memory::VariablePtr pVar, const R & value );

private:
	//	Private member variables
	int					m_fd;
	unsigned int		m_board;
	bool				m_fConnected;
	std::string			m_devName;
	std::string			m_DrvVersion;	// Driver Version
	std::string			m_LibVersion;	// Library Version

	//rogue::LibraryBasePtr				m_pRogueLib;
	rogueAddrMapPtr						m_pRogueLib;
	rogue::hardware::axi::AxiMemMapPtr 	m_pAxiMemMap;
	ClMemoryMasterPtr		 			m_pClMemMaster;	// not needed?
	//rim::MasterPtr		 			m_pAxiMemMaster;	// not needed?

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

	//TODO: Move these to new axiFebDataLane class
	rogue::hardware::axi::AxiStreamDmaPtr		m_pFebRegChan[N_AXI_LANES];
	FebMemoryMasterPtr				 			m_pFebMemMaster[N_AXI_LANES];
	rogue::protocols::srp::SrpV3Ptr				m_pSrpFeb[N_AXI_LANES];
};

// Shared pointer alias
typedef std::shared_ptr<pgpRogueLib> pgpRogueLibPtr;

#endif	//	pgpRogueLib_H
