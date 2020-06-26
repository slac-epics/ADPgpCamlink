//////////////////////////////////////////////////////////////////////////////
// This file is part of 'ADPgpCamlink'.
// It is subject to the license terms in the LICENSE.txt file found in the 
// top-level directory of this distribution and at: 
//    https://confluence.slac.stanford.edu/display/ppareg/LICENSE.html. 
// No part of 'ADPgpCamlink', including this file, 
// may be copied, modified, propagated, or distributed except according to 
// the terms contained in the LICENSE.txt file.
//////////////////////////////////////////////////////////////////////////////
#ifndef	PGP_CAMLINK_H
#define	PGP_CAMLINK_H
/** ADDriver for cameras using PgpCamlink framegrabbers via SLAC's Rogue software library **/



#ifdef __cplusplus

#include <map>
#include <string>
#include <vector>
#include <epicsMutex.h>
#include <epicsThread.h>
#include <dbScan.h>
#include "ADDriver.h"
#include "pgpClDev.h"
#include <rogue/protocols/batcher/Data.h>


#ifdef	USE_DIAG_TIMER
#include "HiResTime.h"
#include "ContextTimerMax.h"
#endif	//	USE_DIAG_TIMER

class pgpImage	// TODO: Do I need this class
{
 public:
	pgpImage( )
		:	m_pNDArray(	NULL	)
	{
	}
	virtual ~pgpImage( )
	{
	}

	NDArray		*	GetNDArrayPtr(	)
	{
		return m_pNDArray;
	}

	void ReleaseNDArray( )
	{
		if( m_pNDArray != NULL )
		{
			m_pNDArray->release();
			m_pNDArray	= NULL;
		}
	}

	void SetNDArrayPtr( NDArray * pNDArray )
	{
		assert( m_pNDArray == NULL );
		m_pNDArray	= pNDArray;
	}

private:
	NDArray		*	m_pNDArray;
};

// Camera operation data structure definition
class pgpCamlink : public ADDriver
{
public:		//	Public member functions

	///	Constructor
	pgpCamlink(	const char			*	cameraName,
				int						board,
				int						lane,
				const char			*	modelName,
				const char			*	clMode,
				int						maxBuffers	= 0,	// 0 = unlimited
				size_t					maxMemory	= 0,	// 0 = unlimited
				int						priority	= 0,	// 0 = default 50, high is 90
				int						stackSize	= 0	);	// 0 = default 1MB

	/// Destructor
	virtual ~pgpCamlink();

	enum TriggerMode_t { TRIGMODE_FREERUN, TRIGMODE_EXT, TRIGMODE_PULSE };

	enum CamlinkMode_t { CL_MODE_BASE, CL_MODE_MEDIUM, CL_MODE_FULL };

	///	Update AreaDetector params related to camera configuration
	int UpdateADConfigParams( );

	/// Open a fresh connection to the camera
    asynStatus ConnectCamera( );

	/// Close the camera connections
    asynStatus DisconnectCamera( );

	asynStatus		UpdateStatus( int	newStatus	);

    asynUser	*	GetAsynUser()
	{
		return pasynUserSelf;	// TODO: Is this safe?
	}

    int	GetAcquireCount()
	{
		return m_acquireCount;
	}

    /// These methods are overwritten from asynPortDriver
    virtual asynStatus connect(		asynUser	* pasynUser	);
    virtual asynStatus disconnect(	asynUser	* pasynUser	);

    /// These are the methods that we override from ADDriver
#if 0
    virtual asynStatus readFloat64(	asynUser	*	pasynUser,	epicsFloat64 *	value	);
#endif
    virtual asynStatus readInt32(	asynUser	*	pasynUser,	epicsInt32	 *	value	);
    virtual asynStatus writeInt32(	asynUser	*	pasynUser,	epicsInt32		value	);
    virtual asynStatus writeFloat64(asynUser	*	pasynUser,	epicsFloat64	value	);
    void	report(	FILE	*	fp,	int	details	);

	/// Registered with epicsAtExit() for clean disconnect
	static void ExitHook( void * pThis );
 
 	/// Shutdown driver
	void Shutdown( );

	///	Get camera class, typically the manufacturer
	const std::string	&	GetCameraClass( ) const
	{
		return m_CameraClass;
	}

	///	Get camera Model
	const std::string	&	GetCameraModel( ) const
	{
		return m_CameraModel;
	}

	///	Get camera name
	const std::string	&	GetCameraName( ) const
	{
		return m_CameraName;
	}

	///	Get camera serial port name
	const std::string	&	GetSerialPortName( ) const
	{
		return m_SerialPort;
	}

	///	Get Driver Version
	const std::string	&	GetDrvVersion( ) const
	{
#if 0
		if ( ! m_pDev )
			return std::string( "Unknown Driver Version" );
		return m_pDev->GetDrvVersion();
#else
		return m_DrvVersion;
#endif
	}

	///	Get Library Version
	const std::string	&	GetLibVersion( ) const
	{
#if 0
		if ( ! m_pDev )
			return std::string( "Unknown Lib Version" );
		return m_pDev->GetLibVersion();
#else
		return m_LibVersion;
#endif
	}

	bool	IsAcquiring()
	{
		//if ( m_pSyncDataAcquirer == NULL )
			return false;
		//return m_pSyncDataAcquirer->IsAcquiring();
	}

	bool	InAcquireMode()
	{
		return m_fAcquireMode;
	}
	asynStatus	SetAcquireMode( int fAcquireMode );
	bool	GetAcquireMode() const
	{
		return m_fAcquireMode;
	}

//	Image		*	GetCurImageBuf( );
//	Image		*	GetNextImageBuf(unsigned int &);

	int				SetGain( double gain );
	double			GetGain( ) const
	{
		return m_Gain;
	}

	int				RequestBinX(	unsigned int	value	);
	int				SetBinX(		unsigned int	value	);
	unsigned int	GetBinX( ) const
	{
		return m_BinX;
	}

	int				RequestBinY(	unsigned int	value	);
	int				SetBinY(		unsigned int	value	);
	unsigned int	GetBinY( ) const
	{
		return m_BinY;
	}

	int		RequestMinX(	size_t	value	);
	int		SetMinX(		size_t	value	);
	size_t	GetMinX( ) const
	{
		return m_MinX;
	}

	int		RequestMinY(	size_t	value	);
	int		SetMinY(		size_t	value	);
	size_t	GetMinY( ) const
	{
		return m_MinY;
	}

	int		RequestSizeX(	size_t	value	);
	int		SetSizeX(		size_t	value	);
	size_t	GetSizeX( ) const
	{
		return m_SizeX;
	}

	int		RequestSizeY(	size_t	value	);
	int		SetSizeY(		size_t	value	);
	size_t	GetSizeY( ) const
	{
		return m_SizeY;
	}

	CamlinkMode_t GetCamlinkMode( ) const
	{
		return m_CamlinkMode;
	}

	int				RequestTriggerMode(	int	value	);
	int				SetTriggerMode(	int	value	);
	TriggerMode_t	GetTriggerMode( ) const
	{
		return m_TriggerMode;
	}

	unsigned int	GetNumBits( ) const
	{
		return m_ClNumBits;
	}

	bool	HasHwHRoi() const
	{
		return( m_HwHRoi != 0 );
	}

	bool	HasHwVRoi() const
	{
		return( m_HwVRoi != 0 );
	}

	/// Get frame count
	int		GetArrayCounter( ) const
	{
		return m_ArrayCounter;
	}

	/// Increment frame count
	asynStatus		IncrArrayCounter( );

	/// Set frame count
	asynStatus		SetArrayCounter( int value );

	/// Get last fiducial timestamp id
    int				GetFiducial( ) const
	{
		return m_fiducial;
	}

	/// Set fiducial timestamp id
    void			SetFiducial( int fiducial )
	{
		m_fiducial	= fiducial;
	}

	IOSCANPVT		GetIoScan( ) const
	{
		return m_ioscan;
	}

	///	Show Camera info on stdout
	int						CameraShow( int level );

	///	Set Camera PGP variable
	int						SetPgpVariable( const char * pszVarPath, int value );

	///	Show Camera PGP variable on stdout
	int						ShowPgpVariable( const char * pszVarPath, int level );

	///	Start Camera image acquisition
	int						StartAcquisition( );

	///	Acquire next image from the camera
	int						ProcessImage(	const epicsTimeStamp			&	ts,
											rogue::protocols::batcher::DataPtr	pImageData );

	///	Check for a valid image, returns 0 on success, error code on error
	int						CheckData(		pgpImage	*	pImage	);

	///	Returns true if device needs reconfiguring
	bool					NeedsReconfigure(	)
	{
		return m_fReconfig || m_fReopen;
	}

	///	Reconfigure camera (reread config file and re-initialize connection)
	/// Takes the reconfigure lock to make it thread safe
	int						Reconfigure(	);

	///	Reopen driver (re-initialize connection)
	/// Can be called from any thread to open or reopen the driver connection
	/// Takes the reconfigure lock to make it thread safe
	int		Reopen(	);

	bool	IsSynced(		pgpImage		*	pImage,
							epicsTimeStamp	*	pTimeStamp,
							int					pulseID		);

	void	ReleaseData(	pgpImage		*	);

	int		ProcessData(	pgpImage		*	pImage,
							epicsTimeStamp	*	pTimeStamp,
							int					pulseID		);

	int		TimeStampImage(	pgpImage		*	pImage,
							epicsTimeStamp	*	pDest,
							int				*	pPulseNumRet	);

	//
	//	De-interleave routines to handle copying raw image data from DMA buffers
	//  to NDArray's, cropping for HW ROI as needed.
	//

	/// De-interleave ROI line by line from the middle outwards to the top
	/// and bottom lines w/ 16 bit pixels
	int		DeIntlvMidTopLine16(	NDArray	*	pNDArray, void	*	pRawData	);

	/// De-interleave as is from top to bottom, allowing only for HW ROI
	int		DeIntlvRoiOnly16(		NDArray	*	pNDArray, void	*	pRawData	);

    /// SetSerDisable
    int SetSerDisable( int value );

    /// Synchronized Data Acq Stats
    int ResetSyncCounters();
    int IncrSyncTotalCount();
    int IncrSyncBadTSCount();
    int IncrSyncBadSyncCount();

	// Return shared_ptr to pgpClDev device
	pgpClDevPtr				GetDevPtr( ) const
	{
		return m_pDev;
	}
	unsigned int			GetBoard( ) const
	{
		return m_board;
	}
	unsigned int			GetLane( ) const
	{
		return m_lane;
	}

	// Trace level for diagnostics
	unsigned int GetTraceLevel();

	int		traceVPrint( const char	*	pFormat, va_list pvar );

public:		//	Public class functions

	static int				CreateCamera(	const char *	cameraName, int board, int lane,
											const char *	modelName,	const char * clMode );

	static pgpCamlink	*	CameraFindByName( const std::string & name );

	static pgpCamlink	*	CameraFindByBoardLane( unsigned int board, unsigned int lane );


	static	int				ShowAllCameras( int level );

	static bool				IsCameraLaneUsed( unsigned int board,  unsigned int lane );

private:	//	Private member functions
	//	Internal version of reconfigure
	//	Don't call without holding m_reconfigLock!
	int		_Reconfigure( );
	int		_Reopen( );

	int		SetupROI( );

	//	NDArray routines
	//	Don't call without holding driver lock!
	NDArray *	AllocNDArray(	);
	int			LoadNDArray( NDArray * pNDArray, rogue::protocols::batcher::DataPtr	pImageData );

private:	//	Private class functions
	static	void			CameraAdd(		pgpCamlink * pCamera );
	static	void			CameraRemove(	pgpCamlink * pCamera );

public:		//	Public member variables	(Make these private!)

protected:	//	Protected member variables
	bool			m_fAcquireMode;		// Set true to start acquiring images, false to halt
	bool			m_fExitApp;			// Set true to shutdown ioc
	bool			m_fReconfig;		// True when we need to reconfigure the ROI or other camera parameters
	bool			m_fReopen;			// True when we need to reread the configuration file

private:	//	Private member variables
	pgpClDevPtr 	m_pDev;			// shared_ptr to pgpClDev device

	unsigned int	m_board;		// index of Pgpcamlink card
	unsigned int	m_lane;			// lane on  Pgpcamlink card

	epicsTimeStamp	m_priorTimeStamp;	// Last timestamp for this event number

	std::string		m_CameraClass;	// Manufacturer of camera
	std::string		m_CameraInfo;	// camera info string
	std::string		m_CameraModel;	// model name as reported by camera
	std::string		m_CameraName;	// name of this camera, must be unique
	std::string		m_ConfigFile;	// current configuration file for camera
	std::string		m_DrvVersion;	// Driver Version
	std::string		m_AxiVersion;	// PGP AxiVersion
	std::string		m_LibVersion;	// Library Version
	std::string		m_ModelName;	// Configuration model name for camera (selected in st.cmd)
	std::string		m_SerialPort;	// name of camera's serial port

	size_t			m_ClCurWidth;	// CamLink connection cur width  in pixels
	size_t			m_ClCurHeight;	// CamLink connection cur height in pixels
	size_t			m_ClMaxWidth;	// CamLink connection max width  in pixels
	size_t			m_ClMaxHeight;	// CamLink connection max height in pixels
	unsigned int	m_ClNumBits;	// CamLink connection bits  per pixel
	int				m_ClHTaps;		// CamLink connection horiz taps
	int				m_ClVTaps;		// CamLink connection vert  taps

	CamlinkMode_t	m_CamlinkMode;

	TriggerMode_t	m_TriggerMode;
	TriggerMode_t	m_TriggerModeReq;

	unsigned int	m_ReConfigCount;// Reconfiguration counter

	// HW ROI and binning parameters from ADBase
	size_t	m_BinX,		m_BinXReq,		m_BinY,		m_BinYReq;
	size_t	m_MinX,		m_MinXReq,		m_MinY,		m_MinYReq;
	size_t	m_SizeX,	m_SizeXReq,		m_SizeY,	m_SizeYReq;

	// Holds currently alloc'd NDArray ptr
	// Must hold NDArrayDriver lock() while != NULL
    // NDArray		*	m_pNDArray;

	// Gain value for camera
	double			m_Gain;

	// HW ROI support
	unsigned int	m_HwHRoi;			// Zero if no HW ROI, Non-zero if camera supports Horiz ROI
	unsigned int	m_HwVRoi;			// Zero if no HW ROI, Non-zero if camera supports Vert  ROI

	int				m_ArrayCounter;		// Frame count
	int				m_acquireCount;		// How many images to acquire
	unsigned int	m_fiducial;			// Fiducial ID from last timestamped image

	unsigned int	m_ReCfgCnt;			// Reconfigure counter (increments by 1 each reconfigure)
	epicsMutexId	m_reconfigLock;		// Protect against more than one thread trying to reconfigure the device
	//syncDataAcq<pgpCamlink, pgpImage>		*	m_pSyncDataAcquirer;

	unsigned int	m_trigLevel;		// Ext. Trigger Mode (0=Edge,1=Level,2=Sync)

    int             m_SerialDisable;    // Flag to enable or disable the serial communication

    unsigned int    m_SyncTotal;        // Total images counter
    unsigned int    m_SyncBadTS;        // Images discarded by bad timestamp counter
    unsigned int    m_SyncBadSync;      // Images discarded by bad sync counter

	// These variables hold the asyn parameter index numbers for each parameter
	#define FIRST_CAMLINK_PARAM CamlinkClass
	int		CamlinkClass;
	int		CamlinkDrvVersion;
	int		CamlinkHSkip;
	int		CamlinkHSize;
	int		CamlinkHTaps;
	int		CamlinkHwHRoi;
	int		CamlinkHwVRoi;
	int		CamlinkMode;
	int		CamlinkReCfgCnt;
	int		CamlinkVSkip;
	int		CamlinkVSize;
	int		CamlinkVTaps;
	int		CamlinkInfo;
	int		CamlinkLibVersion;
	int		CamlinkTrigLevel;
	int		CamlinkDebugLevel;
	int		CamlinkDebugSer;
	int		PgpAxiVersion;
	int		PgpCoreFpgaVersion;
	int		PgpFebFpgaVersion;
	int		PgpAppDataCnt;

	// Serial front-end params for ADBase parameters
	int		SerAcquireTime;
	int		SerBinX;
	int		SerBinY;
	int		SerGain;
	int		SerMinX;
	int		SerMinY;
	int		SerSizeX;
	int		SerSizeY;
	int		SerTriggerMode;

    int     SerDisable;

    int     SyncTotal;
    int     SyncBadTS;
    int     SyncBadSync;
	#define LAST_CAMLINK_PARAM SyncBadSync 

#ifdef	USE_DIAG_TIMER
	ContextTimerMax			m_ReAcquireTimer;
	ContextTimerMax			m_ReArmTimer;
	ContextTimerMax			m_ProcessImageTimer;
#endif	//	USE_DIAG_TIMER

	IOSCANPVT				m_ioscan;
	//asynPgpCamlinkSerial	*	m_pAsynSerial;
	//	ttyController	*	m_ttyPort;

private:	//	Private class variables
	static	std::map<std::string, pgpCamlink *>	ms_cameraMap;
};

/* PgpCamlink Parameters, common to all PgpCamlink cameras */
#define NUM_CAMLINK_PARAMS ((int)(&LAST_CAMLINK_PARAM - &FIRST_CAMLINK_PARAM + 1))

#endif /* __cplusplus */

#define CamlinkClassString		"CLCAM_CLASS"
#define CamlinkDrvVersionString	"CLCAM_DRV_VERSION"
#define CamlinkHSkipString		"CLCAM_HSKIP"
#define CamlinkHSizeString		"CLCAM_HSIZE"
#define CamlinkHTapsString		"CLCAM_HTAPS"
#define CamlinkHwHRoiString		"CLCAM_HW_HROI"
#define CamlinkHwVRoiString		"CLCAM_HW_VROI"
#define CamlinkModeString		"CLCAM_MODE"
#define CamlinkReCfgCntString	"CLCAM_RECFG_CNT"
#define CamlinkVSkipString		"CLCAM_VSKIP"
#define CamlinkVSizeString		"CLCAM_VSIZE"
#define CamlinkVTapsString		"CLCAM_VTAPS"
#define CamlinkInfoString		"CLCAM_INFO"
#define CamlinkLibVersionString	"CLCAM_LIB_VERSION"
#define CamlinkTrigLevelString	"CLCAM_TRIG_LEVEL"
#define CamlinkDebugLevelString	"CLCAM_DEBUG"
#define CamlinkDebugSerString	"CLCAM_DEBUG_SER"
#define PgpAxiVersionString			"ClinkDev.Hardware.AxiPcieCore.AxiVersion.BuildStamp"
#define PgpCoreFpgaVersionString	"ClinkDev.Hardware.AxiPcieCore.AxiVersion.FpgaVersion"
#define PgpFebFpgaVersionString		"ClinkDev.ClinkFeb[0].AxiVersion.FpgaVersion"
#define PgpAppDataCntString			"ClinkDev.Application.AppLane[0].EventBuilder.DataCnt[0]" 

// This group provides a way to have serial readbacks get reflected in
// their ADBase class equivalents, for example
// SerAcquireTime	=>	ADAcquireTime 
#define CamlinkSerAcquireTimeString	"CLCAM_ACQUIRE_TIME"
#define CamlinkSerBinXString		"CLCAM_BIN_X"
#define CamlinkSerBinYString		"CLCAM_BIN_Y"
#define CamlinkSerGainString		"CLCAM_GAIN"
#define CamlinkSerMinXString		"CLCAM_MIN_X"
#define CamlinkSerMinYString		"CLCAM_MIN_Y"
#define CamlinkSerSizeXString		"CLCAM_SIZE_X"
#define CamlinkSerSizeYString		"CLCAM_SIZE_Y"
#define CamlinkSerTriggerModeString	"CLCAM_TRIGGER_MODE"

#define CamlinkSyncTotalCntString   "SYNC_TOTAL"
#define CamlinkSyncBadTSCntString   "SYNC_BAD_TS"
#define CamlinkSyncBadSyncCntString "SYNC_BAD_SYNC"


/*	Diagnostic variables	*/
extern int				DEBUG_PGP_CAMLINK;
extern unsigned long	imageCaptureCount;

/* "C" linkage Configuration functions for iocsh */
extern "C" int	pgpCamlinkConfig(
	const char	*	cameraName,
	int				board,
	int				lane,
	const char	*	modelName,
	const char	*	clMode		);
extern "C" int	pgpCamlinkConfigFull(
	const char	*	cameraName,
	int				board,
	int				lane,
	const char	*	modelName,
	const char	*	clMode,
	int				maxBuffers,		// 0 = unlimited
	size_t			maxMemory,		// 0 = unlimited
	int				priority,		// 0 = default 50, high is 90
	int				stackSize	);	// 0 = default 1 MB

#endif	/*	PGP_CAMLINK_H	*/
