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
// Filename: pgpCamlink.cpp
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

// AreaDetector headers
#include "ADDriver.h"

// ADPgpCamlink headers
#include "pgpCamlink.h"
#include "pgpClDev.h"
//#include "syncDataAcq.h"
//#include "promheader.h"

#include "rogue/Logging.h"

#ifdef	USE_DIAG_TIMER
#include "HiResTime.h"
#include "ContextTimer.h"
#else
#define CONTEXT_TIMER(a)
#endif	//	USE_DIAG_TIMER

using namespace		std;

static	const char *		driverName	= "PgpCamlink";

// Diagnostic timers
// View and reset via iocsh cmds.
// From iocsh, type: help *Context*

extern int		DEBUG_PGP_CAMLINK;

//	t_HiResTime		imageCaptureCumTicks	= 0LL;
//	unsigned long	imageCaptureCount		= 0L;

///	Camera map - Stores ptr to all pgpCamlink instances indexed by name
map<string, pgpCamlink *>	pgpCamlink::ms_cameraMap;

const char * CamlinkModeToString( pgpCamlink::CamlinkMode_t	clMode )
{
	const char	*	pstrCamlinkMode;
	switch( clMode )
	{
	default:							pstrCamlinkMode	= "Invalid!";	break;
	case pgpCamlink::CL_MODE_BASE:		pstrCamlinkMode	= "Base";		break;
	case pgpCamlink::CL_MODE_MEDIUM:	pstrCamlinkMode	= "Medium";		break;
	case pgpCamlink::CL_MODE_FULL:		pstrCamlinkMode	= "Full";		break;
	}
	return pstrCamlinkMode;
}

const char * TrigLevelToString( int	trigLevel )
{
	const char	*	pstrTrigLevel;
	switch( trigLevel )
	{
	default:	pstrTrigLevel	= "Invalid!";	break;
	case 0:		pstrTrigLevel	= "Edge";		break;
	case 1:		pstrTrigLevel	= "Level";		break;
	case 2:		pstrTrigLevel	= "Sync";		break;
	}
	return pstrTrigLevel;
}

const char * TriggerModeToString( pgpCamlink::TriggerMode_t	tyTriggerMode )
{
	const char	*	pstrTriggerMode;
	switch( tyTriggerMode )
	{
	default:							pstrTriggerMode	= "Invalid!";	break;
	case pgpCamlink::TRIGMODE_FREERUN:	pstrTriggerMode	= "FreeRun";	break;
	case pgpCamlink::TRIGMODE_EXT:		pstrTriggerMode	= "External";	break;
	case pgpCamlink::TRIGMODE_PULSE:	pstrTriggerMode	= "Pulse";		break;
	}
	return pstrTriggerMode;
}


// ImageCallback function
void ProcessImageCallback(
	void							*	pCallbackClient,
	const epicsTimeStamp			&	tsImage,
	rogue::protocols::batcher::DataPtr	pImageData )
{
	pgpCamlink	*	pADCam = (pgpCamlink *) pCallbackClient;

    if ( DEBUG_PGP_CAMLINK >= 4 )
	{
		if ( pImageData )
        	printf( "ProcessImageCallback: %u bytes, pulseID %d\n", pImageData->size(), tsImage.nsec & 0x1FFFF );
		else
        	printf( "ProcessImageCallback: Null Image, pulseID %d\n", tsImage.nsec & 0x1FFFF );
	}

	if( pADCam )
	{
		pADCam->ProcessImage( tsImage, pImageData );
	}

	return;
}


//
// pgpCamlink functions
//

///	pgpCamlink constructor
pgpCamlink::pgpCamlink(
	const char			*	cameraName,
	int						board,					// board
	int						lane,					// channel
	const char			*	modelName,
	const char			*	clMode,
	int						maxBuffers,				// 0 = unlimited
	size_t					maxMemory,				// 0 = unlimited
	int						priority,				// 0 = default 50, high is 90
	int						stackSize			)	// 0 = default 1 MB
	:	ADDriver(			cameraName,	
							4,
							NUM_CAMLINK_PARAMS,
							maxBuffers, maxMemory,
							asynOctetMask,	0,	// Supports an asynOctect interface w/ no interrupts
							ASYN_CANBLOCK,	1,	// ASYN_CANBLOCK=1, autoConnect=1
							priority, stackSize	),
		m_fAcquireMode(		false			    ),
		m_fExitApp(			false			    ),
		m_fReconfig(		false			    ),
		m_fReopen(			false			    ),
		m_pDev(				NULL				),
		m_board(			board				),
		m_lane(				lane				),
		m_CameraClass(							),
		m_CameraInfo(							),
		m_CameraModel(		modelName			),
		m_CameraName(		cameraName	        ),
		m_ConfigFile(							),
		m_DrvVersion(							),
		m_LibVersion(							),
		m_ModelName(		modelName			),
		m_SerialPort(							),
		m_ClCurWidth(		0					),
		m_ClCurHeight(		0					),
		m_ClMaxWidth(		0					),
		m_ClMaxHeight(		0					),
		m_ClNumBits(		0					),
		m_ClHTaps(			0					),
		m_ClVTaps(			0					),
		m_CamlinkMode(		CL_MODE_BASE		),
		m_TriggerMode(		TRIGMODE_PULSE		),
		m_TriggerModeReq(	TRIGMODE_PULSE		),
		m_BinX(				1					),
		m_BinXReq(			1					),
		m_BinY(				1					),
		m_BinYReq(			1					),
		m_MinX(				0					),
		m_MinXReq(			1					),
		m_MinY(				0					),
		m_MinYReq(			1					),
		m_SizeX(			0					),
		m_SizeXReq(			0					),
		m_SizeY(			0					),
		m_SizeYReq(			0					),
		m_Gain(				0					),
		m_HwHRoi(			0					),
		m_HwVRoi(			0					),
		
		m_ArrayCounter(		0					),
		m_acquireCount(		0					),
		m_fiducial(			0					),

		m_ReCfgCnt(			0					),
		m_reconfigLock(		NULL				),
		
		m_trigLevel(		0					),
        m_SyncTotal (       0                   ),
        m_SyncBadTS (       0                   ),
        m_SyncBadSync (     0                   ),
#ifdef	USE_DIAG_TIMER
		m_ReAcquireTimer(	"ReAcquire"			),
		m_ReArmTimer(		"ReArm"				),
		m_ProcessImageTimer("ProcessImage"		),
#endif	//	USE_DIAG_TIMER
		m_ioscan(			NULL				)
{
	static const char	*	functionName = "pgpCamlink:pgpCamlink";

	// Create mutexes
    m_reconfigLock	= epicsMutexMustCreate();

    // Initialize I/O Intr processing
    scanIoInit( &m_ioscan );
    if ( m_ioscan == NULL )
        asynPrint( this->pasynUserSelf, ASYN_TRACE_FLOW,
			"asynPrint "
            "%s %s: ERROR, scanIoInit failed!\n",
            driverName, functionName );

	// Serial port name set based on camera name
	m_SerialPort	=	m_CameraName;
	m_SerialPort	+=	".SER";

	if ( strcmp( clMode, "Medium" ) == 0 )
		m_CamlinkMode	= CL_MODE_MEDIUM;
	else if ( strcmp( clMode, "Full" ) == 0 )
		m_CamlinkMode	= CL_MODE_FULL;

#if 0
    // Configure an asyn port for serial commands
	unsigned int		serPriority		= 0;
	int					autoConnect		= 0;
    m_pAsynSerial = new asynPgpCamlinkSerial(	m_SerialPort.c_str(), serPriority,	autoConnect	);
#endif

	// Create Camlink parameters shared by all Camlink based cameras
	// This group gives access to device values of interest
	createParam( CamlinkClassString,		asynParamOctet,		&CamlinkClass		);
	createParam( CamlinkDrvVersionString,	asynParamOctet,		&CamlinkDrvVersion	);
	createParam( CamlinkHSkipString,		asynParamInt32,		&CamlinkHSkip		);
	createParam( CamlinkHSizeString,		asynParamInt32,		&CamlinkHSize		);
	createParam( CamlinkHTapsString,		asynParamInt32,		&CamlinkHTaps		);
	createParam( CamlinkHwHRoiString,		asynParamInt32,		&CamlinkHwHRoi		);
	createParam( CamlinkHwVRoiString,		asynParamInt32,		&CamlinkHwVRoi		);
	createParam( CamlinkModeString,			asynParamInt32,		&CamlinkMode		);
	createParam( CamlinkVSkipString,		asynParamInt32,		&CamlinkVSkip		);
	createParam( CamlinkVSizeString,		asynParamInt32,		&CamlinkVSize		);
	createParam( CamlinkVTapsString,		asynParamInt32,		&CamlinkVTaps		);
	createParam( CamlinkLibVersionString,	asynParamOctet,		&CamlinkLibVersion	);
	createParam( CamlinkInfoString,			asynParamOctet,		&CamlinkInfo		);
	createParam( CamlinkTrigLevelString,	asynParamInt32,		&CamlinkTrigLevel	);
	createParam( CamlinkReCfgCntString,		asynParamInt32,		&CamlinkReCfgCnt	);
	createParam( CamlinkDebugLevelString,	asynParamInt32,		&CamlinkDebugLevel	);
	createParam( CamlinkDebugSerString,		asynParamInt32,		&CamlinkDebugSer	);
	createParam( PgpAxiVersionString,		asynParamOctet,		&PgpAxiVersion		);
	createParam( PgpCoreFpgaVersionString,	asynParamInt32,		&PgpCoreFpgaVersion	);
	createParam( PgpFebFpgaVersionString,	asynParamInt32,		&PgpFebFpgaVersion	);
	createParam( PgpAppDataCntString,		asynParamInt32,		&PgpAppDataCnt	);

	// This group provides a way to have serial readbacks get reflected in
	// their ADBase class equivalents, for example
	// SerAcquireTime	=>	ADAcquireTime 
	createParam( CamlinkSerAcquireTimeString,	asynParamFloat64,	&SerAcquireTime	);
	createParam( CamlinkSerBinXString,			asynParamInt32,		&SerBinX		);
	createParam( CamlinkSerBinYString,			asynParamInt32,		&SerBinY		);
	createParam( CamlinkSerGainString,			asynParamFloat64,	&SerGain		);
	createParam( CamlinkSerMinXString,			asynParamInt32,		&SerMinX		);
	createParam( CamlinkSerMinYString,			asynParamInt32,		&SerMinY		);
	createParam( CamlinkSerSizeXString,			asynParamInt32,		&SerSizeX		);
	createParam( CamlinkSerSizeYString,			asynParamInt32,		&SerSizeY		);
	createParam( CamlinkSerTriggerModeString,	asynParamInt32,		&SerTriggerMode	);

    createParam( CamlinkSyncTotalCntString,     asynParamInt32,     &SyncTotal  );
    createParam( CamlinkSyncBadTSCntString,     asynParamInt32,     &SyncBadTS  );
    createParam( CamlinkSyncBadSyncCntString,   asynParamInt32,     &SyncBadSync  );

	// Get the Camlink mode from the mbbo PV
	int		paramValue	= static_cast<int>( m_CamlinkMode );
	setIntegerParam( CamlinkMode,		paramValue );

#if 0
	// Create an Camlink Sync object
	// TODO: Should we just make this a member object?
	printf( "%s: Creating syncDataAcq object in thread %s\n", functionName, epicsThreadGetNameSelf() );
	syncDataAcq<pgpCamlink, pgpImage>		*	pSyncDataAcquirer	= NULL;
	pSyncDataAcquirer	= new syncDataAcq<pgpCamlink, pgpImage>( *this, m_CameraName );

	// Make it available as a member variable
	m_pSyncDataAcquirer	= pSyncDataAcquirer;

	// Set default policies
	m_pSyncDataAcquirer->SetPolicyUnsynced(		syncDataAcq<pgpCamlink, pgpImage>::SKIP_OBJECT );
	m_pSyncDataAcquirer->SetPolicyBadTimeStamp(	syncDataAcq<pgpCamlink, pgpImage>::SKIP_OBJECT );
#endif

    // Install exit hook for clean shutdown
    epicsAtExit( (EPICSTHREADFUNC)pgpCamlink::ExitHook, (void *) this );
}

///	pgpCamlink Destructor
pgpCamlink::~pgpCamlink( )
{
	Shutdown();

	disconnect( this->pasynUserSelf );

	// Cleanup driver
	//delete m_pSyncDataAcquirer;
	//m_pSyncDataAcquirer	= NULL;

	epicsMutexDestroy(	m_reconfigLock );
}


int pgpCamlink::CreateCamera(
	const char *	cameraName,
	int				board,
	int				lane,
	const char *	modelName,
	const char *	clMode		)
{
    static const char	*	functionName = "pgpCamlink::CreateCamera";

    /* Parameters check */
    if (  cameraName == NULL || strlen(cameraName) == 0 )
    {
        errlogPrintf(	"%s %s: ERROR, NULL or zero length camera name. Check parameters to pgpCamlinkConfig()!\n",
            			driverName, functionName );
        return  -1;
    }

    if ( CameraFindByName(cameraName) != NULL )
    {
        errlogPrintf(	"%s %s: ERROR, Camera name %s already in use!\n",
						driverName, functionName, cameraName );
        return -1;
    }

    if (  IsCameraLaneUsed( board, lane ) )
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

    if ( DEBUG_PGP_CAMLINK >= 1 )
        cout << "Creating pgpCamlink: " << string(cameraName) << endl;
    pgpCamlink	* pCamera = new pgpCamlink( cameraName, board, lane, modelName, clMode );
    assert( pCamera != NULL );

    int	status	= pCamera->ConnectCamera( );
	if ( status != 0 )
        errlogPrintf( "pgpCamlinkConfig failed for camera %s!\n", cameraName );

	// TODO: This should be in the constructor and add call
	//	to CameraRemove in the destructor
	CameraAdd( pCamera );
    return 0;
}


extern "C"
int ShowAllCameras( int level )
{
	return pgpCamlink::ShowAllCameras( level );
}

int pgpCamlink::ShowAllCameras( int level )
{
	if ( level < 0 )
		return 0;

	map<string, pgpCamlink *>::iterator	it;
	for ( it = ms_cameraMap.begin(); it != ms_cameraMap.end(); ++it )
	{
		pgpCamlink		*	pCamera	= it->second;
		pCamera->CameraShow( level );
    }

    return 0;
}


bool pgpCamlink::IsCameraLaneUsed( unsigned int board,  unsigned int lane )
{
	map<string, pgpCamlink *>::iterator	it;
	for ( it = ms_cameraMap.begin(); it != ms_cameraMap.end(); ++it )
	{
		pgpCamlink		*	pCamera	= it->second;
        if ( board == pCamera->m_board && lane == pCamera->m_lane )
			return true;
    }

    return false;
}


pgpCamlink	*	pgpCamlink::CameraFindByName( const string & name )
{
	map<string, pgpCamlink *>::iterator	it	= ms_cameraMap.find( name );
	if ( it == ms_cameraMap.end() )
		return NULL;
	return it->second;
}

pgpCamlink	*	pgpCamlink::CameraFindByBoardLane( unsigned int board, unsigned int lane )
{
	map<string, pgpCamlink *>::iterator	it;
	for ( it = ms_cameraMap.begin(); it != ms_cameraMap.end(); it++ )
	{
		pgpCamlink	*	pCam	= it->second;
		if ( pCam->GetBoard() == board && pCam->GetLane() == lane )
			return pCam;
	}
	return NULL;
}

void pgpCamlink::CameraAdd(		pgpCamlink * pCamera )
{
	assert( CameraFindByName( pCamera->m_CameraName ) == NULL );
	if ( DEBUG_PGP_CAMLINK >= 3 )
		cout << "CameraAdd: " << pCamera->m_CameraName << endl;
	ms_cameraMap[ pCamera->m_CameraName ]	= pCamera;
}

void pgpCamlink::CameraRemove(	pgpCamlink * pCamera )
{
	ms_cameraMap.erase( pCamera->m_CameraName );
}

int pgpCamlink::CameraShow( int level )
{
    if ( level < 0 )
		return 0;

	cout << "\tCamera " << m_CameraName	<< " is installed on board " << m_board << " Lane " << m_lane << endl;
	if ( level >= 1 )
	{
		cout	<< "\t\tType: "			<< m_CameraClass
				<< " "					<< m_CameraModel
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

int pgpCamlink::SetPgpVariable( const char * pszVarPath, int value )
{
	const char	*	functionName = "pgpCamlink::SetPgpVariable";
	if ( m_pDev == NULL )
	{
		printf( "%s error: %s PGP Dev not configured!\n", functionName, m_CameraName.c_str() );
		return -1;
	}
	m_pDev->setVariable( pszVarPath, value );
	return 0;
}

int pgpCamlink::ShowPgpVariable( const char * pszVarPath, int level )
{
	const char	*	functionName = "pgpCamlink::ShowPgpVariable";
	if ( m_pDev == NULL )
	{
		printf( "%s error: %s PGP Dev not configured!\n", functionName, m_CameraName.c_str() );
		return -1;
	}
	m_pDev->showVariable( pszVarPath, level != 0 );
	return 0;
}

void pgpCamlink::ExitHook(void * arg)
{
	pgpCamlink	*	pCam = static_cast<pgpCamlink *>( arg );
	if( pCam != NULL )
		pCam->Shutdown();
}

void pgpCamlink::Shutdown( )
{
	epicsMutexLock(	m_reconfigLock );
	m_acquireCount = 0;
	setIntegerParam(ADAcquire, 0);
	if ( m_pDev != NULL )
	{
		m_pDev->disconnect();
		m_pDev	= NULL;
	}
	epicsMutexUnlock(	m_reconfigLock );
}

///	Connects driver to device
asynStatus pgpCamlink::ConnectCamera( )
{
    static const char	*	functionName	= "pgpCamlink::ConnectCamera";
    asynStatus				status			= asynSuccess;

	if ( DEBUG_PGP_CAMLINK >= 1 )
		printf( "%s: %s in thread %s ...\n", functionName, m_CameraName.c_str(), epicsThreadGetNameSelf() );

	int			connected	= 0;
	pasynManager->isConnected( this->pasynUserSelf, &connected );
	if ( connected )
	{
		printf( "%s: %s already connected.\n", functionName, m_CameraName.c_str() );
		return asynSuccess;
	}

	// Initialize (or re-initialize) framegrabber connection
	Reopen( );

	if ( m_pDev == NULL )
	{
		if ( connected )
		{
			// Signal asynManager that we are disconnected
			UpdateStatus( ADStatusDisconnected );
			if ( pasynManager->exceptionDisconnect( this->pasynUserSelf ) != asynSuccess )
			{
				asynPrint(	this->pasynUserSelf, ASYN_TRACE_ERROR,
							"%s %s: error calling pasynManager->exceptionDisconnect, error=%s\n",
							driverName, functionName, this->pasynUserSelf->errorMessage );
			}
		}
		printf( "%s: %s failed to initialize camera!\n", functionName, m_CameraName.c_str() );
        return asynError;
	}

	// Signal asynManager that we are connected
    status = pasynManager->exceptionConnect( this->pasynUserSelf );
    if ( status != asynSuccess )
	{
        asynPrint(	this->pasynUserSelf, ASYN_TRACE_ERROR,
					"%s %s: error calling pasynManager->exceptionConnect, error=%s\n",
					driverName, functionName, this->pasynUserSelf->errorMessage );
        return asynError;
    }

	if ( DEBUG_PGP_CAMLINK >= 1 )
		printf(	"%s %s: PGP Framegrabber %s 0 connected!\n", 
				driverName, functionName, m_CameraName.c_str() );
    asynPrint(	this->pasynUserSelf, ASYN_TRACE_FLOW, 
				"asynPrint "
				"%s %s: PGP Framegrabber %s 0 connected!\n", 
				driverName, functionName, m_CameraName.c_str() );

	UpdateStatus( ADStatusIdle );

	if ( DEBUG_PGP_CAMLINK >= 1 )
		printf( "%s: connected in thread %s ...\n", functionName, epicsThreadGetNameSelf() );

    return asynSuccess;
}


//	Disconnects driver from device
asynStatus pgpCamlink::DisconnectCamera( )
{
    static const char	*	functionName	= "pgpCamlink::DisconnectCamera";
    int						status			= asynSuccess;

	if ( DEBUG_PGP_CAMLINK >= 1 )
		printf(	"%s %s: disconnecting camera %s\n", 
				driverName, functionName, m_CameraName.c_str() );
    asynPrint(	this->pasynUserSelf,	ASYN_TRACE_FLOW,
				"asynPrint "
          		"%s %s: disconnecting camera %s\n", 
				driverName, functionName, m_CameraName.c_str() );

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
		m_pDev	= NULL;
	}
	epicsMutexUnlock(	m_reconfigLock );
 
    return static_cast<asynStatus>( status );
    //	return asynSuccess;
}

/// Overriding ADDriver::connect
///	Connects driver to device
asynStatus pgpCamlink::connect( asynUser *	pasynUser )
{
    static const char	*	functionName	= "pgpCamlink::connect";

	if ( DEBUG_PGP_CAMLINK >= 1 )
		printf( "%s: %s in thread %s ...\n", functionName, m_CameraName.c_str(), epicsThreadGetNameSelf() );

	// The guts are in ConnectCamera(), which doesn't need a pasynUser ptr
	asynStatus	status	= ConnectCamera();
    return status;
}

/// Overriding ADDriver::disconnect
///	Disconnects driver from device
asynStatus pgpCamlink::disconnect( asynUser *	pasynUser )
{
    static const char	*	functionName	= "pgpCamlink::disconnect";

	// The guts are in DisconnectCamera(), which doesn't need a pasynUser ptr
	int	status	= DisconnectCamera();

	// TODO: In ADProsilica, the rest of this is in DisconnectCamera
    if ( status != asynSuccess )
	{
        asynPrint(	pasynUser, ASYN_TRACE_ERROR,
					"%s: error calling DisconnectCamera, error=%s\n",
					functionName, pasynUser->errorMessage );
    }

	// Set ADStatus to ADStatusDisconnected
	UpdateStatus( ADStatusDisconnected );

    asynPrint(	pasynUser, ASYN_TRACE_FLOW, 
				"asynPrint "
				"%s %s: PGP Framegrabber disconnected %s\n", 
				driverName, functionName, m_CameraName.c_str() );
	if ( DEBUG_PGP_CAMLINK >= 1 )
		printf(	"%s %s: PGP Framegrabber %s 0 disconnected!\n", 
				driverName, functionName, m_CameraName.c_str() );

	// Process callbacks to update status
    callParamCallbacks( 0, 0 );

	// Signal asynManager that we are disconnected
    status = pasynManager->exceptionDisconnect( pasynUser );
    if ( status != asynSuccess )
	{
        asynPrint(	pasynUser, ASYN_TRACE_ERROR,
					"%s %s: error calling pasynManager->exceptionDisconnect, error=%s\n",
					driverName, functionName, pasynUser->errorMessage );
    }

    return asynSuccess;
}


int pgpCamlink::Reconfigure( )
{
    static const char	*	functionName = "pgpCamlink::Reconfigure";
	CONTEXT_TIMER( "Reconfigure" );

	if ( DEBUG_PGP_CAMLINK >= 1 )
	{
		printf( "%s: %s in thread %s ...\n", functionName, m_CameraName.c_str(), epicsThreadGetNameSelf() );
	}

	int		status	= 0;
	epicsMutexLock(		m_reconfigLock );
    
	UpdateStatus( ADStatusInitializing );
	if ( m_fReopen )
	{
        // Clear reopen flag up front so it can be set again by another thread if needed
		m_fReopen	= false;
		status	= pgpCamlink::_Reopen( );
	}

	// Clear reconfig flag up front so it can be set again by another thread if needed
	m_fReconfig = false;
	status	= pgpCamlink::_Reconfigure( );
	if ( status != 0 )
	{
		// Reconfigure failed, request another
		m_fReconfig	= true;
	}

	if ( DEBUG_PGP_CAMLINK >= 1 )
	{
		printf( "%s: %s done in thread %s\n", functionName, m_CameraName.c_str(), epicsThreadGetNameSelf() );
	}
	epicsMutexUnlock(	m_reconfigLock );

	// TODO: Find a safe place to do this
	// Restart acquisition if acquire mode still on
	// if ( m_fAcquireMode )
	// 	SetAcquireMode( m_fAcquireMode );

	if ( status != 0 )
	{
        asynPrint(	this->pasynUserSelf, ASYN_TRACE_ERROR,
					"%s %s: Reconfigure error! errorMsg=%s\n",
					driverName, functionName, this->pasynUserSelf->errorMessage );
	}
    else
    {
        UpdateStatus( ADStatusIdle );
		
        m_ReCfgCnt++;
		setIntegerParam( CamlinkReCfgCnt, m_ReCfgCnt );
        if ( m_fReconfig )
        {
            asynPrint(	this->pasynUserSelf, ASYN_TRACE_ERROR,
                        "%s %s: Reconfigure succeeded, but Reconfig flag has already been set again!\n",
                        driverName, functionName );
        }
    }

	return status;
}


int pgpCamlink::Reopen( )
{
    static const char	*	functionName = "pgpCamlink::Reopen";
	CONTEXT_TIMER( "Reopen" );

	if ( DEBUG_PGP_CAMLINK >= 1 )
	{
		printf( "%s: %s in thread %s ...\n", functionName, m_CameraName.c_str(), epicsThreadGetNameSelf() );
	}

	int		status	= 0;
	epicsMutexLock(		m_reconfigLock );

	UpdateStatus( ADStatusInitializing );

	// Clear reopen flag up front so it can be set again by another thread if needed
	m_fReopen	= false;
	status	= pgpCamlink::_Reopen( );
	if ( status != 0 )
	{
		if ( DEBUG_PGP_CAMLINK >= 1 )
			printf( "%s: _Reopen error %d\n", functionName, status );
		// Reopen failed, request another
		m_fReopen	= true;
	}

	epicsMutexUnlock(	m_reconfigLock );

	if ( status != 0 )
	{
        asynPrint(	this->pasynUserSelf, ASYN_TRACE_ERROR,
					"%s %s: Reopen error! errorMsg=%s\n",
					driverName, functionName, this->pasynUserSelf->errorMessage );
	}
	else if ( m_fReopen )
	{
        asynPrint(	this->pasynUserSelf, ASYN_TRACE_ERROR,
					"%s %s: Reopen succeeded, but Reopen flag has already been set again!\n",
					driverName, functionName );
	}

	// Always Reconfigure after a Reopen
	status = Reconfigure();

	return status;
}


//	Internal version of reconfigure
//	Don't call without holding m_reconfigLock!
int pgpCamlink::_Reconfigure( )
{
    static const char	*	functionName = "pgpCamlink::_Reconfigure";
	CONTEXT_TIMER( "_Reconfigure" );

    if ( m_pDev == NULL || m_fReopen )
	{
		m_fReopen = true;
        return -1;
	}

	if ( DEBUG_PGP_CAMLINK >= 1 )
	{
		printf( "%s: %s in thread %s ...\n", functionName, m_CameraName.c_str(), epicsThreadGetNameSelf() );
	}

	// Cancel Image Callbacks
	m_pDev->cancelImageCallbacks( );
	m_pDev->setTriggerEnable( 0, false );

	// Fetch the pgpCamlink driver and library versions
	m_DrvVersion = m_pDev->GetDrvVersion();
#if 0
	size_t end_of_vers = m_DrvVersion.find( " " );
	if ( end_of_vers != string::npos )
	{
		// The driver version has a date on the end that we don't care about
		m_DrvVersion.erase( m_DrvVersion.find( " " ) );
	}
#endif
	setStringParam( CamlinkDrvVersion, m_DrvVersion.c_str()	);

	m_LibVersion = m_pDev->GetLibVersion();
	setStringParam( CamlinkLibVersion, m_LibVersion.c_str()	);

//	int64_t		int64Value	= 0;
	uint64_t	uint64Value	= 0;
	m_pDev->readVarPath(	PgpCoreFpgaVersionString,	uint64Value );
	setIntegerParam(		PgpCoreFpgaVersion,			uint64Value	);
	m_pDev->readVarPath(	PgpFebFpgaVersionString,	uint64Value );
	setIntegerParam(		PgpFebFpgaVersion,			uint64Value	);
	m_pDev->readVarPath(	PgpAxiVersionString,		m_AxiVersion );
	setStringParam(			PgpAxiVersion, m_AxiVersion.c_str()	);

	// Already shown in _Reopen()
	//printf( "pgpCamlink Driver  version: %s\n", m_DrvVersion.c_str() ); 
	//printf( "pgpCamlink Library version: %s\n", m_LibVersion.c_str() );
#if 0
	{
	// Fetch the camera manufacturer and model and write them to ADBase parameters
    //m_CameraClass	= pdv_get_camera_class(	m_pDev );
    //m_CameraModel	= pdv_get_camera_model(	m_pDev );
    //m_CameraInfo	= pdv_get_camera_info(	m_pDev );

	// Update asyn parameters
	setStringParam( ADModel,		m_CameraModel.c_str()	);
	setStringParam( ADManufacturer, m_CameraClass.c_str()	);
    setStringParam( CamlinkClass,	m_CameraClass.c_str()	);
    setStringParam( CamlinkInfo,	m_CameraInfo.c_str()	);
	}
#endif

	// Fetch the full image geometry parameters and write them to ADBase parameters
    //m_ClMaxWidth	= pdv_get_width(	m_pDev );
    //m_ClMaxHeight	= pdv_get_height(	m_pDev );
	setIntegerParam( ADMaxSizeX,		m_ClMaxWidth	);
	setIntegerParam( ADMaxSizeY,		m_ClMaxHeight	);

	// Make sure we have valid size and binning settings
	int		intParam;
	getIntegerParam( ADBinX,	&intParam	);
	if ( intParam == 0 )
	{
		m_BinX = m_BinXReq = 1;
		setIntegerParam( ADBinX, 1 );
	}
	getIntegerParam( ADBinY,	&intParam	);
	if ( intParam == 0 )
	{
		m_BinY = m_BinYReq = 1;
		setIntegerParam( ADBinY, 1 );
	}
	getIntegerParam( ADSizeX,	&intParam	);
	if ( intParam == 0 )
	{
		m_SizeX = m_SizeXReq = m_ClMaxWidth;
		setIntegerParam( ADSizeX, m_ClMaxWidth	);
	}
	getIntegerParam( ADSizeY,	&intParam	);
	if ( intParam == 0 )
	{
		m_SizeY = m_SizeYReq = m_ClMaxHeight;
		setIntegerParam( ADSizeY, m_ClMaxHeight	);
	}

	// Fetch the pixel depth and update ADBase DataType and BitsPerPixel
    //m_ClNumBits		= pdv_get_depth(	m_pDev );
	if ( m_ClNumBits <= 8 )
	{
		setIntegerParam( NDDataType,		NDUInt8	);
	}
	else if ( m_ClNumBits <= 16 )
	{
		setIntegerParam( NDDataType,		NDUInt16 );
	}
#ifdef NDBitsPerPixelString
	setIntegerParam( NDBitsPerPixel,	m_ClNumBits		);
#endif

	// setIntegerParam( NDArrayCallbacks,	1	);

	// Set the number of horizontal and vertical taps
	setIntegerParam( CamlinkHTaps,		m_ClHTaps	);
	setIntegerParam( CamlinkVTaps,		m_ClVTaps	);

	// Send the serial configuration requests
	setIntegerParam( SerTriggerMode,	m_TriggerModeReq	);
	setIntegerParam( SerBinX,			m_BinXReq	);
	setIntegerParam( SerBinY,			m_BinYReq	);
	setIntegerParam( SerMinX,			m_MinXReq	);
	setIntegerParam( SerMinY,			m_MinYReq	);
	setIntegerParam( SerSizeX,			m_SizeXReq	);
	setIntegerParam( SerSizeY,			m_SizeYReq	);

	(void) ResetSyncCounters();

#ifdef	SETUP_ROI_IN_RECONFIG
	SetupROI();
#endif

    return 0;
}


int pgpCamlink::SetupROI( )
{
    static const char	*	functionName = "pgpCamlink::SetupROI";

	if (	(	GetSizeX() < m_ClMaxWidth  )
		||	(	GetSizeY() < m_ClMaxHeight ) )
	{
		// Setup ROI image transfer
		// Note: If the camera has HW ROI, we set hskip and/or vskip to zero as
		// it is assumed that serial commands are used to configure the camera HW ROI
		int		hskip	= HasHwHRoi() ? 0 : GetMinX();
		int		vskip	= HasHwVRoi() ? 0 : GetMinY();

		// Camlink Horiz and Vert Active line count must be a multiple of the number of CamLink taps
		// Pad up to next largest size 
		int		hactv	= ( (GetSizeX()+m_ClHTaps-1) / m_ClHTaps ) * m_ClHTaps;
		int		vactv	= ( (GetSizeY()+m_ClVTaps-1) / m_ClVTaps ) * m_ClVTaps;
		if ( DEBUG_PGP_CAMLINK >= 3 )
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
		if ( DEBUG_PGP_CAMLINK >= 3 )
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
int pgpCamlink::_Reopen( )
{
    static const char	*	functionName = "pgpCamlink::_Reopen";
	CONTEXT_TIMER( "_Reopen" );

	// Close old Dev if needed
	if ( m_pDev )
	{
		m_pDev->disconnect();
		m_pDev	= NULL;
		if ( DEBUG_PGP_CAMLINK >= 1 )
			printf( "%s: %s old Dev closed.\n", functionName, m_CameraName.c_str() );
	}

	// Enable rogue logging
	//rogue::Logging::setLevel( rogue::Logging::Info );

	// Open the camera lane
	if ( DEBUG_PGP_CAMLINK >= 1 )
		printf( "%s: %s Reopening Dev ...\n", functionName, m_CameraName.c_str() );
    m_pDev = pgpClDev::create( m_board, m_lane );
    if ( m_pDev == NULL )
	{
        asynPrint(	this->pasynUserSelf,	ASYN_TRACE_FLOW, 
					"%s %s: ERROR, Unable to open camera for pgpCamlink card %u, lane %u\n",
					driverName,		functionName, m_board, m_lane );
        return -1;
    }

	{
	// Fetch the camera manufacturer and model and write them to ADBase parameters
    //m_CameraClass	= pdv_get_camera_class(	m_pDev );
    //m_CameraModel	= pdv_get_camera_model(	m_pDev );
    //m_CameraInfo	= pdv_get_camera_info(	m_pDev );

	// Update asyn parameters
	setStringParam( ADModel,		m_CameraModel.c_str()	);
	setStringParam( ADManufacturer, m_CameraClass.c_str()	);
    setStringParam( CamlinkClass,	m_CameraClass.c_str()	);
    setStringParam( CamlinkInfo,	m_CameraInfo.c_str()	);

	// Fetch the pgpCamlink driver and library versions and make sure they match
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
	setStringParam( CamlinkDrvVersion, m_DrvVersion.c_str()	);

    //edt_get_library_version( m_pDev, buf, MAX_STRING_SIZE );
	m_LibVersion = m_pDev->GetLibVersion();
	setStringParam( CamlinkLibVersion, m_LibVersion.c_str()	);

#if 0
	if ( m_DrvVersion.find(m_LibVersion) == string::npos )
	{
		printf( 
					"%s %s: ERROR, pgpCamlink driver version %s does not match lib version %s!\n",
					driverName, functionName, m_DrvVersion.c_str(), m_LibVersion.c_str() );
        asynPrint(	this->pasynUserSelf,	ASYN_TRACE_ERROR, 
					"asynPrint "
					"%s %s: ERROR, pgpCamlink driver version %s does not match lib version %s!\n",
					driverName, functionName, m_DrvVersion.c_str(), m_LibVersion.c_str() );
        return -1;
    }
#endif
	printf( "pgpCamlink Driver  version: %s\n", m_DrvVersion.c_str() ); 
	printf( "pgpCamlink Library version: %s\n", m_LibVersion.c_str() );
	}

    char    fpga_name[128];
    printf( "board %d, Chan %d, Mode: %s\n",
			m_board, m_lane, CamlinkModeToString( m_CamlinkMode ) );
#if 0
    printf( "Boot sector FPGA header: \"%s\"\n", get_pci_fpga_header( m_pDev , fpga_name));
#endif
	if ( m_CamlinkMode == CL_MODE_FULL && !strstr( fpga_name, "_fm" ) )
	{
	    printf( "\n\nERROR: Wrong firmware. You need to use full-mode FPGA version for this camera!\n\n" );
		m_pDev->disconnect();
		m_pDev	= NULL;
        return -1;
    }
	if ( m_CamlinkMode != CL_MODE_FULL && strstr( fpga_name, "_fm" ) )
	{
	    printf( "\n\nERROR: Wrong firmware. You need to use a non-full-mode FPGA version for this camera!\n\n" );
		m_pDev->disconnect();
		m_pDev	= NULL;
        return -1;
    }

	// Diagnostics
	if ( DEBUG_PGP_CAMLINK >= 1 )
		printf(	"%s %s: %s framegrabber opened on card %u, ch %u\n",
				driverName, functionName, m_CameraName.c_str(), m_board, m_lane );
	asynPrint(	this->pasynUserSelf,	ASYN_TRACEIO_DRIVER,
				"%s %s: %s framegrabber opened on card %u, ch %u\n",
				driverName, functionName, m_CameraName.c_str(), m_board, m_lane );
    return 0;
}


int pgpCamlink::UpdateADConfigParams( )
{
    static const char	*	functionName	= "pgpCamlink::UpdateADConfigParams";
	if ( DEBUG_PGP_CAMLINK >= 2 )
		printf( "%s: %s ...\n", functionName, m_CameraName.c_str() );

	if ( m_pDev == NULL )
	{
		printf( "%s Error: Framegrabber %s not connected!\n", functionName, m_CameraName.c_str() );
		return -1;
	}


//	setIntegerParam( NDArraySizeX,		GetSizeX()	);
//	setIntegerParam( NDArraySizeY,		GetSizeY()	);
//	setIntegerParam( NDArraySize,		GetSizeX() * GetSizeY() );

//	if ( DEBUG_PGP_CAMLINK >= 2 )
//	{
//		printf( "Camera %s: Image size %zu x %zu pixels, %u bits/pixel\n",
//				m_CameraName.c_str(), m_SizeXReq, m_SizeYReq, m_ClNumBits );
//	}

	// Diagnostics
	// TODO: Find a way to add new trace bits so we can combine these as
	//	asynPrint(	this->pasynUserSelf,	ASYN_TRACEIO_CAMLINK, ... )
	//	Is it this simple?
	//	#define	ASYN_TRACEIO_CAMLINK 0x40
	//	and add a custom asyn trace screen for gui 
//	if ( DEBUG_PGP_CAMLINK >= 1 )
//		printf(
//				"%s %s: Camera %s ready on card %u, ch %u, %zu x %zu pixels, %u bits/pixel\n",
//				driverName, functionName, m_CameraName.c_str(), m_board, m_lane
//				, GetSizeX(), GetSizeY(), m_ClNumBits
//				);
//	asynPrint(	this->pasynUserSelf,	ASYN_TRACEIO_DRIVER,
//				"%s %s: Camera %s ready on card %u, ch %u, %zu x %zu pixels, %u bits/pixel\n",
//				driverName, functionName, m_CameraName.c_str(), m_board, m_lane
//				, GetSizeX(), GetSizeY(), m_ClNumBits
//				);
    return 0;
}

int pgpCamlink::ResetSyncCounters()
{
    m_SyncTotal = 0;
    m_SyncBadTS = 0;
    m_SyncBadSync = 0;

	int		status;
	status	= setIntegerParam( SyncTotal, m_SyncTotal );
	status	= setIntegerParam( SyncBadTS, m_SyncBadTS );
	status	= setIntegerParam( SyncBadSync, m_SyncBadSync );
    return status;
}

int pgpCamlink::IncrSyncTotalCount()
{
    m_SyncTotal += 1;
	asynStatus		status	= setIntegerParam( SyncTotal, m_SyncTotal );
	if( status == asynSuccess )
		status = callParamCallbacks( 0, 0 );
	return status;
}

int pgpCamlink::IncrSyncBadTSCount()
{
    m_SyncBadTS += 1;
	asynStatus		status	= setIntegerParam( SyncBadTS, m_SyncBadTS );
	if( status == asynSuccess )
		status = callParamCallbacks( 0, 0 );
	return status;
}

int pgpCamlink::IncrSyncBadSyncCount()
{
    m_SyncBadSync += 1;
	asynStatus		status	= setIntegerParam( SyncBadSync, m_SyncBadSync );
	if( status == asynSuccess )
		status = callParamCallbacks( 0, 0 );
	return status;
}

asynStatus	pgpCamlink::UpdateStatus( int	newStatus	)
{
	if ( DEBUG_PGP_CAMLINK >= 4 )
	{
    	static const char	*	functionName = "pgpCamlink::UpdateStatus";
		printf( "%s: %s in thread %s ...\n", functionName, m_CameraName.c_str(), epicsThreadGetNameSelf() );
	}
	CONTEXT_TIMER( "pgpCamlink-UpdateStatus" );
	//	Context timer shows these next two calls take about 20us
	asynStatus		status	= setIntegerParam( ADStatus, newStatus );
	if( status == asynSuccess )
		status = callParamCallbacks( 0, 0 );
	return status;
}

// Set NDArrayCounter
asynStatus pgpCamlink::SetArrayCounter( int value )
{
	CONTEXT_TIMER( "pgpCamlink-SetArrayCounter" );
	m_ArrayCounter = value;
	asynStatus	status	= setIntegerParam( NDArrayCounter,	m_ArrayCounter );
	if( status == asynSuccess )
		status = callParamCallbacks( 0, 0 );
	return status;
}

// Increment NDArrayCounter
asynStatus pgpCamlink::IncrArrayCounter()
{
	CONTEXT_TIMER( "pgpCamlink-IncrArrayCounter" );
	m_ArrayCounter++;
	asynStatus	status	= setIntegerParam(	NDArrayCounter,	m_ArrayCounter	);
	if( status == asynSuccess )
		status = callParamCallbacks( 0, 0 );
	return status;
}

asynStatus	pgpCamlink::SetAcquireMode( int fAcquire )
{
    static const char	*	functionName = "pgpCamlink::SetAcquireMode";
	if ( fAcquire == 0 )
	{
		if ( DEBUG_PGP_CAMLINK >= 2 )
			printf(	"%s: Stopping acquisition on camera %s\n", 
					functionName, m_CameraName.c_str() );

		// Cancel Image Callbacks
		m_pDev->cancelImageCallbacks( );

		// Stop acquisition
		m_fAcquireMode = false;
		m_acquireCount = 0;

		UpdateStatus( ADStatusIdle	);
	}
	else
	{
		epicsMutexLock(	m_reconfigLock );
		if ( DEBUG_PGP_CAMLINK >= 1 )
			printf(	"%s: Starting acquisition on camera %s\n", 
					functionName, m_CameraName.c_str() );
#if 0
		if( m_pSyncDataAcquirer != NULL )
		{
			m_pSyncDataAcquirer->SetEnabled();
			if ( m_TriggerModeReq == TRIGMODE_FREERUN )
			{
				// Use any images we can get
				m_pSyncDataAcquirer->SetPolicyUnsynced( syncDataAcq<pgpCamlink, pgpImage>::USE_OBJECT	);
				m_pSyncDataAcquirer->SetPolicyBadTimeStamp( syncDataAcq<pgpCamlink, pgpImage>::USE_OBJECT	);
			}
			else
			{
				// Skip images when unsynce or invalid timestamp
				m_pSyncDataAcquirer->SetPolicyUnsynced( syncDataAcq<pgpCamlink, pgpImage>::SKIP_OBJECT	);
				m_pSyncDataAcquirer->SetPolicyBadTimeStamp( syncDataAcq<pgpCamlink, pgpImage>::SKIP_OBJECT	);
			}
		}
#endif
		// UpdateAcquireCount()
		{
		// See how many images we need to acquire
		int			imageMode;
		int			numImages;
		getIntegerParam( ADImageMode,	&imageMode	);
		getIntegerParam( ADNumImages,	&numImages	);

		switch( imageMode )
		{
		case ADImageSingle:
			m_acquireCount = 1;
			break;
		case ADImageMultiple:
			m_acquireCount = numImages;
			break;
		case ADImageContinuous:
			m_acquireCount = -1;
			break;
		}
		}
		m_fAcquireMode = true;

		if ( DEBUG_PGP_CAMLINK >= 2 )
			printf(	"%s: Enabling ImageCallbacks on camera %s\n", 
					functionName, m_CameraName.c_str() );
		// Enable Image Callbacks
		m_pDev->requestImageCallbacks( this, ProcessImageCallback );
		// Enable Image Callbacks
		m_pDev->setTriggerEnable( 0, true );
#if 0
		if( m_pSyncDataAcquirer != NULL )
			m_pSyncDataAcquirer->SignalAcquireEvent();
#endif
		epicsMutexUnlock(	m_reconfigLock );
	}
	setIntegerParam( ADAcquire, m_fAcquireMode );
	return asynSuccess;
}

int pgpCamlink::StartAcquisition( )
{
    static const char	*	functionName = "pgpCamlink::StartAcquisition";
	CONTEXT_TIMER( "StartAcquisition" );

#ifndef	SETUP_ROI_IN_RECONFIG
	SetupROI();
#endif	//	SETUP_ROI_IN_RECONFIG

	double		cameraStartDelay	= 0.25;
	if ( cameraStartDelay > 0.0 )
	{
		if ( DEBUG_PGP_CAMLINK >= 2 )
			printf(	"%s: Delaying %f sec\n", functionName, cameraStartDelay );
		epicsThreadSleep( cameraStartDelay );
	}

	if ( m_fReconfig || !InAcquireMode() )
	{
		if ( DEBUG_PGP_CAMLINK >= 1 )
		{
			if ( m_fReconfig )
				printf( "%s: Reconfig requested\n", functionName );
			else
				printf( "%s: Not InAcquireMode\n", functionName );
		}
    	return -1;
	}

	if ( DEBUG_PGP_CAMLINK >= 2 )
		printf(	"%s: Acquire image from %zu,%zu size %zux%zu\n", functionName,
				GetMinX(), GetMinY(), GetSizeX(), GetSizeY()	);

	// Clear NumImagesCounter and start acquisition
	setIntegerParam( ADNumImagesCounter, 0 );
	UpdateStatus( ADStatusAcquire );

	if ( m_pDev )
	{
		if ( DEBUG_PGP_CAMLINK >= 2 )
			printf( "%s: Enabling Image Callbacks\n", functionName );

		// Enable Image Callbacks
		m_pDev->requestImageCallbacks( this, ProcessImageCallback );
		// Enable Image Callbacks
		m_pDev->setTriggerEnable( 0, true );
	}

	asynPrint(	this->pasynUserSelf, ASYN_TRACEIO_DRIVER,
        		"%s: Start acquire, count = %d\n",
				functionName, m_acquireCount );
    return 0;
}

// Interleave function definitions

///
///	DeIntlvMidTopLine16( )
/// Takes a full line from middle, then iterates to the top
/// The next line is from the middle + 1, then iterates to the bottom.
/// DMA Buffer has alternating rows from the middle of the image,
///	iterating out to the top and bottom.
/// Example for 400 line image
///		dmaRow		imgRow
///		398			0
///		396			1
///		394			2
///		...			...
///		2			198
///		0			199
///		1			200
///		3			201
///		...			...
///		397			398
///		399			399
///
int pgpCamlink::DeIntlvMidTopLine16( NDArray * pNDArray, void	*	pRawData )
{
	assert( pNDArray		!= NULL );
	assert( pNDArray->pData	!= NULL );
	assert( pRawData		!= NULL );
    static const char	*	functionName	= "pgpCamlink::DeIntlvMidTopLine16";
	if ( DEBUG_PGP_CAMLINK >= 4 )
	{
		printf( "%s: DMA   size %zu x %zu pixels, %u bits/pixel\n", functionName,
				m_ClCurWidth, m_ClCurHeight, m_ClNumBits );
		printf(	"%s: Image size %zu x %zu pixels, offset(%zu,%zu)\n", functionName,
				GetSizeX(), GetSizeY(), GetMinX(), GetMinY()	);
	}
	CONTEXT_TIMER( "DeIntlvMidTopLine16" );

	epicsUInt16	*	pDmaBuffer	= (epicsUInt16 *) pRawData;
	epicsUInt16	*	pArrayData	= (epicsUInt16 *) pNDArray->pData;
	size_t			halfHeight	= m_ClCurHeight / 2;

	/* first copy upper half, middle to top */
	for (	size_t	imgRow = 0;	imgRow < halfHeight;	imgRow++	)
	{
		size_t			dmaRow		= m_ClCurHeight - 2 - imgRow * 2;
		epicsUInt16	*	pPixelSrc	= pDmaBuffer + dmaRow * m_ClCurWidth;
		epicsUInt16	*	pPixelDst	= pArrayData + imgRow * GetSizeX();
		memcpy( pPixelDst, pPixelSrc, GetSizeX() * 2 );
	}

	/* next copy lower half, middle to bottom */
	for (	size_t	imgRow = halfHeight;	imgRow < m_ClCurHeight;	imgRow++	)
	{
		size_t			dmaRow		= (imgRow - halfHeight) * 2 + 1;
		epicsUInt16	*	pPixelSrc	= pDmaBuffer + dmaRow * m_ClCurWidth;
		epicsUInt16	*	pPixelDst	= pArrayData + imgRow * GetSizeX();
		memcpy( pPixelDst, pPixelSrc, GetSizeX() * 2 );
	}
	return(0);
}


///
///	DeIntlvRoiOnly16( )
/// De-interleave as is from top to bottom, allowing only for HW ROI
///
/// TODO: Rework to get pixels via rogue::protocols::batcher::DataPtr
int pgpCamlink::DeIntlvRoiOnly16( NDArray * pNDArray, void	*	pRawData )
{
	assert( pNDArray		!= NULL );
	assert( pNDArray->pData	!= NULL );
	assert( pRawData		!= NULL );
    // static const char	*	functionName	= "pgpCamlink::DeIntlvRoiOnly16";
	CONTEXT_TIMER( "DeIntlvRoiOnly16" );
	// Image already de-interleaved in firmware, just memcpy it here.
	// memcpy( pNDArray->pData, pRawData, nBytes );
	epicsUInt16	*	pDmaBuffer	= (epicsUInt16 *) pRawData;
	epicsUInt16	*	pArrayData	= (epicsUInt16 *) pNDArray->pData;
	for (	size_t	row = 0;	row < m_ClCurHeight;	row ++	)
	{
		epicsUInt16	*	pPixelSrc	= pDmaBuffer + row * m_ClCurWidth;
		epicsUInt16	*	pPixelDst	= pArrayData + row * m_SizeX;
		memcpy( pPixelDst, pPixelSrc, m_SizeX * 2 );
	}
	return 0;
}

int pgpCamlink::ProcessImage(
	const epicsTimeStamp			&	tsImage,
	rogue::protocols::batcher::DataPtr	pImageData )
{
    static const char	*	functionName = "pgpCamlink::ProcessImage";
	CONTEXT_TIMER( "ProcessImage" );
	assert( m_pDev != NULL );

	// Fetch and update DataCnt
	uint64_t		DataCnt = 0;
	if ( m_pDev->readVarPath( PgpAppDataCntString, DataCnt ) == 0 )
	{
		asynStatus	status	= setIntegerParam( PgpAppDataCnt, static_cast<int>(DataCnt) );
		if( status == asynSuccess )
			status = callParamCallbacks( 0, 0 );
	}

	// See if we exited acquire mode while waiting for an image
	if ( 0 /*m_fReconfig*/ || !InAcquireMode() )
	{
		if ( DEBUG_PGP_CAMLINK >= 1 )
		{
			if ( m_fReconfig )
				printf(	"%s: Reconfig request, cancelling AcquireMode\n", functionName );
			else
				printf(	"%s: AcquireMode cancelled\n", functionName );
		}

		// Cancel Image Callbacks
		if ( m_pDev )
		{
			m_pDev->cancelImageCallbacks( );
			// Disable Image Callbacks
			m_pDev->setTriggerEnable( 0, false );
		}
		return asynError;
	}
	if ( m_fReconfig )
	{
		printf(	"%s: TODO: Reconfig flag still active!\n", functionName );
		m_fReconfig = false;
	}

	// Decrement acquire count
	if( m_acquireCount > 0 )
		m_acquireCount--;

	if ( ! pImageData )
	{
		if ( DEBUG_PGP_CAMLINK >= 2 )
		{
			if ( ! pImageData )
				printf(	"%s: Image Timeout: Failed to acquire image!\n", functionName );
			else
				printf(	"%s: Image Timeout: Stale Image\n", functionName );
		}
		UpdateStatus( ADStatusError );
		return asynError;
	}

	UpdateStatus( ADStatusReadout );

	// Lock NDArrayPool driver
	lock();

	// Allocate an NDArray from the pool
    NDArray		*	pNDArray = AllocNDArray();
	if ( pNDArray != NULL )
	{
		// Transfer the image from the frame buffer to the NDArray
		int status = LoadNDArray( pNDArray, pImageData );
		if ( status != 0 )
		{
			pNDArray->release( );
			pNDArray = NULL;
		}
		else
		{
			//pImage->SetNDArrayPtr( pNDArray );
			if ( DEBUG_PGP_CAMLINK >= 5 && pNDArray != NULL )
			{
				// Write NDArray report to stdout
				// if details param >= 5, calls NDAttributeList::report()
				// NDArray::report( FILE * fp, int details );
				pNDArray->report( stdout, DEBUG_PGP_CAMLINK );
			}
		}
	}

	unlock();

	{
	CONTEXT_TIMER( "ProcessImage-wrapup" );

	// Increment NumImagesCounter
	//	TODO: Replace this pattern w/ local m_numImagesCounter
	//	m_numImagesCounter++
	//	setIntegerParam( ADNumImagesCounter, m_numImagesCounter );
	int		numImagesCounter;
	getIntegerParam(	ADNumImagesCounter,	&numImagesCounter	);
	numImagesCounter++;
	setIntegerParam(	ADNumImagesCounter,	numImagesCounter	);

	// See if we're done
	if ( m_acquireCount == 0 )
	{
		SetAcquireMode( false );
		if ( DEBUG_PGP_CAMLINK >= 1 )
			printf(	"%s: Image acquisition completed in thread %s\n", functionName, epicsThreadGetNameSelf() );
		asynPrint(	this->pasynUserSelf, ASYN_TRACEIO_DRIVER,
					"%s: Image acquisition completed in thread %s\n", functionName, epicsThreadGetNameSelf() );
	}
	}
	return 0;
}

//
//	Allocate and prepare an NDArray to receive an image
//	Note: Driver must be locked before calling this routine
NDArray * pgpCamlink::AllocNDArray( )
{
    static const char	*	functionName = "pgpCamlink::AllocNDArray";
	CONTEXT_TIMER( "ProcessImage-NDArrayPool-Update" );

	// TODO: Handle color images and 32 bit images
	NDDataType_t	pixelType		= NDUInt8;
	if ( m_ClNumBits > 8 )
	{
		pixelType		= NDUInt16;
	}

	// Allocate an NDArray
    const int		ndims	= 2;
    size_t			dims[ndims];
    dims[0]			= GetSizeX();
    dims[1]			= GetSizeY();
	assert( dims[0] != 0 );
	assert( dims[1] != 0 );

	// assert( m_pNDArray == NULL );
    NDArray		*	pNDArray = pNDArrayPool->alloc( ndims, dims, pixelType, 0, NULL );
	if ( pNDArray == NULL )
	{
        errlogPrintf( "%s: NULL NDArray ptr!\n", functionName );
		return NULL;
	}
	if ( pNDArray->pData == NULL )
	{
		pNDArray->release( );
		pNDArray = NULL;
        errlogPrintf( "%s: NULL NDArray->pData!\n", functionName );
		return NULL;
	}

	// Set the NDArray parameters
	assert( pNDArray			!= NULL );
	pNDArray->ndims				= ndims;
#ifdef NDBitsPerPixelString
	pNDArray->bitsPerElement	= m_ClNumBits;
#endif

	// Update each dimension's settings from the RBV values
	pNDArray->dims[0].size		= GetSizeX();
	pNDArray->dims[0].offset	= GetMinX();
	pNDArray->dims[0].binning	= GetBinX();
	pNDArray->dims[1].size		= GetSizeY();
	pNDArray->dims[1].offset	= GetMinY();
	pNDArray->dims[1].binning	= GetBinY();
	if ( DEBUG_PGP_CAMLINK >= 4 )
		printf(	"%s: NDArray %zux%zu pixels from offset (%zu,%zu)\n",	functionName,
				pNDArray->dims[0].size,		pNDArray->dims[1].size,
				pNDArray->dims[0].offset,	pNDArray->dims[1].offset	);
	return pNDArray;
}

//
//	Load image from DMA buffer to NDArray
//	Note: Driver must be locked before calling this routine
int pgpCamlink::LoadNDArray(
	NDArray							*	pNDArray,
	rogue::protocols::batcher::DataPtr	pImageData )
{
    static const char	*	functionName = "pgpCamlink::LoadNDArray";
	int		status = 0;

	printf(	"%s: \n", functionName );

	return status;
}


int	pgpCamlink::ProcessData(
	pgpImage		*	pImage,
	epicsTimeStamp	*	pTimeStamp,
	int					pulseID	)
{
    static const char	*	functionName = "pgpCamlink::ProcessData";
	if ( pImage == NULL )
		return -1;

	UpdateStatus( ADStatusSaving );
	this->lock();
    NDArray	*	pNDArray = NULL;
    //pNDArray = pImage->GetNDArrayPtr( );
	if ( pNDArray != NULL )
	{
		CONTEXT_TIMER( "pgpCamlink-ProcessData" );
		// Set the NDArray EPICS timestamp and unique ID
		if ( DEBUG_PGP_CAMLINK >= 4 )
			printf(	"%s: Timestamp image w/ pulseID %d, 0x%X\n", functionName, pulseID, pulseID );
		
		// NDArray has two timestamps.
		//	epicsTimeStamp	NDArray::epicsTS	is epics sec and ns relative to 1990
		pNDArray->epicsTS	= *pTimeStamp;
		pNDArray->uniqueId	= pulseID;

		// Compute POSIX timeStamp in floating point
		//	double			NDArray::timeStamp	is seconds since 1970
		pNDArray->timeStamp	= POSIX_TIME_AT_EPICS_EPOCH + pTimeStamp->secPastEpoch
							+ pTimeStamp->nsec * 1e-9;

		//
		// asynPortDriver also allows us to provide custom routines:
		//	getTimeStamp(epicsTimeStamp * pTS)
		//	setTimeStamp(const epicsTimeStamp * pTS)
		// Not sure if these will be needed.
		//
		// asyn PV's normally get their timestamp from
		//	epicsTimeStamp	asynUser::timestamp
		//
		// In AD plugins such as StdArray, pasynUser->timestamp is set from pNDArray->epicsTS
		// before calling the interrupt callback, which appears to
		// set pwf->time = pasynUser->timestamp in devAsynXXXArray.h
		//
		// NDArray::timeStamp is used to set double param NDTimeStamp
		//

		/* Update our frame count */
		IncrArrayCounter();

		int	arrayCallbacks;
		getIntegerParam( NDArrayCallbacks, &arrayCallbacks );
		if ( arrayCallbacks )
		{
			// Do NDArray callbacks unlocked to avoid deadlocks if the plugin
			// tries to lock the driver.
			this->unlock();
			if ( DEBUG_PGP_CAMLINK >= 4 )
				printf(	"%s: Processing image callbacks ...\n", functionName );
			doCallbacksGenericPointer( pNDArray, NDArrayData, 0 );
			this->lock();
		}

		if ( DEBUG_PGP_CAMLINK >= 4 )
			printf(	"%s: Processing parameter callbacks ...\n", functionName );

		// Call parameter callbacks
		callParamCallbacks();
	}
	this->unlock();
	return 0;
}

#ifndef	INVALID_PULSE
#define	INVALID_PULSE	0x1FFFF
#endif	//	INVALID_PULSE
bool	 pgpCamlink::IsSynced(
	pgpImage		*	pImage,
	epicsTimeStamp	*	pTimeStamp,
	int					pulseID		)
{
	CONTEXT_TIMER( "pgpCamlink-IsSynced" );
	if ( pImage == NULL )
		return false;
	if ( m_TriggerMode == TRIGMODE_FREERUN )
		return true;
	if ( pTimeStamp == NULL )
		return false;
	if ( pulseID == INVALID_PULSE )
		return false;
	return true;
}


// CheckData returns 0 on OK, non-zero on error
int	 pgpCamlink::CheckData(	pgpImage	*	pImage	)
{
	CONTEXT_TIMER( "pgpCamlink-CheckData" );
	if ( pImage == NULL || m_pDev == NULL )
		return -1;

	return 0;
}

void pgpCamlink::ReleaseData(	pgpImage	*	pImage	)
{
	CONTEXT_TIMER( "ReleaseData" );
	// UpdateStatus( ADStatusIdle ); No need to set status to Idle after each image buffer released
	if ( pImage == NULL )
		return;
	this->lock();
	//pImage->ReleaseNDArray();
	this->unlock();
}

int	pgpCamlink::TimeStampImage(
	pgpImage		*	pImage,
	epicsTimeStamp	*	pDest,
	int				*	pPulseNumRet	)
{
    static const char	*	functionName = "pgpCamlink::TimeStampImage";
	if ( pImage == NULL )
		return -1;
	if ( pDest == NULL )
		return -1;
	epicsTimeStamp		newEvrTime;

	// This call to asynPortDriver::updateTimeStamp causes
	// asyn to call the registered timeStampSource function.
	// defaultTimeStampSource just calls epicsTimeGetCurrent.
	// Use asyn's registerTimeStampSource to register a new
	// timeStampSource function from code, or Kukhee's
	// registerUserTimeStampSource function from areaDetectorSupp
	// to register one from iocsh using the function's name.
	{
	CONTEXT_TIMER( "TimeStampImage-updateTimeStamp" );
	updateTimeStamp( &newEvrTime );
	}

	//	TODO:	Create a subclass of epicsTime which knows how to get
	//			and set pulseID's in an epicsTimeStamp, i.e. SLAC's pulseId=(ts.nSec & 0x1FFFF);
	//	We can't construct an epicsTime directly from our epicsTimeStamp as we sometimes
	//	set the nSec field > 1e9
	epicsTimeStamp	newTimeStamp( newEvrTime );
	if (	m_TriggerMode				!= TRIGMODE_FREERUN
		&&	newTimeStamp.secPastEpoch	== m_priorTimeStamp.secPastEpoch
		&&	newTimeStamp.nsec			== m_priorTimeStamp.nsec )
	{
		char	acBuffer[32];
		epicsTimeToStrftime( acBuffer, 32, "%02H:%02M:%02S.%3f", &newTimeStamp );
		int	pulseId = newEvrTime.nsec & 0x1FFFF;
		asynPrint(	pasynUserSelf,	ASYN_TRACE_FLOW,
					"%s: Duplicate TimeStamp %s, pulseID %d\n", functionName, acBuffer, pulseId );
		return -1;
	}

	m_priorTimeStamp	= newTimeStamp;
	*pDest				= newTimeStamp;

	// TODO: Is there any way to make this less SLAC specific?
	// If not, maybe we just drop it, as no one really
	// needs uniqueId to be the pulse number
	if ( pPulseNumRet != NULL )
		*pPulseNumRet = pDest->nsec & 0x1FFFF;

	if ( m_TriggerMode != TRIGMODE_FREERUN )
	{
		if ( (pDest->nsec & 0x1FFFF) == 0x1FFFF )
		{
			char	acBuffer[32];
			epicsTimeToStrftime( acBuffer, 32, "%H:%M:%S.%04f", pDest );
			asynPrint(	pasynUserSelf,	ASYN_TRACE_FLOW,
						"%s: TimeStamp %s, invalid pulseID 0x%X\n", functionName, acBuffer, pDest->nsec & 0x1FFFF );
			return -1;
		}
	}

	return 0;
}


int	pgpCamlink::RequestSizeX(	size_t	value	)
{
    static const char	*	functionName	= "pgpCamlink::RequestSizeX";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI width cannot be set to 0!\n",
        	    		functionName );
		return asynError;
	}
	if( m_SizeXReq != value )
	{
		m_SizeXReq	= value;
		m_fReconfig	= true;
		if ( DEBUG_PGP_CAMLINK >= 2 )
		{
			printf(	"%s: Requesting SizeX %zu ...\n", functionName, value );
		}
	}
	return asynSuccess;
}

int	pgpCamlink::SetSizeX(	size_t	value	)
{
    static const char	*	functionName	= "pgpCamlink::SetSizeX";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI width cannot be set to 0!\n",
        	    		functionName );
		// return asynError;
		value = m_SizeX > 0 ? m_SizeX : m_ClMaxWidth;
	}
	// Allow setting SizeX if m_ClMaxWidth hasn't been configured yet
	// Will be clipped later if needed
	if ( m_ClMaxWidth != 0 && value > m_ClMaxWidth )
	{
        errlogPrintf(	"%s: ERROR, HW ROI width %zu > max %zu!\n",
        	    		functionName, value, m_ClMaxWidth );
		// return asynError;
		value = m_ClMaxWidth;
	}
	if ( DEBUG_PGP_CAMLINK >= 2 )
	{
		printf(	"%s: Set SizeX %zu ...\n", functionName, value );
	}
	if( m_SizeX != value )
		m_fReconfig	= true;
	m_SizeX	= value;

	// Update the AreaDetector SizeX parameters
	setIntegerParam( ADSizeX,		m_SizeX	);
	setIntegerParam( NDArraySizeX,	m_SizeX	);
	setIntegerParam( NDArraySize,	m_SizeX * m_SizeY );

//	int	status = (asynStatus) UpdateADConfigParams( );
	return asynSuccess;
}

int	pgpCamlink::RequestSizeY(	size_t	value	)
{
    static const char	*	functionName	= "pgpCamlink::RequestSizeY";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI height cannot be set to 0!\n",
        	    		functionName );
		return asynError;
	}
	if( m_SizeYReq != value )
	{
		m_SizeYReq	= value;
		m_fReconfig	= true;
		if ( DEBUG_PGP_CAMLINK >= 2 )
		{
			printf(	"%s: Requesting SizeY %zu ...\n", functionName, value );
		}
	}
	return asynSuccess;
}

int	pgpCamlink::SetSizeY(	size_t	value	)
{
    static const char	*	functionName	= "pgpCamlink::SetSizeY";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI height cannot be set to 0!\n",
        	    		functionName );
		//	return asynError;
		value = m_SizeY > 0 ? m_SizeY : m_ClMaxHeight;
	}
	// Allow setting SizeY if m_ClMaxHeight hasn't been configured yet
	// Will be clipped later if needed
	if ( m_ClMaxHeight != 0 && value > m_ClMaxHeight )
	{
        errlogPrintf(	"%s: ERROR, ROI height %zu > max %zu!\n",
        	    		functionName, value, m_ClMaxHeight );
		//	return asynError;
		value = m_ClMaxHeight;
	}
	if ( DEBUG_PGP_CAMLINK >= 2 )
	{
		printf(	"%s: Set SizeY %zu ...\n", functionName, value );
	}
	if( m_SizeY != value )
		m_fReconfig	= true;
	m_SizeY		= value;

	// Update the AreaDetector parameter
	setIntegerParam( ADSizeY,		m_SizeY	);
	setIntegerParam( NDArraySizeY,	m_SizeY	);
	setIntegerParam( NDArraySize,	m_SizeX * m_SizeY );

//	int	status = (asynStatus) UpdateADConfigParams( );
	return asynSuccess;
}

int	pgpCamlink::RequestMinX(	size_t	value	)
{
	static const char	*	functionName	= "pgpCamlink::RequestMinX";
	if( m_MinXReq != value )
	{
		m_MinXReq	= value;
		m_fReconfig	= true;
		if ( DEBUG_PGP_CAMLINK >= 2 )
		{
			printf(	"%s: Requesting MinX %zu ...\n", functionName, value );
		}
	}
	return asynSuccess;
}

int	pgpCamlink::SetMinX(	size_t	value	)
{
    static const char	*	functionName	= "pgpCamlink::SetMinX";
	if ( value > (m_ClMaxWidth - 1) )
	{
        errlogPrintf(	"%s: ERROR, ROI start %zu > max %zu!\n",
        	    		functionName, value, (m_ClMaxWidth - 1) );
		return asynError;
	}
	if ( DEBUG_PGP_CAMLINK >= 2 )
	{
		printf(	"%s: Set MinX %zu ...\n", functionName, value );
	}
	if( m_MinX != value )
		m_fReconfig	= true;
	m_MinX	= value;

	// Update the AreaDetector parameter
	setIntegerParam( ADMinX,	m_MinX	);
//	int	status = (asynStatus) UpdateADConfigParams( );
	return asynSuccess;
}

int	pgpCamlink::RequestMinY(	size_t	value	)
{
	static const char	*	functionName	= "pgpCamlink::RequestMinY";
	if( m_MinYReq != value )
	{
		m_MinYReq	= value;
		m_fReconfig	= true;
		if ( DEBUG_PGP_CAMLINK >= 2 )
		{
			printf(	"%s: Requesting MinY %zu ...\n", functionName, value );
		}
	}
	return asynSuccess;
}

int	pgpCamlink::SetMinY(	size_t	value	)
{
    static const char	*	functionName	= "pgpCamlink::SetMinY";
	if ( value > (m_ClMaxHeight - 1) )
	{
        errlogPrintf(	"%s: ERROR, ROI start %zu > max %zu!\n",
        	    		functionName, value, (m_ClMaxHeight - 1) );
		return asynError;
	}
	if ( DEBUG_PGP_CAMLINK >= 2 )
	{
		printf(	"%s: Set MinY %zu ...\n", functionName, value );
	}
	if( m_MinY != value )
		m_fReconfig	= true;
	m_MinY		=  value;

	// Update the AreaDetector parameter
	setIntegerParam( ADMinY,	m_MinY	);
//	int	status = (asynStatus) UpdateADConfigParams( );
	return asynSuccess;
}

int	pgpCamlink::RequestBinX(	unsigned int	value	)
{
    static const char	*	functionName	= "pgpCamlink::RequestBinX";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI binning %u == 0!\n",
        	    		functionName, value );
		return asynError;
	}
	if( m_BinXReq != value )
	{
		m_BinXReq	= value;
		m_fReconfig	= true;
	}
	return asynSuccess;
}

int	pgpCamlink::SetBinX(	unsigned int	value	)
{
    static const char	*	functionName	= "pgpCamlink::SetBinX";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, ROI bin %u == 0!\n",
        	    		functionName, value );
		return asynError;
	}
	m_BinX		= value;

	// Update the AreaDetector parameter
	setIntegerParam( ADBinX,	m_BinX	);
//	int	status = (asynStatus) UpdateADConfigParams( );
	return asynSuccess;
}

int	pgpCamlink::RequestBinY(	unsigned int	value	)
{
    static const char	*	functionName	= "pgpCamlink::RequestBinY";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, HW ROI binning %u == 0!\n",
        	    		functionName, value );
		return asynError;
	}
	if( m_BinYReq != value )
	{
		m_BinYReq	= value;
		m_fReconfig	= true;
	}
	return asynSuccess;
}

int	pgpCamlink::SetBinY(	unsigned int	value	)
{
    static const char	*	functionName	= "pgpCamlink::SetBinY";
	if ( value == 0 )
	{
        errlogPrintf(	"%s: ERROR, ROI bin %u == 0!\n",
        	    		functionName, value );
		return asynError;
	}
	m_BinY		= value;

	// Update the AreaDetector parameter
	setIntegerParam( ADBinY,	m_BinY	);
//	int	status = (asynStatus) UpdateADConfigParams( );
	return asynSuccess;
}

int	pgpCamlink::RequestTriggerMode(	int	value	)
{
	static const char	*	functionName	= "pgpCamlink::RequestTriggerMode";
	TriggerMode_t	tyTriggerMode	= static_cast<TriggerMode_t>( value );
	if ( DEBUG_PGP_CAMLINK >= 1 )
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
	return asynSuccess;
}

int	pgpCamlink::SetTriggerMode(	int	value	)
{
	static const char	*	functionName	= "pgpCamlink::SetTriggerMode";
	TriggerMode_t	tyTriggerMode	= static_cast<TriggerMode_t>( value );
	if ( tyTriggerMode == m_TriggerMode )
	{
		if ( DEBUG_PGP_CAMLINK >= 1 )
			printf(	"%s: Trigger mode already %s.\n",
					functionName, TriggerModeToString( tyTriggerMode ) );
	}
	else
	{
		if ( DEBUG_PGP_CAMLINK >= 1 )
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
	setIntegerParam( ADTriggerMode,	m_TriggerMode	);
	return asynSuccess;
}


/** Report status of the driver.
  * Prints details about the driver if details > 0.
  * It then calls the ADDriver::report() method.
  * \param[in] fp File pointed passed by caller where the output is written to.
  * \param[in] details If >0 then driver details are printed.
  */
void pgpCamlink::report( FILE * fp, int details )
{
    fprintf(	fp, "PGP Framegrabber port %s: %s\n",
				this->portName, m_pDev ? "Connected" : "Disconnected" );

	int			connected	= 0;
	pasynManager->isConnected( this->pasynUserSelf, &connected );
	if ( m_pDev && !connected )
	{
		fprintf(	fp, "Warning, Framegrabber port %s thinks it's %s, but asynManager says %s\n",
					portName,
					m_pDev		? "Connected" : "Disconnected",
					connected	? "Connected" : "Disconnected"	);
	}

    if ( details > 0 )
	{
		fprintf( fp, "  Camera name:       %s\n",   m_CameraName.c_str() );
		fprintf( fp, "  Camera model:      %s\n",   m_CameraModel.c_str() );
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
		fprintf( fp, "  Mode:              %s\n",   CamlinkModeToString( m_CamlinkMode ) );
	//      fprintf( fp, "  Trig Level:        %s\n",   TrigLevelToString( m_trigLevel ) );
		fprintf( fp, "  asyn TraceLevel:   %u\n",   GetTraceLevel() );
		fprintf( fp, "  Frame Count:       %u\n",   m_ArrayCounter );

        fprintf( fp, "\n" );

		/* Call the base class method */
		ADDriver::report( fp, details - 1 );
    }
}

#if 0
asynStatus pgpCamlink::readFloat64(	asynUser *	pasynUser, epicsFloat64	value )
{
    static const char	*	functionName	= "pgpCamlink::readFloat64";
    const char			*	reasonName		= "unknownReason";
	getParamName( 0, pasynUser->reason, &reasonName );
	asynPrint(	pasynUser,	ASYN_TRACE_FLOW,
				"asynPrint "
				"%s: Reason %d %s, value %lf\n", functionName, pasynUser->reason, reasonName, value );

//    if ( pasynUser->reason == SerAcquireTime )
//	{
//		setDoubleParam( ADAcquireTime, value );
//	}
    if ( pasynUser->reason == SerGain )
	{
		setDoubleParam( ADGain, value );
	}

    callParamCallbacks();

    return asynStatus(0);
}
#endif

// TODO: Don't think we need this function as it's main purpose is to query params from ADCore
asynStatus pgpCamlink::readInt32(	asynUser *	pasynUser, epicsInt32	* pValueRet )
{
    static const char	*	functionName	= "pgpCamlink::readInt32";
    const char			*	reasonName		= "unknownReason";
	getParamName( 0, pasynUser->reason, &reasonName );
	if ( DEBUG_PGP_CAMLINK >= 5 )
		printf(	"%s: Reason %d %s\n", functionName, pasynUser->reason, reasonName );
	asynPrint(	pasynUser,	ASYN_TRACE_FLOW,
				"%s: Reason %d %s\n", functionName, pasynUser->reason, reasonName );

	// Call base class
	// asynStatus	status	= asynPortDriver::readInt32( pasynUser, pValueRet );
	asynStatus	status	= ADDriver::readInt32( pasynUser, pValueRet );
    return status;
}

asynStatus pgpCamlink::writeInt32(	asynUser *	pasynUser, epicsInt32	value )
{
    static const char	*	functionName	= "pgpCamlink::writeInt32";
    const char			*	reasonName		= "unknownReason";
	getParamName( 0, pasynUser->reason, &reasonName );
	if ( DEBUG_PGP_CAMLINK >= 2 )
		printf(	"%s: Reason %d %s, value %d\n", functionName, pasynUser->reason, reasonName, value );
	asynPrint(	pasynUser,	ASYN_TRACE_FLOW,
				"%s: Reason %d %s, value %d\n", functionName, pasynUser->reason, reasonName, value );

	int	status	= asynSuccess;
	//
	// pgpCamlink implements these AD parameters
	//
	if (		pasynUser->reason == ADAcquire ) {
		status	= SetAcquireMode( value );
	} else if ( pasynUser->reason == ADBinX		) {
		status	= RequestBinX(	value	);
    } else if ( pasynUser->reason == ADBinY		) {
		status	= RequestBinY(	value	);
    } else if ( pasynUser->reason == ADMinX		) {
		status	= RequestMinX(	value	);
    } else if ( pasynUser->reason == ADMinY		) {
		status	= RequestMinY(	value	);
    } else if ( pasynUser->reason == ADSizeX		) {
		status	= RequestSizeX(	value	);
    } else if ( pasynUser->reason == ADSizeY		) {
		status	= RequestSizeY(	value	);
    } else if ( pasynUser->reason == ADTriggerMode	) {
		status	= RequestTriggerMode(	value );
    } else if ( pasynUser->reason == ADImageMode) {
		// Get current imageMode from ADDriver
		int			imageMode;
		status	= getIntegerParam( ADImageMode,	&imageMode	);

		if ( imageMode != value )
		{
			int			numImages;
			getIntegerParam( ADNumImages,	&numImages	);

			// Image Capture mode changed
			imageMode = value;
			status	= setIntegerParam( ADImageMode,	value );

			// Update acquire count
			switch( imageMode )
			{
			case ADImageSingle:
				m_acquireCount = 1;
				break;
			case ADImageMultiple:
				m_acquireCount = numImages;
				break;
			case ADImageContinuous:
				m_acquireCount = -1;
				break;
			}
			if ( DEBUG_PGP_CAMLINK >= 1 )
				printf(	"%s: Setting acquire count to %d\n", 
						functionName, m_acquireCount );
		}

	} else if ( pasynUser->reason == ADNumImages ) {
		// Get prior values
		int			numImages;
		status	= getIntegerParam( ADNumImages,	&numImages	);

		if ( numImages != value )
		{
			// Image capture count changed
			status	= setIntegerParam( ADNumImages,	value );

			// Update acquire count
			int			imageMode;
			getIntegerParam( ADImageMode,	&imageMode	);
			switch( imageMode )
			{
			case ADImageSingle:
				m_acquireCount = 1;
				break;
			case ADImageMultiple:
				m_acquireCount = value;
				break;
			case ADImageContinuous:
				m_acquireCount = -1;
				break;
			}
			if ( DEBUG_PGP_CAMLINK >= 1 )
				printf(	"%s: Updating acquire count to %d\n", 
						functionName, m_acquireCount );
		}

	//
	// pgpCamlink implements these ND parameters
	//
	} else if ( pasynUser->reason == NDArrayCounter	) {
		status = SetArrayCounter( value );
	//
	// No more overrides of ND and AD parameters
	// Any below FIRST_CAMLINK_PARAM get handled by base class ADDriver
	//
    } else if (	pasynUser->reason < FIRST_CAMLINK_PARAM ) {
		status	= ADDriver::writeInt32( pasynUser, value );
	//
	// Start of pgpCamlink specific parameters
	//
    } else if ( pasynUser->reason == CamlinkTrigLevel		) {
		status = setIntegerParam( CamlinkTrigLevel, value );
    } else if ( pasynUser->reason == CamlinkHwHRoi			) {
		m_HwHRoi = value;
		status	 = 0;
    } else if ( pasynUser->reason == CamlinkHwVRoi			) {
		m_HwVRoi = value;
		status	 = 0;
    } else if ( pasynUser->reason == CamlinkReCfgCnt		) {
		m_ReCfgCnt = value;
		status	 = 0;
	} else if ( pasynUser->reason == SerBinX			) {
		status = SetBinX(	value );
	} else if ( pasynUser->reason == SerBinY			) {
		status = SetBinY(	value );
    } else if ( pasynUser->reason == SerTriggerMode	) {
		status = SetTriggerMode(	value );
    } else if ( pasynUser->reason == SerMinX			) {
		status = SetMinX(	value );
    } else if ( pasynUser->reason == SerMinY			) {
		status = SetMinY(	value );
    } else if ( pasynUser->reason == SerSizeX			) {
		status = SetSizeX(	value );
    } else if ( pasynUser->reason == SerSizeY			) {
		status = SetSizeY(	value );
    }

    callParamCallbacks( 0, 0 );

	/* Report any errors */
	if (status)
		asynPrint(	pasynUser, ASYN_TRACE_ERROR,
					"%s:writeInt32 error, status=%d function=%d %s, value=%d\n",
					functionName, status, pasynUser->reason, reasonName, value);
	else 
		asynPrint(	pasynUser, ASYN_TRACEIO_DRIVER,
					"%s:writeInt32: function=%d %s, value=%d\n",
					functionName, pasynUser->reason, reasonName, value);

    return (asynStatus) status;
}

asynStatus pgpCamlink::writeFloat64(	asynUser *	pasynUser, epicsFloat64	value )
{
    static const char	*	functionName	= "pgpCamlink::writeFloat64";
    const char			*	reasonName		= "unknownReason";
	getParamName( 0, pasynUser->reason, &reasonName );
	asynPrint(	pasynUser,	ASYN_TRACE_FLOW,
				"asynPrint "
				"%s: Reason %d %s, value %lf\n", functionName, pasynUser->reason, reasonName, value );

	int		status	= asynSuccess;
    if (		pasynUser->reason < FIRST_CAMLINK_PARAM ) {
		status	= ADDriver::writeFloat64( pasynUser, value );
    } else if ( pasynUser->reason == SerAcquireTime ) {
		status	= setDoubleParam( ADAcquireTime, value );
	} else if ( pasynUser->reason == ADGain) {
		status	= asynError; //SetGain(	value	);
	} else if ( pasynUser->reason == SerGain ) {
		status	= setDoubleParam( ADGain, value );
	}

    callParamCallbacks();

    return (asynStatus) status;
}


int		pgpCamlink::traceVPrint( const char	*	pFormat, va_list pvar )
{
	if ( DEBUG_PGP_CAMLINK >= 4 )
	{
		static const char	*	functionName = "pgpCamlink:traceVPrint";
		printf(	"%s Format: %s\n", functionName, pFormat );
	}
	return pasynTrace->vprint( this->pasynUserSelf, GetTraceLevel(), pFormat, pvar );
}

unsigned int pgpCamlink::GetTraceLevel()
{
//	return pasynTrace->getTraceMask( this->pasynUserSelf );
	return DEBUG_PGP_CAMLINK;
}


extern "C" int ResetImageTiming( )
{
//	imageCaptureCumTicks	= 0LL;
//	imageCaptureCount		= 0L;
	return 0;
}

extern "C" int ShowImageTiming( )
{
#if 0
	double	cumDur	= HiResTicksToSeconds( imageCaptureCumTicks );
	printf(	"imageCaptureCumTicks = %llu\n",	imageCaptureCumTicks	);
	printf(	"imageCaptureCount    = %lu\n",		imageCaptureCount	);
	printf(	"imageCaptureCumDur   = %4.3f sec\n",	cumDur	);
	if ( imageCaptureCount != 0 )
		printf(	"imageCaptureAvgDur   = %4.3f ms\n\n", 1000.0 * cumDur / imageCaptureCount	);
#endif

	return 0;
}

extern "C" int
pgpCamlinkConfig(
	const char	*	cameraName,
	int				board,
	int				lane,
	const char	*	modelName,
	const char	*	clMode	)
{
    if (  cameraName == NULL || strlen(cameraName) == 0 )
    {
        errlogPrintf( "NULL or zero length camera name.\nUsage: pgpCamlinkConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  modelName == NULL || strlen(modelName) == 0 )
    {
        errlogPrintf( "NULL or zero length config name.\nUsage: pgpCamlinkConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  clMode == NULL || strlen(clMode) == 0 )
    {
        errlogPrintf( "NULL or zero length camlink mode.\nUsage: pgpCamlinkConfig(name,board,chan,config,mode)\n");
        return  -1;
    }
    if ( pgpCamlink::CreateCamera( cameraName, board, lane, modelName, clMode ) != 0 )
    {
        errlogPrintf( "pgpCamlinkConfig failed for camera %s, config %s, mode %s!\n", cameraName, modelName, clMode );
		if ( DEBUG_PGP_CAMLINK >= 4 )
        	epicsThreadSuspendSelf();
        return -1;
    }
    return 0;
}

extern "C" int
pgpCamlinkConfigFull(
	const char	*	cameraName,
	int				board,
	int				lane,
	const char	*	modelName,
	const char	*	clMode,
	int				maxBuffers,				// 0 = unlimited
	size_t			maxMemory,				// 0 = unlimited
	int				priority,				// 0 = default 50, high is 90
	int				stackSize			)	// 0 = default 1 MB
{
    if (  cameraName == NULL || strlen(cameraName) == 0 )
    {
        errlogPrintf( "NULL or zero length camera name.\nUsage: pgpCamlinkConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  modelName == NULL || strlen(modelName) == 0 )
    {
        errlogPrintf( "NULL or zero length config name.\nUsage: pgpCamlinkConfig(name,board,chan,config)\n");
        return  -1;
    }
    if (  clMode == NULL || strlen(clMode) == 0 )
    {
        errlogPrintf( "NULL or zero length camlink mode.\nUsage: pgpCamlinkConfig(name,board,chan,config,mode)\n");
        return  -1;
    }

    if ( pgpCamlink::CreateCamera( cameraName, board, lane, modelName, clMode ) != 0 )
    {
        errlogPrintf( "pgpCamlinkConfig failed for camera %s!\n", cameraName );
		if ( DEBUG_PGP_CAMLINK >= 4 )
        	epicsThreadSuspendSelf();
        return -1;
    }
    return 0;
}

// Register function:
//		int ResetImageTiming( void )
static const iocshFuncDef   ResetImageTimingFuncDef	= { "ResetImageTiming", 0, NULL };
static int  ResetImageTimingCallFunc( const iocshArgBuf * args )
{
	return static_cast<int>( ResetImageTiming( ) );
}
void ResetImageTimingRegister(void)
{
	iocshRegister( &ResetImageTimingFuncDef, reinterpret_cast<iocshCallFunc>(ResetImageTimingCallFunc) );
}


// Register function:
//		int ShowImageTiming( void )
static const iocshFuncDef   ShowImageTimingFuncDef	= { "ShowImageTiming", 0, NULL };
static int  ShowImageTimingCallFunc( const iocshArgBuf * args )
{
	return static_cast<int>( ShowImageTiming( ) );
}
void ShowImageTimingRegister(void)
{
	iocshRegister( &ShowImageTimingFuncDef, reinterpret_cast<iocshCallFunc>(ShowImageTimingCallFunc) );
}

// Register function:
//		int ShowAllCameras( int level )
static const iocshArg		ShowAllCamerasArg0		= { "level",		iocshArgInt };
static const iocshArg	*	ShowAllCamerasArgs[1]	=
{
	&ShowAllCamerasArg0
};
static const iocshFuncDef   ShowAllCamerasFuncDef	= { "ShowAllCameras", 1, ShowAllCamerasArgs };
static int  ShowAllCamerasCallFunc( const iocshArgBuf * args )
{
	return static_cast<int>( ShowAllCameras( args[0].ival ) );
}
void ShowAllCamerasRegister(void)
{
	iocshRegister( &ShowAllCamerasFuncDef, reinterpret_cast<iocshCallFunc>(ShowAllCamerasCallFunc) );
}


extern "C"
int SetPgpVariable( const char * pszCamName, const char * pszVarPath, int value )
{
	const char	*	functionName = "SetPgpVariable";
	if ( pszCamName == NULL || pszVarPath == NULL )
	{
		printf( "Usage: %s camPortName varPath\n", functionName );
		printf( "Example: %s CAM ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BuildStamp\n", functionName );
		return -1;
	}

	pgpCamlink	*	pCamDev = pgpCamlink::CameraFindByName( std::string(pszCamName) );
	if ( pCamDev == NULL )
	{
		printf( "%s error: Camera %s not found!\n", functionName, pszCamName );
		return -1;
	}

	return pCamDev->SetPgpVariable( pszVarPath, value );
}

// Register function:
//		int SetPgpVar( camName, varName, value )
static const iocshArg		SetPgpVarArg0		= { "camName",		iocshArgString };
static const iocshArg		SetPgpVarArg1		= { "varName",		iocshArgString };
static const iocshArg		SetPgpVarArg2		= { "value",		iocshArgInt };
static const iocshArg	*	SetPgpVarArgs[3]	=
{
	&SetPgpVarArg0, &SetPgpVarArg1, &SetPgpVarArg2
};
static const iocshFuncDef   SetPgpVarFuncDef	= { "SetPgpVar", 3, SetPgpVarArgs };
static int  SetPgpVarCallFunc( const iocshArgBuf * args )
{
	return static_cast<int>( SetPgpVariable( args[0].sval, args[1].sval, args[2].ival ) );
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

	pgpCamlink	*	pCamDev = pgpCamlink::CameraFindByName( std::string(pszCamName) );
	if ( pCamDev == NULL )
	{
		printf( "%s error: Camera %s not found!\n", functionName, pszCamName );
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
//	int pgpCamlinkConfig( const char * cameraName, int board, int lane, const char * modelName )
static const iocshArg		pgpCamlinkConfigArg0	= { "name",			iocshArgString };
static const iocshArg		pgpCamlinkConfigArg1	= { "board",		iocshArgInt };
static const iocshArg		pgpCamlinkConfigArg2	= { "lane",			iocshArgInt };
static const iocshArg		pgpCamlinkConfigArg3	= { "modelName",	iocshArgString };
static const iocshArg		pgpCamlinkConfigArg4	= { "clMode",		iocshArgString };
static const iocshArg	*	pgpCamlinkConfigArgs[5]	=
{
	&pgpCamlinkConfigArg0, &pgpCamlinkConfigArg1, &pgpCamlinkConfigArg2, &pgpCamlinkConfigArg3, &pgpCamlinkConfigArg4
};
static const iocshFuncDef   pgpCamlinkConfigFuncDef	= { "pgpCamlinkConfig", 5, pgpCamlinkConfigArgs };
static int  pgpCamlinkConfigCallFunc( const iocshArgBuf * args )
{
    return pgpCamlinkConfig( args[0].sval, args[1].ival, args[2].ival, args[3].sval, args[4].sval );
}
void pgpCamlinkConfigRegister(void)
{
	iocshRegister( &pgpCamlinkConfigFuncDef, reinterpret_cast<iocshCallFunc>(pgpCamlinkConfigCallFunc) );
}

// Register Function:
//	int pgpCamlinkConfigFull( const char * cameraName, int board, int lane, const char * modelName, int, size_t, int, int  )
static const iocshArg		pgpCamlinkConfigFullArg0	= { "name",			iocshArgString };
static const iocshArg		pgpCamlinkConfigFullArg1	= { "board",		iocshArgInt };
static const iocshArg		pgpCamlinkConfigFullArg2	= { "lane",			iocshArgInt };
static const iocshArg		pgpCamlinkConfigFullArg3	= { "cfgFile",		iocshArgString };
static const iocshArg		pgpCamlinkConfigFullArg4	= { "clMode",		iocshArgString };
static const iocshArg		pgpCamlinkConfigFullArg5	= { "maxBuffers",	iocshArgInt };
static const iocshArg		pgpCamlinkConfigFullArg6	= { "maxMemory",	iocshArgInt };
static const iocshArg		pgpCamlinkConfigFullArg7	= { "priority",		iocshArgInt };
static const iocshArg		pgpCamlinkConfigFullArg8	= { "stackSize",	iocshArgInt };
// There has to be a better way to handle triggerPV, delayPV, and syncPV
//static const iocshArg		pgpCamlinkConfigFullArgX	= { "triggerPV",	iocshArgString };
//static const iocshArg		pgpCamlinkConfigFullArgX	= { "delayPV",		iocshArgString };
//static const iocshArg		pgpCamlinkConfigFullArgX	= { "syncPV",		iocshArgString };
static const iocshArg	*	pgpCamlinkConfigFullArgs[9]	=
{
	&pgpCamlinkConfigFullArg0, &pgpCamlinkConfigFullArg1, &pgpCamlinkConfigFullArg2, &pgpCamlinkConfigFullArg3,
	&pgpCamlinkConfigFullArg4, &pgpCamlinkConfigFullArg5, &pgpCamlinkConfigFullArg6, &pgpCamlinkConfigFullArg7,
	&pgpCamlinkConfigFullArg8
};
static const iocshFuncDef   pgpCamlinkConfigFullFuncDef	= { "pgpCamlinkConfigFull", 9, pgpCamlinkConfigFullArgs };
static int  pgpCamlinkConfigFullCallFunc( const iocshArgBuf * args )
{
    return pgpCamlinkConfigFull(
		args[0].sval, args[1].ival, args[2].ival, args[3].sval, args[4].sval,
		args[5].ival, args[6].ival, args[7].ival, args[8].ival	);
}
void pgpCamlinkConfigFullRegister(void)
{
	iocshRegister( &pgpCamlinkConfigFullFuncDef, reinterpret_cast<iocshCallFunc>(pgpCamlinkConfigFullCallFunc) );
}

extern "C"
{
	epicsExportRegistrar( pgpCamlinkConfigRegister );
	epicsExportRegistrar( pgpCamlinkConfigFullRegister );
	epicsExportRegistrar( SetPgpVarRegister );
	epicsExportRegistrar( ShowImageTimingRegister );
	epicsExportRegistrar( ResetImageTimingRegister );
	epicsExportRegistrar( ShowAllCamerasRegister );
	epicsExportRegistrar( ShowPgpVarRegister );
	epicsExportAddress( int, DEBUG_PGP_CAMLINK );
}
