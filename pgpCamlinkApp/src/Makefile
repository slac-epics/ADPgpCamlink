TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
# ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

LIBRARY_IOC = pgpCamlink
DBD += pgpCamlinkSupport.dbd
DBD += pgpClDev.dbd
DBD += pgpClSerialDev.dbd
LIB_SRCS   		+= pgpCamlink2.cpp
#LIB_SRCS		+= rogue_example_memory_master.cpp
LIB_SRCS		+= ClSerialMaster.cpp
LIB_SRCS		+= ClSerialSlave.cpp
LIB_SRCS		+= ClStreamSlave.cpp
LIB_SRCS		+= pgpClDev.cpp
LIB_SRCS		+= pgpClSerialDev.cpp
LIB_SRCS		+= asynPgpClSerial.cpp
#LIB_LIBS		+= asyn
#LIB_LIBS		+= $(EPICS_BASE_IOC_LIBS)
#pgpCamlink_LIBS		+= asyn
#pgpCamlink_LIBS		+= $(EPICS_BASE_IOC_LIBS)
LIB_INSTALLS_Linux += $(wildcard $(ROGUE_LIB)/lib*)

PROD += kcuPgpRead
kcuPgpRead_SRCS	+= psdaq_drp_pgpread.cpp
kcuPgpRead_LIBS += $(EPICS_BASE_HOST_LIBS)
kcuPgpRead_LIBS	+= pgpCamlink
kcuPgpRead_LIBS	+= rogue-core
kcuPgpRead_LIBS += zmq
kcuPgpRead_LIBS += bz2

PROD += pgpClSerialTool
pgpClSerialTool_SRCS	+= pgpClSerialTool.cpp
#pgpClSerialTool_LIBS	+= $(EPICS_BASE_HOST_LIBS)
pgpClSerialTool_LIBS	+= pgpCamlink
pgpClSerialTool_LIBS	+= asyn
pgpClSerialTool_LIBS	+= rogue-core
pgpClSerialTool_LIBS	+= zmq
pgpClSerialTool_LIBS	+= bz2

HOST_OPT = NO
USR_CPPFLAGS += -O0 -DUSE_TYPED_RSET -DUSE_TYPED_DSET -DUSE_TYPED_DRVET -DNO_PYTHON

PROD_SYS_LIBS += util pthread rt

rogue_core_DIR		= $(ROGUE_LIB)
SHRLIB_SEARCH_DIRS	+=$(ROGUE_LIB)

include $(ADCORE)/ADApp/commonLibraryMakefile

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
# ADD RULES AFTER THIS LINE

#$(foreach v, $(filter-out .VARIABLES, $(.VARIABLES)), $(info $(v) = $($(v))))

