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
// Filename: pgpRogue.cpp
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
#include "pgpRogue.h"
#include "pgpClDev.h"

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

static	const char *		driverName	= "pgpRogue";

// Diagnostic timers
// View and reset via iocsh cmds.
// From iocsh, type: help *Context*

int		DEBUG_PGP_ROGUE	= 0;

///	ppgRogue map - Stores ptr to all pgpRogue instances indexed by name
map<string, pgpRogue *>	pgpRogue::ms_pgpRogueMap;

#if 0
const char * CamlinkModeToString( pgpRogue::CamlinkMode_t	clMode )
{
	const char	*	pstrCamlinkMode;
	switch( clMode )
	{
	default:						pstrCamlinkMode	= "Invalid!";	break;
	case pgpRogue::CL_MODE_BASE:	pstrCamlinkMode	= "Base";		break;
	case pgpRogue::CL_MODE_MEDIUM:	pstrCamlinkMode	= "Medium";		break;
	case pgpRogue::CL_MODE_FULL:	pstrCamlinkMode	= "Full";		break;
	}
	return pstrCamlinkMode;
}
#endif

#if 0
const char * TriggerModeToString( pgpRogue::TriggerMode_t	tyTriggerMode )
{
	const char	*	pstrTriggerMode;
	switch( tyTriggerMode )
	{
	default:							pstrTriggerMode	= "Invalid!";	break;
	case pgpRogue::TRIGMODE_FREERUN:	pstrTriggerMode	= "FreeRun";	break;
	case pgpRogue::TRIGMODE_EXT:		pstrTriggerMode	= "External";	break;
	case pgpRogue::TRIGMODE_PULSE:		pstrTriggerMode	= "Pulse";		break;
	}
	return pstrTriggerMode;
}
#endif


//
// pgpRogue functions
//

///	pgpRogue constructor
pgpRogue::pgpRogue(
	const char			*	cameraName,
	int						board,					// board
	int						lane,					// channel
	const char			*	modelName,
	const char			*	clMode,
	bool					fLcls2Timing
	)	// 0 = default 1 MB
	:
		m_fAcquireMode(		false			    ),
		m_fExitApp(			false			    ),
		m_fReconfig(		false			    ),
		m_fReopen(			false			    ),
		m_pDev(				NULL				),
		m_board(			board				),
		m_lane(				lane				),
		m_fLcls2Timing(		fLcls2Timing		),
		m_ConfigFile(							),
		m_DrvVersion(							),
		m_LibVersion(							),
		m_ModelName(		modelName			),
		m_SerialPort(							),
//		m_CamlinkMode(		CL_MODE_BASE		),
		m_fiducial(			0					),

		m_ReCfgCnt(			0					),
		m_reconfigLock(		NULL				),
		
		m_trigLevel(		0					),
#ifdef	USE_DIAG_TIMER
		m_ReAcquireTimer(	"ReAcquire"			),
		m_ReArmTimer(		"ReArm"				),
		m_ProcessImageTimer("ProcessImage"		),
#endif	//	USE_DIAG_TIMER
		m_ioscan(			NULL				)
{
	static const char	*	functionName = "pgpRogue::pgpRogue";

	// Create mutexes
    m_reconfigLock	= epicsMutexMustCreate();

    // Initialize I/O Intr processing
    scanIoInit( &m_ioscan );
    if ( m_ioscan == NULL )
        errlogPrintf( "%s %s: ERROR, scanIoInit failed!\n", driverName, functionName );

	// Get the Camlink mode from the mbbo PV
//	int		paramValue	= static_cast<int>( m_CamlinkMode );
//	setIntegerParam( CamlinkMode,		paramValue );

    // Install exit hook for clean shutdown
    epicsAtExit( (EPICSTHREADFUNC)pgpRogue::ExitHook, (void *) this );
}

///	pgpRogue Destructor
pgpRogue::~pgpRogue( )
{
	Shutdown();

	// Cleanup driver
	//delete m_pSyncDataAcquirer;
	//m_pSyncDataAcquirer	= NULL;

	epicsMutexDestroy(	m_reconfigLock );
}


int pgpRogue::CreateRogue(
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
    static const char	*	functionName = "pgpRogue::CreateRogue";

    /* Parameters check */
    if (  cameraName == NULL || strlen(cameraName) == 0 )
    {
        errlogPrintf(	"%s %s: ERROR, NULL or zero length camera name. Check parameters to pgpRogueConfig()!\n",
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
        cout << "Creating pgpRogue: " << string(cameraName) << endl;
    pgpRogue	* pRogue = new pgpRogue(	cameraName, board, lane, modelName,
											clMode, fLcls2Timing );
    assert( pRogue != NULL );

    int	status	= pRogue->ConnectRogue( );
	if ( status != 0 )
        errlogPrintf( "pgpRogueConfig failed for camera %s!\n", cameraName );

	// TODO: This should be in the constructor and add call
	//	to RogueRemove in the destructor
	RogueAdd( pRogue );
    return 0;
}


extern "C"
int ShowAllRogue( int level )
{
	return pgpRogue::ShowAllRogue( level );
}

int pgpRogue::ShowAllRogue( int level )
{
	if ( level < 0 )
		return 0;

	map<string, pgpRogue *>::iterator	it;
	for ( it = ms_pgpRogueMap.begin(); it != ms_pgpRogueMap.end(); ++it )
	{
		pgpRogue	*	pRogue	= it->second;
		if( pRogue )
			pRogue->ShowReport( level );
    }

    return 0;
}


bool pgpRogue::IsRogueLaneUsed( unsigned int board,  unsigned int lane )
{
	map<string, pgpRogue *>::iterator	it;
	for ( it = ms_pgpRogueMap.begin(); it != ms_pgpRogueMap.end(); ++it )
	{
		pgpRogue		*	pRogue	= it->second;
        if ( board == pRogue->m_board && lane == pRogue->m_lane )
			return true;
    }

    return false;
}


pgpRogue	*	pgpRogue::RogueFindByName( const string & name )
{
	map<string, pgpRogue *>::iterator	it	= ms_pgpRogueMap.find( name );
	if ( it == ms_pgpRogueMap.end() )
		return NULL;
	return it->second;
}

pgpRogue	*	pgpRogue::RogueFindByBoardLane( unsigned int board, unsigned int lane )
{
	map<string, pgpRogue *>::iterator	it;
	for ( it = ms_pgpRogueMap.begin(); it != ms_pgpRogueMap.end(); it++ )
	{
		pgpRogue	*	pCam	= it->second;
		if ( pCam->GetBoard() == board && pCam->GetLane() == lane )
			return pCam;
	}
	return NULL;
}

void pgpRogue::RogueAdd(		pgpRogue * pRogue )
{
	assert( RogueFindByName( pRogue->m_RogueName ) == NULL );
	if ( DEBUG_PGP_ROGUE >= 3 )
		cout << "RogueAdd: " << pRogue->m_RogueName << endl;
	ms_pgpRogueMap[ pRogue->m_RogueName ]	= pRogue;
}

void pgpRogue::RogueRemove(	pgpRogue * pRogue )
{
	ms_pgpRogueMap.erase( pRogue->m_RogueName );
}

int pgpRogue::ShowReport( int level )
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
				<< ", "					<< m_ClNumBits	<< " bits/px" << endl;
	}
	if ( level >= 3 && m_pDev )
	{
		m_pDev->showVariableList( level >= 4 );
	}
    return 0;
}

int	pgpRogue::DumpPgpVars( const char * pszFilePath, bool fWriteOnly, bool fForceRead )
{
	const char	*	functionName = "pgpRogue::DumpPgpVars";
	if ( m_pDev == NULL )
	{
		printf( "%s error: %s PGP Dev not configured!\n", functionName, m_RogueName.c_str() );
		return -1;
	}
	m_pDev->dumpVariables( pszFilePath, fWriteOnly, fForceRead, false );
	return 0;
}

int pgpRogue::SetPgpVariable( const char * pszVarPath, double value )
{
	const char	*	functionName = "pgpRogue::SetPgpVariable";
	if ( m_pDev == NULL )
	{
		printf( "%s error: %s PGP Dev not configured!\n", functionName, m_RogueName.c_str() );
		return -1;
	}
	m_pDev->setVariable( pszVarPath, value, false );
	return 0;
}

int pgpRogue::ShowPgpVariable( const char * pszVarPath, int level )
{
	const char	*	functionName = "pgpRogue::ShowPgpVariable";
	if ( m_pDev == NULL )
	{
		printf( "%s error: %s PGP Dev not configured!\n", functionName, m_RogueName.c_str() );
		return -1;
	}
	m_pDev->showVariable( pszVarPath, level != 0 );
	return 0;
}

void pgpRogue::ExitHook(void * arg)
{
	pgpRogue	*	pCam = static_cast<pgpRogue *>( arg );
	if( pCam != NULL )
		pCam->Shutdown();
}

void pgpRogue::Shutdown( )
{
	epicsMutexLock(	m_reconfigLock );
	m_acquireCount = 0;
//	setIntegerParam(ADAcquire, 0);
	if ( m_pDev != NULL )
	{
		m_pDev->disconnect();
	}
	epicsMutexUnlock(	m_reconfigLock );
}

///	Connects driver to device
int pgpRogue::ConnectRogue( )
{
    static const char	*	functionName	= "pgpRogue::ConnectRogue";
    int				status			= 0;

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );

	// Initialize (or re-initialize) framegrabber connection
	Reopen( );

	if ( m_pDev == NULL )
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
int pgpRogue::DisconnectRogue( )
{
    static const char	*	functionName	= "pgpRogue::DisconnectRogue";
    int						status			= 0;

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf(	"%s %s: disconnecting camera %s\n", 
				driverName, functionName, m_RogueName.c_str() );

	SetAcquireMode( false );

#if 0
	// Wait for acquire loop to terminate
	// TODO: Make this safer
	while ( m_pSyncDataAcquirer != NULL && m_pSyncDataAcquirer->IsAcquiring() )
	{
		epicsThreadSleep(0.1);
	}
#endif

    // Block reconfigured until serial device is disconnected
	epicsMutexLock(	m_reconfigLock );

    if ( m_pDev )
	{
		// Halt any image acquires in progress
		m_pDev->disconnect();
	}
	epicsMutexUnlock(	m_reconfigLock );
 
    return status;
}

#if 0
/// Overriding ADDriver::connect
int pgpRogue::connect( void *	)
{
    static const char	*	functionName	= "pgpRogue::connect";

	if ( DEBUG_PGP_ROGUE >= 1 )
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );

	// The guts are in ConnectRogue()
	int	status	= ConnectRogue();
    return status;
}

/// Overriding ADDriver::disconnect
///	Disconnects driver from device
int pgpRogue::disconnect( void *	)
{
    static const char	*	functionName	= "pgpRogue::disconnect";

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


int pgpRogue::Reconfigure( )
{
    static const char	*	functionName = "pgpRogue::Reconfigure";
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
		status	= pgpRogue::_Reopen( );
	}

	// Clear reconfig flag up front so it can be set again by another thread if needed
	m_fReconfig = false;
	status	= pgpRogue::_Reconfigure( );
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


int pgpRogue::Reopen( )
{
    static const char	*	functionName = "pgpRogue::Reopen";
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
	status	= pgpRogue::_Reopen( );
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
int pgpRogue::_Reconfigure( )
{
    static const char	*	functionName = "pgpRogue::_Reconfigure";
	CONTEXT_TIMER( "_Reconfigure" );

    if ( m_pDev == NULL || m_fReopen )
	{
		m_fReopen = true;
        return -1;
	}

	if ( DEBUG_PGP_ROGUE >= 1 )
	{
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );
	}

	// Cancel Image Callbacks
	m_pDev->setTriggerEnable( 0, false );
//	m_pDev->cancelImageCallbacks( );

	// Fetch the pgpRogue driver and library versions
	m_DrvVersion = m_pDev->GetDrvVersion();
#if 0
	size_t end_of_vers = m_DrvVersion.find( " " );
	if ( end_of_vers != string::npos )
	{
		// The driver version has a date on the end that we don't care about
		m_DrvVersion.erase( m_DrvVersion.find( " " ) );
	}
#endif
//	setStringParam( CamlinkDrvVersion, m_DrvVersion.c_str()	);

	m_LibVersion = m_pDev->GetLibVersion();
//	setStringParam( CamlinkLibVersion, m_LibVersion.c_str()	);

//	int64_t		int64Value	= 0;
//	uint64_t	uint64Value	= 0;
//	m_pDev->readVarPath(	PgpCoreFpgaVersionString,	uint64Value );
//	setIntegerParam(		PgpCoreFpgaVersion,			uint64Value	);
//	m_pDev->readVarPath(	PgpFebFpgaVersionString,	uint64Value );
//	setIntegerParam(		PgpFebFpgaVersion,			uint64Value	);
//	m_pDev->readVarPath(	PgpAxiVersionString,		m_AxiVersion );
//	setStringParam(			PgpAxiVersion, m_AxiVersion.c_str()	);

	// Already shown in _Reopen()
	//printf( "pgpRogue Driver  version: %s\n", m_DrvVersion.c_str() ); 
	//printf( "pgpRogue Library version: %s\n", m_LibVersion.c_str() );
#if 0
	{
	// Fetch the camera manufacturer and model and write them to ADBase parameters
    //m_RogueClass	= pdv_get_camera_class(	m_pDev );
    //m_RogueModel	= pdv_get_camera_model(	m_pDev );
    //m_BuildStamp	= pdv_get_camera_info(	m_pDev );

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
    //m_ClNumBits		= pdv_get_depth(	m_pDev );
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


int pgpRogue::SetupROI( )
{
    static const char	*	functionName = "pgpRogue::SetupROI";

	if (	(	GetSizeX() < m_ClMaxWidth  )
		||	(	GetSizeY() < m_ClMaxHeight ) )
	{
		// Setup ROI image transfer
		// Note: If the camera has HW ROI, we set hskip and/or vskip to zero as
		// it is assumed that serial commands are used to configure the camera HW ROI
		int		hskip	= 0;	//HasHwHRoi() ? 0 : GetMinX();
		int		vskip	= 0;	//HasHwVRoi() ? 0 : GetMinY();

		// Camlink Horiz and Vert Active line count must be a multiple of the number of CamLink taps
		// Pad up to next largest size 
		int		hactv	= ( (GetSizeX()+m_ClHTaps-1) / m_ClHTaps ) * m_ClHTaps;
		int		vactv	= ( (GetSizeY()+m_ClVTaps-1) / m_ClVTaps ) * m_ClVTaps;
		if ( DEBUG_PGP_ROGUE >= 3 )
			printf(	"%s: Setting ROI to hskip %d, hactv %d, vskip %d, vactv %d\n",
					functionName,	hskip, hactv, vskip, vactv );
		//pdv_set_roi(	m_pDev,	hskip, hactv, vskip, vactv );
		//pdv_enable_roi(	m_pDev, 1	);
		m_ClCurWidth	= hactv;
		m_ClCurHeight	= vactv;
	}
	else
	{
		int		hskip	= 0;
		int		vskip	= 0;
		// Camlink Horiz and Vert Active line count must be a multiple of the number of CamLink taps
		// Pad up to next largest size 
		int		hactv	= ( (m_ClMaxWidth  + m_ClHTaps - 1) / m_ClHTaps ) * m_ClHTaps;
		int		vactv	= ( (m_ClMaxHeight + m_ClVTaps - 1) / m_ClVTaps ) * m_ClVTaps;
		assert(	hactv == (int) m_ClMaxWidth	);
		assert(	vactv == (int) m_ClMaxHeight	);
		if ( DEBUG_PGP_ROGUE >= 3 )
			printf(	"%s: Disabling ROI, restoring hskip %d, hactv %d, vskip %d, vactv %d\n",
					functionName,	hskip, hactv, vskip, vactv );
		//pdv_set_roi(	m_pDev,	hskip, hactv, vskip, vactv );
		//pdv_enable_roi(	m_pDev, 0	);
		m_ClCurWidth	= hactv;
		m_ClCurHeight	= vactv;
	}
	return 0;
}

//	Internal version of reopen
//	Don't call without holding m_reconfigLock!
int pgpRogue::_Reopen( )
{
    static const char	*	functionName = "pgpRogue::_Reopen";
	CONTEXT_TIMER( "_Reopen" );

	// Close old Dev if needed
	if ( m_pDev )
	{
		m_pDev->disconnect();
		m_pDev	= NULL;
		if ( DEBUG_PGP_ROGUE >= 1 )
			printf( "%s: %s old Dev closed.\n", functionName, m_RogueName.c_str() );
	}

	// Enable rogue logging
	//rogue::Logging::setLevel( rogue::Logging::Info );

	// Open the camera lane
	if ( DEBUG_PGP_ROGUE >= 1 )
		printf( "%s: %s Reopening Dev ...\n", functionName, m_RogueName.c_str() );
    m_pDev = pgpClDev::create( m_board, m_lane );
    if ( m_pDev == NULL )
	{
        printf(	"%s %s: ERROR, Unable to open camera for pgpRogue card %u, lane %u\n",
				driverName,		functionName, m_board, m_lane );
        return -1;
    }

	{
	// Fetch the camera manufacturer and model and write them to ADBase parameters
    //m_RogueClass	= pdv_get_camera_class(	m_pDev );
    //m_RogueModel	= pdv_get_camera_model(	m_pDev );
    //m_BuildStamp	= pdv_get_camera_info(	m_pDev );

	// Fetch the pgpRogue driver and library versions and make sure they match
    //char		buf[MAX_STRING_SIZE];
    //edt_get_driver_version(	m_pDev, buf, MAX_STRING_SIZE );
	m_DrvVersion = m_pDev->GetDrvVersion();
#if 0
	size_t end_of_vers = m_DrvVersion.find( " " );
	if ( end_of_vers != string::npos )
	{
		// The driver version has a date on the end that we don't care about
		m_DrvVersion.erase( m_DrvVersion.find( " " ) );
	}
#endif
//	setStringParam( CamlinkDrvVersion, m_DrvVersion.c_str()	);

    //edt_get_library_version( m_pDev, buf, MAX_STRING_SIZE );
	m_LibVersion = m_pDev->GetLibVersion();
//	setStringParam( CamlinkLibVersion, m_LibVersion.c_str()	);

#if 0
	if ( m_DrvVersion.find(m_LibVersion) == string::npos )
	{
		printf( 
					"%s %s: ERROR, pgpRogue driver version %s does not match lib version %s!\n",
					driverName, functionName, m_DrvVersion.c_str(), m_LibVersion.c_str() );
        return -1;
    }
#endif
	printf( "pgpRogue Driver  version: %s\n", m_DrvVersion.c_str() ); 
	printf( "pgpRogue Library version: %s\n", m_LibVersion.c_str() );
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
int pgpRogue::UpdateADConfigParams( )
{
    static const char	*	functionName	= "pgpRogue::UpdateADConfigParams";
	if ( DEBUG_PGP_ROGUE >= 2 )
		printf( "%s: %s ...\n", functionName, m_RogueName.c_str() );

	if ( m_pDev == NULL )
	{
		printf( "%s Error: Framegrabber %s not connected!\n", functionName, m_RogueName.c_str() );
		return -1;
	}

    return 0;
}
#endif

int	pgpRogue::UpdateStatus( int	newStatus	)
{
	if ( DEBUG_PGP_ROGUE >= 4 )
	{
    	static const char	*	functionName = "pgpRogue::UpdateStatus";
		printf( "%s: %s in thread %s ...\n", functionName, m_RogueName.c_str(), epicsThreadGetNameSelf() );
	}
	CONTEXT_TIMER( "pgpRogue-UpdateStatus" );
	//	Context timer shows these next two calls take about 20us
	int		status	= 0;
//	status	= setIntegerParam( ADStatus, newStatus );
//	if( status == 0 )
//		status = callParamCallbacks( 0, 0 );
	return status;
}

// Set ArrayCounter
int pgpRogue::SetArrayCounter( int value )
{
	CONTEXT_TIMER( "pgpRogue-SetArrayCounter" );
	m_ArrayCounter = value;
	int status = 0;
//	status	= setIntegerParam( NDArrayCounter,	m_ArrayCounter );
//	if( status == 0 )
//		status = callParamCallbacks( 0, 0 );
	return status;
}

// Increment NDArrayCounter
int pgpRogue::IncrArrayCounter()
{
	CONTEXT_TIMER( "pgpRogue-IncrArrayCounter" );
	m_ArrayCounter++;
	int status = 0;
//	int	status	= setIntegerParam(	NDArrayCounter,	m_ArrayCounter	);
//	if( status == 0 )
//		status = callParamCallbacks( 0, 0 );
	return status;
}

int	pgpRogue::SetAcquireMode( int fAcquire )
{
//    static const char	*	functionName = "pgpRogue::SetAcquireMode";
//	setIntegerParam( ADAcquire, m_fAcquireMode );
	return 0;
}

// TODO: Is this function still used?
// Was being called in ADEdtPdv from syncDataAcq loop
int pgpRogue::StartAcquisition( )
{
    static const char	*	functionName = "pgpRogue::StartAcquisition";
	CONTEXT_TIMER( "StartAcquisition" );

#ifndef	SETUP_ROI_IN_RECONFIG
	SetupROI();
#endif	//	SETUP_ROI_IN_RECONFIG

	double		cameraStartDelay	= 0.25;
	if ( cameraStartDelay > 0.0 )
	{
		if ( DEBUG_PGP_ROGUE >= 2 )
			printf(	"%s: Delaying %f sec\n", functionName, cameraStartDelay );
		epicsThreadSleep( cameraStartDelay );
	}

	if ( m_fReconfig || !m_fAcquireMode )
	{
		if ( DEBUG_PGP_ROGUE >= 1 )
		{
			if ( m_fReconfig )
				printf( "%s: Reconfig requested\n", functionName );
			else
				printf( "%s: Not in AcquireMode\n", functionName );
		}
    	return -1;
	}

	if ( DEBUG_PGP_ROGUE >= 2 )
		printf(	"%s: Acquire image from %zu,%zu size %zux%zu\n", functionName,
				GetMinX(), GetMinY(), GetSizeX(), GetSizeY()	);

	// TODO: Where are these AD values set now?
	// Clear NumImagesCounter and start acquisition
//	setIntegerParam( ADNumImagesCounter, 0 );
//	UpdateStatus( ADStatusAcquire );

	if ( m_pDev )
	{
		// Enable triggers
		// TODO: Need to emulate StartRun()
		m_pDev->setTriggerEnable( 0, true );
	}

	printf(	"%s: Start acquire, count = %d\n",
			functionName, m_acquireCount );
    return 0;
}


int	pgpRogue::RequestSizeX(	size_t	value	)
{
    static const char	*	functionName	= "pgpRogue::RequestSizeX";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI width cannot be set to 0!\n",
        	    		functionName );
		return -1;
	}
	if( m_SizeXReq != value )
	{
		m_SizeXReq	= value;
		m_fReconfig	= true;
		if ( DEBUG_PGP_ROGUE >= 2 )
		{
			printf(	"%s: Requesting SizeX %zu ...\n", functionName, value );
		}
	}
	return 0;
}

int	pgpRogue::SetSizeX(	size_t	value	)
{
    static const char	*	functionName	= "pgpRogue::SetSizeX";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI width cannot be set to 0!\n",
        	    		functionName );
		// return -1;
		value = m_SizeX > 0 ? m_SizeX : m_ClMaxWidth;
	}
	// Allow setting SizeX if m_ClMaxWidth hasn't been configured yet
	// Will be clipped later if needed
	if ( m_ClMaxWidth != 0 && value > m_ClMaxWidth )
	{
        errlogPrintf(	"%s: ERROR, HW ROI width %zu > max %zu!\n",
        	    		functionName, value, m_ClMaxWidth );
		// return -1;
		value = m_ClMaxWidth;
	}
	if ( DEBUG_PGP_ROGUE >= 2 )
	{
		printf(	"%s: Set SizeX %zu ...\n", functionName, value );
	}
	if( m_SizeX != value )
		m_fReconfig	= true;
	m_SizeX	= value;

	// Update the AreaDetector SizeX parameters
//	setIntegerParam( ADSizeX,		m_SizeX	);
//	setIntegerParam( NDArraySizeX,	m_SizeX	);
//	setIntegerParam( NDArraySize,	m_SizeX * m_SizeY );

//	int	status = (int) UpdateADConfigParams( );
	return 0;
}

int	pgpRogue::RequestSizeY(	size_t	value	)
{
    static const char	*	functionName	= "pgpRogue::RequestSizeY";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI height cannot be set to 0!\n",
        	    		functionName );
		return -1;
	}
	if( m_SizeYReq != value )
	{
		m_SizeYReq	= value;
		m_fReconfig	= true;
		if ( DEBUG_PGP_ROGUE >= 2 )
		{
			printf(	"%s: Requesting SizeY %zu ...\n", functionName, value );
		}
	}
	return 0;
}

int	pgpRogue::SetSizeY(	size_t	value	)
{
    static const char	*	functionName	= "pgpRogue::SetSizeY";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI height cannot be set to 0!\n",
        	    		functionName );
		//	return -1;
		value = m_SizeY > 0 ? m_SizeY : m_ClMaxHeight;
	}
	// Allow setting SizeY if m_ClMaxHeight hasn't been configured yet
	// Will be clipped later if needed
	if ( m_ClMaxHeight != 0 && value > m_ClMaxHeight )
	{
        errlogPrintf(	"%s: ERROR, ROI height %zu > max %zu!\n",
        	    		functionName, value, m_ClMaxHeight );
		//	return -1;
		value = m_ClMaxHeight;
	}
	if ( DEBUG_PGP_ROGUE >= 2 )
	{
		printf(	"%s: Set SizeY %zu ...\n", functionName, value );
	}
	if( m_SizeY != value )
		m_fReconfig	= true;
	m_SizeY		= value;

	// Update the AreaDetector parameter
//	setIntegerParam( ADSizeY,		m_SizeY	);
//	setIntegerParam( NDArraySizeY,	m_SizeY	);
//	setIntegerParam( NDArraySize,	m_SizeX * m_SizeY );

//	int	status = (int) UpdateADConfigParams( );
	return 0;
}

int	pgpRogue::RequestMinX(	size_t	value	)
{
	static const char	*	functionName	= "pgpRogue::RequestMinX";
	if( m_MinXReq != value )
	{
		m_MinXReq	= value;
		m_fReconfig	= true;
		if ( DEBUG_PGP_ROGUE >= 2 )
		{
			printf(	"%s: Requesting MinX %zu ...\n", functionName, value );
		}
	}
	return 0;
}

int	pgpRogue::SetMinX(	size_t	value	)
{
    static const char	*	functionName	= "pgpRogue::SetMinX";
	if ( value > (m_ClMaxWidth - 1) )
	{
        errlogPrintf(	"%s: ERROR, ROI start %zu > max %zu!\n",
        	    		functionName, value, (m_ClMaxWidth - 1) );
		return -1;
	}
	if ( DEBUG_PGP_ROGUE >= 2 )
	{
		printf(	"%s: Set MinX %zu ...\n", functionName, value );
	}
	if( m_MinX != value )
		m_fReconfig	= true;
	m_MinX	= value;

	// Update the AreaDetector parameter
//	setIntegerParam( ADMinX,	m_MinX	);
//	int	status = (int) UpdateADConfigParams( );
	return 0;
}

int	pgpRogue::RequestMinY(	size_t	value	)
{
	static const char	*	functionName	= "pgpRogue::RequestMinY";
	if( m_MinYReq != value )
	{
		m_MinYReq	= value;
		m_fReconfig	= true;
		if ( DEBUG_PGP_ROGUE >= 2 )
		{
			printf(	"%s: Requesting MinY %zu ...\n", functionName, value );
		}
	}
	return 0;
}

int	pgpRogue::SetMinY(	size_t	value	)
{
    static const char	*	functionName	= "pgpRogue::SetMinY";
	if ( value > (m_ClMaxHeight - 1) )
	{
        errlogPrintf(	"%s: ERROR, ROI start %zu > max %zu!\n",
        	    		functionName, value, (m_ClMaxHeight - 1) );
		return -1;
	}
	if ( DEBUG_PGP_ROGUE >= 2 )
	{
		printf(	"%s: Set MinY %zu ...\n", functionName, value );
	}
	if( m_MinY != value )
		m_fReconfig	= true;
	m_MinY		=  value;

	// Update the AreaDetector parameter
//	setIntegerParam( ADMinY,	m_MinY	);
//	int	status = (int) UpdateADConfigParams( );
	return 0;
}

int	pgpRogue::RequestBinX(	unsigned int	value	)
{
    static const char	*	functionName	= "pgpRogue::RequestBinX";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI binning %u == 0!\n",
        	    		functionName, value );
		return -1;
	}
	if( m_BinXReq != value )
	{
		m_BinXReq	= value;
		m_fReconfig	= true;
	}
	return 0;
}

int	pgpRogue::SetBinX(	unsigned int	value	)
{
    static const char	*	functionName	= "pgpRogue::SetBinX";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, ROI bin %u == 0!\n",
        	    		functionName, value );
		return -1;
	}
	m_BinX		= value;

	// Update the AreaDetector parameter
//	setIntegerParam( ADBinX,	m_BinX	);
//	int	status = (int) UpdateADConfigParams( );
	return 0;
}

int	pgpRogue::RequestBinY(	unsigned int	value	)
{
    static const char	*	functionName	= "pgpRogue::RequestBinY";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI binning %u == 0!\n",
        	    		functionName, value );
		return -1;
	}
	if( m_BinYReq != value )
	{
		m_BinYReq	= value;
		m_fReconfig	= true;
	}
	return 0;
}

int	pgpRogue::SetBinY(	unsigned int	value	)
{
    static const char	*	functionName	= "pgpRogue::SetBinY";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, ROI bin %u == 0!\n",
        	    		functionName, value );
		return -1;
	}
	m_BinY		= value;

	// Update the AreaDetector parameter
//	setIntegerParam( ADBinY,	m_BinY	);
//	int	status = (int) UpdateADConfigParams( );
	return 0;
}

#if 0
int	pgpRogue::RequestTriggerMode(	int	value	)
{
	static const char	*	functionName	= "pgpRogue::RequestTriggerMode";
	TriggerMode_t	tyTriggerMode	= static_cast<TriggerMode_t>( value );
	if ( DEBUG_PGP_ROGUE >= 1 )
		printf(	"%s: Requesting trigger mode %s ...\n",
				functionName, TriggerModeToString( tyTriggerMode ) );
	switch ( tyTriggerMode )
	{
	default:
		m_TriggerModeReq = TRIGMODE_FREERUN;
		break;
	case TRIGMODE_FREERUN:
	case TRIGMODE_EXT:
	case TRIGMODE_PULSE:
		m_TriggerModeReq = tyTriggerMode;
		break;
	}

	// Make sure we enable the synchronous data acquisition
	// This jump starts it after boot when autosave updates trigger mode
#if 0
	if( m_pSyncDataAcquirer != NULL )
		m_pSyncDataAcquirer->SetEnabled();
#endif
	return 0;
}

int	pgpRogue::SetTriggerMode(	int	value	)
{
	static const char	*	functionName	= "pgpRogue::SetTriggerMode";
	TriggerMode_t	tyTriggerMode	= static_cast<TriggerMode_t>( value );
	if ( tyTriggerMode == m_TriggerMode )
	{
		if ( DEBUG_PGP_ROGUE >= 1 )
			printf(	"%s: Trigger mode already %s.\n",
					functionName, TriggerModeToString( tyTriggerMode ) );
	}
	else
	{
		if ( DEBUG_PGP_ROGUE >= 1 )
			printf(	"%s: Setting trigger mode to %s ...\n",
					functionName, TriggerModeToString( tyTriggerMode ) );
		switch ( tyTriggerMode )
		{
		default:
			m_TriggerMode = TRIGMODE_FREERUN;
			break;
		case TRIGMODE_FREERUN:
		case TRIGMODE_EXT:
		case TRIGMODE_PULSE:
			m_TriggerMode = tyTriggerMode;
			break;
		}
	}

	// Update the AreaDetector parameter
//	setIntegerParam( ADTriggerMode,	m_TriggerMode	);
	return 0;
}
#endif


/** Report status of the driver.
  * Prints details about the driver if details > 0.
  * It then calls the ADDriver::report() method.
  * \param[in] fp File pointed passed by caller where the output is written to.
  * \param[in] details If >0 then driver details are printed.
  */
void pgpRogue::report( FILE * fp, int details )
{
    fprintf(	fp, "PGP Framegrabber port ?: %s\n",
				m_pDev ? "Connected" : "Disconnected" );

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

		fprintf( fp, "  Sensor bits:       %u\n",   m_ClNumBits );
		fprintf( fp, "  Sensor width:      %zd\n",  m_ClMaxWidth );
		fprintf( fp, "  Sensor height:     %zd\n",  m_ClMaxHeight );
		fprintf( fp, "  Horiz taps:        %d\n",   m_ClHTaps );
		fprintf( fp, "  Vert  taps:        %d\n",   m_ClVTaps );
//		fprintf( fp, "  Mode:              %s\n",   CamlinkModeToString( m_CamlinkMode ) );
	//      fprintf( fp, "  Trig Level:        %s\n",   TrigLevelToString( m_trigLevel ) );
		fprintf( fp, "  TraceLevel:  	 %u\n",   GetTraceLevel() );
		fprintf( fp, "  Frame Count:       %u\n",   m_ArrayCounter );

        fprintf( fp, "\n" );
    }
}

unsigned int pgpRogue::GetTraceLevel()
{
	return DEBUG_PGP_ROGUE;
}


extern "C" int
pgpRogueConfig(
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
        errlogPrintf( "NULL or zero length camera name.\nUsage: pgpRogueConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  modelName == NULL || strlen(modelName) == 0 )
    {
        errlogPrintf( "NULL or zero length config name.\nUsage: pgpRogueConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  clMode == NULL || strlen(clMode) == 0 )
    {
        errlogPrintf( "NULL or zero length camlink mode.\nUsage: pgpRogueConfig(name,board,chan,config,mode)\n");
        return  -1;
    }
    if ( pgpRogue::CreateRogue(	cameraName, board, lane, modelName, clMode,
									sizeX, sizeY, fLcls2Timing ) != 0 )
    {
        errlogPrintf( "pgpRogueConfig failed for camera %s, config %s, mode %s!\n", cameraName, modelName, clMode );
		if ( DEBUG_PGP_ROGUE >= 4 )
        	epicsThreadSuspendSelf();
        return -1;
    }
    return 0;
}

extern "C" int
pgpRogueConfigFull(
	const char	*	cameraName,
	int				board,
	int				lane,
	const char	*	modelName,
	const char	*	clMode,
	size_t			sizeX,
	size_t			sizeY,
	bool			fLcls2Timing,
	int				maxBuffers,				// 0 = unlimited
	size_t			maxMemory,				// 0 = unlimited
	int				priority,				// 0 = default 50, high is 90
	int				stackSize			)	// 0 = default 1 MB
{
    if (  cameraName == NULL || strlen(cameraName) == 0 )
    {
        errlogPrintf( "NULL or zero length camera name.\nUsage: pgpRogueConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  modelName == NULL || strlen(modelName) == 0 )
    {
        errlogPrintf( "NULL or zero length config name.\nUsage: pgpRogueConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  clMode == NULL || strlen(clMode) == 0 )
    {
        errlogPrintf( "NULL or zero length camlink mode.\nUsage: pgpRogueConfig(name,board,chan,config,mode)\n");
        return  -1;
    }

    if ( pgpRogue::CreateRogue(	cameraName, board, lane, modelName, clMode,
									sizeX, sizeY, fLcls2Timing ) != 0 )
    {
        errlogPrintf( "pgpRogueConfig failed for camera %s!\n", cameraName );
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

	pgpRogue	*	pCamDev = pgpRogue::RogueFindByName( std::string(pszCamName) );
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

	pgpRogue	*	pCamDev = pgpRogue::RogueFindByName( std::string(pszCamName) );
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

	pgpRogue	*	pCamDev = pgpRogue::RogueFindByName( std::string(pszCamName) );
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
//	int pgpRogueConfig( const char * cameraName, int board, int lane, const char * modelName )
static const iocshArg		pgpRogueConfigArg0	= { "name",			iocshArgString };
static const iocshArg		pgpRogueConfigArg1	= { "board",		iocshArgInt };
static const iocshArg		pgpRogueConfigArg2	= { "lane",			iocshArgInt };
static const iocshArg		pgpRogueConfigArg3	= { "modelName",	iocshArgString };
static const iocshArg		pgpRogueConfigArg4	= { "clMode",		iocshArgString };
static const iocshArg		pgpRogueConfigArg5	= { "sizeX",		iocshArgInt };
static const iocshArg		pgpRogueConfigArg6	= { "sizeX",		iocshArgInt };
static const iocshArg		pgpRogueConfigArg7	= { "fLcls2Timing",	iocshArgInt };
static const iocshArg	*	pgpRogueConfigArgs[8]	=
{
	&pgpRogueConfigArg0, &pgpRogueConfigArg1, &pgpRogueConfigArg2, &pgpRogueConfigArg3,
	&pgpRogueConfigArg4, &pgpRogueConfigArg5, &pgpRogueConfigArg6, &pgpRogueConfigArg7
};
static const iocshFuncDef   pgpRogueConfigFuncDef	= { "pgpRogueConfig", 8, pgpRogueConfigArgs };
static int  pgpRogueConfigCallFunc( const iocshArgBuf * args )
{
    return pgpRogueConfig(	args[0].sval, args[1].ival, args[2].ival, args[3].sval,
								args[4].sval, args[5].ival, args[6].ival, args[7].ival );
}
void pgpRogueConfigRegister(void)
{
	iocshRegister( &pgpRogueConfigFuncDef, reinterpret_cast<iocshCallFunc>(pgpRogueConfigCallFunc) );
}

// Register Function:
//	int pgpRogueConfigFull( const char * cameraName, int board, int lane, const char * modelName, int, size_t, int, int  )
static const iocshArg		pgpRogueConfigFullArg0	= { "name",			iocshArgString };
static const iocshArg		pgpRogueConfigFullArg1	= { "board",		iocshArgInt };
static const iocshArg		pgpRogueConfigFullArg2	= { "lane",			iocshArgInt };
static const iocshArg		pgpRogueConfigFullArg3	= { "cfgFile",		iocshArgString };
static const iocshArg		pgpRogueConfigFullArg4	= { "clMode",		iocshArgString };
static const iocshArg		pgpRogueConfigFullArg5	= { "sizeX",		iocshArgInt };
static const iocshArg		pgpRogueConfigFullArg6	= { "sizeX",		iocshArgInt };
static const iocshArg		pgpRogueConfigFullArg7	= { "fLcls2Timing",	iocshArgInt };
static const iocshArg		pgpRogueConfigFullArg8	= { "maxBuffers",	iocshArgInt };
static const iocshArg		pgpRogueConfigFullArg9	= { "maxMemory",	iocshArgInt };
static const iocshArg		pgpRogueConfigFullArg10	= { "priority",		iocshArgInt };
static const iocshArg		pgpRogueConfigFullArg11	= { "stackSize",	iocshArgInt };
// There has to be a better way to handle triggerPV, delayPV, and syncPV
//static const iocshArg		pgpRogueConfigFullArgX	= { "triggerPV",	iocshArgString };
//static const iocshArg		pgpRogueConfigFullArgX	= { "delayPV",		iocshArgString };
//static const iocshArg		pgpRogueConfigFullArgX	= { "syncPV",		iocshArgString };
static const iocshArg	*	pgpRogueConfigFullArgs[12]	=
{
	&pgpRogueConfigFullArg0, &pgpRogueConfigFullArg1, &pgpRogueConfigFullArg2,
	&pgpRogueConfigFullArg3, &pgpRogueConfigFullArg4, &pgpRogueConfigFullArg5,
	&pgpRogueConfigFullArg6, &pgpRogueConfigFullArg7, &pgpRogueConfigFullArg8,
	&pgpRogueConfigFullArg9, &pgpRogueConfigFullArg10, &pgpRogueConfigFullArg11
};
static const iocshFuncDef   pgpRogueConfigFullFuncDef	= { "pgpRogueConfigFull", 12, pgpRogueConfigFullArgs };
static int  pgpRogueConfigFullCallFunc( const iocshArgBuf * args )
{
    return pgpRogueConfigFull(
		args[0].sval, args[1].ival, args[2].ival, args[3].sval, args[4].sval,
		args[5].ival, args[6].ival, args[7].ival, args[8].ival, args[9].ival,
		args[10].ival, args[11].ival );
}
void pgpRogueConfigFullRegister(void)
{
	iocshRegister( &pgpRogueConfigFullFuncDef, reinterpret_cast<iocshCallFunc>(pgpRogueConfigFullCallFunc) );
}

extern "C"
{
	epicsExportRegistrar( pgpRogueConfigRegister );
	epicsExportRegistrar( pgpRogueConfigFullRegister );
	epicsExportRegistrar( DumpPgpVarsRegister );
	epicsExportRegistrar( SetPgpVarRegister );
	epicsExportRegistrar( ShowAllRogueRegister );
	epicsExportRegistrar( ShowPgpVarRegister );
	epicsExportAddress( int, DEBUG_PGP_ROGUE );
}
