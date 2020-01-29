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
#include <rogue/protocols/batcher/SplitterV1.h>
#include <rogue/protocols/srp/SrpV3.h>
// #include "psdaq/service/EbDgram.hh"
// #include "xtcdata/xtc/Dgram.hh"
#include <unistd.h>
#include <getopt.h>
#include "ClMemoryMaster.h"
#include "ClStreamSlave.h"

#define MAX_RET_CNT_C 1000
static int fd;
std::atomic<bool> terminate;

unsigned dmaDest(unsigned lane, unsigned vc)
{
    return (lane<<8) | vc;
}

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

static void usage(const char* p)
{
  printf("Usage: %s -d <device> -c <channel>\n",p);
}

int main (int argc, char **argv)
{
    int c, channel;

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
	rogue::protocols::srp::SrpV3Ptr				srp[N_AXI_LANES];
	rogue::hardware::axi::AxiMemMapPtr 			memMap[N_AXI_LANES];
	ClMemoryMasterPtr				 			clMemMaster[N_AXI_LANES];
	ClMemoryMasterPtr				 			febMemMaster[N_AXI_LANES];
	ClStreamSlavePtr							clStreamSlave[N_AXI_LANES];
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

	for ( uint32_t	lane = 0; lane < N_AXI_LANES;	lane++ ) {
		for ( uint32_t	ch = 0; ch < N_AXI_CHAN;	ch++ ) {
			dest = (0x100 * lane) + ch;	// Derived from python code
			dataChan[lane][ch]	= rogue::hardware::axi::AxiStreamDma::create( device.c_str(), dest, true);
		}
	}
	for ( uint32_t	lane = 0; lane < N_AXI_LANES;	lane++ ) {
		// CHAN 0: Serial Register Protocol
		srp[lane] = rogue::protocols::srp::SrpV3::create();
		clMemMaster[lane] = ClMemoryMaster::create( );
		febMemMaster[lane] = ClMemoryMaster::create( );
		memMap[lane] = rogue::hardware::axi::AxiMemMap::create( device.c_str() );
#if 1
		clMemMaster[lane]->setSlave( srp[lane] );
		febMemMaster[lane]->setSlave( memMap[lane] );
#else
		rogueBusConnect( clMemMaster[lane], srp[lane] );
		rogueBusConnect( febMemMaster[lane], memMap[lane] );
#endif
		// clMemMaster[lane]->reqTransaction(0x00000000,4,&ver,rogue::interfaces::memory::Read);
		// clMemMaster[lane]->reqTransaction(0x00000004,4,&spad,rogue::interfaces::memory::Read);
		// memMap[lane]->doTransaction( pNextTran )
		// doTransaction() is src of diag msgs: "Transaction id=0x231, addr 0x20004, Size=4, ..."
		// clMemMaster[lane]->waitTransaction(0);
		// printf("Register done. Value=0x%X, Spad=0x%X, Error=%s\n",ver,spad,mast->getError().c_str());

		// CHAN 1: Camera Frames
		clStreamSlave[lane] = ClStreamSlave::create();
#undef	INTERPOSE_BATCHER
#ifdef	INTERPOSE_BATCHER
		if ( lane == 0 ) {
			dataChan[lane][1]->addSlave( batch );
			batch->addSlave( clStreamSlave[lane] );
		} else
#endif
			dataChan[lane][1]->addSlave( clStreamSlave[lane] );
		// or rogueStreamConnect( dataChan[lane][1], clStreamSlave[lane] );

		// CHAN 2: Camera Serial Rx
		// clSerialRx[lane] = UartClinkGeneric::create();
		// rogueStreamConnect( dataChan[lane][2], clSerialRx[lane] );

		// CHAN 3: Camera Serial Tx
		// clSerialTx[lane] = UartClinkGeneric::create();
		// rogueStreamConnect( dataChan[lane][3], clSerialTx[lane] );
	}
	// Send Opal serial command
	// clSerialTx[lane].sendString( "TestCmd" );

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
		printf("-- Core Axi Version --\n");
		printf("firmwareVersion : %x\n", vsn.firmwareVersion);
		printf("upTimeCount     : %u\n", vsn.upTimeCount);
		printf("deviceId        : %x\n", vsn.deviceId);
		printf("buildString     : %s\n", vsn.buildString); 
	}

	int status = StartRun( fd );
    if ( status != 0 ) {
        printf( "StartRun Error: %d\n", status );
        return -1;
	}

#if 1
	std::shared_ptr<rogue::interfaces::stream::Frame>	pFrame;
	usleep( 50000 );
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

#if 1
    printf("Finished\n");
#else
    printf("Shutting down\n");
	status = StopRun( fd );
#endif
	return status;
}
