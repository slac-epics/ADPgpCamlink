TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
# ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

LIBRARY_IOC = pgpCamlink
LIB_SRCS   		+= pgpCamlink.cpp
#LIB_SRCS		+= rogue_example_memory_master.cpp
LIB_SRCS		+= pgpClSerialDev.cpp
LIB_SRCS		+= asynPgpClSerial.cpp
LIB_LIBS		+= asyn
LIB_LIBS		+= $(EPICS_BASE_IOC_LIBS)

PROD += kcuPgpRead
kcuPgpRead_SRCS	+= psdaq_drp_pgpread.cpp
kcuPgpRead_LIBS += $(EPICS_BASE_HOST_LIBS)
kcuPgpRead_LIBS	+= rogue-core
kcuPgpRead_LIBS += zmq
kcuPgpRead_LIBS += bz2

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

