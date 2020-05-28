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
//	asynPgpClSerial.h
//
//	Header file for asynPgpClSerial class.
//	It inherits from asynPortDriver and implements
//	serial I/O to PglCl framegrabber based camlink cameras
//	via the PglCl serial API
//
#ifndef	asynPgpClSerial_H
#define	asynPgpClSerial_H

#include "asynPortDriver.h"
#include "pgpClSerialDev.h"

#define	PGPCL_GENCP_TY_RESP_ACK		0
#define	PGPCL_GENCP_TY_RESP_STRING	1
#define	PGPCL_GENCP_TY_RESP_UINT	2
#define	PGPCL_GENCP_TY_RESP_INT		3
#define	PGPCL_GENCP_TY_RESP_FLOAT	4
#define	PGPCL_GENCP_TY_RESP_DOUBLE	5

#define	PGPCL_GENCP_RESPONSE_MAX	128

#define	N_AXI_LANES	4
#define	N_AXI_CHAN	4

class asynPgpClSerial;
typedef std::shared_ptr<asynPgpClSerial> asynPgpClSerialPtr;

///	asynPgpClSerial class
class asynPgpClSerial : public asynPortDriver
{
public:		//	Public member functions
	// Create a static class creator to return our custom class wrapped with a shared pointer
	static std::shared_ptr<asynPgpClSerial> create( const char * portName, unsigned int unit, unsigned int lane ) {
		static std::shared_ptr<asynPgpClSerial> ret;
		ret = std::make_shared<asynPgpClSerial>( portName, unit, lane,
								0,		// 0 = default 50, high is 90
								0,		// 0 = no auto-connect
								0,		// 0 = unlimited
								0,		// 0 = unlimited
								0 );	// 0 = default 1MB
		asynPgpClSerial::ClSerialAdd( ret );
		return(ret);
	}


	///	Constructor
	asynPgpClSerial(	const char			*	portName,
						int						unit,
						int						lane,
						int						priority	= 0,	// 0 = default 50, high is 90
						int						autoConnect	= 0,	// 0 = no auto-connect
						int						maxBuffers	= 0,	// 0 = unlimited
						size_t					maxMemory	= 0,	// 0 = unlimited
						int						stackSize	= 0		// 0 = default 1MB
						);

	/// Destructor
	virtual ~asynPgpClSerial();

	//
	//	asynPortDriver function overrides
	//
    virtual asynStatus	connect(	asynUser	* pasynUser	);

    virtual asynStatus	disconnect(	asynUser	* pasynUser	);

	virtual asynStatus	readOctet(
		asynUser		*	pasynUser,
		char			*	value,
		size_t				maxChars,
		size_t			*	nActual,
		int				*	eomReason	);

	virtual asynStatus	writeOctet(
		asynUser		*	pasynUser,
		const char		*	value,
		size_t				maxChars,
		size_t			*	nActual	);

    void	report(	FILE	*	fp,	int	details	);

public:	// Public class functions
	/// Registered with epicsAtExit() for clean disconnect
	static void ExitHook( void * pThis );

	static asynPgpClSerialPtr	ClSerialFindByName( const std::string & name );

	static bool					IsClSerialLaneUsed( unsigned int unit,  unsigned int lane );

private:    //  Private class functions
	static  void				ClSerialAdd(      asynPgpClSerialPtr pClSerial );
	static  void            	ClSerialRemove(   asynPgpClSerialPtr pClSerial );

private:	//	Private member variables
	asynUser		*	m_pasynUserStream;
	char			*	m_inputEosOctet;
	int					m_inputEosLenOctet;
	char			*	m_outputEosOctet;
	int					m_outputEosLenOctet;
	bool				m_fConnected;
	bool				m_fInputFlushNeeded;
	epicsMutexId		m_serialLock;
	unsigned long long	m_GenCpRegAddr;
	epicsUInt16			m_GenCpRequestId;
	unsigned int		m_GenCpResponseType;
	unsigned int		m_GenCpResponseCount;
	unsigned int		m_GenCpResponseSize;
	char				m_GenCpResponsePending[PGPCL_GENCP_RESPONSE_MAX];
	pgpClSerialDev		m_SerDev;
	unsigned int		m_unit;
	unsigned int		m_lane;

private:    //  Private class variables
    static  std::map<std::string, asynPgpClSerialPtr> ms_ClSerialMap;

};

#endif	//	asynPgpClSerial_H
