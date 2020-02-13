#include <atomic>
#include <string>
#include <iostream>
#include <signal.h>
#include <cstdio>
#include <AxisDriver.h>
#include <AxiVersion.h>
#include <DmaDriver.h>
#include <stdlib.h>
#include <rogue/Helpers.h>
#include <rogue/hardware/axi/AxiMemMap.h>
#include <rogue/hardware/axi/AxiStreamDma.h>
#include <rogue/interfaces/memory/Constants.h>
#include <rogue/interfaces/stream/Slave.h>
#include <rogue/interfaces/stream/Master.h>
#include <rogue/protocols/batcher/SplitterV1.h>
#include <rogue/protocols/srp/SrpV3.h>
// #include "psdaq/service/EbDgram.hh"
// #include "xtcdata/xtc/Dgram.hh"
#include <unistd.h>
#include <getopt.h>
#include "ClMemoryMaster.h"
#include "ClStreamSlave.h"
#include "ClSerialMaster.h"
#include "ClSerialSlave.h"
#include "FebMemoryMaster.h"


#define MAX_RET_CNT_C 1000
static int fd;
std::atomic<bool> terminate;

unsigned dmaDest(unsigned lane, unsigned vc)
{
    return (lane<<8) | vc;
}

#define CLINKDEV_AXIVERSION_FPGAVERSION	0x20000			// ClinkDev.Hardware.AxiPcieCore.AxiVersion.FpgaVersion
#define CLINKDEV_AXIVERSION_SCRATCHPAD	0x20004			// ClinkDev.Hardware.AxiPcieCore.AxiVersion.ScratchPad
#define CLINKDEV_AXIVERSION_UPTIMESEC	0x20008			// ClinkDev.Hardware.AxiPcieCore.AxiVersion.UpTimeCnt
#define CLINKDEV_AXIVERSION_FPGARELOAD	0x20104			// ClinkDev.Hardware.AxiPcieCore.AxiVersion.FpgaReload
#define CLINKDEV_AXIVERSION_BUILDSTAMP	0x20800			// ClinkDev.Hardware.AxiPcieCore.AxiVersion.BuildStamp

#define CLINKDEV_LANE0_DATACNT0		0xC00000
#define CLINKDEV_LANE0_DATACNT1		0xC00004
#define CLINKDEV_LANE1_DATACNT0		0xD00000
#define CLINKDEV_LANE1_DATACNT1		0xD00004
#define CLINKDEV_LANE2_DATACNT0		0xE00000
#define CLINKDEV_LANE2_DATACNT1		0xE00004
#define CLINKDEV_LANE3_DATACNT0		0xF00000
#define CLINKDEV_LANE3_DATACNT1		0xF00004

#define CLINKDEV_LANE0_COUNTRESET	0x800000
#define CLINKDEV_LANE1_COUNTRESET	0x810000
#define CLINKDEV_LANE2_COUNTRESET	0x820000
#define CLINKDEV_LANE3_COUNTRESET	0x830000

#define CLINKDEV_LANE0_EVENTBUILDER_CNTRST	0xC00FFC
#define CLINKDEV_LANE1_EVENTBUILDER_CNTRST	0xD00FFC
#define CLINKDEV_LANE2_EVENTBUILDER_CNTRST	0xE00FFC
#define CLINKDEV_LANE3_EVENTBUILDER_CNTRST	0xF00FFC

int ResetCounters( int fd )
{
	int		status;

	//status = dmaWriteRegister( fd, CLINKDEV_FRAMECOUNT,	0 );
	//status = dmaWriteRegister( fd, CLINKDEV_ERRORCOUNT,	0 );
	//status = dmaWriteRegister( fd, CLINKDEV_BYTECOUNT,	0 );
	status = dmaWriteRegister( fd, CLINKDEV_LANE0_COUNTRESET,	0 );
	// This resets ClinkDev.Application.AppLane[0].EventBuilder.DataCnt[0]
	status = dmaWriteRegister( fd, CLINKDEV_LANE0_EVENTBUILDER_CNTRST,	0 );

	return status;
}

#define CLINKDEV_TRIG0_ENABLEREG	0x930000
#define CLINKDEV_TRIG1_ENABLEREG	0x930100
#define CLINKDEV_TRIG2_ENABLEREG	0x930200
#define CLINKDEV_TRIG3_ENABLEREG	0x930300

#define CLINKDEV_FEB0_AXIVERSION_FPGAVERSION 0x0000			// ClinkDev.ClinkFeb[0].AxiVersion.FpgaVersion
#define CLINKDEV_FEB0_AXIVERSION_SCRATCHPAD	0x00004			// ClinkDev.ClinkFeb[0].AxiVersion.ScratchPad
#define CLINKDEV_FEB0_AXIVERSION_UPTIMESEC	0x00008			// ClinkDev.ClinkFeb[0].AxiVersion.UpTimeCnt
#define CLINKDEV_FEB0_AXIVERSION_FPGARELOAD	0x00104			// ClinkDev.ClinkFeb[0].AxiVersion.FpgaReload
#define CLINKDEV_FEB0_AXIVERSION_DEVICEID	0x00500			// ClinkDev.ClinkFeb[0].AxiVersion.DeviceId
#define CLINKDEV_FEB0_AXIVERSION_BUILDSTAMP	0x00800			// ClinkDev.ClinkFeb[0].AxiVersion.BuildStamp

#define CLINKDEV_FEB0_CL0_LINKRUNNING		0x100120		// ClinkDev.Hardware.PgpMon[0].RxRemLinkReady
#define CLINKDEV_FEB0_CL1_LINKRUNNING		0x100220		// ClinkDev.Hardware.PgpMon[0].RxRemLinkReady

#define CLINKDEV_LANE0_RXREMLINKREADY		0x800020		// ClinkDev.Hardware.PgpMon[0].RxRemLinkReady
#define CLINKDEV_FEB0_PGP0_RXREMLINKREADY	0x400020		// ClinkDev.ClinkFeb[0].PgpMon[0].RxRemLinkReady
#define CLINKDEV_FEB0_PGP1_RXREMLINKREADY	0x406020		// ClinkDev.ClinkFeb[0].PgpMon[1].RxRemLinkReady


int StartRun( int fd )
{
	int		status;
	status = ResetCounters( fd );

	// Enable EVR trigger
	status = dmaWriteRegister( fd, CLINKDEV_TRIG0_ENABLEREG, 1 );

	// Set run state - No need, it's a pyrogue local variable
	// status = dmaWriteRegister( fd, CLINK_RUNSTATE, 1 );

	return status;
}

int StopRun( int fd )
{
	int		status;

	// Disable EVR trigger
	status = dmaWriteRegister( fd, CLINKDEV_TRIG0_ENABLEREG, 0 );

	// Set run state - No need, it's a pyrogue local variable
	// status = dmaWriteRegister( fd, CLINK_RUNSTATE, 0 );

	return status;
}

void int_handler(int dummy)
{
    terminate.store(true, std::memory_order_release);
    // dmaUnMapDma();
}

int ClSerialMaster::sendBytes( const char * buffer, size_t nBytes )
{
	uint32_t	lValue;
	if ( strlen( buffer ) <= nBytes )
		printf( "            ClSerialMaster::sendBytes: '%s' %zu bytes.\n", buffer, nBytes );
	std::shared_ptr<rogue::interfaces::stream::Frame> frame;
	frame = reqFrame ( nBytes * 4, true );
	if ( ! frame )
	{
		printf( "ClSerialMaster::sendBytes: reqFrame %zd bytes failed!\n", nBytes * 4 );
		return -1;
	}
	rogue::interfaces::stream::FrameIterator it;
	frame->setPayload( nBytes * 4 );
	it = frame->begin();
	for ( size_t i = 0; i < nBytes; i++ )
	{
		lValue = buffer[i];
		toFrame( it, 4, &lValue );
	}
	printf( "ClSerialMaster::sendBytes: Frame size %u, payload %u, avail %u\n",
			frame->getSize(), frame->getPayload(), frame->getAvailable() );
	try
	{
		sendFrame( frame );
	}
	catch ( rogue::GeneralError &e )
	{
		printf( "ClSerialMaster::sendBytes: Error %s!\n", e.what() );
		return -1;
	}

	return 0;
}

static void usage(const char* p)
{
	printf("Usage: %s -d <device> -c <channel>\n",p);
}

int main (int argc, char **argv)
{
	int c, channel;
	uint32_t	dataCnt;
	uint32_t	scratch	= 0x1234;
	uint32_t	upTime;

	channel = 0;
	std::string device;
	while((c = getopt(argc, argv, "hc:d:")) != EOF)
	{
		switch(c)
		{
		case 'd':
			device = optarg;
			break;
		case 'c':
			channel = atoi(optarg);
			break;
		case 'h':
		default:
			usage(argv[0]);
			return 1;
		}
	}

	terminate.store(false, std::memory_order_release);
	signal(SIGINT, int_handler);

	uint8_t mask[DMA_MASK_SIZE];
	dmaInitMaskBytes(mask);
	for (unsigned i=0; i<4; i++) {
		dmaAddMaskBytes((uint8_t*)mask, dmaDest(i, channel));
	}

	if ( device.size() == 0 ) {
		std::cerr << "device not specified" << std::endl;
		usage(argv[0]);
		return 1;
	}

	std::cout<<"Opening device: "<< device << std::endl;

#if 1
#define	N_AXI_LANES	4
#define	N_AXI_CHAN	4
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
			dataChan[lane][ch]	= rogue::hardware::axi::AxiStreamDma::create( device.c_str(), dest, true);
		}
	}
	// NOTE: Initializing lanes 1, 2, and 3 breaks lane 0 serial!
	for ( uint32_t	lane = 0; lane < 1;	lane++ )
	{
		// Connect CHAN 0 ClinkDev KCU1500 Register Access
		memMap[lane] = rogue::hardware::axi::AxiMemMap::create( device.c_str() );
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

		// Read ClinkDev upTime and scratch register
		upTime = 0xdead;
		scratch = 0xdead;
		dataCnt = 0xdead;
		clMemMaster[lane]->clearError();
		clMemMaster[lane]->reqTransaction( CLINKDEV_AXIVERSION_SCRATCHPAD,	4, &scratch,	rogue::interfaces::memory::Read );
		clMemMaster[lane]->reqTransaction( CLINKDEV_AXIVERSION_UPTIMESEC,	4, &upTime,		rogue::interfaces::memory::Read );
		clMemMaster[lane]->reqTransaction( CLINKDEV_LANE0_DATACNT0,  		4, &dataCnt,	rogue::interfaces::memory::Read );
		clMemMaster[lane]->waitTransaction(0);
		printf( "\nclMemMaster[%d]  transaction done. upTime=0x%X sec, scratch=0x%X, dataCnt=0x%X, Error=%s\n", lane, upTime, scratch, dataCnt, clMemMaster[lane]->getError().c_str() );

		// Write ClinkDev scratch register
		scratch = 0x1234 + lane;
		upTime = 0xdead;
		clMemMaster[lane]->clearError();
		clMemMaster[lane]->reqTransaction( CLINKDEV_AXIVERSION_UPTIMESEC,  4, &upTime,	rogue::interfaces::memory::Read );
		clMemMaster[lane]->reqTransaction( CLINKDEV_AXIVERSION_SCRATCHPAD, 4, &scratch,	rogue::interfaces::memory::Write );
		clMemMaster[lane]->waitTransaction(0);
		printf( "clMemMaster[%d]  transaction done. upTime=0x%X sec, wrote scratch 0x%X, Error=%s\n", lane, upTime, scratch, clMemMaster[lane]->getError().c_str() );

		// Read ClinkDev upTime and scratch register
		scratch = 0xdead;
		upTime = 0xdead;
		clMemMaster[lane]->clearError();
		clMemMaster[lane]->reqTransaction( CLINKDEV_AXIVERSION_SCRATCHPAD, 4, &scratch,	rogue::interfaces::memory::Read );
		clMemMaster[lane]->waitTransaction(0);
		clMemMaster[lane]->reqTransaction( CLINKDEV_AXIVERSION_UPTIMESEC,  4, &upTime,	rogue::interfaces::memory::Read );
		clMemMaster[lane]->waitTransaction(0);
		printf( "clMemMaster[%d]  transaction done. upTime=0x%X sec, scratch=0x%X, Error=%s\n", lane, upTime, scratch, clMemMaster[lane]->getError().c_str() );

		clMemMaster[lane]->incrAddress( CLINKDEV_AXIVERSION_SCRATCHPAD, "clMemMaster::incrMaster" );
		clMemMaster[lane]->incrAddress( CLINKDEV_AXIVERSION_SCRATCHPAD, "clMemMaster::incrMaster" );
		clMemMaster[lane]->incrAddress( CLINKDEV_AXIVERSION_SCRATCHPAD, "clMemMaster::incrMaster" );

		if ( 1 ) {
		// Read FEB upTime and scratch register
		scratch = 0xdead;
		upTime = 0xdead;
		febMemMaster[lane]->clearError();
		febMemMaster[lane]->reqTransaction( CLINKDEV_FEB0_AXIVERSION_UPTIMESEC,  4,	&upTime,	rogue::interfaces::memory::Read );
		febMemMaster[lane]->waitTransaction(0);
		febMemMaster[lane]->reqTransaction( CLINKDEV_FEB0_AXIVERSION_SCRATCHPAD, 4,	&scratch,	rogue::interfaces::memory::Read );
		febMemMaster[lane]->waitTransaction(0);
		printf( "\nfebMemMaster[%d] transaction done. upTime=0x%X sec, scratch=0x%X, Error=%s\n", lane, upTime, scratch, febMemMaster[lane]->getError().c_str() );

		// Write FEB scratch register
		scratch = 0x4320 + lane;
		febMemMaster[lane]->clearError();
		febMemMaster[lane]->reqTransaction( CLINKDEV_FEB0_AXIVERSION_SCRATCHPAD, 4,	&scratch,	rogue::interfaces::memory::Write );
		febMemMaster[lane]->waitTransaction(0);
		printf( "febMemMaster[%d] transaction done. upTime=0x%X sec, wrote scratch 0x%X, Error=%s\n", lane, upTime, scratch, febMemMaster[lane]->getError().c_str() );

		// Read FEB scratch register
		scratch = 0xdead;
		upTime = 0xdead;
		febMemMaster[lane]->clearError();
		febMemMaster[lane]->reqTransaction( CLINKDEV_FEB0_AXIVERSION_SCRATCHPAD, 4,	&scratch,	rogue::interfaces::memory::Read );
		febMemMaster[lane]->reqTransaction( CLINKDEV_FEB0_AXIVERSION_UPTIMESEC,  4,	&upTime,	rogue::interfaces::memory::Read );
		febMemMaster[lane]->waitTransaction(0);
		printf( "febMemMaster[%d] transaction done. upTime=0x%X sec, scratch 0x%X, Error=%s\n", lane, upTime, scratch, febMemMaster[lane]->getError().c_str() );
		
		febMemMaster[lane]->incrAddress( CLINKDEV_FEB0_AXIVERSION_SCRATCHPAD, "febMemMaster::incrAddress" );
		febMemMaster[lane]->incrAddress( CLINKDEV_FEB0_AXIVERSION_SCRATCHPAD, "febMemMaster::incrAddress" );
		febMemMaster[lane]->incrAddress( CLINKDEV_FEB0_AXIVERSION_SCRATCHPAD, "febMemMaster::incrAddress" );
		}
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
		std::cout << "Error opening "<<device << '\n';
		return -1;
	}
#endif
#if 0
	fd = dataChan[0][0]->getFileDescriptor();
#else

	fd = open(device.c_str(), O_RDWR);
	if (fd < 0) {
		std::cout<<"Error opening "<<device<<'\n';
		return -1;
	}
#endif

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
	if ( febMemMaster[0] )
	{
		char		buildStamp[257];
		uint32_t	febFpgaVersion	= 0xdead;
		uint32_t	febDeviceId		= 0xdead;
		febMemMaster[0]->reqTransaction( CLINKDEV_FEB0_AXIVERSION_DEVICEID, 4, &febDeviceId, rogue::interfaces::memory::Read );
		febMemMaster[0]->reqTransaction( CLINKDEV_FEB0_AXIVERSION_FPGAVERSION, 4, &febFpgaVersion, rogue::interfaces::memory::Read );
		febMemMaster[0]->reqTransaction( CLINKDEV_FEB0_AXIVERSION_BUILDSTAMP, 256, &buildStamp, rogue::interfaces::memory::Read );
		febMemMaster[0]->waitTransaction(0);
		buildStamp[256] = 0;
		printf("\n");
		printf("-- Feb[0] Axi Version --\n");
		printf("firmwareVersion : %x\n", febFpgaVersion);
		printf("upTimeCount     : %u\n", upTime);
		printf("deviceId        : %x\n", febDeviceId);
		printf("buildString     : %s\n", buildStamp); 
	}

	printf( "sleeping 2 sec ...\n" );
	sleep(2);
	lane = 0;
	upTime = 0xdead;
	scratch = 0x4321;
	clMemMaster[lane]->clearError();
	clMemMaster[0]->reqTransaction( CLINKDEV_AXIVERSION_UPTIMESEC,  4, &upTime,		rogue::interfaces::memory::Read );
	clMemMaster[0]->reqTransaction( CLINKDEV_AXIVERSION_SCRATCHPAD, 4, &scratch,	rogue::interfaces::memory::Write );
	clMemMaster[0]->waitTransaction(0);
	printf( "\nclMemMaster[%d]  transaction done. upTime=0x%X sec, wrote scratch 0x%X, Error=%s\n", lane, upTime, scratch, clMemMaster[lane]->getError().c_str() );

	upTime = 0xdead;
	scratch = 0xdead;
	clMemMaster[0]->reqTransaction( CLINKDEV_AXIVERSION_UPTIMESEC,  4, &upTime,		rogue::interfaces::memory::Read );
	clMemMaster[0]->reqTransaction( CLINKDEV_AXIVERSION_SCRATCHPAD, 4, &scratch,	rogue::interfaces::memory::Read );
	clMemMaster[0]->waitTransaction(0);
	printf( "clMemMaster[%d]  transaction done. upTime=0x%X sec, scratch=0x%X, Error=%s\n", lane, upTime, scratch, clMemMaster[lane]->getError().c_str() );
	fflush(NULL);

	sleep(1);
	int status = StartRun( fd );
	if ( status != 0 ) {
		printf( "\nStartRun Error: %d\n", status );
		return -1;
	} else {
		printf( "\nStartRun ...\n" );
	}

#if 1
	std::shared_ptr<rogue::interfaces::stream::Frame>	pFrame;
	usleep( 40000 );
	//while (1) {
	//	dataChan[0][1]->acceptFrame( pFrame );
	//    printf("Got frame!\n" );
	//}
#else
	{
	uint32_t dmaCount, dmaSize;
	void** dmaBuffers = dmaMapDma(fd, &dmaCount, &dmaSize);
	if ( dmaBuffers == NULL ) {
		printf("Failed to map dma buffers!\n");
		return -1;
	}

	printf( "dmaCount %u, dmaSize %u, DMA channel %d\n", dmaCount, dmaSize, channel );
	dmaSetMaskBytes(fd, mask);

	uint32_t	dmaDest[	MAX_RET_CNT_C ];
	uint32_t	dmaIndex[	MAX_RET_CNT_C ];
	int32_t		dmaRet[		MAX_RET_CNT_C ];
	while (1) {
		if (terminate.load(std::memory_order_acquire) == true) {
			close(fd);
			printf("closed\n");
			break;
		}

		uint32_t	frameCount;
		status = dmaReadRegister( fd, CLINKDEV_LANE0_DATACNT0,	&frameCount );
		if ( status != 0 ) {
			printf( "dmaReadRegister Error: %d\n", status );
		}

#if 1
		ssize_t	ret = dmaReadBulkIndex( fd, MAX_RET_CNT_C, dmaRet, dmaIndex, NULL, NULL, dmaDest );
#else
		size_t ret;
		{
		struct DmaReadData r[MAX_RET_CNT_C];
		size_t x;
		memset(r,0,MAX_RET_CNT_C * sizeof(struct DmaReadData));
		ret = read(fd,r,MAX_RET_CNT_C * sizeof(struct DmaReadData));
		for (x = 0; x < ret; ++x)
		{
			if ( dmaDest  != NULL ) dmaDest[x]  = r[x].dest;
			//if ( dmaFlags != NULL ) dmaFlags[x] = r[x].flags;
			//if ( dmaError != NULL ) dmaError[x] = r[x].error;

			dmaIndex[x] = r[x].index;
			dmaRet[x]   = r[x].ret;
		}
		}
#endif
		printf( "frameCount %u: Read %zu frames.\n", frameCount, ret );
		for (uint32_t b=0; b < ret; b++)
		{
			uint32_t	dest	= dmaDest[b] >> 8;
			uint32_t	index	= dmaIndex[b];
			int32_t		retSize	= dmaRet[b];
#if 0
			const Pds::TimingHeader* event_header = reinterpret_cast<Pds::TimingHeader*>(dmaBuffers[index]);
			XtcData::TransitionId::Value transition_id = event_header->service();

			printf("Size %u B | Dest %u | Transition id %d | pulse id %lu | event counter %u | index %u\n",
				   retSize, dest, transition_id, event_header->pulseId(), event_header->evtCounter, index);
			printf("env %08x\n", event_header->env);
#else
			if ( b == 0 )
			printf("Frame %2d: Size %3d b | Dest %u | index %u\n",
				   b, retSize * 8, dest, index);
#endif
		}
		if ( ret > 0 )
			dmaRetIndexes(fd, ret, dmaIndex);
		sleep(1);
	}
	}
#endif

#if 0
	printf("Finished\n");
#else
	printf("Shutting down\n");
	status = StopRun( fd );
#endif
	return status;
}
