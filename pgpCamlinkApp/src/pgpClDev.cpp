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
#include <fstream>
#include <typeinfo>

// rogue headers
#include "rogue/Version.h"
#include "rogue/Logging.h"

// aes-stream-drivers headers 
#include <AxisDriver.h>
#include <AxiVersion.h>
#include <DmaDriver.h>

// ADPgpCamlink headers
#include "pgpClDev.h"

using namespace	std;
namespace rim = rogue::interfaces::memory;

typedef	std::map< std::string, rim::VariablePtr >	mapVarPtr_t;

int		DEBUG_PGP_CAMLINK	= 2;

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

#define CLINKDEV_LANE0_EVENTBUILDER_CNTRST	0xC00FFC
#define CLINKDEV_LANE0_COUNTRESET	0x800000
int ResetCounters( int fd )
{
	int		status;

	//status = dmaWriteRegister( fd, CLINKDEV_FRAMECOUNT,	0 );
	//status = dmaWriteRegister( fd, CLINKDEV_ERRORCOUNT,	0 );
	//status = dmaWriteRegister( fd, CLINKDEV_BYTECOUNT,	0 );
	status = dmaWriteRegister( fd, CLINKDEV_LANE0_COUNTRESET,	0 );
	// This resets ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[0]
	status = dmaWriteRegister( fd, CLINKDEV_LANE0_EVENTBUILDER_CNTRST,	0 );

	return status;
}

#define CLINKDEV_TRIG0_ENABLEREG	0x940000
int		pgpClDev::setTriggerEnable( unsigned int triggerNum, bool fEnable )
{
	int		status	= 0;
#if 1
	const char		*	functionName	= "pgpClDev::setTriggerEnable";
	std::string	varPath = "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].EnableReg";
	rogue::interfaces::memory::VariablePtr	pVar = getVariable( varPath );
	if ( !pVar )
	{
		printf( "pgpClDev error: %s not found!\n", varPath.c_str() );
	}
	else
	{
		if ( pVar->modelId() == rim::Bool )
		{
			try
			{
				pVar->setLogLevel( rogue::Logging::Debug );
				pVar->setBool( fEnable );
				pVar->setLogLevel( rogue::Logging::Warning );
				printf( "%s type is %s, nBits %u, byteSize %u, fastCopy %u!\n",
						varPath.c_str(), modelId2String( pVar->modelId() ), pVar->bitTotal(),
						pVar->byteSize(), pVar->fastCopy() );
			}
			catch ( rogue::GeneralError & e )
			{
				pVar->setLogLevel( rogue::Logging::Warning );
				printf( "%s error: %s!\n", functionName, e.what() );
			}
		}
		else
		{
			printf( "%s error: %s type is %s!\n", functionName,
					varPath.c_str(), modelId2String( pVar->modelId() ) );
		}
	}
#else
	status = dmaWriteRegister( m_fd, CLINKDEV_TRIG0_ENABLEREG, fEnable );
#endif
	return status;
}

bool	pgpClDev::getTriggerEnable( unsigned int triggerNum )
{
	return false;
}

#if 0
int StartRun( int fd )
{
	int		status;
	status = ResetCounters( fd );

	// Enable EVR trigger
	status = dmaWriteRegister( fd, CLINKDEV_TRIG0_ENABLEREG, 1 );
	return status;
}

int StopRun( int fd )
{
	int		status;

	// Disable EVR trigger
	status = dmaWriteRegister( fd, CLINKDEV_TRIG0_ENABLEREG, 0 );
	return status;
}
#endif


#include "pgpClAddrMap.h" 
class pgpClAddrMap : public rogue::LibraryBase
{
public:
	// static class creator
	static std::shared_ptr<pgpClAddrMap> create()
	{
		static std::shared_ptr<pgpClAddrMap> ret = std::make_shared<pgpClAddrMap>();
		return(ret);
	}

	pgpClAddrMap();
};
typedef std::shared_ptr<pgpClAddrMap> pgpClAddrMapPtr;

pgpClAddrMap::pgpClAddrMap()
	:	rogue::LibraryBase()
{
#if 1
	//printf( "NOT Parsing ROGUE_ADDR_MAP!\n" );
#else
	printf( "pgpClAddrMap: Parsing ROGUE_ADDR_MAP\n" );
	parseMemMap( ROGUE_ADDR_MAP ); // From generated pgpClAddrMap.h
	printf( "pgpClAddrMap: ROGUE_ADDR_MAP parsed successfully\n" );
#endif
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
	m_pAxiMemMap(			),
	m_pFebRegChan(			),
	m_pFebFrameChan(		),
	m_pClMemMaster(			),	// Not needed
	m_pFebMemMaster(		),	// not needed
	m_pImageStream(			),
	m_pSrpFeb(				)
{
	const char		*	functionName	= "pgpClDev::pgpClDev";

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
	m_pRogueLib = pgpClAddrMap::create();

	//
	// Create FEB Data Channels
	// TODO: Make a function than encapsulates this
	uint32_t	dest; dest = (0x100 * m_lane) + PGPCL_DATACHAN_FEB_REG_ACCESS;
	m_pFebRegChan	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);
	dest = (0x100 * m_lane) + PGPCL_DATACHAN_FEB_FRAME_ACCESS;
	m_pFebFrameChan	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);

	//
	// Connect DATACHAN 0 ClinkDev KCU1500 Register Access
	//
	m_pAxiMemMap		= rogue::hardware::axi::AxiMemMap::create( m_devName );
	m_pClMemMaster		= ClMemoryMaster::create( );
	m_pClMemMaster->setSlave( m_pAxiMemMap );
	const char	*	szMemName = "Unnamed_3";
	addMemory( szMemName, m_pAxiMemMap );
	m_pRogueLib->addMemory( szMemName, m_pAxiMemMap );
	printf("pgpClDev: addMemory AxiMemMap interface %s\n", szMemName );

	//
	// Connect DATACHAN 0 FEB Register Access
	//
	m_pSrpFeb = rogue::protocols::srp::SrpV3::create();	// Serial Rouge Protocol handler
	// Create bidirectional links between SRP and FebRegChan 
	m_pFebRegChan->addSlave( m_pSrpFeb );
	m_pSrpFeb->addSlave( m_pFebRegChan );
	szMemName = "Unnamed_78";
	addMemory( szMemName, m_pSrpFeb );
	m_pRogueLib->addMemory( szMemName, m_pSrpFeb );
	printf("pgpClDev: addMemory srpFeb interface %s\n", szMemName );
	// Create FebMemMaster and link it to SRP
	//m_pFebMemMaster = FebMemoryMaster::create( );
	//m_pFebMemMaster->setSlave( m_pSrpFeb );

#if 0
	printf( "NOT Parsing ROGUE_ADDR_MAP!\n" );
#else
	printf( "Parsing ROGUE_ADDR_MAP\n" );
	parseMemMap( ROGUE_ADDR_MAP ); // From generated pgpClAddrMap.h
	printf( "ROGUE_ADDR_MAP parsed successfully\n" );
	m_pRogueLib->parseMemMap( ROGUE_ADDR_MAP );
	printf( "m_pRogueLib: ROGUE_ADDR_MAP parsed successfully\n" );
#endif
	//const mapVarPtr_t &	mapVars		= getVariableList();
	//printf( "%s: %zu variables\n", functionName, mapVars.size() );
	//printf( "m_pRogueLib: %zu variables\n", (m_pRogueLib->getVariableList()).size() );

	// Force an initial read of all variables
	printf( "%s: Reading %zu variables\n", functionName, (m_pRogueLib->getVariableList()).size() );
	m_pRogueLib->readAll();

	//showVariableList( true );

	std::string sFpgaVersionPath( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BuildStamp" );
	showVariable( sFpgaVersionPath.c_str(), true );
	
	std::string sDataCnt( "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[0]" );
	showVariable( sDataCnt.c_str(), true );
	showVariable( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaVersion", true );
	showVariable( "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.UpTimeCnt", true );
	showVariable( "ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaVersion", true );
	showVariable( "ClinkDevRoot.ClinkFeb[0].AxiVersion.UpTimeCnt", true );

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

template<class R> int pgpClDev::readVarPath( const char * pszVarPath, R & valueRet )
{
	const char *	functionName = "pgpClDev::readVarPath";
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

	if ( DEBUG_PGP_CAMLINK >= 5 )
	{
		std::cout	<< functionName	<< ": " << varPath
					<< ", typeid = "	<< typeid(R).name()
					<< ", modelId = "	<< modelId2String(pVar->modelId()) << pVar->bitTotal()
					<< ", valueRet = "	<< valueRet << std::endl;
	}
	return status;
}

template int pgpClDev::readVarPath( const char * pszVarPath, bool		& valueRet );
template int pgpClDev::readVarPath( const char * pszVarPath, double		& valueRet );
template int pgpClDev::readVarPath( const char * pszVarPath, int64_t	& valueRet );
template int pgpClDev::readVarPath( const char * pszVarPath, uint64_t	& valueRet );
template int pgpClDev::readVarPath( const char * pszVarPath, std::string & valueRet );


// TODO: All rogue calls should use try clause and catch at least rogue::GeneralError
template<class R> int pgpClDev::writeVarPath( const char * pszVarPath, const R & value )
{
	const char *	functionName = "pgpClDev::writeVarPath";
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

	if ( DEBUG_PGP_CAMLINK >= 3 )
	{
		if ( pVar->modelId() == rim::Bool )
			pVar->setLogLevel( rogue::Logging::Debug );
		if ( typeid(value) == typeid(uint64_t) )
			std::cout << functionName << ": " << varPath << " is uint64_t" << std::endl;
		std::cout	<< functionName	<< ": " << varPath
					<< ", typeid = "	<< typeid(R).name()
					<< ", modelId = "	<< modelId2String(pVar->modelId()) << pVar->bitTotal()
					<< ", value = "	<< value << std::endl;
		printf( "%s type is %s, nBits %u, byteSize %u, fastCopy %u!\n",
				varPath.c_str(),
				modelId2String( pVar->modelId() ), pVar->bitTotal(),
				pVar->byteSize(), pVar->fastCopy() );
	}

	try
	{
		pVar->setValue( value );
		status = 0;
		R	valueRet;
		pVar->getValue( valueRet );
		if ( 1 || value != valueRet )
		{
			std::cout	<< functionName	<< ": " << varPath
						<< ", setValue="	<< value
						<< ", getValue="	<< valueRet << std::endl;
		}
	}
	catch ( rogue::GeneralError & e )
	{
		printf( "%s error: %s!\n", functionName, e.what() );
	}
	pVar->setLogLevel( rogue::Logging::Warning );

	return status;
}

template int pgpClDev::writeVarPath( const char * pszVarPath, const bool		& value );
template int pgpClDev::writeVarPath( const char * pszVarPath, const double		& value );
template int pgpClDev::writeVarPath( const char * pszVarPath, const int64_t		& value );
template int pgpClDev::writeVarPath( const char * pszVarPath, const uint64_t	& value );


void pgpClDev::setVariable( const char * pszVarPath, double value, bool verbose )
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
			printf( "pgpClDev::setVariable error: Type %s%u not supported.", modelId2String( pVar->modelId() ), pVar->bitTotal() );
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
		printf( "pgpClDev error: %s not found!\n", varPath.c_str() );
	}
}

void pgpClDev::dumpVariables( const char * pszFilePath, bool fWriteOnly, bool fForceRead, bool verbose )
{
	const char *	functionName = "pgpClDev::dumpVariables";

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

	dumpFile << functionName << ": " << mapVars.size() << std::endl;
	for ( mapVarPtr_t::const_iterator vit = mapVars.begin(); vit != mapVars.end(); ++vit )
	{
		dumpFile << vit->second->getDumpValue( fForceRead );
	}

	dumpFile.close();
}

void pgpClDev::showVariable( const char * pszVarPath, bool verbose )
{
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
	else
	{
		printf( "pgpClDev error: %s not found!\n", varPath.c_str() );
	}
}

void pgpClDev::showVariableList( bool verbose )
{
	const char *	functionName = "pgpClDev::showVariableList";
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

void pgpClDev::connect( )
{
}

void pgpClDev::disconnect( )
{
}


void pgpClDev::ProcessImage(
	const epicsTimeStamp			&	tsImage,
	rogue::protocols::batcher::DataPtr	pImageData )
{
	const char		*	functionName	= "pgpClDev::ProcessImage";
	if ( DEBUG_PGP_CAMLINK >= 3 ) printf( "%s\n", functionName );

	if  ( m_CallbackClientFunc != NULL )
		(*m_CallbackClientFunc)( m_pCallbackClient, tsImage, pImageData );

	return;
}

