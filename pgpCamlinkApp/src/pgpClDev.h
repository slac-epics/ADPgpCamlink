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
//	pgpClDev.h
//
//	Header file for pgpClDev class.
//	It provides a device class to encapsulate
//	PglCl framegrabber based camlink cameras
//	via the SLAC Rogue API
//
#ifndef	pgpClDev_H
#define	pgpClDev_H

#include <memory>
#include <string>
#include <string.h>
#include <epicsMutex.h>
#include <epicsTime.h>

// rogue headers 
#include <rogue/hardware/axi/AxiMemMap.h>
#include <rogue/hardware/axi/AxiStreamDma.h>
#include <rogue/interfaces/memory/Constants.h>
#include <rogue/interfaces/stream/Slave.h>
#include <rogue/interfaces/stream/Master.h>

// ADPgpCamlink headers
#include "ImageStream.h"

#define PGPCL_DATACHAN_FEB_REG_ACCESS	0
#define PGPCL_DATACHAN_FEB_FRAME_ACCESS	1

typedef int (* ImageCallback)( void * pClientContext, ImageCbInfo * pCbInfo );


///	pgpClDev class
class pgpClDev
{
public:		//	Public member functions
	// Create a static class creator to return our custom class wrapped with a shared pointer
	static std::shared_ptr<pgpClDev> create( unsigned int board, unsigned int lane ) {
		static std::shared_ptr<pgpClDev> ret = std::make_shared<pgpClDev>( board, lane );

		return(ret);
	}

	///	Constructor
	pgpClDev(	unsigned int				board,
				unsigned int				channel	);

	/// Destructor
	virtual ~pgpClDev();

	void connect( );
	void disconnect( );

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

	void ProcessImage(	ImageCbInfo				*	pCbInfo );

	void ResetCounters();

	void cancelImageCallbacks( );

	void requestImageCallbacks(	void			*	pCallbackClient,
								ImageCallback		CallbackClientFunc );

	int		setTriggerEnable( unsigned int triggerNum, bool fEnable );
	bool	getTriggerEnable( unsigned int triggerNum );

private:
	//	Private member variables
	unsigned int		m_fd;
	unsigned int		m_board;
	unsigned int		m_lane;
	bool				m_fConnected;
	std::string			m_devName;
	std::string			m_DrvVersion;	// Driver Version
	std::string			m_LibVersion;	// Library Version
	epicsMutexId		m_devLock;

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

	rogue::hardware::axi::AxiStreamDmaPtr		m_pFebFrameChan;
	ImageStreamPtr								m_pImageStream;
	
	void									*	m_pCallbackClient;
	ImageCallback								m_CallbackClientFunc;
};

// Shared pointer alias
typedef std::shared_ptr<pgpClDev> pgpClDevPtr;

#endif	//	pgpClDev_H
