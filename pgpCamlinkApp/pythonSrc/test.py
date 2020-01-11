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
#rogue.Logging.setLevel(rogue.Logging.Debug + 1)

pgpCam = pgpCamlink.pgpCamlink( "/dev/datadev_0", [ "Opal1000", None ], defaultFile="config/defaults_Opal1000.yml", pollEn=False, serverPort=9098, timeout=0.5 )
print( "PollEnable: %s" % pgpCam.PollEn.value() )
pgpCam.PollEn.set(False)
print( f'PollEnable: {pgpCam.PollEn.value()}' )

rvFpgaVer = pgpCam.Hardware.AxiPcieCore.AxiVersion.FpgaVersion
#fpgaVer = rvFpgaVer.value()
fpgaVer = rvFpgaVer.get(read=True)
print( 'Hardware.AxiPcieCore.AxiVersion.FpgaVersion = %d = 0x%X' % ( fpgaVer, fpgaVer ) )

# Write to scratchpad
print( f'Hardware.AxiPcieCore.AxiVersion.ScratchPad: {pgpCam.Hardware.AxiPcieCore.AxiVersion.ScratchPad.value()}' )
pgpCam.Hardware.AxiPcieCore.AxiVersion.ScratchPad.set( 31 )
print( f'Hardware.AxiPcieCore.AxiVersion.ScratchPad: {pgpCam.Hardware.AxiPcieCore.AxiVersion.ScratchPad.value()}' )
if	hasattr( pgpCam.Hardware.AxiPcieCore.AxiVersion.ScratchPad, '_log' ):
    pgpCam.Hardware.AxiPcieCore.AxiVersion.ScratchPad._log.setLevel(logging.DEBUG)
if	hasattr( pgpCam.Hardware.AxiPcieCore.AxiVersion, '_log' ):
    pgpCam.Hardware.AxiPcieCore.AxiVersion._log.setLevel(logging.DEBUG)
pgpCam.Hardware.AxiPcieCore.AxiVersion.ScratchPad.set( 5 )
print( f'Hardware.AxiPcieCore.AxiVersion.ScratchPad: {pgpCam.Hardware.AxiPcieCore.AxiVersion.ScratchPad.value()}' )

#if	pgpCam._memMap.log_:
#	pgpCam._memMap.log_.setLevel(logging.DEBUG)
#pgpCam._log.setLevel(logging.INFO)

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

#del pgpCam
#import sys
#sys.exit()
