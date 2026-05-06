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
//	asynPgpClSerial driver
//
//	Asyn device support using rogue PgpCamlink serial interface via CamLink
//

#include "iostream"
#include "string.h"
#include "epicsExport.h"
#include "epicsStdio.h"
#include "errlog.h"
#include "iocsh.h"
#include "asynPortDriver.h"
#include "asynPgpClSerial.h"
#include "epicsThread.h"
#include "ClSerialMaster.h"
#include "ClSerialSlave.h"

extern int	DEBUG_PGPCL_SER;
int	DEBUG_PGPCL_MASKBIT7	= 1;

#define	MAX_ADDR		1
#define	MAX_PARAM		100

using namespace	std;

/// ClSerial map - Stores ptr to all asynPgpClSerial instances indexed by name
map<string, asynPgpClSerialPtr>   asynPgpClSerial::ms_ClSerialMap;

static const char * driverName = "asynPgpClSerial";

///	Constructor
asynPgpClSerial::asynPgpClSerial(
	const char			*	portName,
	int						board,
	int						lane,
	int						priority,		// 0 = default 50, high is 90
	int						autoConnect,	// 0 = no auto-connect
	int						maxBuffers,		// 0 = unlimited
	size_t					maxMemory,		// 0 = unlimited
	int						stackSize		// 0 = default 1MB
	)	:
	asynPortDriver(			portName,
							MAX_ADDR,
							//MAX_PARAM,
							asynCommonMask | asynOctetMask,	// Interface mask
							asynOctetMask,		// Interrupt mask
							ASYN_CANBLOCK,		// asynFlags
							autoConnect,
							priority,
							stackSize	),
	m_pasynUserStream(		NULL		),
	m_inputEosOctet(		NULL		),
	m_inputEosLenOctet(		0			),
	m_outputEosOctet(		NULL		),
	m_outputEosLenOctet(	0			),
	m_fConnected(			false		),
	m_fInputFlushNeeded(	true		),
	m_serialLock(						),
	m_SerDev(			board, lane		)
{
	const char		*	functionName	= "asynPgpClSerial::asynPgpClSerial";
	//	asynStatus			status;
	//	int					nbytes;
	//	asynOctet		*	pasynOctet;

	// Create mutexes
    m_serialLock	= epicsMutexMustCreate();

	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s driver %s constructor: port %s\n", driverName, functionName, portName );

	/*
	 * Check arguments
	 */
	if ( portName == NULL || *portName == '\0' )
	{
		printf("portName missing or empty.\n");
	}
	//asynPgpClSerial::ClSerialAdd( std::enable_shared_from_this<asynPgpClSerial>::shared_from_this() );
}

/// virtual Destructor
asynPgpClSerial::~asynPgpClSerial()
{
}

/// Open a fresh connection to the camera serial
asynStatus asynPgpClSerial::ConnectCamSerial( )
{
    static const char	*	functionName	= "asynPgpClSerial::ConnectCamSerial";
    asynStatus				status			= asynSuccess;

	if ( DEBUG_PGPCL_SER >= 1 )
		printf( "%s: in thread %s ...\n", functionName, epicsThreadGetNameSelf() );
	if ( m_fConnected )
	{
		if ( DEBUG_PGPCL_SER >= 1 )
			printf("%s: DisconnectCamSerial is being called\n", functionName);
		DisconnectCamSerial( );
	}

// asynPgpClSerial::connect not being called
// streamDebug 1 output below
// AsynDriverInterface.cc:450: TST:PGP:OPAL1:OpalSerialNumber_RBV: AsynDriverInterface::connectToBus(CAM.SER, -1): pasynManager->connectDevice(0x2394cd8, CAM.SER, -1) = asynSuccess
// AsynDriverInterface.cc:522: TST:PGP:OPAL1:OpalSerialNumber_RBV: AsynDriverInterface::connectToBus(CAM.SER, -1): device is now connected
// AsynDriverInterface.cc:373: AsynDriverInterface::getBusInterface(CAM.SER, -1): new interface allocated
// StreamBusInterface.cc:70: StreamBusInterface::find AsynDriverInterface matches
// StreamCore.cc:163: StreamCore::attachBus(busname="CAM.SER", addr=-1, param="") businterface=0x2394b00

	epicsMutexLock(m_serialLock);

	// open device
	m_SerDev.connect();
	m_fConnected	= true;
	epicsMutexUnlock(m_serialLock);

	int			connected	= 0;
	pasynManager->isConnected( this->pasynUserSelf, &connected );
	if ( !connected )
	{
		// Signal asynManager that we're connected.
		status = pasynManager->exceptionConnect( this->pasynUserSelf );
		if ( status != asynSuccess )
			asynPrint(	this->pasynUserSelf, ASYN_TRACE_ERROR,
						"%s port %s: Error calling pasynManager->exceptionConnect, error=%s\n",
						functionName, this->portName, this->pasynUserSelf->errorMessage );
		return asynError;
	}

	if ( DEBUG_PGPCL_SER >= 1 )
		printf( "%s: connected in thread %s ...\n", functionName, epicsThreadGetNameSelf() );

	return asynSuccess;
}

/// Close the camera serial connections
asynStatus asynPgpClSerial::DisconnectCamSerial( )
{
    static const char	*	functionName	= "asynPgpClSerial::DisconnectCamSerial";
    asynStatus				status			= asynSuccess;

	epicsMutexLock(m_serialLock);
	// TODO: Close device
	m_SerDev.disconnect();
	m_fConnected	= false;
	epicsMutexUnlock(m_serialLock);

	// Signal asynManager that we are disconnected
	status = pasynManager->exceptionDisconnect( this->pasynUserSelf );
	if ( status != asynSuccess )
		asynPrint(	this->pasynUserSelf, ASYN_TRACE_ERROR,
					"%s port %s: Error calling pasynManager->exceptionDisconnect, error=%s\n",
					functionName, this->portName, this->pasynUserSelf->errorMessage );

	return asynSuccess;
}

//
//	asynPortDriver function overrides
//
asynStatus	asynPgpClSerial::connect(
	asynUser			*	pasynUser	)
{
    static const char	*	functionName	= "asynPgpClSerial::connect";
    epicsSnprintf(	pasynUser->errorMessage, pasynUser->errorMessageSize, "%s:\n", functionName );

	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s: port %s\n", functionName, this->portName );
	asynPrint(	pasynUser, ASYN_TRACE_FLOW,
				"%s port %s\n", functionName, this->portName );

	return ConnectCamSerial( );
}


asynStatus	asynPgpClSerial::disconnect(
	asynUser			*	pasynUser	)
{
    static const char	*	functionName	= "asynPgpClSerial::disconnect";
    epicsSnprintf(	pasynUser->errorMessage, pasynUser->errorMessageSize, "%s:\n", functionName );

	if ( DEBUG_PGPCL_SER >= 1 )
		printf(  "%s: %s\n", functionName, this->portName );
	asynPrint(	pasynUser, ASYN_TRACE_FLOW,
				"%s port %s\n", functionName, this->portName );

	return DisconnectCamSerial( );
}


void maskBit7( char* pBuf, int sBuf )
{
	if ( pBuf == NULL || sBuf == 0 )
		return;

	const char*	pBufEnd	= pBuf + sBuf - 2; // 1; // Include checksum
	pBuf += 3;
	while ( pBuf < pBufEnd )
	{
		*pBuf++ &= 0x7f;
	}
}


bool isAscii( const char * pBuf, int sBuf )
{
	if ( pBuf == NULL || sBuf == 0 )
	{
		if ( DEBUG_PGPCL_SER >= 1 )
			printf("*** isAscii: pBuf %p, sBuf %d\n", pBuf, sBuf);
		return false;
	}

	const char  *	pBufBeg = pBuf;
	const char	*	pBufEnd	= pBuf + sBuf;
	while ( pBuf < pBufEnd )
	{
		char	next = *pBuf++;
		if ( next < 0 || next >= 0x7F )     // Revisit
		{
			if ( DEBUG_PGPCL_SER >= 5 )
				printf("*** isAscii: Non ASCII character: %02x at offset %ld\n", next, pBuf - pBufBeg - 1);
			return false;
		}
	}
	return true;
}


asynStatus asynPgpClSerial::readOctet(
    asynUser    *pasynUser,
    char        *pBuffer,
    size_t       nBytesReadMax,
    size_t      *pnRead,
    int         *eomReason )
{
    asynStatus          status = asynSuccess;
    static const char  *functionName = "asynPgpClSerial::readOctet";
    int                 nAvailToRead = 0;

    if ( pnRead )
        *pnRead = 0;

    // *** CHANGED: Default to 0, not ASYN_EOM_EOS ***
    if ( eomReason )
        *eomReason = 0;

    if ( nBytesReadMax == 0 )
    {
        epicsSnprintf( pasynUser->errorMessage, pasynUser->errorMessageSize,
            "%s: %s nBytesReadMax is 0! Why?\n", functionName, this->portName );
        return asynError;
    }

    unsigned char *pReadBuffer = (unsigned char *) pBuffer;
    size_t sReadBuffer = nBytesReadMax;

    int nRead = 0;

    for (;;)
    {
        epicsMutexLock(m_serialLock);
        if ( DEBUG_PGPCL_SER >= 4 )
            printf( "%s: %s Have serial lock, nBytesReadMax %zu, sReadBuffer %zu, timeout %.3f ...\n",
                functionName, this->portName, nBytesReadMax, sReadBuffer, pasynUser->timeout );

        if ( m_fConnected )
        {
            nAvailToRead = m_SerDev.getNumAvailBytes();
            if ( DEBUG_PGPCL_SER >= 4 )
            {
                epicsTimeStamp  now;
                char            tsBuffer[40];
                (void) epicsTimeGetCurrent(&now);
                tsBuffer[0] = 0;
                epicsTimeToStrftime( tsBuffer, sizeof(tsBuffer),
                    "%Y/%m/%d %H:%M:%S.%03f", &now );
                printf("%s %s: nAvailToRead %d\n", tsBuffer, functionName, nAvailToRead);
            }
        }

        if ( 1 || nAvailToRead > 0 )
        {
            int nToRead = static_cast<int>(sReadBuffer);

            asynPrint( pasynUser, ASYN_TRACE_FLOW,
                "%s: %s nToRead %d\n", functionName, this->portName, nToRead );

            epicsMutexLock(m_serialLock);
            if ( DEBUG_PGPCL_SER >= 4 )
                printf( "%s: %s Have serial lock, reading %d ...\n",
                    functionName, this->portName, nToRead );

            if ( m_fConnected )
            {
                double timeout = 0.2;
                if ( pasynUser->timeout > 0 )
                    timeout = pasynUser->timeout;
                nRead = m_SerDev.readBytes( pReadBuffer, timeout, nToRead );
            }
            else
                nRead = 0;

            epicsMutexUnlock(m_serialLock);
            if ( DEBUG_PGPCL_SER >= 4 )
                printf( "%s: %s Released serial lock, read %d ...\n",
                    functionName, this->portName, nRead );
        }

        epicsMutexUnlock(m_serialLock);
        if ( DEBUG_PGPCL_SER >= 4 )
            printf( "%s: %s Released serial lock, Read %d, nBytesReadMax %zu ...\n",
                functionName, this->portName, nRead, nBytesReadMax );

        if ( nRead > 0 )
        {
            break; /* If we have something, we're done. */
        }

        // Handle errors
        if ( (nAvailToRead < 0 || nRead < 0)
            && (errno != EWOULDBLOCK)
            && (errno != EINTR)
            && (errno != EAGAIN) )
        {
            epicsSnprintf( pasynUser->errorMessage, pasynUser->errorMessageSize,
                "%s: %s read error: %s\n",
                functionName, this->portName, strerror(errno) );
            status = asynError;
            m_fInputFlushNeeded = true;
            break;
        }

        break;
    } // end forever loop

    // *** CHANGED: Timeout handling — don't set ASYN_EOM_EOS ***
    if ( nRead == 0 && (pasynUser->timeout > 0) && (status == asynSuccess) )
    {
        status = asynTimeout;
        // eomReason stays 0
    }

    if ( pnRead )
        *pnRead = nRead;

    // *** CHANGED: Set eomReason based on actual conditions ***
    if ( nRead > 0 )
    {
        if ( eomReason )
        {
            *eomReason = 0;

            // Was the buffer completely filled?
            if ( nRead >= static_cast<int>(sReadBuffer) )
            {
                *eomReason |= ASYN_EOM_CNT;
            }

            // Was the configured EOS actually found in the data?
            if ( m_SerDev.wasEosFound() )
            {
                *eomReason |= ASYN_EOM_EOS;
            }
        }

        // Null-terminate if there's room (convenience, doesn't affect binary)
        if ( nRead < static_cast<int>(sReadBuffer) )
        {
            pBuffer[nRead] = 0;
        }

        // Logging
        asynPrintIO( pasynUser, ASYN_TRACEIO_DRIVER, pBuffer, nRead,
            "%s: %s  read  %d of %d\n",
            functionName, this->portName, nRead, nAvailToRead );

        if ( isAscii( pBuffer, nRead ) )
        {
            if ( DEBUG_PGPCL_SER >= 3 )
                printf( "%s: %s Read %d: %s\n", functionName, this->portName, nRead, pBuffer );
            asynPrint( pasynUser, ASYN_TRACE_FLOW,
                "%s: %s  read  %d, status %d, Buffer: %s\n",
                functionName, this->portName, nRead, status, pBuffer );
        }
        else
        {
            if ( DEBUG_PGPCL_SER >= 3 )
            {
                printf( "%s: %s Read %d\n", functionName, this->portName, nRead );
                printf( "%s: ", functionName );
                for ( int i = 0; i < nRead; ++i )
                    printf( "%02hhx ", pBuffer[i] );
                printf( "\n" );
            }
            asynPrint( pasynUser, ASYN_TRACE_FLOW,
                "%s: %s read %d, status %d\n",
                functionName, this->portName, nRead, status );
        }

        callParamCallbacks();
    }

    if ( DEBUG_PGPCL_SER >= 4 )
    {
        printf( "%s: returning status %d, pBuffer '%s', pnRead %zu, eomReason %d\n",
            functionName, status, pBuffer, pnRead ? *pnRead : 0,
            eomReason ? *eomReason : -1 );
    }

    return status;
}

asynStatus	asynPgpClSerial::writeOctet(
	asynUser			*	pasynUser,
	const char			*	pBuffer,
	size_t					maxChars,
	size_t				*	pnWritten	)
{
	asynStatus				status			= asynSuccess;
    static const char	*	functionName	= "asynPgpClSerial::writeOctet";
    // const char			*	reasonName		= "unknownReason";

	if ( DEBUG_PGPCL_SER >= 4 )
		printf(  "%s:\n", functionName );
	// getParamName( 0, pasynUser->reason, &reasonName );
	asynPrint(	pasynUser, ASYN_TRACE_FLOW,
				"%s: %s maxChars %zu\n", functionName, this->portName, maxChars );

	if ( pnWritten )
		*pnWritten = 0;

	if ( maxChars == 0 )
		return asynSuccess;

	if ( !m_fConnected )
	{
		epicsSnprintf(	pasynUser->errorMessage, pasynUser->errorMessageSize,
						"\n%s Error: %s disconnected:", functionName, this->portName );
		m_fInputFlushNeeded = true;
		return asynError;
	}

	// See if we need to flush the serial input buffer
	if ( m_fInputFlushNeeded )
	{
		// Flush the read buffer
		unsigned char	flushBuf[1000];
		int				nAvailToRead = 0;
		epicsMutexLock( m_serialLock );
		if ( m_fConnected )
		{
			nAvailToRead = m_SerDev.getNumAvailBytes();
			if( nAvailToRead > 0 )
				nAvailToRead = m_SerDev.readBytes( flushBuf, pasynUser->timeout, nAvailToRead );
		}
		epicsMutexUnlock( m_serialLock );
		printf( "%s: Flushed %d bytes\n", functionName, nAvailToRead );
		m_fInputFlushNeeded = false;
	}

	const unsigned char	*	pSendBuffer	= (unsigned char *) pBuffer;
	size_t					sSendBuffer	= maxChars;

	// Note:
	// This driver is designed to be used from DTYP "stream" PV's.
	// The streamdevice asynDriver owns the pgpClSerialDev lane
	// and manages any bytes read from that lane, using it's
	// own layer of mutex protection.
	//int		status	= -1;
	epicsMutexLock( m_serialLock );
	if ( m_fConnected )
		*pnWritten = m_SerDev.sendBytes( pSendBuffer, sSendBuffer );
	epicsMutexUnlock( m_serialLock );

	if ( *pnWritten > 0 )
	{
		if ( isAscii( pBuffer, strlen(pBuffer) ) )
		{
			asynPrint(	pasynUser,	ASYN_TRACE_FLOW,
						"%s: wrote %zu to %s: %s\n",
						functionName, *pnWritten, this->portName, pBuffer	);
		}
		else
		{
			if ( DEBUG_PGPCL_SER >= 3 )
			{
				printf("%s: ", functionName);
				for (unsigned i = 0; i < *pnWritten; ++i)
					printf("%02hhx ", pBuffer[i]);
				printf("\n");
			}
			asynPrint(	pasynUser,	ASYN_TRACE_FLOW,
						"%s: wrote %zu to %s\n",
						functionName, *pnWritten, this->portName );
		}
		asynPrintIO(pasynUser, ASYN_TRACEIO_DRIVER, pBuffer, *pnWritten,
					"%s: %s wrote %zu\n", functionName, this->portName, *pnWritten );
	}
	else
	{
		epicsSnprintf(	pasynUser->errorMessage, pasynUser->errorMessageSize,
						"\n%s: %s write error\n",
						functionName, this->portName );
		status = asynError;
		m_fInputFlushNeeded = 1;
	}

	// TODO: Do we need callParamCallbacks() here?
	// Call the parameter callbacks
    callParamCallbacks();

    return status;
}

asynStatus asynPgpClSerial::setInputEosOctet(
    asynUser    *pasynUser,
    const char  *eos,
    int          eosLen )
{
    static const char *functionName = "asynPgpClSerial::setInputEosOctet";

    if ( DEBUG_PGPCL_SER >= 2 )
    {
        printf( "%s: port %s, eosLen=%d", functionName, this->portName, eosLen );
        if ( eosLen > 0 )
        {
            printf( ", eos=" );
            for ( int i = 0; i < eosLen; i++ )
                printf( " 0x%02x", (unsigned char)eos[i] );
        }
        printf( "\n" );
    }

    // Store locally
    if ( m_inputEosOctet )
    {
        free( m_inputEosOctet );
        m_inputEosOctet = NULL;
    }

    if ( eosLen > 0 && eos != NULL )
    {
        m_inputEosOctet = (char *) calloc( 1, eosLen + 1 );
        if ( m_inputEosOctet )
            memcpy( m_inputEosOctet, eos, eosLen );
        m_inputEosLenOctet = eosLen;
    }
    else
    {
        m_inputEosLenOctet = 0;
    }

    // Pass down to the serial device layer
    m_SerDev.setInputEos( m_inputEosOctet, m_inputEosLenOctet );

    asynPrint( pasynUser, ASYN_TRACE_FLOW,
        "%s: port %s, eosLen=%d\n", functionName, this->portName, eosLen );

    return asynSuccess;
}

asynStatus asynPgpClSerial::getInputEosOctet(
    asynUser    *pasynUser,
    char        *eos,
    int          eosSize,
    int         *eosLen )
{
    static const char *functionName = "asynPgpClSerial::getInputEosOctet";

    if ( m_inputEosLenOctet > 0 && m_inputEosOctet != NULL )
    {
        int copyLen = m_inputEosLenOctet;
        if ( copyLen >= eosSize )
            copyLen = eosSize - 1;
        memcpy( eos, m_inputEosOctet, copyLen );
        eos[copyLen] = '\0';
        *eosLen = copyLen;
    }
    else
    {
        if ( eosSize > 0 )
            eos[0] = '\0';
        *eosLen = 0;
    }

    asynPrint( pasynUser, ASYN_TRACE_FLOW,
        "%s: port %s, eosLen=%d\n", functionName, this->portName, *eosLen );

    return asynSuccess;
}

void asynPgpClSerial::report( FILE * fp, int details )
{
    fprintf(	fp, "pgpClSerial port %s: %s\n",
				this->portName, m_fConnected ? "Connected" : "Disconnected" );
#if 0
    fprintf(	fp, "pgpClSerial port %s: model %s\n",
				this->portName, get_camera_model( ) );
#endif

    if ( details >= 2 )
	{
		int			connected	= 0;
		pasynManager->isConnected( this->pasynUserSelf, &connected );
		if ( m_fConnected && !connected )
		{
			fprintf(	fp, "Warning, pgpClSerial port %s thinks it's %s, but asynManager says %s\n",
						portName,
						m_fConnected	? "Connected" : "Disconnected",
						connected		? "Connected" : "Disconnected"	);
		}
	}
    if ( details >= 1 )
	{
        fprintf( fp, "InputEosOctet  0x%p, len %d\n", m_inputEosOctet,  m_inputEosLenOctet  );
        fprintf( fp, "OutputEosOctet 0x%p, len %d\n", m_outputEosOctet, m_outputEosLenOctet );

		/* Call the base class method */
		asynPortDriver::report( fp, details );
    }
}


bool asynPgpClSerial::IsClSerialLaneUsed( unsigned int unit,  unsigned int lane )
{
	map<string, asynPgpClSerialPtr>::iterator	it;
	for ( it = ms_ClSerialMap.begin(); it != ms_ClSerialMap.end(); ++it )
	{
		asynPgpClSerialPtr	pClSerial	= it->second;
        if ( unit == pClSerial->m_unit && lane == pClSerial->m_lane )
			return true;
    }

    return false;
}


asynPgpClSerialPtr	asynPgpClSerial::ClSerialFindByName( const string & name )
{
	map<string, asynPgpClSerialPtr>::iterator	it	= ms_ClSerialMap.find( name );
	if ( it == ms_ClSerialMap.end() )
		return NULL;
	return it->second;
}

void asynPgpClSerial::ClSerialAdd(		asynPgpClSerialPtr pClSerial )
{
	assert( ClSerialFindByName( pClSerial->m_SerDev.getName() ) == NULL );
	if ( DEBUG_PGPCL_SER >= 1 )
		std::cout << "ClSerialAdd: " << pClSerial->m_SerDev.getName() << std::endl;
	ms_ClSerialMap[ pClSerial->m_SerDev.getName() ]	= pClSerial;
}

void asynPgpClSerial::ClSerialRemove(	asynPgpClSerialPtr pClSerial )
{
	ms_ClSerialMap.erase( pClSerial->m_SerDev.getName() );
}

extern "C" int
pgpClSerialConfig(
	const char	*	portName,
	int				unit,
	int				lane,
	const char	*	modelName,
	const char	*	clMode	)
{
    if (  portName == NULL || strlen(portName) == 0 )
    {
        errlogPrintf( "NULL or zero length asyn portName.\nUsage: pgpClSerialConfig(portName,unit,lane,config)\n");
        return  -1;
    }
    if (  modelName == NULL || strlen(modelName) == 0 )
    {
        errlogPrintf( "NULL or zero length config name.\nUsage: pgpClSerialConfig(portName,unit,lane,config)\n");
        return  -1;
    }
    if (  clMode == NULL || strlen(clMode) == 0 )
    {
        errlogPrintf( "NULL or zero length camlink mode.\nUsage: pgpClSerialConfig(portName,unit,lane,config,mode)\n");
        return  -1;
    }
	asynPgpClSerialPtr	pClSerial = asynPgpClSerial::create( portName, unit, lane );
	if ( pClSerial )
	{
		int status = pClSerial->ConnectCamSerial( );
		if ( status != 0 )
			errlogPrintf( "pgpClSerialConfig failed for unit %d lane %d!\n", unit, lane );
	}
    return 0;
}

// Register Function:
//	int pgpClSerialConfig( const char * portName, int unit, int lane, const char * modelName )
static const iocshArg		pgpClSerialConfigArg0	= { "name",			iocshArgString };
static const iocshArg		pgpClSerialConfigArg1	= { "unit",			iocshArgInt };
static const iocshArg		pgpClSerialConfigArg2	= { "lane",			iocshArgInt };
static const iocshArg		pgpClSerialConfigArg3	= { "modelName",	iocshArgString };
static const iocshArg		pgpClSerialConfigArg4	= { "clMode",		iocshArgString };
static const iocshArg	*	pgpClSerialConfigArgs[5]	=
{
	&pgpClSerialConfigArg0, &pgpClSerialConfigArg1, &pgpClSerialConfigArg2, &pgpClSerialConfigArg3, &pgpClSerialConfigArg4
};
static const iocshFuncDef   pgpClSerialConfigFuncDef	= { "pgpClSerialConfig", 5, pgpClSerialConfigArgs };
static int  pgpClSerialConfigCallFunc( const iocshArgBuf * args )
{
    return pgpClSerialConfig( args[0].sval, args[1].ival, args[2].ival, args[3].sval, args[4].sval );
}
void pgpClSerialConfigRegister(void)
{
	iocshRegister( &pgpClSerialConfigFuncDef, reinterpret_cast<iocshCallFunc>(pgpClSerialConfigCallFunc) );
}


extern "C"
{
	epicsExportRegistrar( pgpClSerialConfigRegister );
	epicsExportAddress( int, DEBUG_PGPCL_SER );
	epicsExportAddress( int, DEBUG_PGPCL_MASKBIT7 );
}
