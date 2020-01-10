#include <rogue/Logging.h>
#include <rogue/protocols/udp/Core.h>
#include <rogue/protocols/udp/Client.h>
#include <rogue/protocols/rssi/Client.h>
#include <rogue/protocols/rssi/Transport.h>
#include <rogue/protocols/rssi/Application.h>
#include <rogue/protocols/packetizer/CoreV2.h>
#include <rogue/protocols/packetizer/Transport.h>
#include <rogue/protocols/packetizer/Application.h>
#include <rogue/protocols/srp/SrpV3.h>
#include <rogue/interfaces/memory/Master.h>
#include <rogue/interfaces/memory/Constants.h>


int main (int argc, char **argv)
{
   uint32_t ver;
   uint32_t spad;

   //rogue::Logging::setLevel(rogue::Logging::Debug);

   // Create the UDP client, jumbo = true
   rogue::protocols::udp::ClientPtr udp  = rogue::protocols::udp::Client::create("192.168.2.196",8192,true);
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

