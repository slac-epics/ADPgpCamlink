#!/usr/bin/env python3
#-----------------------------------------------------------------------------
# This file is part of the 'Camera link gateway'. It is subject to 
# the license terms in the LICENSE.txt file found in the top-level directory 
# of this distribution and at: 
#    https://confluence.slac.stanford.edu/display/ppareg/LICENSE.html. 
# No part of the 'Camera link gateway', including this file, may be 
# copied, modified, propagated, or distributed except according to the terms 
# contained in the LICENSE.txt file.
#-----------------------------------------------------------------------------
import setupLibPaths
import pyrogue as pr

import ClinkDev

import rogue
import rogue.interfaces.stream


class pgpCamlink( ClinkDev.ClinkDev ):
    def __init__( self,
            dev         = '/dev/datadev_0',# path to PCIe device
            camType     = ['Opal1000',None],
            defaultFile = None,
            serverPort  = None,
            **kwargs
        ):
        super().__init__(
            dev         = dev, 
            camType		= camType, 
            defaultFile = defaultFile,
            serverPort  = serverPort,
            **kwargs
        )

