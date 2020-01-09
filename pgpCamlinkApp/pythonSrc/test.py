import logging
#import rogue.interfaces.memory
#import pyrogue as pr
#import XilinxKcu1500Pgp
#import LclsTimingCore
#import ClinkDev
import rogue
#import rogue.interfaces.stream
import pgpCamlink

rogue.Logging.setLevel(rogue.Logging.Warning)
rogue.Logging.setLevel(rogue.Logging.Debug)

pgpCam = pgpCamlink.pgpCamlink( "/dev/datadev_0", [ "Opal1000", None ], defaultFile="config/defaults_Opal1000.yml", pollEn=False, serverPort=9098 )
print( "PollEnable: %s" % pgpCam.PollEn.value() )
pgpCam.PollEn.set(False)
print( f'PollEnable: {pgpCam.PollEn.value()}' )

#if	pgpCam._memMap.log_:
#	pgpCam._memMap.log_.setLevel(logging.DEBUG)
pgpCam._log.setLevel(logging.INFO)

ver = pgpCam.RogueVersion.get(read=True)
# pgpCam.RogueVersion._parent.readBlocks(recurse=False,variable=pgpCam.RogueVersion)
# pgpCam.RogueVersion._parent.checkBlocks(recurse=False,variable=pgpCam.RogueVersion)
# pgpCam.RogueVersion._block.get()
pgpCam._log.setLevel(logging.WARNING)
print( "RougeVersion: %s" % ver )
#if	pgpCam._memMap.log_:
#	pgpCam._memMap.log_.setLevel(logging.WARNING)

pgpCam.PollEn.set(True)
print( "PollEnable: %s" % pgpCam.PollEn.value() )

#import surf.protocols.clink as cl
#uartDev = pgpCam.find(typ=cl.UartOpal1000)

pgpCam.stop()

del pgpCam
import sys
sys.exit()
