#include <atomic>
#include <string>
#include <iostream>
#include <signal.h>
#include <cstdio>
#include <AxiVersion.h>
#include <AxisDriver.h>
#include <DmaDriver.h>
#include <stdlib.h>
// #include "psdaq/service/EbDgram.hh"
// #include "xtcdata/xtc/Dgram.hh"
#include <unistd.h>
#include <getopt.h>

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
  printf("Usage: %p -d <device> -c <channel>\n",p);
}

int main (int argc, char **argv)
{
    int c, channel;

    channel = 0;
    std::string device;
    while((c = getopt(argc, argv, "hc:d:")) != EOF) {
        switch(c) {
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
    fd = open(device.c_str(), O_RDWR);
    if (fd < 0) {
        std::cout<<"Error opening "<<device<<'\n';
        return -1;
    }

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

    uint32_t dmaCount, dmaSize;
    void** dmaBuffers = dmaMapDma(fd, &dmaCount, &dmaSize);
    if (dmaBuffers == NULL ) {
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
		int status = dmaReadRegister( fd, CLINKDEV_LANE0_DATACNT0,	&frameCount );

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
            printf("Size %d b | Dest %u | index %u\n",
                   retSize * 8, dest, index);
#endif
        }
	    if ( ret > 0 )
			dmaRetIndexes(fd, ret, dmaIndex);
	    sleep(1.0);
    }
    printf("finished\n");
}
