/*
 * asyn driver for serial communication.
 */

#include <algorithm>
#include <iostream>
#include <unistd.h>
#include <iomanip>

#include <fcntl.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <epicsString.h>
#include <epicsMutex.h>
#include <cantProceed.h>

#include <iocsh.h>
#include <epicsExit.h>

#include <asynPortDriver.h>

#include <epicsExport.h>
#include "pgpEdtSerial.h"

//Copied #define's from "PgpCardG3_CLinkMod.h"
#define GrbCSR_Addr     0x100
#define NumBits_Addr    0x120
#define NumTrains_Addr  0x140
#define NumCycles_Addr  0x160
#define SerBaud_Addr    0x180
#define SerSend_Addr    0x1A0
#define SerReply_Addr   0x1C0
#define PreScale_Addr   0x1E0
#define TrgCode_Addr    0x200
#define TrgDelay_Addr   0x220
#define TrgWidth_Addr   0x240


/*
 * Called by asyn writeOctet -- writes the octet of bytes to the serial register
 * @param  pasynUser
 * @param  value    a string.
 * @param  nchars   length of the string
 * @param  nActial  actuial number of characters written
 * 
 */

asynStatus pgpEdtSerial::writeOctet( asynUser *pasynUser, const char *value,
                                     size_t nChars, size_t *nActual )
{
    int          pdev0, ti = 0, ci;
    char         aval;
    epicsUInt32  rAddr;

    int          status = 1;

    *nActual = 0;

    while ( 1 )
    {
        pdev0 = open( dev0, O_RDWR );
        if ( pdev0 != -1 ) break;

        if ( ti < 150 )
        {   
            usleep( 100000 );
            ti++;
        }
        else
            break;
    }

    if ( pdev0 == -1 ) return( asynError );

    rAddr = SerSend_Addr + 4*channel;

    for ( ci=0; ci<strlen(value); ci++ )
    {
        aval   = *(value + ci);
        // status = pgpcard_setReg( pdev0, rAddr, aval );
        if ( status != 0 )
        {
            close( pdev0 );

            return( asynError );
        }

        *nActual += 1;
    }

    close( pdev0 );

    return( asynSuccess );
}

/*
 * reads the serial register back to epics driver. 
 * @param pasynUser
 * @param value      memory in which to put data from serial register
 * @param maxChars   size of mem value
 * @param nActual    actual chars read into value
 * @param eomReason  set to 0
 * @return           always return asynSucess
 */

asynStatus pgpEdtSerial::readOctet( asynUser *pasynUser, char *value,
                                    size_t maxChars, size_t *nActual,
                                    int *eomReason )
{
    int          pdev0, ti = 0, ci;
    char         sertfg[4];
    epicsUInt32  rAddr;

    int          status = 1;

    *nActual   = 0;
    *eomReason = 0;

    while ( 1 )
    {
        pdev0 = open( dev0, O_RDWR );
        if ( pdev0 != -1 ) break;

        if ( ti < 150 )
        {   
            usleep( 100000 );
            ti++;
        }
        else
            break;
    }

    if ( pdev0 == -1 ) return( asynError );

    rAddr = SerReply_Addr + 4*channel;

    ti    = 0;
    ci    = 0;
    while ( ti < 200 )
    {
        // status = pgpcard_readReg( pdev0, rAddr, (epicsUInt32 *)sertfg );

        if ( sertfg[0] != 0xffffffff )
        {
            if ( ci < maxChars ) *(value+ci) = sertfg[0];

            ci++;
            if ( ci == maxChars ) break;
        }
        else if ( ci > 0 )
            break;

        usleep( 1000 );
        ti++;
    }

    close( pdev0 );

    if ( ci == 0 )
    {
        *nActual   = 0;
        *eomReason = 0;
        return( asynTimeout  );
    }
    else
    {
        *nActual   = ci;
        *eomReason = ASYN_EOM_CNT;
        return( asynSuccess  );
    }

    return( asynSuccess );
}

/*
 * Empties the serial FIFO
 * @param  pasynUser
 * @return            always return asynSuccess
 */

asynStatus pgpEdtSerial::flushOctet( asynUser *pasynUser )
{
    int          pdev0, ti = 0;
    char         sertfg[4];
    epicsUInt32  rAddr;

    int          status = 1;

    while ( 1 )
    {
        pdev0 = open( dev0, O_RDWR );
        if ( pdev0 != -1 ) break;

        if ( ti < 150 )
        {   
            usleep( 100000 );
            ti++;
        }
        else
            break;
    }

    if ( pdev0 == -1 ) return( asynError );

    rAddr = SerReply_Addr + 4*channel;

    ti    = 0;
    while ( ti < 200 )
    {
        // status = pgpcard_readReg( pdev0, rAddr, (epicsUInt32 *)sertfg );

        if ( sertfg[0] == 0xffffffff ) break;

        usleep( 100 );
        ti++;
    }

    close( pdev0 );

    return( asynSuccess );
}

/*
 * constructor for pgpEdtSerial. 
 * @param  portName       Port name of this asyn driver.
 * @param  board          Index of the board (0 - ).
 * @param  chan           Channel number (0 - 7).
 * @param  asynFlags      asyn flag bits
 * @param  autoConnect    1 for autoconnect ON. We use 0
 * @param  priority       Use 50. Sets thread priority from 0 to 100
 * @param  stackSize      Use 0. Automatic stack size.
 */

pgpEdtSerial::pgpEdtSerial( const char *portName, int board, int chan,
                            int asynFlags, int autoConnect, int priority,
                            int stackSize )
    : asynPortDriver( portName, 1, NUM_CLS_PARAMS,
                      asynOctetMask | asynDrvUserMask | asynOptionMask,
                      asynOctetMask | asynOptionMask,
                      asynFlags, autoConnect, priority, stackSize ),
                      channel(chan)
{
    sprintf( dev0, "/dev/datadev_%d", board );

    pasynManager->exceptionConnect( pasynUserSelf );
}

