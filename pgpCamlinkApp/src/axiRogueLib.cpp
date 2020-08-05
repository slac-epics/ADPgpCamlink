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
//	axiRogueLib driver
//
//	Header file for axiRogueLib class.
//	It provides a templated interface to SLAC Generic AXI Hardware registers
//	via the Rogue LibraryBase C++ API
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <sys/stat.h>
#include <fcntl.h>


// rogue headers
#include "rogue/GeneralError.h"
#include "rogue/Logging.h"
#include "rogue/Version.h"

// aes-stream-drivers headers 
#include <AxisDriver.h>
#include <AxiVersion.h>
#include <DmaDriver.h>

// ADPgpCamlink headers
#include "axiRogueLib.h"

using namespace	std;
namespace rim = rogue::interfaces::memory;

typedef	std::map< std::string, rim::VariablePtr >	mapVarPtr_t;

int		DEBUG_AX_ROGUE_LIB	= 2;
extern int	DEBUG_ROGUE_DEV;

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

void axiRogueLib::ResetCounters( )
{
	// TODO: Add toggle option to setVariable
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].CountReset", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].CountReset", 0 );

	setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.CntRst", 0 );

	setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].CntRst", 0 );

	setVariable( "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].CntRst", 0 );

	setVariable( "ClinkDevRoot.ClinkFeb[0].PgpMon[0].CountReset", 1 );
	setVariable( "ClinkDevRoot.ClinkFeb[0].PgpMon[0].CountReset", 0 );

	// This resets   ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[0]
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst", 0 );

	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters", 1 );
	setVariable( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters", 0 );
}

int		axiRogueLib::setTriggerEnable( unsigned int triggerNum, bool fEnable )
{
	int		status	= 0;
#if 1
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

bool	axiRogueLib::getTriggerEnable( unsigned int triggerNum )
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
axiRogueLib::axiRogueLib(
	unsigned int				board	)
:	rogue::LibraryBase(),
	m_board(		board	),
	m_fConnected(	0		),
	m_devName(				),
	m_pAxiMemMap(			),
	m_pSrpFeb(				)
{
	const char		*	functionName	= "axiRogueLib::axiRogueLib";

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
			printf("axiRogueLib: -- Core Axi Version --\n");
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
	const char	*	szMemName = "Unnamed_3";
	addMemory( szMemName, m_pAxiMemMap );
	m_pRogueLib->addMemory( szMemName, m_pAxiMemMap );
	printf("axiRogueLib: addMemory AxiMemMap interface %s\n", szMemName );

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
			case 0:	szMemName = "Unnamed_186";	break;
			case 1:	szMemName = "Unnamed_215";	break;
			case 2:	szMemName = "Unnamed_244";	break;
			case 3:	szMemName = "Unnamed_273";	break;
		}
		addMemory( szMemName, m_pSrpFeb[lane] );
		m_pRogueLib->addMemory( szMemName, m_pSrpFeb[lane] );
		printf("axiRogueLib: addMemory srpFeb interface %s\n", szMemName );
		// Create FebMemMaster and link it to SRP
		m_pFebMemMaster[lane] = FebMemoryMaster::create( );
		m_pFebMemMaster[lane]->setSlave( m_pSrpFeb[lane] );
	}

	printf( "Parsing ROGUE_ADDR_MAP\n" );
	parseMemMap( ROGUE_ADDR_MAP ); // From generated rogueAddrMap.h
	printf( "ROGUE_ADDR_MAP parsed successfully\n" );
	m_pRogueLib->parseMemMap( ROGUE_ADDR_MAP );
	printf( "m_pRogueLib: ROGUE_ADDR_MAP parsed successfully\n" );

	//const mapVarPtr_t &	mapVars		= getVariableList();
	//printf( "%s: %zu variables\n", functionName, mapVars.size() );
	//printf( "m_pRogueLib: %zu variables\n", (m_pRogueLib->getVariableList()).size() );

	// Force an initial read of all variables
	printf( "%s: Reading %zu variables\n", functionName, (m_pRogueLib->getVariableList()).size() );
	m_pRogueLib->readAll();

	// Dump variables preConfig
	dumpVariables( "/reg/d/iocData/ioc-tst-pgp01/cfgdump-preConfig.txt", true, true, true );

	// Hack: Configure for LCLS-I timing
	ConfigureLclsTimingV1();
	Feb0PllConfig();

	// Hack: Read defaults
	m_pRogueLib->readAll();
	LoadConfigFile( "db/defaults_LCLS-I.txt" );
	LoadConfigFile( "db/Opal1000.txt" );

	// Dump variables postConfig
	dumpVariables( "/reg/d/iocData/ioc-tst-pgp01/cfgdump-postConfig.txt", true, true, true );

	//showVariableList( true );

	std::string sFpgaVersionPath( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BuildStamp" );
	showVariable( sFpgaVersionPath.c_str(), true );
	
	std::string sDataCnt( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[0]" );
	showVariable( sDataCnt.c_str(), true );
	showVariable( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaVersion", true );
	showVariable( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.UpTimeCnt", true );
	showVariable( "ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaVersion", true );
	showVariable( "ClinkDevRoot.ClinkFeb[0].AxiVersion.UpTimeCnt", true );

	m_fConnected = 1;	// Do we need this?
}

/// virtual Destructor
axiRogueLib::~axiRogueLib()
{
	close( m_fd );
}

/// Configure timing for LCLS-I
void axiRogueLib::ConfigureLclsTimingV1()
{
	const char * functionName = "ConfigureLclsTimingV1";
	const uint64_t	lZero	= 0L;
	const uint64_t	lOne	= 1L;
	struct timespec delay	= { 1, 0 };

	printf( "Configuring for LCLS-I timing ...\n" );
	const bool	bOne	= 1;
	const bool	bZero	= 1;
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.UseMiniTpg",	bZero );
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ModeSelEn",		lZero	);
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxPllReset",		lOne	);
	nanosleep( &delay, NULL );


	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxPllReset",		lZero	);
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClkSel",			lZero	);
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.C_RxReset",		lOne	);
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.C_RxReset",		lZero	);

#if 0
	// TODO: Wait for RxLinkUp
	delay.tv_sec = 0; delay.tv_nsec = 2000000000L;
	nanosleep( &delay, NULL );
#else
	uint64_t		rxLinkUp	= 0;
	size_t			nTries		= 0;
	delay.tv_sec = 0; delay.tv_nsec = 10000000L;
	while ( rxLinkUp == 0 )
	{
		readVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxLinkUp", rxLinkUp );
		if ( rxLinkUp )
			break;
		if ( nTries > 200 )
		{
			printf( "%s: Timeout waiting for RxLinkUp 1\n", functionName );
			break;
		}
		nTries++;
		nanosleep( &delay, NULL );
	}
#endif

	// Reset latching RxDown flag
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxDown",		lZero	);

	// TODO: How to make this configurable
	writeVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.UseMiniTpg",	bOne );
	nanosleep( &delay, NULL );
	
	// TODO: Push this into a function
	rxLinkUp	= 0;
	nTries		= 0;
	delay.tv_sec = 0; delay.tv_nsec = 10000000L;
	while ( rxLinkUp == 0 )
	{
		readVarPath( "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxLinkUp", rxLinkUp );
		if ( rxLinkUp )
			break;
		if ( nTries > 200 )
		{
			printf( "%s: Timeout waiting for RxLinkUp 2\n", functionName );
			break;
		}
		nTries++;
		nanosleep( &delay, NULL );
	}
	ResetCounters();
	printf( "Configured for LCLS-I timing\n" );
}

void axiRogueLib::Feb0PllConfig()
{
	const uint64_t	lZero	= 0L;
	const uint64_t	lOne	= 1L;
	// Hold Pll in reset
	writeVarPath( "ClinkDevRoot.ClinkFeb[0].ClinkTop.RstPll",		lOne	);

	// TODO: for ( iLane = 0; iLane < 4; iLane++ )
	LoadConfigFile( "db/cfgFeb0Pll85MHz.txt" );
#if 0
	{
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
	
	// Enable Pll
	writeVarPath( "ClinkDevRoot.ClinkFeb[0].ClinkTop.RstPll",		lZero	);

	// ResetFebCounters() same as python ClinkTop.CntRst()
}

/// Load Config file
void axiRogueLib::LoadConfigFile( const char * pszFilePath )
{
	const char	*	functionName	= "axiRogueLib::LoadConfigFile";
	FILE		*	cfgFile			= fopen( pszFilePath, "r" );
	if ( cfgFile == NULL )
	{
		fprintf( stderr, "LoadConfigFile error: Unable to open %s\n", pszFilePath );
		return;
	}

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

	fclose( cfgFile );
	printf( "%s: Read %u values from %s\n", functionName, nValues, pszFilePath );
}

template<class R> int axiRogueLib::readVarPath( const char * pszVarPath, R & valueRet )
{
	const char *	functionName = "axiRogueLib::readVarPath";
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
	//pVar->setLogLevel( rogue::Logging::Warning );

	if ( DEBUG_AX_ROGUE_LIB >= 6 )
	{
		std::cout	<< functionName	<< ": " << varPath
					<< ", typeid = "	<< typeid(R).name()
					<< ", modelId = "	<< modelId2String(pVar->modelId()) << pVar->bitTotal()
					<< ", valueRet = "	<< valueRet << std::endl;
	}
	return status;
}

template int axiRogueLib::readVarPath( const char * pszVarPath, bool		& valueRet );
template int axiRogueLib::readVarPath( const char * pszVarPath, double		& valueRet );
template int axiRogueLib::readVarPath( const char * pszVarPath, int64_t	& valueRet );
template int axiRogueLib::readVarPath( const char * pszVarPath, uint64_t	& valueRet );
template int axiRogueLib::readVarPath( const char * pszVarPath, std::string & valueRet );

template<class R> int axiRogueLib::writeVarPath( rim::VariablePtr pVar, const R & value )
{
	const char *	functionName = "axiRogueLib::writeVarPath";
	int				status	= -1;
	if ( !pVar )
	{
		printf( "%s error: Invalid VariablePtr!\n", functionName );
		return -1;
	}

	if ( DEBUG_AX_ROGUE_LIB >= 6 )
	{
		//if ( pVar->modelId() == rim::Bool )
		//	pVar->setLogLevel( rogue::Logging::Debug );
		if ( typeid(value) == typeid(uint64_t) )
			std::cout << functionName << ": " << pVar->path() << " is uint64_t" << std::endl;
		std::cout	<< functionName	<< ": " << pVar->path()
					<< ", typeid = "	<< typeid(R).name()
					<< ", modelId = "	<< modelId2String(pVar->modelId()) << pVar->bitTotal()
					<< ", value = "	<< value << std::endl;
		printf( "%s type is %s, nBits %u, byteSize %u, fastCopy %u!\n",
				pVar->path().c_str(),
				modelId2String( pVar->modelId() ), pVar->bitTotal(),
				pVar->byteSize(), pVar->fastCopy() );
	}

	try
	{
		pVar->setValue( value );
		status = 0;
		R	valueRet;
		pVar->getValue( valueRet );
		if ( DEBUG_ROGUE_DEV >= 3 || value != valueRet )
		{
			std::cout	<< functionName	<< ": " << pVar->path()
						<< ", setValue="	<< value;
			if ( value != valueRet )
				std::cout	<< ", Error getValue="	<< valueRet << std::endl;
			else
				std::cout	<< ", getValue="	<< valueRet << std::endl;
		}
	}
	catch ( rogue::GeneralError & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	if ( pVar->modelId() == rim::Bool )
		pVar->setLogLevel( rogue::Logging::Info );

	return status;
}

template<class R> int axiRogueLib::writeVarPath( const char * pszVarPath, const R & value )
{
	const char *	functionName = "axiRogueLib::writeVarPath";
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

template int axiRogueLib::writeVarPath( const char * pszVarPath, const bool		& value );
template int axiRogueLib::writeVarPath( const char * pszVarPath, const double		& value );
template int axiRogueLib::writeVarPath( const char * pszVarPath, const int64_t		& value );
template int axiRogueLib::writeVarPath( const char * pszVarPath, const uint64_t	& value );

template int axiRogueLib::writeVarPath( rim::VariablePtr pVar, const bool		& value );
template int axiRogueLib::writeVarPath( rim::VariablePtr pVar, const double	& value );
template int axiRogueLib::writeVarPath( rim::VariablePtr pVar, const int64_t	& value );
template int axiRogueLib::writeVarPath( rim::VariablePtr pVar, const uint64_t	& value );

void axiRogueLib::dumpVariables( const char * pszFilePath, bool fWritableOnly, bool fForceRead, bool verbose )
{
	const char *	functionName = "axiRogueLib::dumpVariables";

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

void axiRogueLib::setVariable( const char * pszVarPath, double value, bool verbose )
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
			printf( "axiRogueLib::setVariable error: Type %s%u not supported.", modelId2String( pVar->modelId() ), pVar->bitTotal() );
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
		printf( "axiRogueLib error: %s not found!\n", varPath.c_str() );
	}
}

void axiRogueLib::showVariable( const char * pszVarPath, bool verbose )
{
	std::string		varPath( pszVarPath );
	rogue::interfaces::memory::VariablePtr	pVar;
	//pVar = m_pRogueLib->getVariable( varPath );
	pVar = getVariable( varPath );
	if ( !pVar )
	{
		printf( "axiRogueLib error: %s not found!\n", varPath.c_str() );
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

void axiRogueLib::showVariableList( bool verbose )
{
	const char *	functionName = "axiRogueLib::showVariableList";
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
		std::cout	<< pVar->path() << " Type " << pVar->modelId() << pVar->bitTotal() << std::endl;
#endif
	}
}

void axiRogueLib::connect( )
{
}

void axiRogueLib::disconnect( )
{
}

