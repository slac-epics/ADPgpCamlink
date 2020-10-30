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
//	pgpRogueLib driver
//
//	Header file for pgpRogueLib class.
//	It provides a templated interface to SLAC Generic PGP Hardware registers
//	via the Rogue LibraryBase C++ API
//

#include <stdio.h>
#include <exception>
#include <fstream>
#include <iostream>
#include <typeinfo>
#include <sys/stat.h>
#include <fcntl.h>
#include <math.h>


// rogue headers
#include "rogue/GeneralError.h"
#include "rogue/Logging.h"
#include "rogue/Version.h"

// aes-stream-drivers headers 
#include <AxisDriver.h>
#include <AxiVersion.h>
#include <DmaDriver.h>

// ADPgpCamlink headers
#include "pgpRogueLib.h"

using namespace	std;
namespace rim = rogue::interfaces::memory;

typedef	std::map< std::string, rim::VariablePtr >	mapVarPtr_t;

extern	int		DEBUG_PGP_ROGUE;
int		doFebFpgaReload	= 1;
int		doFebConfig		= 0;
bool	bUseMiniTpg		= 0;

// TODO Move to new file: src/rogue/memory/interfaces/memory/Constants.cpp
// TODO Rename BlockProcessingType2String()?
// TODO Rename rim::Variable::getTypeName()?
// TODO Create new set of rim::Variable types: UInt8, UInt16, UInt32, ..., Int8, ..., Float32, Float64, ...
// TODO Create uint32_t rim::Variable::getType()?
const char * modelId2String( uint32_t modelId )
{
	const char	*	pTypeName;
	switch ( modelId )
	{
	default:			pTypeName	= "Invalid";	break;
	case rim::PyFunc:	pTypeName	= "PyFunc";		break;
	case rim::Bytes:	pTypeName	= "Bytes";		break;
	case rim::UInt:		pTypeName	= "UInt";		break;
	case rim::Int:		pTypeName	= "Int";		break;
	case rim::Bool:		pTypeName	= "Bool";		break;
	case rim::String:	pTypeName	= "String";		break;
	case rim::Float:	pTypeName	= "Float";		break;
	case rim::Double:	pTypeName	= "Double";		break;
	case rim::Fixed:	pTypeName	= "Fixed";		break;
	case rim::Custom:	pTypeName	= "Custom";		break;
	}
	return pTypeName;
}

void pgpRogueLib::ResetCounters( )
{
	// TODO: Add toggle option to setVariable
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].CountReset", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].CountReset", 0 );

	if ( FebReady(0) )
	{
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.CntRst", 1 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.CntRst", 0 );

		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].CntRst", 1 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].CntRst", 0 );

		setVariable( "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].CntRst", 1 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].CntRst", 0 );

		setVariable( "ClinkDevRoot.ClinkFeb[0].PgpMon[0].CountReset", 1 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].PgpMon[0].CountReset", 0 );
	}

	// This resets   ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[0]
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst", 0 );

	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters", 0 );
}

int		pgpRogueLib::setTriggerEnable( unsigned int triggerNum, bool fEnable )
{
	int			status	= 0;
	char		varPath[256];
	const char * pszFifoReset	 = "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[%u].FifoReset";
	const char * pszMasterEnable = "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[%u].MasterEnable";
	const char * pszBlowoff		 = "ClinkDevRoot.ClinkPcie.Application.AppLane[%u].EventBuilder.Blowoff";
	const char * pszSoftRst		 = "ClinkDevRoot.ClinkPcie.Application.AppLane[%u].EventBuilder.SoftRst";
	if ( fEnable )
	{
		// Clear Blowoff
		snprintf( varPath, 256, pszBlowoff, triggerNum );
		setVariable( varPath,	0 );

		// Toggle FifoReset
		snprintf( varPath, 256, pszFifoReset, triggerNum );
		setVariable( varPath,	1 );
		setVariable( varPath,	0 );

		// Toggle SoftRst
		snprintf( varPath, 256, pszSoftRst, triggerNum );
		setVariable( varPath,	1 );
		setVariable( varPath,	0 );

		// Set Trigger MasterEnable
		snprintf( varPath, 256, pszMasterEnable, triggerNum );
		setVariable( varPath,	1 );
	}
	else
	{
		// Clear Trigger MasterEnable
		snprintf( varPath, 256, pszMasterEnable, triggerNum );
		setVariable( varPath,	0 );

		// Set Blowoff
		snprintf( varPath, 256, pszBlowoff, triggerNum );
		setVariable( varPath,	1 );
	}
	return status;
}

bool	pgpRogueLib::getTriggerEnable( unsigned int triggerNum )
{
	return false;
}


#include "rogueAddrMap.h" 
class rogueAddrMap : public rogue::LibraryBase
{
public:
	// static class creator
	static std::shared_ptr<rogueAddrMap> create()
	{
		static std::shared_ptr<rogueAddrMap> ret = std::make_shared<rogueAddrMap>();
		return(ret);
	}

	rogueAddrMap();
};
typedef std::shared_ptr<rogueAddrMap> rogueAddrMapPtr;

rogueAddrMap::rogueAddrMap()
	:	rogue::LibraryBase()
{
#if 1
	//printf( "NOT Parsing ROGUE_ADDR_MAP!\n" );
#else
	printf( "rogueAddrMap: Parsing ROGUE_ADDR_MAP\n" );
	parseMemMap( ROGUE_ADDR_MAP ); // From generated rogueAddrMap.h
	printf( "rogueAddrMap: ROGUE_ADDR_MAP parsed successfully\n" );
#endif
}


///	Constructor
pgpRogueLib::pgpRogueLib(
	unsigned int				board	)
:	rogue::LibraryBase(),
	m_board(		board	),
	m_fConnected(	0		),
	m_devName(				),
	m_pAxiMemMap(			),
	m_pSrpFeb(				)
{
	const char		*	functionName	= "pgpRogueLib::pgpRogueLib";

	/*
	 * Check arguments
	 */

	char	acDevName[60];
	sprintf( acDevName, "/dev/datadev_%u", board );
	m_devName = acDevName;

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
			printf("pgpRogueLib: -- Core Axi Version --\n");
			printf("firmwareVersion : %x\n", vsn.firmwareVersion);
			printf("buildString     : %s\n", vsn.buildString); 
			//printf("upTimeCount     : %u\n", vsn.upTimeCount);
			//printf("deviceId        : %x\n", vsn.deviceId);
			//printf("buildString     : %s\n", vsn.buildString);

			// TODO: Need a better mapping of these version strings to PVs
			m_DrvVersion = vsn.firmwareVersion;
			//m_LibVersion = vsn.buildString;
		}
	}

	//
	// Connect Rogue Library
	//
	//m_pRogueLib = rogue::LibraryBase::create();
	m_pRogueLib = rogueAddrMap::create();

	//
	// Connect DATACHAN 0 ClinkDev KCU1500 Register Access
	//
	m_pAxiMemMap		= rogue::hardware::axi::AxiMemMap::create( m_devName );
	m_pClMemMaster		= ClMemoryMaster::create( );
	m_pClMemMaster->setSlave( m_pAxiMemMap );
	const char	*	szMemName = "PCIe_Bar0";
	addMemory( szMemName, m_pAxiMemMap );
	m_pRogueLib->addMemory( szMemName, m_pAxiMemMap );
	printf("pgpRogueLib: addMemory AxiMemMap interface %s\n", szMemName );

	//
	// Create FEB Data Channel for each lane
	// TODO: Make a function than encapsulates this
	uint32_t	dest;
	for ( size_t	lane = 0; lane < N_AXI_LANES; lane++ )
	{
		dest = (0x100 * lane) + PGPCL_DATACHAN_FEB_REG_ACCESS;
		m_pFebRegChan[lane]	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);

		//
		// Connect DATACHAN 0 FEB Register Access
		//
		m_pSrpFeb[lane] = rogue::protocols::srp::SrpV3::create();	// Serial Rouge Protocol handler
		// Create bidirectional links between SRP and FebRegChan 
		m_pFebRegChan[lane]->addSlave( m_pSrpFeb[lane] );
		m_pSrpFeb[lane]->addSlave( m_pFebRegChan[lane] );
		switch ( lane )
		{
			default:
			case 0:	szMemName = "SRPv3[0]";	break;
			case 1:	szMemName = "SRPv3[1]";	break;
			case 2:	szMemName = "SRPv3[2]";	break;
			case 3:	szMemName = "SRPv3[3]";	break;
		}
		addMemory( szMemName, m_pSrpFeb[lane] );
		m_pRogueLib->addMemory( szMemName, m_pSrpFeb[lane] );
		printf("pgpRogueLib: addMemory srpFeb interface %s\n", szMemName );
		// Create FebMemMaster and link it to SRP
		m_pFebMemMaster[lane] = FebMemoryMaster::create( );
		m_pFebMemMaster[lane]->setSlave( m_pSrpFeb[lane] );
	}

	printf( "Parsing ROGUE_ADDR_MAP\n" );
	parseMemMap( ROGUE_ADDR_MAP ); // From generated rogueAddrMap.h
	printf( "ROGUE_ADDR_MAP parsed successfully\n" );
	m_pRogueLib->parseMemMap( ROGUE_ADDR_MAP );
	printf( "m_pRogueLib: ROGUE_ADDR_MAP parsed successfully\n" );

	if ( doFebFpgaReload )
		FebFpgaReload();

	//const mapVarPtr_t &	mapVars		= getVariableList();
	//printf( "%s: %zu variables\n", functionName, mapVars.size() );
	//printf( "m_pRogueLib: %zu variables\n", (m_pRogueLib->getVariableList()).size() );

	// Force an initial read of all variables
	printf( "%s: Reading %zu variables\n", functionName, (m_pRogueLib->getVariableList()).size() );
	try
	{
		m_pRogueLib->readAll();
	}
	catch ( rogue::GeneralError & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	catch ( std::exception & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	catch ( ... )
	{
		printf( "%s unknown error!\n", functionName );
	}
	printf( "%s: Read %zu variables\n", functionName, (m_pRogueLib->getVariableList()).size() );

	if ( doFebConfig or true )
	{
		if ( FebReady(0) )
		{
			printf( "%s: Set FEB 0 BaudRate and Pll POWER\n", functionName );
			// Set FEB BaudRate
			setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].BaudRate", 57600 );
			setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[1].BaudRate", 9600 );

			// Power up FEB Pll's
			setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].POWER", 65535 );
			setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].POWER", 65535 );
			setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].POWER", 65535 );
		}

		if ( FebReady(1) )
		{
			setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].BaudRate", 57600 );
			setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[1].BaudRate", 9600 );
			setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].POWER", 65535 );
			setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].POWER", 65535 );
			setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].POWER", 65535 );
		}

		if ( FebReady(2) )
		{
			setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].BaudRate", 57600 );
			setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[1].BaudRate", 9600 );
			setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].POWER", 65535 );
			setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].POWER", 65535 );
			setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].POWER", 65535 );
		}

		if ( FebReady(3) )
		{
			setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].BaudRate", 57600 );
			setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[1].BaudRate", 9600 );
			setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].POWER", 65535 );
			setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].POWER", 65535 );
			setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].POWER", 65535 );
		}
	}

	// Hack: Configure for LCLS-I timing
	ConfigureLclsTimingV1();

	LoadConfigFile( "db/defaults_LCLS-I.txt", 0.003 );
	if ( FebReady(0) )
		LoadConfigFile( "db/cfgFeb0Opal1000.txt", 0.002 );
	if ( FebReady(1) )
		LoadConfigFile( "db/cfgFeb1Opal1000.txt", 0.002 );
	if ( FebReady(2) )
		LoadConfigFile( "db/cfgFeb2Opal1000.txt", 0.002 );
	if ( FebReady(3) )
		LoadConfigFile( "db/cfgFeb3Opal1000.txt", 0.002 );

	// Misc python resets, etc
#if 1
	setVariable( "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.SoftRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.SoftRst", 0 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.SoftRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.SoftRst", 0 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.SoftRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.SoftRst", 0 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.SoftRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.SoftRst", 0 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Flush", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Flush", 0 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpTxAxisMon[0].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Flush", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Flush", 0 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpTxAxisMon[1].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Flush", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Flush", 0 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpTxAxisMon[2].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Flush", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Flush", 0 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpTxAxisMon[3].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.CntRst", 1 );
#endif
	if ( doFebConfig )
		FebPllConfig();

	setTriggerEnable( 0, false );
	setTriggerEnable( 1, false );
	setTriggerEnable( 2, false );
	setTriggerEnable( 3, false );

	//showVariableList( true );

	std::string sFpgaVersionPath( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BuildStamp" );
	showVariable( sFpgaVersionPath.c_str(), true );

	std::string sDataCnt( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[0]" );
	showVariable( sDataCnt.c_str(), true );
	showVariable( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaVersion", true );
	showVariable( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.UpTimeCnt", true );
	if ( FebReady(0) )
	{
		showVariable( "ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaVersion", true );
		showVariable( "ClinkDevRoot.ClinkFeb[0].AxiVersion.UpTimeCnt", true );
	}
	if ( FebReady(1) )
		showVariable( "ClinkDevRoot.ClinkFeb[1].AxiVersion.UpTimeCnt", true );
	if ( FebReady(2) )
		showVariable( "ClinkDevRoot.ClinkFeb[2].AxiVersion.UpTimeCnt", true );
	if ( FebReady(3) )
		showVariable( "ClinkDevRoot.ClinkFeb[3].AxiVersion.UpTimeCnt", true );

	m_fConnected = 1;	// Do we need this?
}

/// virtual Destructor
pgpRogueLib::~pgpRogueLib()
{
	close( m_fd );
}


/// Configure timing for LCLS-I
void pgpRogueLib::ConfigureLclsTimingV1()
{
//	const char * functionName = "ConfigureLclsTimingV1";
//	const bool		bOne	= 1;
	const bool		bZero	= 0;
	const uint64_t	lOne	= 1L;
	const uint64_t	lZero	= 0L;
	const struct timespec oneSec	= { 1, 0L };
	const struct timespec twoMs		= { 0, 2000000L };

	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.UseMiniTpg",	bZero );
	printf( "Configuring for LCLS-I timing ...\n" );
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ModeSelEn",		lZero	);
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxPllReset",		lOne	);
	nanosleep( &oneSec, NULL );

	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxPllReset",		lZero	);
	nanosleep( &twoMs, NULL );
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClkSel",			lZero	);
	nanosleep( &twoMs, NULL );
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.C_RxReset",		lOne	);
	nanosleep( &twoMs, NULL );
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.C_RxReset",		lZero	);
	nanosleep( &oneSec, NULL );

	WaitForRxLinkUp( "ConfigureLclsTimingV1: Wait 1" );

	// Reset latching RxDown flag
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxDown",		lZero	);

	if ( bUseMiniTpg )
	{
		// TODO: Export bUseMiniTpg as iocsh variable
		writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.UseMiniTpg",	bUseMiniTpg );
	}

	WaitForRxLinkUp( "ConfigureLclsTimingV1: Wait 2" );
	//ResetCounters();
	printf( "Configured for LCLS-I timing\n" );
}

bool pgpRogueLib::FebReady( size_t iFeb )
{
	const char	*	pszVarPathRxRemLinkReady	= "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[%1u].RxRemLinkReady";
	char			febVarPath[256];
	bool			febReady	= false;
	snprintf( febVarPath, 256, pszVarPathRxRemLinkReady, iFeb );
	readVarPath( febVarPath, febReady );
	return febReady;
}

void pgpRogueLib::FebFpgaReload()
{
	const uint64_t	lOne	= 1L;
	const char * pszVarPathFpgaReload		= "ClinkDevRoot.ClinkFeb[%1u].AxiVersion.FpgaReload";

	bool	febFound[N_AXI_LANES] = { false, false, false, false };
	for ( size_t lane = 0; lane < N_AXI_LANES; lane++ )
	{
		char		febVarPath[256];
		if ( FebReady(lane) )
		{
			febFound[lane] = true;
			printf( "Initiating Feb[%zu] FpgaReload\n", lane );
			snprintf( febVarPath, 256, pszVarPathFpgaReload, lane );
			writeVarPath( febVarPath, lOne );
		}
	}

	bool	febReady[N_AXI_LANES] = { false, false, false, false };
	for ( size_t i = 0; i < 5; i++ )
	{
		sleep(1);
		for ( size_t lane = 0; lane < N_AXI_LANES; lane++ )
		{
			bool		febWasReady = febReady[lane];
			febReady[lane] = FebReady(lane);
			if ( !febFound[lane] )
			{
				febReady[lane] = true;	// Not really, but FEB not found so don't care
				continue;
			}
			if ( ! febWasReady )
			{
				if ( febReady[lane] )
					printf( "Feb[%zu] Ready.\n", lane );
				else
					printf( "Feb[%zu] not ready.\n", lane );
			}
		}
		if ( febReady[0] && febReady[1] && febReady[2] && febReady[3] )
			break;
	}
	for ( size_t lane = 0; lane < N_AXI_LANES; lane++ )
	{
		if ( febFound[lane] && !febReady[lane] )
			printf( "Timeout waiting for Feb[%zu]!\n", lane );
	}
	sleep(5);
}

void pgpRogueLib::FebPllConfig()
{
#if 0
	{	TODO: Need to provide C++ equivalent to select Pll rate for each camera type
		# PllConfig is internal python variable
		# TODO: Will need to select clock via st.cmd or Opal config file
		if (self.PllConfig[i].get() == '85MHz'):
			self.Pll[i].Config85MHz()            # Check for 80 MHz configuration
		if (self.PllConfig[i].get() == '80MHz'):
			# Same config as 85 MHz
			self.Pll[i].Config85MHz()            # Check for 25 MHz configuration
		if (self.PllConfig[i].get() == '25MHz'):
			self.Pll[i].Config25MHz()        # Release the reset after configuration
	}
#endif
	if ( FebReady(0) )
	{
		printf( "Configuring Feb[0] Pll...\n" );
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].CntRst",	1 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].CntRst",	0 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[1].CntRst",	1 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[1].CntRst",	0 );
		// Hold Pll in reset
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.RstPll",		1 );

		sleep(1);
		LoadConfigFile( "db/cfgFeb0Pll85MHz.txt", 0.0025 );
		sleep(1);

		// Enable Pll
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.RstPll",		0 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.CntRst",		1 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.CntRst",		0 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].CntRst",		1 );
		setVariable( "ClinkDevRoot.ClinkFeb[0].TrigCtrl[1].CntRst",		1 );
	}

	if ( FebReady(1) )
	{
		// Feb1 Pll Config:
		printf( "Configuring Feb[1] Pll...\n" );
		setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].CntRst",	1 );
		setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].CntRst",	0 );
		setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[1].CntRst",	1 );
		setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[1].CntRst",	0 );
		setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.RstPll",		1 );
		sleep(1);
		LoadConfigFile( "db/cfgFeb1Pll85MHz.txt", 0.0025 );
		sleep(1);
		setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.RstPll",		0 );
		setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.CntRst",		1 );
		setVariable( "ClinkDevRoot.ClinkFeb[1].ClinkTop.CntRst",		0 );
		setVariable( "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].CntRst",		1 );
		setVariable( "ClinkDevRoot.ClinkFeb[1].TrigCtrl[1].CntRst",		1 );
	}

	if ( FebReady(2) )
	{
		// Feb2 Pll Config:
		printf( "Configuring Feb[2] Pll...\n" );
		setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].CntRst",	1 );
		setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].CntRst",	0 );
		setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[1].CntRst",	1 );
		setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[1].CntRst",	0 );
		setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.RstPll",		1 );
		sleep(1);
		LoadConfigFile( "db/cfgFeb2Pll85MHz.txt", 0.0025 );
		sleep(1);
		setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.RstPll",		0 );
		setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.CntRst",		1 );
		setVariable( "ClinkDevRoot.ClinkFeb[2].ClinkTop.CntRst",		0 );
		setVariable( "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].CntRst",		1 );
		setVariable( "ClinkDevRoot.ClinkFeb[2].TrigCtrl[1].CntRst",		1 );
	}

	if ( FebReady(3) )
	{
		// Feb3 Pll Config:
		printf( "Configuring Feb[3] Pll...\n" );
		setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].CntRst",	1 );
		setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].CntRst",	0 );
		setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[1].CntRst",	1 );
		setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[1].CntRst",	0 );
		setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.RstPll",		1 );
		sleep(1);
		LoadConfigFile( "db/cfgFeb3Pll85MHz.txt", 0.0025 );
		sleep(1);
		setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.RstPll",		0 );
		setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.CntRst",		1 );
		setVariable( "ClinkDevRoot.ClinkFeb[3].ClinkTop.CntRst",		0 );
		setVariable( "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].CntRst",		1 );
		setVariable( "ClinkDevRoot.ClinkFeb[3].TrigCtrl[1].CntRst",		1 );
	}
}


/// Wait for RxLinkUp
void pgpRogueLib::WaitForRxLinkUp( const char * pszDiagLabel )
{
	const struct timespec tenMs	= { 0, 10000000L };
	uint64_t	rxLinkUp	= 0;
	size_t		nTries		= 0;
	while ( rxLinkUp == 0 )
	{
		readVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxLinkUp", rxLinkUp );
		if ( rxLinkUp )
			break;
		if ( nTries > 200 )
		{
			printf( "%s: Timeout waiting for RxLinkUp\n", pszDiagLabel );
			break;
		}
		nTries++;
		nanosleep( &tenMs, NULL );
	}
}

/// Load Config file
void pgpRogueLib::LoadConfigFile( const char * pszFilePath, double stepDelay )
{
	const char	*	functionName	= "pgpRogueLib::LoadConfigFile";
	FILE		*	cfgFile			= fopen( pszFilePath, "r" );
	struct timespec delay	= { (long int) floor(stepDelay), (long int) ((stepDelay - floor(stepDelay)) * 1e9) };
	if ( cfgFile == NULL )
	{
		fprintf( stderr, "LoadConfigFile error: Unable to open %s\n", pszFilePath );
		return;
	}
	printf( "%s: Reading values from %s w/ %.4f sec delay/value ...\n", functionName, pszFilePath, stepDelay );

	unsigned int	nValues	= 0;
	try
	{
		int			nScan	= 0;
		double		dValue;
		int64_t		lValue;
		char		varPath[256];

		while( 1 )
		{
			strcpy( varPath, "unParsed" );
			nScan = fscanf( cfgFile, "%s = %lf", varPath, &dValue );
			if ( nScan == EOF )
				break;
			if( nScan != 2 )
			{
				nScan = fscanf( cfgFile, "%s = %ld", varPath, &lValue );
				if( nScan == 2 )
					dValue = static_cast<double>(lValue);
			}
			if( nScan != 2 )
			{
				nScan = fscanf( cfgFile, "%s = 0x%lx", varPath, &lValue );
				if( nScan == 2 )
					dValue = static_cast<double>(lValue);
			}
			if( nScan == 2 )
			{
				setVariable( varPath, dValue, false );
				nanosleep( &delay, NULL );
				nValues++;
			}
			else
			{
				printf( "%s: Error parsing %s\n", functionName, pszFilePath );
			}
		}
	}
	catch ( rogue::GeneralError & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	catch ( std::exception & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}

	fclose( cfgFile );
	printf( "%s: Read %u values from %s\n", functionName, nValues, pszFilePath );
}

template<class R> int pgpRogueLib::readVarPath( const char * pszVarPath, R & valueRet )
{
	const char *	functionName = "pgpRogueLib::readVarPath";
	int				status	= -1;
	std::string		varPath( pszVarPath );
	rogue::interfaces::memory::VariablePtr	pVar;
	//pVar = m_pRogueLib->getVariable( varPath );
	pVar = getVariable( varPath );
	if ( !pVar )
	{
		printf( "%s error: %s not found!\n", functionName, varPath.c_str() );
		return -1;
	}

	try
	{
		pVar->getValue( valueRet );
		status = 0;
	}
	catch ( rogue::GeneralError & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	catch ( std::exception & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	//pVar->setLogLevel( rogue::Logging::Warning );

	if ( DEBUG_PGP_ROGUE >= 6 )
	{
		std::cout	<< functionName	<< ": " << varPath
					<< ", typeid = "	<< typeid(R).name()
					<< ", modelId = "	<< modelId2String(pVar->modelId()) << pVar->bitTotal()
					<< ", valueRet = "	<< valueRet << std::endl;
	}
	return status;
}

template int pgpRogueLib::readVarPath( const char * pszVarPath, bool		& valueRet );
template int pgpRogueLib::readVarPath( const char * pszVarPath, double		& valueRet );
template int pgpRogueLib::readVarPath( const char * pszVarPath, int64_t	& valueRet );
template int pgpRogueLib::readVarPath( const char * pszVarPath, uint64_t	& valueRet );
template int pgpRogueLib::readVarPath( const char * pszVarPath, std::string & valueRet );

template<class R> int pgpRogueLib::writeVarPath( rim::VariablePtr pVar, const R & value )
{
	const char *	functionName = "pgpRogueLib::writeVarPath";
	int				status	= -1;
	if ( !pVar )
	{
		printf( "%s error: Invalid VariablePtr!\n", functionName );
		return -1;
	}

	if ( DEBUG_PGP_ROGUE >= 6 )
	{
		//if ( pVar->modelId() == rim::Bool )
		//	pVar->setLogLevel( rogue::Logging::Debug );
		if ( typeid(value) == typeid(uint64_t) )
			std::cout << functionName << ": " << pVar->path() << " is uint64_t" << std::endl;
		std::cout	<< functionName	<< ": " << pVar->path()
					<< ", typeid = "	<< typeid(R).name()
					<< ", modelId = "	<< modelId2String(pVar->modelId()) << pVar->bitTotal()
					<< ", value = "	<< value << std::endl;
		printf( "%s type is %s, nBits %u, byteSize %u!\n",
				pVar->path().c_str(),
				modelId2String( pVar->modelId() ), pVar->bitTotal(),
				pVar->byteSize() );
	}

	try
	{
		pVar->setValue( value );
		status = 0;
		if ( pVar->mode() != std::string("WO") )
		{
			R	valueRet;
			pVar->getValue( valueRet );
			if ( DEBUG_PGP_ROGUE >= 3 || value != valueRet )
			{
				std::cout	<< functionName	<< ": " << pVar->path()
							<< ", setValue="	<< value;
				if ( value != valueRet )
				{
					std::cout	<< ", Error getValue="	<< valueRet << std::endl;
					status	= -2;
				}
				else
					std::cout	<< ", getValue="	<< valueRet << std::endl;
			}
		}
	}
	catch ( rogue::GeneralError & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	catch ( std::exception & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	if ( pVar->modelId() == rim::Bool )
		pVar->setLogLevel( rogue::Logging::Info );

	return status;
}

template<class R> int pgpRogueLib::writeVarPath( const char * pszVarPath, const R & value )
{
	const char *	functionName = "pgpRogueLib::writeVarPath";
	std::string		varPath( pszVarPath );
	rogue::interfaces::memory::VariablePtr	pVar;
	//pVar = m_pRogueLib->getVariable( varPath );
	pVar = getVariable( varPath );
	if ( !pVar )
	{
		printf( "%s error: %s not found!\n", functionName, varPath.c_str() );
		return -1;
	}
	return writeVarPath( pVar, value );
}

template int pgpRogueLib::writeVarPath( const char * pszVarPath, const bool		& value );
template int pgpRogueLib::writeVarPath( const char * pszVarPath, const double		& value );
template int pgpRogueLib::writeVarPath( const char * pszVarPath, const int64_t		& value );
template int pgpRogueLib::writeVarPath( const char * pszVarPath, const uint64_t	& value );

template int pgpRogueLib::writeVarPath( rim::VariablePtr pVar, const bool		& value );
template int pgpRogueLib::writeVarPath( rim::VariablePtr pVar, const double	& value );
template int pgpRogueLib::writeVarPath( rim::VariablePtr pVar, const int64_t	& value );
template int pgpRogueLib::writeVarPath( rim::VariablePtr pVar, const uint64_t	& value );

void pgpRogueLib::dumpVariables( const char * pszFilePath, bool fWritableOnly, bool fForceRead, bool verbose )
{
	const char *	functionName = "pgpRogueLib::dumpVariables";

	std::ofstream	dumpFile;
	dumpFile.open( pszFilePath, ios_base::out );
	if ( ! dumpFile.is_open() )
	{
		printf( "%s Error: Unable to open write access for file:\n%s\n", functionName, pszFilePath );
		return;
	}

#if 0
	if ( ! m_pRogueLib )
	{
		printf( "%s Error: Unable to access rogue lib!\n", functionName );
		return;
	}

	const mapVarPtr_t &	mapVars		= m_pRogueLib->getVariableList();
#else
	const mapVarPtr_t &	mapVars		= getVariableList();
#endif
	if ( mapVars.size() == 0 )
	{
		printf( "%s Error: Rogue VariableList is empty!\n", functionName );
		return;
	}

	size_t	nDumped	= 0;
	printf( "%s: %s has %zu registers\n", functionName, pszFilePath, mapVars.size() );
	//dumpFile << functionName << ": " << mapVars.size() << std::endl;
	for ( mapVarPtr_t::const_iterator vit = mapVars.begin(); vit != mapVars.end(); ++vit )
	{
		rim::VariablePtr	pVar	= vit->second;
		if ( pVar->path().find( "ClinkFeb" ) != std::string::npos )
		{
			if ( pVar->path().find( "ClinkFeb[0]" ) != std::string::npos )
				if ( !FebReady( 0 ) )
					continue;
			if ( pVar->path().find( "ClinkFeb[1]" ) != std::string::npos )
				if ( !FebReady( 1 ) )
					continue;
			if ( pVar->path().find( "ClinkFeb[2]" ) != std::string::npos )
				if ( !FebReady( 2 ) )
					continue;
			if ( pVar->path().find( "ClinkFeb[3]" ) != std::string::npos )
				if ( !FebReady( 3 ) )
					continue;
		}
		try
		{
			if ( not fWritableOnly or pVar->mode() != std::string("RO") )
			{
				//	pVar->setLogLevel( rogue::Logging::Debug );
				dumpFile << pVar->getDumpValue( fForceRead );
				//	pVar->setLogLevel( rogue::Logging::Warning );
				nDumped++;
			}
		}
		catch ( rogue::GeneralError & e )
		{
			// pVar->setLogLevel( rogue::Logging::Warning );
			printf( "%s rogue error: %s!\n", functionName, e.what() );
		}
		catch ( exception & e )
		{
			// pVar->setLogLevel( rogue::Logging::Warning );
			printf( "%s error: %s!\n", functionName, e.what() );
		}
		catch ( ... )
		{
			// pVar->setLogLevel( rogue::Logging::Warning );
			printf( "%s unknown error!\n", functionName );
		}
	}

	printf( "%s: Dumped %zu of %zu registers...\n", functionName, nDumped, mapVars.size() );
	dumpFile.close();
}

void pgpRogueLib::setVariable( const char * pszVarPath, double value, bool verbose )
{
	uint64_t	u64Value;
	int64_t		i64Value;
	bool		bValue;
	float		fValue;
	double		dValue;
	std::string		varPath( pszVarPath );
	rogue::interfaces::memory::VariablePtr	pVar;
	//pVar = m_pRogueLib->getVariable( varPath );
	pVar = getVariable( varPath );
	if ( pVar )
	{
		if ( verbose )
			printf( "%s%u: ", modelId2String( pVar->modelId() ), pVar->bitTotal() );
		switch ( pVar->modelId() )
		{
		case rim::Bytes:
		case rim::Custom:
		case rim::Fixed:
		case rim::PyFunc:
		case rim::String:
		default:
			printf( "pgpRogueLib::setVariable error: Type %s%u not supported.", modelId2String( pVar->modelId() ), pVar->bitTotal() );
			break;
		case rim::UInt:
			u64Value	= static_cast<uint64_t>(value);
			writeVarPath( pszVarPath, u64Value );
			break;
		case rim::Int:
			i64Value	= static_cast<int64_t>(value);
			writeVarPath( pszVarPath, i64Value );
			break;
		case rim::Bool:
			bValue	= static_cast<bool>(value);
			writeVarPath( pszVarPath, bValue );
			break;
		case rim::Float:
			fValue	= static_cast<float>(value);
			writeVarPath( pszVarPath, fValue );
			break;
		case rim::Double:
			dValue	= static_cast<double>(value);
			writeVarPath( pszVarPath, dValue );
			break;
		}
	}
	else
	{
		printf( "pgpRogueLib error: %s not found!\n", varPath.c_str() );
	}
}

void pgpRogueLib::showVariable( const char * pszVarPath, bool verbose )
{
	std::string		varPath( pszVarPath );
	rogue::interfaces::memory::VariablePtr	pVar;
	//pVar = m_pRogueLib->getVariable( varPath );
	pVar = getVariable( varPath );
	if ( !pVar )
	{
		printf( "pgpRogueLib error: %s not found!\n", varPath.c_str() );
		return;
	}

	try
	{
		if ( verbose )
			printf( "%s%u: ", modelId2String( pVar->modelId() ), pVar->bitTotal() );
		switch ( pVar->modelId() )
		{
		default:
			break;
		case rim::PyFunc:
			break;
		case rim::Bytes:
			break;
		case rim::UInt:
			printf( "%s: %lu\n", varPath.c_str(), pVar->getUInt() );
			break;
		case rim::Int:
			printf( "%s: %li\n", varPath.c_str(), pVar->getInt() );
			break;
		case rim::Bool:
			printf( "%s: %s\n", varPath.c_str(), ( pVar->getBool() ? "True" : "False" ) );
			break;
		case rim::String:
			printf( "%s: '%s'\n", varPath.c_str(), pVar->getString().c_str() );
			break;
		case rim::Float:
			break;
		case rim::Double:
			printf( "%s: %f\n", varPath.c_str(), pVar->getDouble() );
			break;
		case rim::Fixed:
			break;
		case rim::Custom:
			break;
		}
	}
	catch ( rogue::GeneralError & e )
	{
		printf( "ShowPgpVariable error: %s!\n", e.what() );
	}
}

void pgpRogueLib::showVariableList( bool verbose )
{
	const char *	functionName = "pgpRogueLib::showVariableList";
#if 0
	if ( ! m_pRogueLib )
	{
		printf( "%s Error: Unable to access rogue lib!\n", functionName );
		return;
	}

	const mapVarPtr_t &	mapVars		= m_pRogueLib->getVariableList();
#else
	const mapVarPtr_t &	mapVars		= getVariableList();
#endif
	if ( mapVars.size() == 0 )
	{
		printf( "%s Error: Rogue VariableList is empty!\n", functionName );
		return;
	}

	printf( "%s: %zu variables\n", functionName, mapVars.size() );
	for ( mapVarPtr_t::const_iterator vit = mapVars.begin(); vit != mapVars.end(); ++vit )
	{
#if 0
		showVariable( vit->first, verbose );
#else
		rogue::interfaces::memory::VariablePtr	pVar	= vit->second;
		if ( ! pVar )
		{
			printf( "%s Error: Variable %s not found!\n", functionName, vit->first.c_str() );
			continue;
		}
		if ( pVar->path().find( "ClinkFeb" ) != std::string::npos )
		{
			if ( pVar->path().find( "ClinkFeb[0]" ) != std::string::npos )
				if ( !FebReady( 0 ) )
					continue;
			if ( pVar->path().find( "ClinkFeb[1]" ) != std::string::npos )
				if ( !FebReady( 1 ) )
					continue;
			if ( pVar->path().find( "ClinkFeb[2]" ) != std::string::npos )
				if ( !FebReady( 2 ) )
					continue;
			if ( pVar->path().find( "ClinkFeb[3]" ) != std::string::npos )
				if ( !FebReady( 3 ) )
					continue;
		}
		std::cout	<< pVar->path() << " Type " << pVar->modelId() << pVar->bitTotal() << std::endl;
#endif
	}
}

void pgpRogueLib::connect( )
{
}

void pgpRogueLib::disconnect( )
{
	printf( "pgpRogueLib::disconnect\n" );
	if ( m_fd > 0 )
	{
		close( m_fd );
		m_fd = -1;
	}
	m_pClMemMaster.reset();
	//rmMemory( m_pAxiMemMap );
	//m_pRogueLib->rmMemory( m_pAxiMemMap );
	m_pAxiMemMap.reset();
	for ( size_t	lane = 0; lane < N_AXI_LANES; lane++ )
	{
		m_pFebRegChan[lane].reset();
		m_pSrpFeb[lane].reset();
		//rmMemory( m_pSrpFeb[lane] );
		//m_pRogueLib->rmMemory( m_pSrpFeb[lane] );
		m_pFebMemMaster[lane].reset();
	}
}

