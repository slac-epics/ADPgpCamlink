/* pgpCamlink.cpp
 *
 * This is a driver for the SLAC PGP CameraLink frame grabber
 *
 * Author:  Dehong Zhang
 *          SLAC National Accelerator Laboratory
 *
 * Created: Sept 20, 2016
 *
 * Modified to work via rogue:	Bruce Hill, Mar 2020
 */

#include <algorithm>
#include <atomic>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>

#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <math.h>
#include <poll.h>

#include <asynDriver.h>
#include <asynPortDriver.h>

// aes-stream-drivers headers 
#include <AxisDriver.h>
#include <AxiVersion.h>
#include <DmaDriver.h>

#include <rogue/Helpers.h>
#include <rogue/hardware/axi/AxiMemMap.h>
#include <rogue/hardware/axi/AxiStreamDma.h>
#include <rogue/interfaces/memory/Constants.h>
#include <rogue/interfaces/stream/Slave.h>
#include <rogue/interfaces/stream/Master.h>
#include <rogue/protocols/batcher/SplitterV1.h>
#include <rogue/protocols/srp/SrpV3.h>

#include "ClMemoryMaster.h"
#include "ClStreamSlave.h"
#include "ClSerialMaster.h"
#include "ClSerialSlave.h"
#include "FebMemoryMaster.h"

#include "dbAccess.h"

#include <epicsTime.h>
#include <epicsThread.h>
#include <epicsEvent.h>
#include <epicsMutex.h>
#include <epicsString.h>
#include <epicsStdio.h>
#include <epicsMutex.h>
#include <cantProceed.h>
#include <iocsh.h>

#include "ADDriver.h"
#include <epicsExport.h>

//#include "PgpCardG3_CLinkMod.h"
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
//#include "PgpCardG3_CLinkWrap.h"
//#include "PgpDriver.h"
//#include "pgpEdtSerial.h"

std::atomic<bool> terminate;

unsigned dmaDest(unsigned lane, unsigned vc)
{
    return (lane<<8) | vc;
}

static const char *driverName = "pgpCamlink";

#define	N_AXI_LANES	4
#define	N_AXI_CHAN	4


class pgpCamlink : public ADDriver
{
public:
    pgpCamlink( const char *portName, int board, int chan,
            int maxSizeX, int maxSizeY, int numBits, NDDataType_t dataType,
            int maxBuffers, size_t maxMemory, int priority, int stackSize );

    /* These are the methods that we override from ADDriver */
    virtual asynStatus writeInt32( asynUser *pasynUser, epicsInt32  value );
    virtual asynStatus writeOctet( asynUser *pasynUser, const char *value,
                                   size_t maxChars, size_t *nActual );
    virtual void report( FILE *fp, int details );

    void acqTask();     // Should be private, but public so can be called from C

protected:

    int  baud;                                               // serial baud rate
    int  ssus;                                 // usleep between serial commands
    int  nbit;                                            // # of bits per pixel
    int  pack;                                     // MGT pack: 0 -> 24; 1 -> 16
    int  vOut;           // video output order: 0 -> Top Down; 1 -> Top & Bottom
    int  skipRow;                                                   // skip rows
    int  skipCol;                                                // skip columns
    int  fullRow;                                   // full frame number of rows
    int  fullCol;                                // full frame number of columns
    int  numTrains;                                      // number of MGT trains
    int  numCycles;                                      // number of MGT cycles
    int  cc;                            // cameralink trigger line (1 through 4)
    int  polarity;                                           // trigger polarity
    int  prescale;                             // EVR prescale: 0 -> 119; 1 -> 1
    int  code;                                               // EVR trigger code
    int  delay;                                       // invariant trigger delay
    int  width;                                           // trigger pulse width
    int  trg2frame;                        // cycles from trigger to frame valid
    int  frameRate;                                                // frame rate
    int  csta;                                                    // status word
    int  cmdInit;                                 // commands for initialization
    int  cmdFull;                                     // commands for full frame
    int  cmdROI;                                          // commands for HW ROI
    int  cmdEVR;                                     // commands for EVR trigger
    int  cmdFree;                                       // commands for free run
    int  cmdTPtn;                                   // commands for test pattern
    int  cmdAny;                                                  // any command
    int  resp;                                                       // response
    int  exposure;                                       // full frame or HW ROI
    int  tstPtn;                                        // test patternon or off
    int  reIni;                                                 // re-initialize

    #define FIRST_CLCAM_PARAM baud
    #define LAST_CLCAM_PARAM  reIni

private:
    /* These are the methods that are new to this class */
    long ser_send_recv   ( asynUser *pasynUser, const char *cmds, char *reply,
                                                                   int pass=0 );
    long set_register    ( asynUser *pasynUser, const char * szRegName,
                                                epicsUInt32 rVal,  int pass=0 );
#if 0
    long set_csr         ( asynUser *pasynUser, int acq,           int pass=0 );

    long update_nrow_ncol( asynUser *pasynUser,                    int pass=0 );
    long update_ntrn_ncyc( asynUser *pasynUser,                    int pass=0 );
#endif
    long init_camera     ();

    /* Our data */
    NDArray *pRaw;

    char     m_devName[80];
    int      m_pDev;
    int      pdev;

    int      channel;                                          // channel number

	rogue::hardware::axi::AxiStreamDmaPtr		dataChan[N_AXI_LANES][N_AXI_CHAN];
	rogue::protocols::srp::SrpV3Ptr				srpFeb[N_AXI_LANES];
	rogue::hardware::axi::AxiMemMapPtr 			memMap[N_AXI_LANES];
	ClMemoryMasterPtr				 			clMemMaster[N_AXI_LANES];
	FebMemoryMasterPtr				 			febMemMaster[N_AXI_LANES];
	ClStreamSlavePtr							clStreamSlave[N_AXI_LANES];
	rogue::protocols::batcher::SplitterV1Ptr	batch;
};

#if 0
#define baudString       "baud"
#define ssusString       "ssus"
#define nbitString       "nbit"
#define packString       "pack"
#define vOutString       "vOut"
#define skipRowString    "skipRow"
#define skipColString    "skipCol"
#define fullRowString    "fullRow"
#define fullColString    "fullCol"
#define numTrainsString  "numTrains"
#define numCyclesString  "numCycles"
#define ccString         "cc"
#define polarityString   "polarity"
#define prescaleString   "prescale"
#define codeString       "code"
#define delayString      "delay"
#define widthString      "width"
#define trg2frameString  "trg2frame"
#define frameRateString  "frameRate"
#define cstaString       "csta"
#define cmdInitString    "cmdInit"
#define cmdFullString    "cmdFull"
#define cmdROIString     "cmdROI"
#define cmdEVRString     "cmdEVR"
#define cmdFreeString    "cmdFree"
#define cmdTPtnString    "cmdTPtn"
#define cmdAnyString     "cmdAny"
#define respString       "resp"
#define exposureString   "exposure"
#define tstPtnString     "tstPtn"
#define reIniString      "reIni"
#endif

#define NUM_CLCAM_PARAMS ((int)(&LAST_CLCAM_PARAM - &FIRST_CLCAM_PARAM + 1))


long	pgpCamlink::ser_send_recv(
	asynUser	*	pasynUser,
	const char	*	cmds,
	char		*	reply,
	int				pass )
{
    long         status = 1;
#if 0
	{
    int          ssusVal, ti = 0, eosSize=0;
    char         sertfg[4], aval, eos[3], cmdsWithEos[90];
    epicsUInt32  rAddr;
    if ( pass < 2 )
    {
        if ( (pass == 0) && (strlen(cmds) == 0) ) return( 0 );
        while ( 1 )
        {
            m_pDev = open( m_devName, O_RDWR );
            if ( m_pDev != -1 ) break;
            if ( ti < 150 )
            {
                usleep( 200000 );
                ti++;
            }
            else
                break;
        }
    }
    getInputEosOctet(pasynUser, eos, 3, &eosSize);
    strcpy(cmdsWithEos, cmds);
    strncat(cmdsWithEos, eos, eosSize);
    if ( m_pDev == -1 ) return( -1 );
    // Check at 'cmds' as 'cmdsWithEos' now has more chars.
    if ( strlen(cmds) == 0 ) goto finished;
    getIntegerParam( ssus, &ssusVal );
    rAddr = 0x1A0 + 4*channel;
    for ( size_t ci=0; ci<=strlen(cmdsWithEos); ci++ )
    {
        if ( (ci < strlen(cmdsWithEos)) && (*(cmdsWithEos + ci) != 0x5F) )
            aval = *(cmdsWithEos + ci);
        else
            aval = 0x0D;
        // status = pgpcard_setReg( m_pDev, rAddr, aval );
        if ( status != 0 )
        {
            asynPrint( pasynUser, ASYN_TRACE_ERROR,
                       "%s:%s, ser_send_recv: failed to send \"%s\"\n",
                       driverName, portName, cmdsWithEos );
            break;
        }
        if ( (ci < strlen(cmdsWithEos)) && (*(cmdsWithEos + ci) == 0x5F) ) usleep( ssusVal );
    }

    if ( status == 0 )
    {
        usleep( 100000 );
        rAddr = 0x1C0 + 4*channel;
        ti    = 0;
        size_t	ci    = 0;
        while ( ti < 200 )
        {
            // status = pgpcard_readReg( m_pDev, rAddr, (epicsUInt32 *)sertfg );
            if ( sertfg[0] != (char) 0xff )
            {
                if      ( sertfg[0] == 0x06 )
                {
                    sprintf( reply+ci, "ACK" );
                    ci += 3;
                }
                else if ( sertfg[0] == 0x15 )
                {
                    sprintf( reply+ci, "NAK" );
                    ci += 3;
                }
                else if ( sertfg[0] == 0x0d )
                {
                    *(reply+ci) = 0x5F;
                    ci++;
                }
                else
                {
                    *(reply+ci) = sertfg[0];
                    ci++;
                }
            }
            else if ( ci > 0 )
                break;

            usleep( 1000 );
            ti++;
        }

        if ( (ci > 0) && (*(reply+ci-1) == 0x5F) )
            *(reply+ci-1) = '\0';
        else
            *(reply+ci  ) = '\0';
    }

    finished:
    if ( (pass == 0) || (pass > 2) )
    {
        close( m_pDev );

        m_pDev = -1;
    }

	}
#endif
    return( status );
}

long	pgpCamlink::set_register(
	asynUser	*	pasynUser,
	const char	*	szRegName,
    epicsUInt32		rVal, 
	int				pass )
{
	return 0;
}

void int_handler(int dummy)
{
    terminate.store(true, std::memory_order_release);
    // dmaUnMapDma();
}

long pgpCamlink::init_camera()
{
    long         status = 0;

	terminate.store(false, std::memory_order_release);
	signal(SIGINT, int_handler);

	uint8_t mask[DMA_MASK_SIZE];
	dmaInitMaskBytes(mask);
	for (unsigned i=0; i<4; i++) {
		dmaAddMaskBytes((uint8_t*)mask, dmaDest(i, channel));
	}

#if 1
	{
	if ( strlen(m_devName) == 0 ) {
		std::cerr << "device not specified" << std::endl;
		return 1;
	}

	std::cout << "Opening device: " <<  std::string(m_devName) << std::endl;

#if 1
	rogue::hardware::axi::AxiStreamDmaPtr		dataChan[N_AXI_LANES][N_AXI_CHAN];
	//rogue::protocols::srp::SrpV3Ptr				srp[N_AXI_LANES];
	rogue::protocols::srp::SrpV3Ptr				srpFeb[N_AXI_LANES];
#if 1
	rogue::hardware::axi::AxiMemMapPtr 			memMap[N_AXI_LANES];
#endif
	ClMemoryMasterPtr				 			clMemMaster[N_AXI_LANES];
	FebMemoryMasterPtr				 			febMemMaster[N_AXI_LANES];
	ClStreamSlavePtr							clStreamSlave[N_AXI_LANES];
	ClSerialSlavePtr							clSerialRx[N_AXI_LANES];
	ClSerialMasterPtr							clSerialTx[N_AXI_LANES];
	rogue::protocols::batcher::SplitterV1Ptr	batch;
	batch 		= rogue::protocols::batcher::SplitterV1::create();
	/**
	 * The destination field is a sideband signal provided in the AxiStream
	 * protocol which allows a single interface to handle multiple frames
	 * with different purposes. The use of this field is driver specific, but
	 * the lower 8-bits are typically passed in the tDest field of the hardware
	 * frame and bits 8 and up are used to index the dma channel in the 
	 * lower level hardware.
	 */
	uint32_t		dest		= 0;
	uint32_t		lane		= 0;

	for ( lane = 0; lane < N_AXI_LANES;	lane++ ) {
		for ( uint32_t	ch = 0; ch < N_AXI_CHAN;	ch++ ) {
			dest = (0x100 * lane) + ch;	// Derived from python code
			dataChan[lane][ch]	= rogue::hardware::axi::AxiStreamDma::create( m_devName, dest, true);
		}
	}
	// NOTE: Initializing lanes 1, 2, and 3 breaks lane 0 serial!
	for ( uint32_t	lane = 0; lane < 1;	lane++ )
	{
		// Connect CHAN 0 ClinkDev KCU1500 Register Access
		memMap[lane] = rogue::hardware::axi::AxiMemMap::create( m_devName );
		clMemMaster[lane]  = ClMemoryMaster::create( );
		clMemMaster[lane]->setSlave( memMap[lane] );

		// Connect CHAN 0 FEB Register Access
		srpFeb[lane] = rogue::protocols::srp::SrpV3::create();
		febMemMaster[lane] = FebMemoryMaster::create( );
		dataChan[lane][0]->addSlave( srpFeb[lane] );
		srpFeb[lane]->addSlave( dataChan[lane][0] );
		febMemMaster[lane]->setSlave( srpFeb[lane] );

		// CHAN 1: Camera Frames
		clStreamSlave[lane] = ClStreamSlave::create();
		dataChan[lane][1]->addSlave( clStreamSlave[lane] );
		// or rogueStreamConnect( dataChan[lane][1], clStreamSlave[lane] );

		// CHAN 2: Camera Serial Tx
		clSerialTx[lane] = ClSerialMaster::create();
		clSerialTx[lane]->addSlave( dataChan[lane][2] );

		// CHAN 3: Camera Serial Rx
		clSerialRx[lane] = ClSerialSlave::create();
		dataChan[lane][2]->addSlave( clSerialRx[lane] );

		if ( lane != 0 )
			continue;
	}

	// Send Opal serial commands
	clSerialTx[0]->sendBytes( "@TP1\r", 5 );	// Test Pattern On
	clSerialTx[0]->sendBytes( "@SN?\r", 5 );	// Get Serial Number
	printf( "sleeping 2 sec ...\n" );
	sleep(2);
	//clSerialTx[0]->sendBytes( "@SN?\r\n", 6 );
	//printf( "sleeping 2 sec ...\n" );
	//sleep(2);
	clSerialTx[0]->sendString( "@ID?\r" );		// Get model ID string

	if (!dataChan[0][0] ) {
		std::cout << "Error opening "<< std::string(m_devName) << '\n';
		return -1;
	}
#endif
	int	fd = open( m_devName, O_RDWR);
	if (fd < 0) {
		std::cout<<"Error opening "<< std::string(m_devName) <<'\n';
		return -1;
	}

	AxiVersion vsn;
	if ( axiVersionGet(fd, &vsn) >= 0 )
	{
		printf("\n");
		printf("-- Core Axi Version --\n");
		printf("firmwareVersion : %x\n", vsn.firmwareVersion);
		printf("upTimeCount     : %u\n", vsn.upTimeCount);
		printf("deviceId        : %x\n", vsn.deviceId);
		printf("buildString     : %s\n", vsn.buildString); 
	}
	}
#endif
#if 0
	{
    epicsUInt32  rAddr;
    int          baudVal, nbitVal, psklVal, codeVal, tdlyVal, twisVal;
    int          trigVal, acqVal;
    char         cmdInitStr[80], cmdEVRStr[80], cmdFreeStr[80], respStr[80];
    getIntegerParam( baud,              &baudVal   );
    getIntegerParam( nbit,              &nbitVal   );

    getIntegerParam( prescale,          &psklVal   );
    getIntegerParam( code,              &codeVal   );
    getIntegerParam( delay,             &tdlyVal   );
    getIntegerParam( width,             &twisVal   );

    getIntegerParam( ADTriggerMode,     &trigVal   );
    getIntegerParam( ADAcquire,         &acqVal    );

    getStringParam ( cmdInit,       80, cmdInitStr );
    getStringParam ( cmdEVR,        80, cmdEVRStr  );
    getStringParam ( cmdFree,       80, cmdFreeStr );

    set_csr         ( pasynUserSelf, 0,                   1 );        // disable

    rAddr = SerBaud_Addr   + 4*channel;
    set_register    ( pasynUserSelf, rAddr, baudVal,      2 );   // set the baud

    ser_send_recv   ( pasynUserSelf, cmdInitStr, respStr, 2 ); // send init cmds

    //update_nrow_ncol( pasynUserSelf,                      2 );
    //update_ntrn_ncyc( pasynUserSelf,                      2 );

    status = callParamCallbacks();

    rAddr = NumBits_Addr   + 4*channel;
    set_register    ( pasynUserSelf, rAddr, nbitVal,      2 );

    rAddr = PreScale_Addr  + 4*channel;
    set_register    ( pasynUserSelf, rAddr, psklVal,      2 );

    rAddr = TrgCode_Addr   + 4*channel;
    set_register    ( pasynUserSelf, rAddr, codeVal,      2 );

    rAddr = TrgDelay_Addr  + 4*channel;
    set_register    ( pasynUserSelf, rAddr, tdlyVal,      2 );

    rAddr = TrgWidth_Addr  + 4*channel;
    set_register    ( pasynUserSelf, rAddr, twisVal,      2 );

    if ( trigVal == pgpEdtTrig_EVR )
        ser_send_recv(pasynUserSelf, cmdEVRStr,  respStr, 2 );
    else
        ser_send_recv(pasynUserSelf, cmdFreeStr, respStr, 2 );

    set_csr         ( pasynUserSelf, acqVal,              3 );
	}
#endif
    return( status );
}

int ResetCounters( int fd )
{
	int		status	= 0;

	// Not sure if these are needed
	//status = dmaWriteRegister( fd, CLINKDEV_FRAMECOUNT,	0 );
	//status = dmaWriteRegister( fd, CLINKDEV_ERRORCOUNT,	0 );
	//status = dmaWriteRegister( fd, CLINKDEV_BYTECOUNT,	0 );

	// This clears ClinkDev.Hardware.PgpMon[0].CountReset
	//status = dmaWriteRegister( fd, CLINKDEV_LANE0_COUNTRESET,	0 );
	// This resets ClinkDev.Application.AppLane[0].EventBuilder.DataCnt[0]
	//status = dmaWriteRegister( fd, CLINKDEV_LANE0_EVENTBUILDER_CNTRST,	0 );

	return status;
}

#define CLINKDEV_TRIG0_ENABLEREG	0x930000
int StartRun( int fd )
{
	int		status	= 0;
	status = ResetCounters( fd );

	// Enable EVR trigger
	// status = dmaWriteRegister( fd, CLINKDEV_TRIG0_ENABLEREG, 1 );

	// Set run state - No need, it's a pyrogue local variable
	// status = dmaWriteRegister( fd, CLINK_RUNSTATE, 1 );

	return status;
}

int StopRun( int fd )
{
	int		status	= 0;

	// Disable EVR trigger
	// status = dmaWriteRegister( fd, CLINKDEV_TRIG0_ENABLEREG, 0 );

	// Set run state - No need, it's a pyrogue local variable
	// status = dmaWriteRegister( fd, CLINK_RUNSTATE, 0 );

	return status;
}



/** Called when asyn clients call pasynInt32->write().
 * For all parameters it sets the value in the parameter library and
 * calls any registered callbacks.  For some parameters it performs actions.
 * \param[in] pasynUser pasynUser structure that encodes the reason and address
 * \param[in] value     Value to write
 **/
asynStatus pgpCamlink::writeInt32( asynUser *pasynUser, epicsInt32 value )
{
    int          param = pasynUser->reason;
    int          acqVal;
    //int          expoVal;
    //char         cmdTrigStr[80], cmdTPtnStr[80], cmdStr[80], respStr[80];

    //epicsUInt32  rAddr;

    asynStatus   status = asynSuccess;

    /* Ensure that ADStatus is set correctly before we set ADAcquire */
    if ( param == ADAcquire )
    {
        getIntegerParam( ADAcquire, &acqVal );
        if ( value && !acqVal )
        {
            setIntegerParam( ADStatus,        ADStatusAcquire       );
            setStringParam ( ADStatusMessage, "Acquiring data"      );
        }

        if ( !value && acqVal )
        {
            setIntegerParam( ADStatus,        ADStatusIdle          );
            setStringParam ( ADStatusMessage, "Acquisition stopped" );
        }
    }

    /* Set the parameter in the library.
     * It may be overwritten later, but that's OK */
    status = setIntegerParam( param, value );

    callParamCallbacks();
 
    if ( ! interruptAccept )
		return( status );	// no action before initialization

    /* Action */
#if 1
	{
    if      ( param == ADAcquire      )
        set_register( pasynUser, "ClinkDev.Hardware.Timing.Triggering.Ch[0].EnableReg", value );
    else if ( param == baud           )
    {
        set_register( pasynUser, "ClinkDev.ClinkFeb[0].ClinkTop.Ch[0].BaudRate", value );
    }
    else if ( param == nbit           )                // this should not happen
    {
        //set_register( pasynUser, "?", value );
        //update_ntrn_ncyc( pasynUser );
    }
    else if ( (param == pack   ) || (param == vOut   ) ||
              (param == skipRow) || (param == skipCol)    )
    {
        //update_ntrn_ncyc( pasynUser );
    }
    else if ( (param == fullRow) || (param == fullCol) )           // full frame
    {
        //getIntegerParam( exposure, &expoVal );

        //if ( expoVal == pgpEdtExpo_Full )
        {
            //update_nrow_ncol( pasynUser );
            //update_ntrn_ncyc( pasynUser );
        }
    }
    else if ( (param == ADMinX ) || (param == ADMinY ) ||
              (param == ADSizeX) || (param == ADSizeY)    )            // HW ROI
    {
        //getIntegerParam( exposure, &expoVal );

        //if ( expoVal == pgpEdtExpo_ROI  )
        {
            //update_nrow_ncol( pasynUser );
            //update_ntrn_ncyc( pasynUser );
        }
    }
    else if ( param == exposure      )                   // change exposure mode
    {
        // update_nrow_ncol( pasynUser );
        // update_ntrn_ncyc( pasynUser );
    }
    else if ( param == prescale      )
    {
        // rAddr = PreScale_Addr  + 4*channel;
        // set_register( pasynUser, rAddr, value );
    }
    else if ( param == code          )
    {
        // rAddr = TrgCode_Addr   + 4*channel;
        // set_register( pasynUser, rAddr, value );
    }
#if 0
    else if ( param == delay         )
    {
        rAddr = TrgDelay_Addr  + 4*channel;
        set_register( pasynUser, rAddr, value );
    }
    else if ( param == width         )
    {
        rAddr = TrgWidth_Addr  + 4*channel;
        set_register( pasynUser, rAddr, value );
    }
    else if ( param == ADTriggerMode )
    {
        if ( value == pgpEdtTrig_EVR )
            getStringParam ( cmdEVR,  80, cmdTrigStr );
        else
            getStringParam ( cmdFree, 80, cmdTrigStr );

        ser_send_recv( pasynUser, cmdTrigStr, respStr );
    }
    else if ( param == tstPtn        )
    {
        getStringParam ( cmdTPtn, 80, cmdTPtnStr );

        sprintf( cmdStr, "%s%d", cmdTPtnStr, value );
        ser_send_recv( pasynUser, cmdStr,     respStr );
    }
    else if ( (param == NDDataType) || (param == NDColorMode) )
    {
    }
#endif
    else if ( param < FIRST_CLCAM_PARAM )          /* belongs to a base class */
    {
        status = ADDriver::writeInt32( pasynUser, value );
    }

    if ( (param == pack) || (param == cc) || (param == polarity) )
    {
        //getIntegerParam( ADAcquire, &acqVal );
        //set_csr( pasynUser, acqVal );
    }
	}
#endif

    callParamCallbacks();    /* Do callbacks so higher layers see any changes */

    if ( status )
        asynPrint( pasynUser, ASYN_TRACE_ERROR,
                   "%s:%s, writeInt32: parameter=%d, value=%d, failed (%d)\n",
                   driverName, portName, param, value, status );
    else
        asynPrint( pasynUser, ASYN_TRACEIO_DRIVER,
                   "%s:%s, writeInt32: parameter=%d, value=%d\n",
                   driverName, portName, param, value );

    return status;
}


/* Called when asyn clients call pasynOctet->write().
 * For all parameters it sets the value in the parameter library and
 * calls any registered callbacks.  For some parameters it performs actions.
 * \param[in ] pasynUser pasynUser structure that encodes the reason and address
 * \param[in ] value     Address of the string to write
 * \param[in ] nChars    Number of characters to write
 * \param[out] nActual   Number of characters actually written */
asynStatus pgpCamlink::writeOctet( asynUser *pasynUser, const char *value, 
                               size_t nChars, size_t *nActual )
{
    int        param  = pasynUser->reason;
    char       respStr[80];
    asynStatus status = asynSuccess;

//  getStringParam( param, 80, oldStr );
//  printf( "writeOctet:  %s\n", oldStr );

    /* Set the parameter in the parameter library */
    status = setStringParam( param, (char *)value );

    if      ( param == cmdAny )
    {
        ser_send_recv( pasynUser, value, respStr );
        status = setStringParam( resp, respStr );
    }
    else if ( param < FIRST_CLCAM_PARAM )          /* belongs to a base class */
    {
        status = ADDriver::writeOctet( pasynUser, value, nChars, nActual );
    }

    /* Do callbacks so higher layers see any changes */
    status = callParamCallbacks();

    if ( status )
        asynPrint( pasynUser, ASYN_TRACE_ERROR,
                   "%s:%s, writeOctet: parameter=%d, value=%s, failed (%d)\n",
                   driverName, portName, param, value, status );
    else
        asynPrint( pasynUser, ASYN_TRACEIO_DRIVER,
                   "%s:%s, writeOctet: parameter=%d, value=%s\n",
                   driverName, portName, param, value );

    *nActual = nChars;
    return status;
}


/** Report status of the driver.
  * Prints details about the driver if details>0.  Then calls ADDriver::report()
  * \param[in] fp File pointer passed by caller where the output is written to
  * \param[in] details If >0 then driver details are printed */
void pgpCamlink::report( FILE *fp, int details )
{
    fprintf( fp, "SLAC pgpCamlink Frame Grabber %s\n", portName );
    if ( details > 0 )
    {
        int nx, ny, dataType;
        getIntegerParam(NDArraySizeX, &nx      );
        getIntegerParam(NDArraySizeY, &ny      );
        getIntegerParam(NDDataType,   &dataType);
        fprintf(fp, "  NX, NY:            %d  %d\n", nx, ny  );
        fprintf(fp, "  Data type:         %d\n",     dataType);
    }

    ADDriver::report( fp, details );          /* Invoke the base class method */
}


static void acqTaskC( void *drvPvt )
{
    pgpCamlink *pPvt = (pgpCamlink *)drvPvt;

    pPvt->acqTask();
}

/* This thread acquires images, unpacks, and sends them to higher layers */
void pgpCamlink::acqTask()
{
    epicsTimeStamp  timeNow;

    int             nBit, pack16, vout;
    int             maxNrow, maxNcol, sRow, sCol;
	int				nRow;
	int				nCol;
    //uint            maxSize, cstaVal;

    NDArray        *pNDArray = NULL;

    int             ret	= 0;

    while ( ! interruptAccept ) epicsThreadSleep( 1 );

    asynPrint( pasynUserSelf, ASYN_TRACE_FLOW,
               "%s:%s, acqTask: initializing ...\n", driverName, portName );

    init_camera();

    getIntegerParam( ADMaxSizeY, &maxNrow );
    getIntegerParam( ADMaxSizeX, &maxNcol );

    //maxSize = maxNrow * maxNcol * 2 + 16;
    //rbuf    = (char *)calloc( maxSize, sizeof(char) );

    while ( 1 )
    {
        if ( 0 ) // poll( pfd, 1, 2000 ) == 0 )    // no frame for 2 seconds, check CSR
        {
            asynPrint( pasynUserSelf, ASYN_TRACE_FLOW,
                       "%s:%s, acqTask: no image, check CSTA\n",
                       driverName, portName );

            // pgpcard_readReg( pdev, GrbCSR_Addr+4*channel, &cstaVal );

            //cstaVal = 0;
            //setIntegerParam( csta,      cstaVal );
            setIntegerParam( frameRate, 0       );

            callParamCallbacks();

            continue;
        }

		// uint			lengthErr;
		// uint			fifoErr;
		// uint			lane, eofe;
        // ret = pgpcard_recv( pdev, (void *)rbuf, maxSize, &lane,
        //                     &eofe, &fifoErr, &lengthErr );

        if ( ret == 0 ) continue;

        asynPrint( pasynUserSelf, ASYN_TRACE_FLOW,
                   "%s:%s, acqTask: got image\n", driverName, portName );

//      getIntegerParam( NDArrayCallbacks, &arrayCallbacks );
//      if ( ! arrayCallbacks ) continue;

        getIntegerParam( nbit,         &nBit   );
        getIntegerParam( pack,         &pack16 );
        getIntegerParam( vOut,         &vout   );
        getIntegerParam( skipRow,      &sRow   );
        getIntegerParam( skipCol,      &sCol   );
        getIntegerParam( NDArraySizeY, &nRow   );
        getIntegerParam( NDArraySizeX, &nCol   );

		// Protection against weird issue where
		// Row or Col are set to 0...
		if (nRow <= 0)
			nRow = 1;

        if (nCol <= 0)
            nCol = 1;

        lock();

        if ( pNDArray ) pNDArray->release();            // free previous NDArray

    	size_t          dims[2];
        dims[0]  = nCol;
        dims[1]  = nRow;
        pNDArray = pNDArrayPool->alloc( 2, dims, NDInt16, 0, NULL );

        if ( (! pNDArray) || (! pNDArray->pData) )
        {
            asynPrint( pasynUserSelf, ASYN_TRACE_ERROR,
                       "%s:%s, acqTask: failed to allocate NDArray\n",
                       driverName, portName );

            pNDArray = NULL;

            unlock();
            continue;
        }

        epicsTimeGetCurrent( &timeNow );

        pNDArray->uniqueId             = 0;
        pNDArray->epicsTS.secPastEpoch = 0;
        pNDArray->epicsTS.nsec         = 0;
        pNDArray->timeStamp            = timeNow.secPastEpoch+timeNow.nsec/1.e9;

        pNDArray->ndims                = 2;
/*      pNDArray->bitsPerElement       = 12; */

        pNDArray->dims[0].size         = nCol;
        pNDArray->dims[0].offset       = 0;
        pNDArray->dims[0].binning      = 1;
        pNDArray->dims[1].size         = nRow;
        pNDArray->dims[1].offset       = 0;
        pNDArray->dims[1].binning      = 1;

        /* Get attributes that have been defined for this driver */
        getAttributes( pNDArray->pAttributeList );

        if ( pArrays[0] ) pArrays[0]->release();
        pNDArray->reserve();
        pArrays[0] = pNDArray;

        unlock();

        asynPrint( pasynUserSelf, ASYN_TRACE_FLOW,
                   "%s:%s, acqTask: calling imageData callbacks\n",
                   driverName, portName );

        doCallbacksGenericPointer( pNDArray, NDArrayData, 0 );

        setIntegerParam( NDArraySize,    nRow * nCol * sizeof(epicsInt16) );
        setIntegerParam( NDArrayCounter, 3                       );

        callParamCallbacks();

//      lock();
//      if (pArrays[0]) pArrays[0]->release();
//      pArrays[0] = pNDArray;
    }

    return;
}


/* Constructor for pgpCamlink; It passes most parameters to ADDriver::ADDriver,
 * then creates a thread to communicate with the frame grabber channel.
 * \param[in] portName The name of the asyn port driver to be created.
 * \param[in] board Index of the board (0 - ).
 * \param[in] chan Channel number (0 - 7).
 * \param[in] maxSizeX The maximum X dimension of the images that this driver
 *            can create.
 * \param[in] maxSizeY The maximum Y dimension of the images that this driver
 *            can create.
 * \param[in] dataType The initial data type (NDDataType_t) of the images that
 *            this driver will create.
 * \param[in] maxBuffers The maximum number of NDArray buffers that the
 *            NDArrayPool for this driver is allowed to allocate. Set this to
 *            -1 to allow an unlimited number of buffers.
 * \param[in] maxMemory The maximum amount of memory that the NDArrayPool for
 *            this driver is allowed to allocate.  Set this to -1 to allow an
 *            unlimited amount of memory.
 * \param[in] priority The thread priority for the asyn port driver thread
 *            if ASYN_CANBLOCK is set in asynFlags.
 * \param[in] stackSize The stack size for the asyn port driver thread
 *            if ASYN_CANBLOCK is set in asynFlags. */
pgpCamlink::pgpCamlink( const char *portName, int board, int chan,
                int maxSizeX, int maxSizeY, int numBits, NDDataType_t dataType,
                int maxBuffers, size_t maxMemory, int priority, int stackSize )
    :	ADDriver(	portName, 1, NUM_CLCAM_PARAMS, maxBuffers, maxMemory,
					0, 0,        /* No interfaces beyond those set in ADDriver.cpp */
					ASYN_CANBLOCK, 1,    /* ASYN_CANBLOCK=0, ASYN_MULTIDEVICE=0, autoConnect=1 */
					priority, stackSize),
		pRaw(NULL),
		channel(chan),
		dataChan(),
		srpFeb(),
		memMap(),
		clMemMaster(),
		febMemMaster(),
		clStreamSlave(),
		batch()
{
    //char  devi[80];
    int   status = asynSuccess;

    sprintf( m_devName, "/dev/datadev_%d"  , board          );
//    sprintf( devi, "/dev/datadev_%d%d", board, channel );

    pdev = open( m_devName, O_RDWR );

	if ( 1 )
	{
		size_t	lane	= 0;	// channel?

		// Connect CHAN 0 ClinkDev KCU1500 Register Access
		memMap[lane] = rogue::hardware::axi::AxiMemMap::create( m_devName );
		clMemMaster[lane]  = ClMemoryMaster::create( );
		clMemMaster[lane]->setSlave( memMap[lane] );

		// Connect CHAN 0 FEB Register Access
		srpFeb[lane] = rogue::protocols::srp::SrpV3::create();
		febMemMaster[lane] = FebMemoryMaster::create( );
		dataChan[lane][0]->addSlave( srpFeb[lane] );
		srpFeb[lane]->addSlave( dataChan[lane][0] );
		febMemMaster[lane]->setSlave( srpFeb[lane] );

		// CHAN 1: Camera Frames
		clStreamSlave[lane] = ClStreamSlave::create();
		dataChan[lane][1]->addSlave( clStreamSlave[lane] );
		// or rogueStreamConnect( dataChan[lane][1], clStreamSlave[lane] );
	}

    // createParam( baudString,       asynParamInt32,  &baud      );

    /* Set the fundamental parameters */
    status  = setStringParam ( ADManufacturer,  "SLAC PgpCamlink, to be updated" );
    status |= setStringParam ( ADModel,         "Test Model, to be updated"  );
    status |= setIntegerParam( nbit,            numBits        );
    status |= setIntegerParam( NDDataType,      dataType       );
    status |= setIntegerParam( ADMaxSizeX,      maxSizeX       );
    status |= setIntegerParam( ADMaxSizeY,      maxSizeY       );

    if ( status )
    {
        printf( "%s:%s, pgpCamlink: unable to set parameters, quit !!!\n",
                driverName, portName );
        return;
    }

    /* Create the thread that updates the images */
    status = (epicsThreadCreate(portName,
                                epicsThreadPriorityMedium,
                                epicsThreadGetStackSize(epicsThreadStackMedium),
                                (EPICSTHREADFUNC)acqTaskC,
                                this) == NULL);
    if ( status )
    {
        printf( "%s:%s, pgpCamlink: failed to create the acq thread, quit !!!\n",
                driverName, portName );
        return;
    }
}


/* Configuration command, called directly or from iocsh */
extern "C" int pgpCamlinkConfig( const char *portName, int board, int channel,
                             int maxSizeX, int maxSizeY,   int numBits,
                             int dataType, int maxBuffers, int maxMemory,
                             int priority, int stackSize )
{
    char  serPort[80];

    sprintf( serPort, "%s.SER", portName );

    new pgpCamlink      ( portName, board, channel, maxSizeX, maxSizeY, numBits,
                      (NDDataType_t)dataType,
                      (maxBuffers < 0) ? 0 : maxBuffers,
                      (maxMemory  < 0) ? 0 : maxMemory, priority, stackSize );

//	new pgpCamlinkSerial( serPort,  board, channel, ASYN_CANBLOCK, 1, 0, 0 );

    return( asynSuccess );
}

/* Code for iocsh registration */
static const iocshArg pgpCamlinkConfigArg0 = { "Port name",  iocshArgString };
static const iocshArg pgpCamlinkConfigArg1 = { "Board no",   iocshArgInt    };
static const iocshArg pgpCamlinkConfigArg2 = { "Channel no", iocshArgInt    };
static const iocshArg pgpCamlinkConfigArg3 = { "Max X size", iocshArgInt    };
static const iocshArg pgpCamlinkConfigArg4 = { "Max Y size", iocshArgInt    };
static const iocshArg pgpCamlinkConfigArg5 = { "No of bits", iocshArgInt    };
static const iocshArg pgpCamlinkConfigArg6 = { "Data type",  iocshArgInt    };
static const iocshArg pgpCamlinkConfigArg7 = { "maxBuffers", iocshArgInt    };
static const iocshArg pgpCamlinkConfigArg8 = { "maxMemory",  iocshArgInt    };
static const iocshArg pgpCamlinkConfigArg9 = { "priority",   iocshArgInt    };
static const iocshArg pgpCamlinkConfigArgA = { "stackSize",  iocshArgInt    };

static const iocshArg * const pgpCamlinkConfigArgs[] = { &pgpCamlinkConfigArg0,
                                                     &pgpCamlinkConfigArg1,
                                                     &pgpCamlinkConfigArg2,
                                                     &pgpCamlinkConfigArg3,
                                                     &pgpCamlinkConfigArg4,
                                                     &pgpCamlinkConfigArg5,
                                                     &pgpCamlinkConfigArg6,
                                                     &pgpCamlinkConfigArg7,
                                                     &pgpCamlinkConfigArg8,
                                                     &pgpCamlinkConfigArg9,
                                                     &pgpCamlinkConfigArgA };

static const iocshFuncDef configPgpCamlink = { "pgpCamlinkConfig", 11, pgpCamlinkConfigArgs };

static void configPgpCamlinkCallFunc( const iocshArgBuf *args )
{
    pgpCamlinkConfig( args[0].sval, args[1].ival, args[ 2].ival, args[3].ival,
                  args[4].ival, args[5].ival, args[ 6].ival, args[7].ival,
                  args[8].ival, args[9].ival, args[10].ival               );
}

static void pgpCamlinkRegister( void )
{
    iocshRegister( &configPgpCamlink, configPgpCamlinkCallFunc );
}

extern "C" {
epicsExportRegistrar( pgpCamlinkRegister );
}

