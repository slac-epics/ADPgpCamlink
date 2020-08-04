//////////////////////////////////////////////////////////////////////////////
// This file is part of 'ADPgpCamlink'.
// It is subject to the license terms in the LICENSE.txt file found in the 
// top-level directory of this distribution and at: 
//    https://confluence.slac.stanford.edu/display/ppareg/LICENSE.html. 
// No part of 'ADPgpCamlink', including this file, 
// may be copied, modified, propagated, or distributed except according to 
// the terms contained in the LICENSE.txt file.
//////////////////////////////////////////////////////////////////////////////
#ifndef	PGP_ROGUE_H
#define	PGP_ROGUE_H
/** Rogue register I/O driver via SLAC's Rogue software library **/



#ifdef __cplusplus

#include <map>
#include <string>
#include <vector>
#include <epicsMutex.h>
#include <epicsThread.h>
#include <dbScan.h>
#include "pgpClDev.h"
#include <rogue/protocols/batcher/Data.h>


#ifdef	USE_DIAG_TIMER
#include "HiResTime.h"
#include "ContextTimerMax.h"
#endif	//	USE_DIAG_TIMER

// Rogue operation data structure definition
class pgpRogue
{
public:		//	Public member functions

	///	Constructor
	pgpRogue(	const char			*	cameraName,
				int						board,
				int						lane,
				const char			*	modelName,
				const char			*	clMode,
				bool					fLcls2Timing
				);

	/// Destructor
	virtual ~pgpRogue();

	enum CamlinkMode_t { CL_MODE_BASE, CL_MODE_MEDIUM, CL_MODE_FULL };

	/// Open a fresh connection to Rogue
    int ConnectRogue( );

	/// Close the camera connections
    int DisconnectRogue( );

	int		UpdateStatus( int	newStatus	);

    int	GetAcquireCount()
	{
		return m_acquireCount;
	}

    void	report(	FILE	*	fp,	int	details	);

	/// Registered with epicsAtExit() for clean disconnect
	static void ExitHook( void * pThis );
 
 	/// Shutdown driver
	void Shutdown( );

	///	Get camera class, typically the manufacturer
	const std::string	&	GetRogueClass( ) const
	{
		return m_RogueClass;
	}

	///	Get camera Model
	const std::string	&	GetRogueModel( ) const
	{
		return m_RogueModel;
	}

	///	Get camera name
	const std::string	&	GetRogueName( ) const
	{
		return m_RogueName;
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

	//bool	InAcquireMode()
	//{
	//	return m_fAcquireMode;
	//}
	int	SetAcquireMode( int fAcquireMode );
	//bool	GetAcquireMode() const
	//{
	//	return m_fAcquireMode;
	//}

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

	/// Get frame count
	int		GetArrayCounter( ) const
	{
		return m_ArrayCounter;
	}

	/// Increment frame count
	int		IncrArrayCounter( );

	/// Set frame count
	int		SetArrayCounter( int value );

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

	///	Dump Rogue PGP variables
	int						DumpPgpVars( const char * pszFilePath, bool fWriteOnly, bool fForceRead );

	///	Show Rogue info on stdout
	int						ShowReport( int level );

	///	Set Rogue PGP variable
	int						SetPgpVariable( const char * pszVarPath, double value );

	///	Show Rogue PGP variable on stdout
	int						ShowPgpVariable( const char * pszVarPath, int level );

	///	Start Rogue image acquisition
	int						StartAcquisition( );

	///	Acquire next image from the camera
	int						ProcessImage(	ImageCbInfo	*	pImageInfo );

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

	int		CkDupTimeStamp(	const epicsTimeStamp*	pDest,
							int					*	pPulseNumRet );

    /// SetSerDisable
    int SetSerDisable( int value );

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

	static int	CreateRogue(
				const char			*	cameraName,
				int						board,
				int						lane,
				const char			*	modelName,
				const char			*	clMode,
				size_t					sizeX,
				size_t					sizeY,
				bool					fLcls2Timing,
				int						maxBuffers	= 0,	// 0 = unlimited
				size_t					maxMemory	= 0,	// 0 = unlimited
				int						priority	= 0,	// 0 = default 50, high is 90
				int						stackSize	= 0	);	// 0 = default 1MB

	static pgpRogue	*	RogueFindByName( const std::string & name );

	static pgpRogue	*	RogueFindByBoardLane( unsigned int board, unsigned int lane );


	static	int				ShowAllRogue( int level );

	static bool				IsRogueLaneUsed( unsigned int board,  unsigned int lane );

private:	//	Private member functions
	//	Internal version of reconfigure
	//	Don't call without holding m_reconfigLock!
	int		_Reconfigure( );
	int		_Reopen( );

	int		SetupROI( );

private:	//	Private class functions
	static	void			RogueAdd(		pgpRogue * pRogue );
	static	void			RogueRemove(	pgpRogue * pRogue );

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
	bool			m_fLcls2Timing;	// true to initialize w/ LCLS2 timing, false for LCLS1

	epicsTimeStamp	m_priorTimeStamp;	// Last timestamp for this event number

	std::string		m_RogueClass;	// Manufacturer of camera
	std::string		m_BuildStamp;	// camera info string
	std::string		m_RogueModel;	// model name as reported by camera
	std::string		m_RogueName;	// name of this camera, must be unique
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

//	CamlinkMode_t	m_CamlinkMode;

//	TriggerMode_t	m_TriggerMode;
//	TriggerMode_t	m_TriggerModeReq;

	unsigned int	m_ReConfigCount;// Reconfiguration counter

	// HW ROI and binning parameters from ADBase
	size_t	m_BinX,		m_BinXReq,		m_BinY,		m_BinYReq;
	size_t	m_MinX,		m_MinXReq,		m_MinY,		m_MinYReq;
	size_t	m_SizeX,	m_SizeXReq,		m_SizeY,	m_SizeYReq;

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
	//syncDataAcq<pgpRogue, pgpImage>		*	m_pSyncDataAcquirer;

	unsigned int	m_trigLevel;		// Ext. Trigger Mode (0=Edge,1=Level,2=Sync)

    int             m_SerialDisable;    // Flag to enable or disable the serial communication

    unsigned int    m_SyncTotal;        // Total images counter
    unsigned int    m_SyncBadTS;        // Images discarded by bad timestamp counter
    unsigned int    m_SyncBadSync;      // Images discarded by bad sync counter

	IOSCANPVT				m_ioscan;

private:	//	Private class variables
	static	std::map<std::string, pgpRogue *>	ms_pgpRogueMap;
};

#endif /* __cplusplus */


/*	Diagnostic variables	*/
extern int				DEBUG_PGP_ROGUE;

/* "C" linkage Configuration functions for iocsh */
extern "C" int	pgpRogueConfig(
	const char	*	cameraName,
	int				board,
	int				lane,
	const char	*	modelName,
	const char	*	clMode,
	size_t			sizeX,
	size_t			sizeY,
	bool			fLcls2Timing );
extern "C" int	pgpRogueConfigFull(
	const char	*	cameraName,
	int				board,
	int				lane,
	const char	*	modelName,
	const char	*	clMode,
	size_t			sizeX,
	size_t			sizeY,
	bool			fLcls2Timing,
	int				maxBuffers,		// 0 = unlimited
	size_t			maxMemory,		// 0 = unlimited
	int				priority,		// 0 = default 50, high is 90
	int				stackSize	);	// 0 = default 1 MB

#endif	/*	PGP_ROGUE_H	*/
