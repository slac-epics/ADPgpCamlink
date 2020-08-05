//////////////////////////////////////////////////////////////////////////////
// This file is part of 'ADPgpCamlink'.
// It is subject to the license terms in the LICENSE.txt file found in the 
// top-level directory of this distribution and at: 
//    https://confluence.slac.stanford.edu/display/ppareg/LICENSE.html. 
// No part of 'ADPgpCamlink', including this file, 
// may be copied, modified, propagated, or distributed except according to 
// the terms contained in the LICENSE.txt file.
//////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
// Filename: rogueDev.cpp
// Description: EPICS device support for camlink cameras using SLAC PGP framegrabbers
//              via SLAC's Rogue software library
// Author:
//		Bruce Hill, SLAC National Accelerator Lab, July 2020
/////////////////////////////////////////////////////////////////////////////

//	Standard headers
#include <iostream>

//	EPICS headers
#include <iocsh.h>
#include <callback.h>
#include <dbScan.h>
//#include <dbAccess.h>
#include <cantProceed.h>
#include <epicsEvent.h>
#include <epicsExit.h>
#include <epicsExport.h>
#include <epicsThread.h>
#include "epicsStdio.h"
#include <epicsVersion.h>
#include <errlog.h>
#include <registryFunction.h>
#include <unistd.h>

// ADPgpCamlink headers
#include "rogueDev.h"
#include "axiRogueLib.h"

#include "rogue/Logging.h"

#ifdef	USE_DIAG_TIMER
#include "HiResTime.h"
#include "ContextTimer.h"
#else
#define CONTEXT_TIMER(a)
#endif	//	USE_DIAG_TIMER

using namespace		std;
namespace rim = rogue::interfaces::memory;
//namespace ris = rogue::interfaces::stream;

static	const char *		driverName	= "rogueDev";

// Diagnostic timers
// View and reset via iocsh cmds.
// From iocsh, type: help *Context*

int		DEBUG_PGP_ROGUE	= 0;

///	ppgRogue map - Stores ptr to all rogueDev instances indexed by name
map<string, rogueDev *>	rogueDev::ms_rogueDevMap;


//
// rogueDev functions
//

///	rogueDev constructor
rogueDev::rogueDev(
	const char			*	cameraName,
	int						board,					// board
	int						lane,					// channel
	const char			*	modelName,
	const char			*	clMode,
	bool					fLcls2Timing		)
	:
		m_fExitApp(			false			    ),
		m_fReconfig(		false			    ),
		m_fReopen(			false			    ),
		m_pRogueLib(				NULL				),
		m_board(			board				),
		m_lane(				lane				),
		m_fLcls2Timing(		fLcls2Timing		),
		m_ConfigFile(							),
		m_DrvVersion(							),
		m_LibVersion(							),
		m_ModelName(		modelName			),

		m_ReCfgCnt(			0					),
		m_reconfigLock(		NULL				),
		
		m_ioscan(			NULL				)
{
	static const char	*	functionName = "rogueDev::rogueDev";

	// Create mutexes
    m_reconfigLock	= epicsMutexMustCreate();

    // Initialize I/O Intr processing
    scanIoInit( &m_ioscan );
    if ( m_ioscan == NULL )
        errlogPrintf( "%s %s: ERROR, scanIoInit failed!\n", driverName, functionName );

    // Install exit hook for clean shutdown
    epicsAtExit( (EPICSTHREADFUNC)rogueDev::ExitHook, (void *) this );
}

///	rogueDev Destructor
rogueDev::~rogueDev( )
{
	Shutdown();

	// Cleanup driver
	//delete m_pSyncDataAcquirer;
	//m_pSyncDataAcquirer	= NULL;

	epicsMutexDestroy(	m_reconfigLock );
}


int rogueDev::CreateRogue(
	const char *	cameraName,
	int				board,
	int				lane,
	const char *	modelName,
	const char *	clMode,
	size_t			sizeX,
	size_t			sizeY,
	bool			fLcls2Timing,
	int				maxBuffers,
	size_t			maxMemory,
	int				priority,
	int				stackSize	)
{
    static const char	*	functionName = "rogueDev::CreateRogue";

    /* Parameters check */
    if (  cameraName == NULL || strlen(cameraName) == 0 )
    {
        errlogPrintf(	"%s %s: ERROR, NULL or zero length camera name. Check parameters to rogueDevConfig()!\n",
            			driverName, functionName );
        return  -1;
    }

    if ( RogueFindByName(cameraName) != NULL )
    {
        errlogPrintf(	"%s %s: ERROR, Rogue name %s already in use!\n",
						driverName, functionName, cameraName );
        return -1;
    }

    if (  IsRogueLaneUsed( board, lane ) )
    {
        errlogPrintf(	"%s %s: ERROR, board %d lane %d already in use!\n",
						driverName, functionName, board, lane	);
        return -1;
    }

    if (  modelName == NULL || strlen(modelName) == 0 )
    {
        errlogPrintf(	"%s %s: ERROR, NULL or zero length camera configuration.\n",
						driverName, functionName );
        return  -1;
    }

    if ( DEBUG_PGP_ROGUE >= 1 )
        cout << "Creating rogueDev: " << string(cameraName) << endl;
    rogueDev	* pRogue = new rogueDev(	cameraName, board, lane, modelName,
											clMode, fLcls2Timing );
    assert( pRogue != NULL );

    int	status	= pRogue->ConnectRogue( );
	if ( status != 0 )
        errlogPrintf( "rogueDevConfig failed for camera %s!\n", cameraName );

	// TODO: This should be in the constructor and add call
	//	to RogueRemove in the destructor
	RogueAdd( pRogue );
    return 0;
}


extern "C"
int ShowAllRogue( int level )
{
	return rogueDev::ShowAllRogue( level );
}

int rogueDev::ShowAllRogue( int level )
{
	if ( level < 0 )
		return 0;

	map<string, rogueDev *>::iterator	it;
	for ( it = ms_rogueDevMap.begin(); it != ms_rogueDevMap.end(); ++it )
	{
		rogueDev	*	pRogue	= it->second;
		if( pRogue )
			pRogue->ShowReport( level );
    }

    return 0;
}


bool rogueDev::IsRogueLaneUsed( unsigned int board,  unsigned int lane )
{
	map<string, rogueDev *>::iterator	it;
	for ( it = ms_rogueDevMap.begin(); it != ms_rogueDevMap.end(); ++it )
	{
		rogueDev		*	pRogue	= it->second;
        if ( board == pRogue->m_board && lane == pRogue->m_lane )
			return true;
    }

    return false;
}


rogueDev	*	rogueDev::RogueFindByName( const string & name )
{
	map<string, rogueDev *>::iterator	it	= ms_rogueDevMap.find( name );
	if ( it == ms_rogueDevMap.end() )
		return NULL;
	return it->second;
}

rogueDev	*	rogueDev::RogueFindByBoardLane( unsigned int board, unsigned int lane )
{
	map<string, rogueDev *>::iterator	it;
	for ( it = ms_rogueDevMap.begin(); it != ms_rogueDevMap.end(); it++ )
	{
		rogueDev	*	pCam	= it->second;
		if ( pCam->GetBoard() == board && pCam->GetLane() == lane )
			return pCam;
	}
	return NULL;
}

void rogueDev::RogueAdd(		rogueDev * pRogue )
{
	assert( RogueFindByName( pRogue->m_RogueName ) == NULL );
	if ( DEBUG_PGP_ROGUE >= 3 )
		cout << "RogueAdd: " << pRogue->m_RogueName << endl;
	ms_rogueDevMap[ pRogue->m_RogueName ]	= pRogue;
}

void rogueDev::RogueRemove(	rogueDev * pRogue )
{
	ms_rogueDevMap.erase( pRogue->m_RogueName );
}

int rogueDev::ShowReport( int level )
{
    if ( level < 0 )
		return 0;

	cout << "\tRogue " << m_RogueName	<< " is installed on board " << m_board << " Lane " << m_lane << endl;
	if ( level >= 1 )
	{
		cout	<< "\t\tType: "			<< m_RogueClass
				<< " "					<< m_RogueModel
				<< ", configuration: " 	<< m_ConfigFile << endl;
		cout	<< "\t\tMax Res: "		<< m_ClMaxWidth << " x " << m_ClMaxHeight
				<< endl;
	}
	if ( level >= 3 && m_pRogueLib )
	{
		m_pRogueLib->showVariableList( level >= 4 );
	}
    return 0;
}

int	rogueDev::DumpPgpVars( const char * pszFilePath, bool fWriteOnly, bool fForceRead )
{
	const char	*	functionName = "rogueDev::DumpPgpVars";
	if ( m_pRogueLib == NULL )
	{
		printf( "%s error: %s PGP Dev not configured!\n", functionName, m_RogueName.c_str() );
		return -1;
	}
	m_pRogueLib->dumpVariables( pszFilePath, fWriteOnly, fForceRead, false );
	return 0;
}

int rogueDev::SetPgpVariable( const char * pszVarPath, double value )
{
	const char	*	functionName = "rogueDev::SetPgpVariable";
	if ( m_pRogueLib == NULL )
	{
		printf( "%s error: %s PGP Dev not configured!\n", functionName, m_RogueName.c_str() );
		return -1;
	}
	m_pRogueLib->setVariable( pszVarPath, value, false );
	return 0;
}

int rogueDev::ShowPgpVariable( const char * pszVarPath, int level )
{
	const char	*	functionName = "rogueDev::ShowPgpVariable";
	if ( m_pRogueLib == NULL )
	{
		printf( "%s error: %s PGP Dev not configured!\n", functionName, m_RogueName.c_str() );
		return -1;
	}
	m_pRogueLib->showVariable( pszVarPath, level != 0 );
	return 0;
}

void rogueDev::ExitHook(void * arg)
{
	rogueDev	*	pCam = static_cast<rogueDev *>( arg );
	if( pCam != NULL )
		pCam->Shutdown();
}

void rogueDev::Shutdown( )
{
	epicsMutexLock(	m_reconfigLock );
//	m_acquireCount = 0;
//	setIntegerParam(ADAcquire, 0);
	if ( m_pRogueLib != NULL )
	{
		m_pRogueLib->disconnect();
	}
	epicsMutexUnlock(	m_reconfigLock );
}

///	Connects driver to device
int rogueDev::ConnectRogue( )
{
    static const char	*	functionName	= "rogueDev::ConnectRogue";
    int				status			= 0;

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );

	// Initialize (or re-initialize) framegrabber connection
	Reopen( );

	if ( m_pRogueLib == NULL )
	{
		printf( "%s: %s failed to initialize camera!\n", functionName, m_RogueName.c_str() );
        return -1;
	}

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf(	"%s %s: PGP Framegrabber %s 0 connected!\n", 
				driverName, functionName, m_RogueName.c_str() );

//	UpdateStatus( ADStatusIdle );

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf( "%s: connected in thread %s ...\n", functionName, epicsThreadGetNameSelf() );

    return status;
}


//	Disconnects driver from device
int rogueDev::DisconnectRogue( )
{
    static const char	*	functionName	= "rogueDev::DisconnectRogue";
    int						status			= 0;

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf(	"%s %s: disconnecting camera %s\n", 
				driverName, functionName, m_RogueName.c_str() );

//	SetAcquireMode( false );

    // Block reconfigured until serial device is disconnected
	epicsMutexLock(	m_reconfigLock );

    if ( m_pRogueLib )
	{
		// Halt any image acquires in progress
		m_pRogueLib->disconnect();
	}
	epicsMutexUnlock(	m_reconfigLock );
 
    return status;
}

#if 0
/// Overriding ADDriver::connect
int rogueDev::connect( void *	)
{
    static const char	*	functionName	= "rogueDev::connect";

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );

	// The guts are in ConnectRogue()
	int	status	= ConnectRogue();
    return status;
}

/// Overriding ADDriver::disconnect
///	Disconnects driver from device
int rogueDev::disconnect( void *	)
{
    static const char	*	functionName	= "rogueDev::disconnect";

	// The guts are in DisconnectRogue()
	int	status	= DisconnectRogue();

	// Set ADStatus to ADStatusDisconnected
	UpdateStatus( ADStatusDisconnected );

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf(	"%s %s: PGP Framegrabber %s 0 disconnected!\n", 
				driverName, functionName, m_RogueName.c_str() );

    return 0;
}
#endif


int rogueDev::Reconfigure( )
{
    static const char	*	functionName = "rogueDev::Reconfigure";
	CONTEXT_TIMER( "Reconfigure" );

	if ( DEBUG_PGP_ROGUE >= 1 )
	{
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );
	}

	int		status	= 0;
	epicsMutexLock(		m_reconfigLock );
    
//	UpdateStatus( ADStatusInitializing );
	if ( m_fReopen )
	{
        // Clear reopen flag up front so it can be set again by another thread if needed
		m_fReopen	= false;
		status	= rogueDev::_Reopen( );
	}

	// Clear reconfig flag up front so it can be set again by another thread if needed
	m_fReconfig = false;
	status	= rogueDev::_Reconfigure( );
	if ( status != 0 )
	{
		// Reconfigure failed, request another
		m_fReconfig	= true;
	}

	if ( DEBUG_PGP_ROGUE >= 1 )
	{
		printf( "%s: %s done in thread %s\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );
	}
	epicsMutexUnlock(	m_reconfigLock );

	// TODO: Find a safe place to do this
	// Restart acquisition if acquire mode still on
	// if ( m_fAcquireMode )
	// 	SetAcquireMode( m_fAcquireMode );

	if ( status != 0 )
	{
        printf( "%s %s: Reconfigure error!\n", driverName, functionName );
	}
    else
    {
//        UpdateStatus( ADStatusIdle );

        m_ReCfgCnt++;
		//setIntegerParam( CamlinkReCfgCnt, m_ReCfgCnt );
        if ( m_fReconfig )
        {
            printf(	"%s %s: Reconfigure succeeded, but Reconfig flag has already been set again!\n",
                	driverName, functionName );
        }
    }

	return status;
}


int rogueDev::Reopen( )
{
    static const char	*	functionName = "rogueDev::Reopen";
	CONTEXT_TIMER( "Reopen" );

	if ( DEBUG_PGP_ROGUE >= 1 )
	{
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );
	}

	int		status	= 0;
	epicsMutexLock(		m_reconfigLock );

//	UpdateStatus( ADStatusInitializing );

	// Clear reopen flag up front so it can be set again by another thread if needed
	m_fReopen	= false;
	status	= rogueDev::_Reopen( );
	if ( status != 0 )
	{
		if ( DEBUG_PGP_ROGUE >= 1 )
			printf( "%s: _Reopen error %d\n", functionName, status );
		// Reopen failed, request another
		m_fReopen	= true;
	}

	epicsMutexUnlock(	m_reconfigLock );

	if ( status != 0 )
	{
        printf(	"%s %s: Reopen error!\n",
				driverName, functionName );
	}
	else if ( m_fReopen )
	{
        printf(	"%s %s: Reopen succeeded, but Reopen flag has already been set again!\n",
				driverName, functionName );
	}

	// Always Reconfigure after a Reopen
	status = Reconfigure();

	return status;
}


//	Internal version of reconfigure
//	Don't call without holding m_reconfigLock!
int rogueDev::_Reconfigure( )
{
    static const char	*	functionName = "rogueDev::_Reconfigure";
	CONTEXT_TIMER( "_Reconfigure" );

    if ( m_pRogueLib == NULL || m_fReopen )
	{
		m_fReopen = true;
        return -1;
	}

	if ( DEBUG_PGP_ROGUE >= 1 )
	{
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );
	}

	// Cancel Image Callbacks
	m_pRogueLib->setTriggerEnable( 0, false );
//	m_pRogueLib->cancelImageCallbacks( );

	// Fetch the rogueDev driver and library versions
	m_DrvVersion = m_pRogueLib->GetDrvVersion();
#if 0
	size_t end_of_vers = m_DrvVersion.find( " " );
	if ( end_of_vers != string::npos )
	{
		// The driver version has a date on the end that we don't care about
		m_DrvVersion.erase( m_DrvVersion.find( " " ) );
	}
#endif
//	setStringParam( CamlinkDrvVersion, m_DrvVersion.c_str()	);

	m_LibVersion = m_pRogueLib->GetLibVersion();
//	setStringParam( CamlinkLibVersion, m_LibVersion.c_str()	);

//	int64_t		int64Value	= 0;
//	uint64_t	uint64Value	= 0;
//	m_pRogueLib->readVarPath(	PgpCoreFpgaVersionString,	uint64Value );
//	setIntegerParam(		PgpCoreFpgaVersion,			uint64Value	);
//	m_pRogueLib->readVarPath(	PgpFebFpgaVersionString,	uint64Value );
//	setIntegerParam(		PgpFebFpgaVersion,			uint64Value	);
//	m_pRogueLib->readVarPath(	PgpAxiVersionString,		m_AxiVersion );
//	setStringParam(			PgpAxiVersion, m_AxiVersion.c_str()	);

	// Already shown in _Reopen()
	//printf( "rogueDev Driver  version: %s\n", m_DrvVersion.c_str() ); 
	//printf( "rogueDev Library version: %s\n", m_LibVersion.c_str() );
#if 0
	{
	// Fetch the camera manufacturer and model and write them to ADBase parameters
    //m_RogueClass	= pdv_get_camera_class(	m_pRogueLib );
    //m_RogueModel	= pdv_get_camera_model(	m_pRogueLib );
    //m_BuildStamp	= pdv_get_camera_info(	m_pRogueLib );

//	setStringParam( ADManufacturer, m_RogueClass.c_str()	);
//    setStringParam( CamlinkClass,	m_RogueClass.c_str()	);
//    setStringParam( CamlinkInfo,	m_BuildStamp.c_str()	);
	}
//	setStringParam(	ADModel,		m_ModelName.c_str()	);

//	setIntegerParam( ADMaxSizeX,		m_ClMaxWidth	);
//	setIntegerParam( ADMaxSizeY,		m_ClMaxHeight	);

	// Make sure we have valid size and binning settings
	int		intParam;
//	getIntegerParam( ADBinX,	&intParam	);
	if ( intParam == 0 )
	{
		m_BinX = m_BinXReq = 1;
//		setIntegerParam( ADBinX, 1 );
	}
//	getIntegerParam( ADBinY,	&intParam	);
	if ( intParam == 0 )
	{
		m_BinY = m_BinYReq = 1;
//		setIntegerParam( ADBinY, 1 );
	}
//	getIntegerParam( ADSizeX,	&intParam	);
	if ( intParam == 0 )
	{
		m_SizeX = m_SizeXReq = m_ClMaxWidth;
//		setIntegerParam( ADSizeX, m_ClMaxWidth	);
	}
//	getIntegerParam( ADSizeY,	&intParam	);
	if ( intParam == 0 )
	{
		m_SizeY = m_SizeYReq = m_ClMaxHeight;
//		setIntegerParam( ADSizeY, m_ClMaxHeight	);
	}

	// Fetch the pixel depth and update ADBase DataType and BitsPerPixel
    //m_ClNumBits		= pdv_get_depth(	m_pRogueLib );
	if ( m_ClNumBits <= 8 )
	{
//		setIntegerParam( NDDataType,		NDUInt8	);
	}
	else if ( m_ClNumBits <= 16 )
	{
//		setIntegerParam( NDDataType,		NDUInt16 );
	}

	// Set the number of horizontal and vertical taps
//	setIntegerParam( CamlinkHTaps,		m_ClHTaps	);
//	setIntegerParam( CamlinkVTaps,		m_ClVTaps	);

#endif

#ifdef	SETUP_ROI_IN_RECONFIG
	SetupROI();
#endif

    return 0;
}


//	Internal version of reopen
//	Don't call without holding m_reconfigLock!
int rogueDev::_Reopen( )
{
    static const char	*	functionName = "rogueDev::_Reopen";
	CONTEXT_TIMER( "_Reopen" );

	// Close old Dev if needed
	if ( m_pRogueLib )
	{
		m_pRogueLib->disconnect();
		m_pRogueLib	= NULL;
		if ( DEBUG_PGP_ROGUE >= 1 )
			printf( "%s: %s old Dev closed.\n", functionName, m_RogueName.c_str() );
	}

	// Enable rogue logging
	//rogue::Logging::setLevel( rogue::Logging::Info );

	// Open the camera lane
	if ( DEBUG_PGP_ROGUE >= 1 )
		printf( "%s: %s Reopening Dev ...\n", functionName, m_RogueName.c_str() );
    m_pRogueLib = axiRogueLib::create( m_board, m_lane );
    if ( m_pRogueLib == NULL )
	{
        printf(	"%s %s: ERROR, Unable to open camera for rogueDev card %u, lane %u\n",
				driverName,		functionName, m_board, m_lane );
        return -1;
    }

	{
	// Fetch the camera manufacturer and model and write them to ADBase parameters
    //m_RogueClass	= pdv_get_camera_class(	m_pRogueLib );
    //m_RogueModel	= pdv_get_camera_model(	m_pRogueLib );
    //m_BuildStamp	= pdv_get_camera_info(	m_pRogueLib );

	// Fetch the rogueDev driver and library versions and make sure they match
    //char		buf[MAX_STRING_SIZE];
    //edt_get_driver_version(	m_pRogueLib, buf, MAX_STRING_SIZE );
	m_DrvVersion = m_pRogueLib->GetDrvVersion();
#if 0
	size_t end_of_vers = m_DrvVersion.find( " " );
	if ( end_of_vers != string::npos )
	{
		// The driver version has a date on the end that we don't care about
		m_DrvVersion.erase( m_DrvVersion.find( " " ) );
	}
#endif
//	setStringParam( CamlinkDrvVersion, m_DrvVersion.c_str()	);

    //edt_get_library_version( m_pRogueLib, buf, MAX_STRING_SIZE );
	m_LibVersion = m_pRogueLib->GetLibVersion();
//	setStringParam( CamlinkLibVersion, m_LibVersion.c_str()	);

#if 0
	if ( m_DrvVersion.find(m_LibVersion) == string::npos )
	{
		printf( 
					"%s %s: ERROR, rogueDev driver version %s does not match lib version %s!\n",
					driverName, functionName, m_DrvVersion.c_str(), m_LibVersion.c_str() );
        return -1;
    }
#endif
	printf( "rogueDev Driver  version: %s\n", m_DrvVersion.c_str() ); 
	printf( "rogueDev Library version: %s\n", m_LibVersion.c_str() );
	}

//    printf( "board %d, Chan %d, Mode: %s\n",
//			m_board, m_lane, CamlinkModeToString( m_CamlinkMode ) );

	// Diagnostics
	if ( DEBUG_PGP_ROGUE >= 1 )
		printf(	"%s %s: %s framegrabber opened on card %u, ch %u\n",
				driverName, functionName, m_RogueName.c_str(), m_board, m_lane );
    return 0;
}


#if 0
int rogueDev::UpdateADConfigParams( )
{
    static const char	*	functionName	= "rogueDev::UpdateADConfigParams";
	if ( DEBUG_PGP_ROGUE >= 2 )
		printf( "%s: %s ...\n", functionName, m_RogueName.c_str() );

	if ( m_pRogueLib == NULL )
	{
		printf( "%s Error: Framegrabber %s not connected!\n", functionName, m_RogueName.c_str() );
		return -1;
	}

    return 0;
}
#endif

int	rogueDev::UpdateStatus( int	newStatus	)
{
	if ( DEBUG_PGP_ROGUE >= 4 )
	{
    	static const char	*	functionName = "rogueDev::UpdateStatus";
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );
	}
	CONTEXT_TIMER( "rogueDev-UpdateStatus" );
	//	Context timer shows these next two calls take about 20us
	int		status	= 0;
//	status	= setIntegerParam( ADStatus, newStatus );
//	if( status == 0 )
//		status = callParamCallbacks( 0, 0 );
	return status;
}


/** Report status of the driver.
  * Prints details about the driver if details > 0.
  * It then calls the ADDriver::report() method.
  * \param[in] fp File pointed passed by caller where the output is written to.
  * \param[in] details If >0 then driver details are printed.
  */
void rogueDev::report( FILE * fp, int details )
{
    fprintf(	fp, "PGP Framegrabber port ?: %s\n",
				m_pRogueLib ? "Connected" : "Disconnected" );

//	int			connected	= 1;

    if ( details > 0 )
	{
		fprintf( fp, "  Rogue name:       %s\n",   m_RogueName.c_str() );
		fprintf( fp, "  Rogue model:      %s\n",   m_RogueModel.c_str() );
		fprintf( fp, "  Config model:      %s\n",   m_ModelName.c_str() );
		fprintf( fp, "  Config file:       %s\n",   m_ConfigFile.c_str() );
		fprintf( fp, "  Drv Version:       %s\n",   m_DrvVersion.c_str() );
		fprintf( fp, "  Lib Version:       %s\n",   m_LibVersion.c_str() );
		fprintf( fp, "  board:              %u\n",   m_board );
		fprintf( fp, "  Lane:              %u\n",   m_lane );

//		fprintf( fp, "  Sensor bits:       %u\n",   m_ClNumBits );
		fprintf( fp, "  Sensor width:      %zd\n",  m_ClMaxWidth );
		fprintf( fp, "  Sensor height:     %zd\n",  m_ClMaxHeight );
//		fprintf( fp, "  Horiz taps:        %d\n",   m_ClHTaps );
//		fprintf( fp, "  Vert  taps:        %d\n",   m_ClVTaps );
//		fprintf( fp, "  Mode:              %s\n",   CamlinkModeToString( m_CamlinkMode ) );
	//      fprintf( fp, "  Trig Level:        %s\n",   TrigLevelToString( m_trigLevel ) );
		fprintf( fp, "  TraceLevel:  	 %u\n",   GetTraceLevel() );
//		fprintf( fp, "  Frame Count:       %u\n",   m_ArrayCounter );

        fprintf( fp, "\n" );
    }
}

unsigned int rogueDev::GetTraceLevel()
{
	return DEBUG_PGP_ROGUE;
}


extern "C" int
rogueDevConfig(
	const char	*	cameraName,
	int				board,
	int				lane,
	const char	*	modelName,
	const char	*	clMode,
	size_t			sizeX,
	size_t			sizeY,
	bool			fLcls2Timing )
{
    if (  cameraName == NULL || strlen(cameraName) == 0 )
    {
        errlogPrintf( "NULL or zero length camera name.\nUsage: rogueDevConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  modelName == NULL || strlen(modelName) == 0 )
    {
        errlogPrintf( "NULL or zero length config name.\nUsage: rogueDevConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  clMode == NULL || strlen(clMode) == 0 )
    {
        errlogPrintf( "NULL or zero length camlink mode.\nUsage: rogueDevConfig(name,board,chan,config,mode)\n");
        return  -1;
    }
    if ( rogueDev::CreateRogue(	cameraName, board, lane, modelName, clMode,
									sizeX, sizeY, fLcls2Timing ) != 0 )
    {
        errlogPrintf( "rogueDevConfig failed for camera %s, config %s, mode %s!\n", cameraName, modelName, clMode );
		if ( DEBUG_PGP_ROGUE >= 4 )
        	epicsThreadSuspendSelf();
        return -1;
    }
    return 0;
}


// Register function:
//		int ShowAllRogue( int level )
static const iocshArg		ShowAllRogueArg0		= { "level",		iocshArgInt };
static const iocshArg	*	ShowAllRogueArgs[1]	=
{
	&ShowAllRogueArg0
};
static const iocshFuncDef   ShowAllRogueFuncDef	= { "ShowAllRogue", 1, ShowAllRogueArgs };
static int  ShowAllRogueCallFunc( const iocshArgBuf * args )
{
	return static_cast<int>( ShowAllRogue( args[0].ival ) );
}
void ShowAllRogueRegister(void)
{
	iocshRegister( &ShowAllRogueFuncDef, reinterpret_cast<iocshCallFunc>(ShowAllRogueCallFunc) );
}

extern "C"
int DumpPgpVars( const char * pszCamName, const char * pszFilePath, int fWriteOnly, int fForceRead )
{
	const char	*	functionName = "DumpPgpVars";
	if ( pszCamName == NULL || pszFilePath == NULL )
	{
		printf( "Usage: %s camPortName dumpPath fWriteOnly fForceRead\n", functionName );
		printf( "Example: %s CAM dumpConfig.yml 1 1\n", functionName );
		return -1;
	}

	rogueDev	*	pCamDev = rogueDev::RogueFindByName( std::string(pszCamName) );
	if ( pCamDev == NULL )
	{
		printf( "%s error: Rogue %s not found!\n", functionName, pszCamName );
		return -1;
	}

	return pCamDev->DumpPgpVars( pszFilePath, fWriteOnly, fForceRead );
}

// Register function:
//		int DumpPgpVars( camName, dumpFile, fWriteOnly, fForceRead )
static const iocshArg		DumpPgpVarsArg0		= { "camName",		iocshArgString };
static const iocshArg		DumpPgpVarsArg1		= { "dumpFile",		iocshArgString };
static const iocshArg		DumpPgpVarsArg2		= { "fWriteOnly",	iocshArgInt };
static const iocshArg		DumpPgpVarsArg3		= { "fForceRead",	iocshArgInt };
static const iocshArg	*	DumpPgpVarsArgs[4]	=
{
	&DumpPgpVarsArg0, &DumpPgpVarsArg1, &DumpPgpVarsArg2, &DumpPgpVarsArg3
};
static const iocshFuncDef   DumpPgpVarsFuncDef	= { "DumpPgpVars", 4, DumpPgpVarsArgs };
static int  DumpPgpVarsCallFunc( const iocshArgBuf * args )
{
	return static_cast<int>( DumpPgpVars( args[0].sval, args[1].sval, args[2].ival, args[3].ival ) );
}
void DumpPgpVarsRegister(void)
{
	iocshRegister( &DumpPgpVarsFuncDef, reinterpret_cast<iocshCallFunc>(DumpPgpVarsCallFunc) );
}

extern "C"
int SetPgpVariable( const char * pszCamName, const char * pszVarPath, double value )
{
	const char	*	functionName = "SetPgpVariable";
	if ( pszCamName == NULL || pszVarPath == NULL )
	{
		printf( "Usage: %s camPortName varPath\n", functionName );
		printf( "Example: %s CAM ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BuildStamp\n", functionName );
		return -1;
	}

	rogueDev	*	pCamDev = rogueDev::RogueFindByName( std::string(pszCamName) );
	if ( pCamDev == NULL )
	{
		printf( "%s error: Rogue %s not found!\n", functionName, pszCamName );
		return -1;
	}

	return pCamDev->SetPgpVariable( pszVarPath, value );
}

// Register function:
//		int SetPgpVar( camName, varName, value )
static const iocshArg		SetPgpVarArg0		= { "camName",		iocshArgString };
static const iocshArg		SetPgpVarArg1		= { "varName",		iocshArgString };
static const iocshArg		SetPgpVarArg2		= { "value",		iocshArgDouble };
static const iocshArg	*	SetPgpVarArgs[3]	=
{
	&SetPgpVarArg0, &SetPgpVarArg1, &SetPgpVarArg2
};
static const iocshFuncDef   SetPgpVarFuncDef	= { "SetPgpVar", 3, SetPgpVarArgs };
static int  SetPgpVarCallFunc( const iocshArgBuf * args )
{
	return static_cast<int>( SetPgpVariable( args[0].sval, args[1].sval, args[2].dval ) );
}
void SetPgpVarRegister(void)
{
	iocshRegister( &SetPgpVarFuncDef, reinterpret_cast<iocshCallFunc>(SetPgpVarCallFunc) );
}

extern "C"
int ShowPgpVariable( const char * pszCamName, const char * pszVarPath, int level )
{
	const char	*	functionName = "ShowPgpVariable";
	if ( pszCamName == NULL || pszVarPath == NULL )
	{
		printf( "Usage: %s camPortName varPath\n", functionName );
		printf( "Example: %s CAM ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BuildStamp\n", functionName );
		return -1;
	}

	rogueDev	*	pCamDev = rogueDev::RogueFindByName( std::string(pszCamName) );
	if ( pCamDev == NULL )
	{
		printf( "%s error: Rogue %s not found!\n", functionName, pszCamName );
		return -1;
	}

	return pCamDev->ShowPgpVariable( pszVarPath, level );
}

// Register function:
//		int ShowPgpVar( camName, varName, level )
static const iocshArg		ShowPgpVarArg0		= { "camName",		iocshArgString };
static const iocshArg		ShowPgpVarArg1		= { "varName",		iocshArgString };
static const iocshArg		ShowPgpVarArg2		= { "level",		iocshArgInt };
static const iocshArg	*	ShowPgpVarArgs[3]	=
{
	&ShowPgpVarArg0, &ShowPgpVarArg1, &ShowPgpVarArg2
};
static const iocshFuncDef   ShowPgpVarFuncDef	= { "ShowPgpVar", 3, ShowPgpVarArgs };
static int  ShowPgpVarCallFunc( const iocshArgBuf * args )
{
	return static_cast<int>( ShowPgpVariable( args[0].sval, args[1].sval, args[2].ival ) );
}
void ShowPgpVarRegister(void)
{
	iocshRegister( &ShowPgpVarFuncDef, reinterpret_cast<iocshCallFunc>(ShowPgpVarCallFunc) );
}

// Register Function:
//	int rogueDevConfig( const char * cameraName, int board, int lane, const char * modelName )
static const iocshArg		rogueDevConfigArg0	= { "name",			iocshArgString };
static const iocshArg		rogueDevConfigArg1	= { "board",		iocshArgInt };
static const iocshArg		rogueDevConfigArg2	= { "lane",			iocshArgInt };
static const iocshArg		rogueDevConfigArg3	= { "modelName",	iocshArgString };
static const iocshArg		rogueDevConfigArg4	= { "clMode",		iocshArgString };
static const iocshArg		rogueDevConfigArg5	= { "sizeX",		iocshArgInt };
static const iocshArg		rogueDevConfigArg6	= { "sizeX",		iocshArgInt };
static const iocshArg		rogueDevConfigArg7	= { "fLcls2Timing",	iocshArgInt };
static const iocshArg	*	rogueDevConfigArgs[8]	=
{
	&rogueDevConfigArg0, &rogueDevConfigArg1, &rogueDevConfigArg2, &rogueDevConfigArg3,
	&rogueDevConfigArg4, &rogueDevConfigArg5, &rogueDevConfigArg6, &rogueDevConfigArg7
};
static const iocshFuncDef   rogueDevConfigFuncDef	= { "rogueDevConfig", 8, rogueDevConfigArgs };
static int  rogueDevConfigCallFunc( const iocshArgBuf * args )
{
    return rogueDevConfig(	args[0].sval, args[1].ival, args[2].ival, args[3].sval,
								args[4].sval, args[5].ival, args[6].ival, args[7].ival );
}
void rogueDevConfigRegister(void)
{
	iocshRegister( &rogueDevConfigFuncDef, reinterpret_cast<iocshCallFunc>(rogueDevConfigCallFunc) );
}

extern "C"
{
	epicsExportRegistrar( rogueDevConfigRegister );
	epicsExportRegistrar( DumpPgpVarsRegister );
	epicsExportRegistrar( SetPgpVarRegister );
	epicsExportRegistrar( ShowAllRogueRegister );
	epicsExportRegistrar( ShowPgpVarRegister );
	epicsExportAddress( int, DEBUG_PGP_ROGUE );
}
