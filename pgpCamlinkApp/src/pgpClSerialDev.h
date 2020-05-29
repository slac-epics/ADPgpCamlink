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
//	pgpClSerialDev.h
//
//	Header file for pgpClSerialDev class.
//	It provides a device class to encapsulate
//	serial I/O to PglCl framegrabber based camlink cameras
//	via the PglCl serial API
//
#ifndef	pgpClSerialDev_H
#define	pgpClSerialDev_H

#include <string>
#include <string.h>
#include <epicsMutex.h>
#include <rogue/hardware/axi/AxiMemMap.h>
#include <rogue/hardware/axi/AxiStreamDma.h>

#include "ClSerialMaster.h"
#include "ClSerialSlave.h"

#define	N_AXI_LANES	4
#define	N_AXI_CHAN	4

///	pgpClSerialDev class
class pgpClSerialDev
{
public:		//	Public member functions

	///	Constructor
	pgpClSerialDev(	unsigned int				board,
					unsigned int				channel	);

	/// Destructor
	virtual ~pgpClSerialDev();

	int connect( );
	void disconnect( );

	const std::string	&	getName( ) const
	{
		return m_devName;
	}

	int readBytes( unsigned char * buffer, double timeout, size_t nBytes );

	int sendBytes( const unsigned char * buffer, size_t nBytes );

	/// sendString function treats zero as the end of the string.
	int sendString( const char * toSend )
	{
		const unsigned char * buffer	= (const unsigned char *) toSend;
		return sendBytes( buffer, strlen(toSend) );
	}

	int sendString( const std::string	& toSend )
	{
		return sendBytes( (const unsigned char *) toSend.c_str(), toSend.size() );
	}

	void flush( )
	{
		m_pClSerialRx->flush();
	}

	size_t	getNumAvailBytes( ) const
	{
		//return m_ReplyBuffer.size();
		return m_pClSerialRx->getNumAvailBytes();
	}

private:
	//	Private member variables
	unsigned int		m_board;
	unsigned int		m_lane;
	bool				m_fConnected;
	std::string			m_devName;
	epicsMutexId		m_devLock;

	ClSerialSlavePtr						m_pClSerialRx;
	ClSerialMasterPtr						m_pClSerialTx;
	rogue::hardware::axi::AxiStreamDmaPtr	m_pDataChan;
};

#endif	//	pgpClSerialDev_H
