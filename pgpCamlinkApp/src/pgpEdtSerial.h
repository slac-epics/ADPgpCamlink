/*
 * asyn driver for serial communication.
 */

#ifndef pgpEdtSerial_H
#define pgpEdtSerial_H

#include "asynPortDriver.h"


class epicsShareFunc pgpEdtSerial : public asynPortDriver {
public:
    pgpEdtSerial( const char *portName, int board, int chan, int asynFlags,
                  int autoConnect, int priority, int stackSize );

    /* These are the methods that we override from asynPortDriver */
    virtual asynStatus writeOctet( asynUser *pasynUser, const char *value,
                                   size_t maxChars, size_t *nActual );
    virtual asynStatus  readOctet( asynUser *pasynUser,       char *value,
                                   size_t maxChars, size_t *nActual,
                                   int *eomReason );
    virtual asynStatus flushOctet( asynUser *pasynUser );

protected:
    char    dev0[80];
    int     channel;                                           // channel number

    #define FIRST_CLS_PARAM channel
    #define LAST_CLS_PARAM  channel
};

#define NUM_CLS_PARAMS (&LAST_CLS_PARAM - &FIRST_CLS_PARAM + 1)

#endif

