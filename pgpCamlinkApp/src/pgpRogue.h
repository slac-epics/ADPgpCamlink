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
#include "axiRogueLib.h"
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

    /// SetSerDisable
    int SetSerDisable( int value );

	/// Return shared_ptr to axiRogueLib device
	axiRogueLibPtr			GetRogueLib( ) const
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

//	int		SetupROI( );

private:	//	Private class functions
	static	void			RogueAdd(		pgpRogue * pRogue );
	static	void			RogueRemove(	pgpRogue * pRogue );

public:		//	Public member variables	(Make these private!)

protected:	//	Protected member variables
//	bool			m_fAcquireMode;		// Set true to start acquiring images, false to halt
	bool			m_fExitApp;			// Set true to shutdown ioc
	bool			m_fReconfig;		// True when we need to reconfigure the ROI or other camera parameters
	bool			m_fReopen;			// True when we need to reread the configuration file

private:	//	Private member variables
	axiRogueLibPtr 	m_pDev;			// shared_ptr to axiRogueLib device

	unsigned int	m_board;		// index of Pgpcamlink card
	unsigned int	m_lane;			// lane on  Pgpcamlink card
	bool			m_fLcls2Timing;	// true to initialize w/ LCLS2 timing, false for LCLS1

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

	unsigned int	m_ReConfigCount;// Reconfiguration counter

	unsigned int	m_ReCfgCnt;		// Reconfigure counter (increments by 1 each reconfigure)
	epicsMutexId	m_reconfigLock;	// Protect against more than one thread trying to reconfigure the device

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

#endif	/*	PGP_ROGUE_H	*/
