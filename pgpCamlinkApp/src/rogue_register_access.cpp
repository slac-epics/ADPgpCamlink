#include <rogue/Logging.h>
// #include <rogue/protocols/udp/Core.h>
// #include <rogue/protocols/udp/Client.h>
// #include <rogue/protocols/rssi/Client.h>
// #include <rogue/protocols/rssi/Transport.h>
// #include <rogue/protocols/rssi/Application.h>
// #include <rogue/protocols/packetizer/CoreV2.h>
// #include <rogue/protocols/packetizer/Transport.h>
// #include <rogue/protocols/packetizer/Application.h>
// #include <rogue/protocols/srp/SrpV3.h>
#include <rogue/hardware/axi/AxiMemMap.h>
#include <rogue/hardware/drivers/AxisDriver.h>
#include <rogue/hardware/drivers/DmaDriver.h>
#include <rogue/interfaces/memory/Constants.h>
#include <rogue/interfaces/memory/Hub.h>
#include <rogue/interfaces/memory/Master.h>
#include <rogue/interfaces/stream/Master.h>

// From Larry Ruckman email 7/24/2019
// The fiber connection is from QSFP[0] via the breakout cable to the FEB board.
// The LC side of the breakout cable to the FEB board will have labels "1" and "12" on them, which is PGP Lane=0. 
//
// Lane = 0 : breakout cable LC 1/12
// Lane = 1 : breakout cable LC 2/11
// Lane = 2 : breakout cable LC 3/10
// Lane = 3 : breakout cable LC 4/9
//
// QSFP[0] is the QSFP cage farther from the motherboard.
// QSFP[1] is the QSFP cage closest to the motherboard.  
//
// The FEB board should only have 1 of the 4 SFP modules inserted.
// This should be the SFP module closes to the input power connector.
//
// fiber link allocation
// supports 4 PGP frameGrabbers per PCIe card
//
// Link[0] = PGP[0] # lane 0
// Link[1] = PGP[1] # lane 1
// Link[2] = PGP[2] # lane 2
// Link[3] = PGP[3] # lane 3
// Link[4] = Reserved
// Link[5] = Reserved
// Link[6] = LCLS-I Timing
// Link[7] = LCLS-II Timing

int main (int argc, char **argv)
{
	uint32_t ver;
	uint32_t spad;

	//rogue::Logging::setLevel(rogue::Logging::Debug);
	std::string		devName( "/dev/datadev_0" );
	uint32_t		minPcieVersion	= 0x01000200;
	uint32_t		minFebVersion	= 0x01000200;

	// Not PgpCard::create() as it uses aes-stream-drivers pgpcard.ko instead of datatdev.ko
	// rogue::hardware::pgp::PgpCardPtr	pCard = rogue::hardware::pgp::PgpCard::create( devName, lane, vc )
	// 		Opens device
	// 		Initializes dma
	// 		Starts a read thread
	//
	// TODO:
	// Note: lcls-daq doesn't do most of this.
	// Just sets up DMA and uses python for everything else.
	//
	// The following based on python app with this inheritance
	// 		rogue::interfaces::memory::Master,	rogue::interfaces::memory::Slave	
	// 		rogue::interfaces::memory::Hub,		pyrogue.Node
	// 		pyrogue.Device,	rogue::interfaces::stream::master,	
	//		pyrogue.Root
	//		kcu1500.Core
	//		ClinkDev
	//		pgpCamlink
	//
	//	rim::Hub inherits from both Master and Slave and propagates and manages recursive
	//	transaction management between Masters and Slaves in device tree.
	//
	// pyrogue.Root initializes rogue::interfaces::stream::master and pyrogue.Device
	rogue::interfaces::stream::MasterPtr	streamMaster	= rogue::interfaces::stream::Master::create();
	rogue::interfaces::memory::HubPtr		hubPtr			= rogue::interfaces::memory::Hub::create(0,0,0);
	// Also creates Logger, PollQueue, listenerList, updateWorkerQueue

	// Each master sends data Frames to one or more Slave interfaces
	//
	// Create a memory master and connect it to the streamMaster
	rogue::interfaces::memory::MasterPtr memMaster = rogue::interfaces::memory::Master::create();
	// memMaster->setSlave(streamMaster.getSlave());
	// or
	// memMap = rogue::hardware::MemMap( uint64_t base, uint32_t size );
	// or
	// Create AxiMemMap( devName )
	rogue::hardware::axi::AxiMemMapPtr 	memMap = rogue::hardware::axi::AxiMemMap::create( devName );
	memMaster->setSlave(memMap);
	//
	// VC1 is image data
	// Create AxiStreamDma PCIe DMA interfaces for VC0 (registers), VC2(serialXmit), and VC3(serialRcv)
	// rogue::hardware::axi:AxiStreamDma	laneDmaStream[4];
	// laneDmaStream[iLane] = rogue::hardware::axi:AxiStreamDma::create(devName, dest, ssiEnable);
	// 		Opens device
	// 		Initializes dma
	// 		Starts a read thread
	//
	// serial I/O handled by python ClinkFeb class
	//
	// memMaster->setSlave(streamMaster);
	//
	// memMap->doTransaction( pNextTran )
	// doTransaction() is src of diag msgs: "Transaction id=0x231, addr 0x20004, Size=4, ..."
	
	// kcu1500.Core adds child device AxiPcieCore( memBase=memMap, offset=0x0 )
	// AxiPcieCore adds child devices:
	// 		AxiPciePhy( memBase=memMap, offset=0x10000 )
	// 		PcieAxiVersion( memBase=memMap, offset=0x20000 )
	// 		AxiStreamMonitoring( memBase=memMap, offset=0x60000, numberLanes=numLanes )
	// 		...

#if 0
	{
	// Create the UDP client, jumbo = true
	rogue::protocols::udp::ClientPtr udp = rogue::protocols::udp::Client::create("192.168.2.196",8192,true);
	udp->setRxBufferCount(64); // Make enough room for 64 outstanding buffers

	// RSSI
	rogue::protocols::rssi::ClientPtr rssi = rogue::protocols::rssi::Client::create(udp->maxPayload());
	udp->addSlave(rssi->transport());
	rssi->transport()->addSlave(udp);

	// Packetizer, ibCrc = false, obCrc = true
	rogue::protocols::packetizer::CoreV2Ptr pack = rogue::protocols::packetizer::CoreV2::create(false,true,true);
	rssi->application()->addSlave(pack->transport());
	pack->transport()->addSlave(rssi->application());

	// Create an SRP master and connect it to the packetizer
	rogue::protocols::srp::SrpV3Ptr srp = rogue::protocols::srp::SrpV3::create();
	pack->application(0)->addSlave(srp);
	srp->addSlave(pack->application(0));

	// Create a memory master and connect it to the srp
	rogue::interfaces::memory::MasterPtr mast = rogue::interfaces::memory::Master::create();
	mast->setSlave(srp);

	// Start the RSSI connection
	rssi->start();

	while ( ! rssi->getOpen() ) {
		sleep(1);
		printf("Establishing link ...\n");
	}

	ver = 0xFFFFFFFF;
	spad = 0xFFFFFFFF;

	// Read from fpga version
	mast->reqTransaction(0x00000000,4,&ver,rogue::interfaces::memory::Read);
	mast->reqTransaction(0x00000004,4,&spad,rogue::interfaces::memory::Read);
	mast->waitTransaction(0);

	printf("Register done. Value=0x%X, Spad=0x%X, Error=%s\n",ver,spad,mast->getError().c_str());
	}
#endif
}

