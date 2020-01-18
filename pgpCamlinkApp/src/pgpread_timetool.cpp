#include <atomic>
#include <string>
#include <iostream>
#include <signal.h>
#include <cstdio>
#include <AxisDriver.h>
#include <AxiVersion.h>
#include <stdlib.h>
#include <stdio.h>
#include "AxiBatcherParser.hh"
// #include "psdaq/drp/AxiBatcherParser.hh"
// #include "psdaq/service/EbDgram.hh"
// #include "xtcdata/xtc/Dgram.hh"
// #include "xtcdata/xtc/TypeId.hh"
// #include "xtcdata/xtc/NamesLookup.hh"
// #include "psdaq/service/Json2Xtc.hh"
#include <unistd.h>
#include <getopt.h>
#include <time.h>
#include <ctime>
//#include <Python.h>

#define MAX_RET_CNT_C 1000

//using namespace XtcData;

static int        fd;
std::atomic<bool> terminate;

const  unsigned   BUFSIZE                = 1024*1024*32;

enum {ConfigNamesIndex, EventNamesIndex};

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
}

static void usage(const char* p)
{
  printf("Usage: %s -d<device> -c<channel>\n",p);
}

int main(int argc, char* argv[])
{
    printf("starting main \n");
    int c, channel;
    int write_interval = 1;
    channel = 0;
    std::string device;
    while((c = getopt(argc, argv, "c:d:")) != EOF)
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

	if ( device.size() == 0 )
	{
		std::cerr << "device not specified" << std::endl;
		usage(argv[0]);
		return 1;
	}

    std::cout<<"Opening device: "<< device << std::endl;
    fd = open(device.c_str(), O_RDWR);
    if (fd < 0)
	{
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
	if ( status != 0 ) {
		printf( "StartRun Error: %d\n", status );
	}

    uint32_t dmaCount, dmaSize;
    void** dmaBuffers = dmaMapDma(fd, &dmaCount, &dmaSize);
    if (dmaBuffers == NULL )
	{
        printf("Failed to map dma buffers!\n");
        return -1;
    }
    printf("dmaCount %u  dmaSize %u\n", dmaCount, dmaSize);

	// Setup DMA mask
    uint8_t mask[DMA_MASK_SIZE];
    dmaInitMaskBytes(mask);
    for (unsigned i=0; i<4; i++)
	{
        dmaAddMaskBytes((uint8_t*)mask, dmaDest(i, channel));
    }
    dmaSetMaskBytes(fd, mask);

    int32_t                 dmaRet[MAX_RET_CNT_C];
    uint32_t                dmaIndex[MAX_RET_CNT_C];
    //uint32_t                dmaDest[MAX_RET_CNT_C];
    uint8_t                 expected_next_count          = 0;
    std::time_t             last_time;    
    timespec				ts; 
	clock_gettime(CLOCK_REALTIME, &ts);
	last_time = ts.tv_sec;

    std::vector<uint8_t>    raw_vector;
    eventBuilderParser      my_frame;
	uint32_t	raw_counter			= 0;
	uint32_t	last_raw_counter	= 0;
				printf(	"rawData [0]  [1](count)  expected_count [32]\n" );
    while (1)
	{
        if (terminate.load(std::memory_order_acquire) == true)
		{
            close(fd);
            printf( "\n%s closed.\n", device.c_str() );
            break;
        }

        clock_gettime(CLOCK_REALTIME, &ts);

        int32_t ret = dmaReadBulkIndex(fd, MAX_RET_CNT_C, dmaRet, dmaIndex, NULL, NULL, NULL);
        for (int b=0; b < ret; b++)
		{
            uint32_t	index = dmaIndex[b];
            uint32_t	size = dmaRet[b];
    		uint8_t	*	raw_data;
            raw_data	= reinterpret_cast<uint8_t *>(dmaBuffers[index]);
            raw_vector	= std::vector<uint8_t> (raw_data,raw_data+size);
            my_frame.load_frame( raw_vector );
            my_frame.parse_array();

            if(ts.tv_sec - last_time  >= write_interval)
			{
#if 1
                my_frame.print_frame();
				printf(	"rawData [0]  [1](count)  expected_count [32]\n" );
#endif
#if 1
//              printf(	"        0x00 0x01        0x01           0x44 ", raw_data[0], raw_data[1],	expected_next_count,	raw_data[32] );
                printf(	"        0x%02x 0x%02x        0x%02x           0x%02x ", raw_data[0], raw_data[1],	expected_next_count,	raw_data[32] );
#endif
                printf(	"elapsed time=%ld sec, raw_counter=%d, number of shots=%d, size=%d \n",
						ts.tv_sec-last_time, raw_counter, raw_counter-last_raw_counter,	size );
                last_raw_counter = raw_counter;

#ifdef	DGRAM_SUPPORT
                //*****************************
                //**** writing xtc to disk ****
                //*****************************
                // refer to this link
				// https://docs.google.com/presentation/d/1KsTXafudKoDTHlqAQXOHSZRLQ1x734kTlrVniV3K-NI/edit#slide=id.g64c80c79d8_0_69 
                // for a visual layout of how the data structures below create the object that gets stored to xtc.
                unsigned nodeId = 0;
                unsigned env    = 0;
                Transition tr(Dgram::Event, TransitionId::L1Accept, TimeStamp(ts.tv_sec, ts.tv_nsec), env);
                TypeId     tid(TypeId::Parent, 0);
                Dgram&     dgram = *new(dgram_buf) Dgram(tr, Xtc(tid));
                NamesId    eventNamesId(nodeId,EventNamesIndex);
                // This instantiates the dgram.xtc component.
				// Here's the path dgram takes before it gets written.
				// dgram is now contained within fex
                CreateData fex(dgram.xtc, namesLookup, eventNamesId);

                unsigned shape[MaxRank];
                shape[0] = size;
				// arrayT is now pointing at dgram.xtc
                Array<uint8_t> arrayT = fex.allocate<uint8_t>(TTDef::data,shape);
				//this copies the data from raw_data to arrayT (where arrayT is really dgram.xtc)
                for(unsigned i=0; i<shape[0]; i++)
				{
                    arrayT(i) = raw_data[i];
                }

                //here finally dgram is written to disk
                if (fwrite(&dgram, sizeof(dgram) + dgram.xtc.sizeofPayload(), 1, xtcFile) != 1)
				{
                    printf("Error writing to output xtc file.\n");
                }

                printf("wrote to disk \n");
#endif	// DGRAM_SUPPORT
            }

            my_frame.clear();

            last_time = ts.tv_sec;
            raw_counter = raw_counter + 1;

            if(expected_next_count != raw_data[1])
			{
                printf(	"Dropped shot. raw_counter = %d, expected_next_counter = %d\n",
						raw_data[1], expected_next_count );
            }

            expected_next_count = (raw_data[1]+1)%256;

            //Pds::TimingHeader* event_header = reinterpret_cast<Pds::TimingHeader*>(dmaBuffers[index]);
            //XtcData::TransitionId::Value transition_id = event_header->service();
		}
		if ( ret > 0 )
			dmaRetIndexes(fd, ret, dmaIndex);
		sleep(1);
    }
#ifdef SUPPORT_PYTHON
    fclose(xtcFile);
#endif	// SUPPORT_PYTHON
    printf("finished\n");
}
