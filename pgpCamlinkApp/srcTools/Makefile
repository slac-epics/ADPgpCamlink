TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
# ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

ifdef CONDA_DIR
# pgpTest app
PROD += pgpTest
pgpTest_SRCS += pyrogue_register_access.cpp
pgpTest_LIBS += rogue-core
pgpTest_LIBS += python3.7m
pgpTest_LIBS += boost_thread
pgpTest_LIBS += boost_python37
pgpTest_LIBS += zmq
pgpTest_LIBS += bz2
endif


# rogueReg app
PROD += rogueReg
rogueReg_SRCS += rogue_register_access.cpp
rogueReg_LIBS += rogue-core
rogueReg_LIBS += zmq
rogueReg_LIBS += bz2

# kcuReg app - from https://github.com/slac-lcls/lcls2.git/psdaq/psdaq/pgp/kcu1500/app/xReg.cpp
PROD += kcuReg
kcuReg_SRCS	+= xReg.cpp
kcuReg_LIBS	+= rogue-core
kcuReg_LIBS += zmq
kcuReg_LIBS += bz2

PROD += kcuRead
kcuRead_SRCS	+= xRead.cpp
kcuRead_LIBS	+= rogue-core
kcuRead_LIBS += zmq
kcuRead_LIBS += bz2
#kcuRead_LIBS += pthread

PROD += kcuDmaStatus
kcuDmaStatus_SRCS	+= xDmaStatus.cpp
kcuDmaStatus_LIBS	+= rogue-core
kcuDmaStatus_LIBS += zmq
kcuDmaStatus_LIBS += bz2

PROD += kcuDmaList
kcuDmaList_SRCS	+= xDmaList.cpp
kcuDmaList_LIBS	+= rogue-core
kcuDmaList_LIBS += zmq
kcuDmaList_LIBS += bz2

PROD += kcuDmaBuffers
kcuDmaBuffers_SRCS	+= xDmaBuffers.cpp
kcuDmaBuffers_LIBS	+= rogue-core
kcuDmaBuffers_LIBS += zmq
kcuDmaBuffers_LIBS += bz2

PROD += kcuTimetool
kcuTimetool_SRCS	+= pgpread_timetool.cpp
kcuTimetool_SRCS	+= AxiBatcherParser.cpp
kcuTimetool_LIBS	+= rogue-core
kcuTimetool_LIBS += zmq
kcuTimetool_LIBS += bz2

#PROD += kcuPgpRead
kcuPgpRead_SRCS	+= psdaq_drp_pgpread.cpp
kcuPgpRead_LIBS += $(EPICS_BASE_HOST_LIBS)
kcuPgpRead_LIBS	+= rogue-core
kcuPgpRead_LIBS += zmq
kcuPgpRead_LIBS += bz2

#PROD += pgpClSerialTool
pgpClSerialTool_SRCS	+= pgpClSerialTool.cpp
#pgpClSerialTool_LIBS	+= $(EPICS_BASE_HOST_LIBS)
pgpClSerialTool_LIBS	+= pgpCamlink
pgpClSerialTool_LIBS	+= asyn
pgpClSerialTool_LIBS	+= rogue-core
pgpClSerialTool_LIBS	+= zmq
pgpClSerialTool_LIBS	+= bz2

USR_CPPFLAGS += -DUSE_TYPED_RSET -DUSE_TYPED_DSET -DUSE_TYPED_DRVET -DNO_PYTHON

PROD_SYS_LIBS += util pthread rt

rogue_core_DIR		= $(ROGUE_LIB)
SHRLIB_SEARCH_DIRS	+=$(ROGUE_LIB)

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
# ADD RULES AFTER THIS LINE

#$(foreach v, $(filter-out .VARIABLES, $(.VARIABLES)), $(info $(v) = $($(v))))

