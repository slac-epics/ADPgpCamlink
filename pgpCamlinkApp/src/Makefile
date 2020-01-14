TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
# ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

# pgpTest app
PROD += pgpTest
pgpTest_SRCS += pyrogue_register_access.cpp
pgpTest_LIBS += rogue-core
pgpTest_LIBS += python3.7m
pgpTest_LIBS += boost_thread
pgpTest_LIBS += boost_python37
pgpTest_LIBS += zmq
pgpTest_LIBS += bz2

# rogueReg app
PROD += rogueReg
rogueReg_SRCS += rogue_register_access.cpp
rogueReg_LIBS += rogue-core
rogueReg_LIBS += python3.7m
rogueReg_LIBS += boost_thread
rogueReg_LIBS += boost_python37
rogueReg_LIBS += zmq
rogueReg_LIBS += bz2

# kcuReg app - from https://github.com/slac-lcls/lcls2.git/psdaq/psdaq/pgp/kcu1500/app/xReg.cpp
PROD += kcuReg
kcuReg_SRCS	+= xReg.cpp
kcuReg_LIBS	+= rogue-core
# TODO: Try linking against rogue built w/ NO_PYTHON
kcuReg_LIBS += python3.7m
kcuReg_LIBS += boost_thread
kcuReg_LIBS += boost_python37
kcuReg_LIBS += zmq
kcuReg_LIBS += bz2

PROD += kcuRead
kcuRead_SRCS	+= xRead.cpp
kcuRead_LIBS	+= rogue-core
# TODO: Try linking against rogue built w/ NO_PYTHON
kcuRead_LIBS += python3.7m
kcuRead_LIBS += boost_thread
kcuRead_LIBS += boost_python37
kcuRead_LIBS += zmq
kcuRead_LIBS += bz2
#kcuRead_LIBS += pthread

PROD += kcuDmaStatus
kcuDmaStatus_SRCS	+= xDmaStatus.cpp
kcuDmaStatus_LIBS	+= rogue-core
# TODO: Try linking against rogue built w/ NO_PYTHON
kcuDmaStatus_LIBS += python3.7m
kcuDmaStatus_LIBS += boost_thread
kcuDmaStatus_LIBS += boost_python37
kcuDmaStatus_LIBS += zmq
kcuDmaStatus_LIBS += bz2

PROD += kcuDmaList
kcuDmaList_SRCS	+= xDmaList.cpp
kcuDmaList_LIBS	+= rogue-core
# TODO: Try linking against rogue built w/ NO_PYTHON
kcuDmaList_LIBS += python3.7m
kcuDmaList_LIBS += boost_thread
kcuDmaList_LIBS += boost_python37
kcuDmaList_LIBS += zmq
kcuDmaList_LIBS += bz2

PROD += kcuDmaBuffers
kcuDmaBuffers_SRCS	+= xDmaBuffers.cpp
kcuDmaBuffers_LIBS	+= rogue-core
# TODO: Try linking against rogue built w/ NO_PYTHON
kcuDmaBuffers_LIBS += python3.7m
kcuDmaBuffers_LIBS += boost_thread
kcuDmaBuffers_LIBS += boost_python37
kcuDmaBuffers_LIBS += zmq
kcuDmaBuffers_LIBS += bz2

PROD += kcuPgpRead
kcuPgpRead_SRCS	+= psdaq_drp_pgpread.cpp
kcuPgpRead_LIBS	+= rogue-core
# TODO: Try linking against rogue built w/ NO_PYTHON
kcuPgpRead_LIBS += python3.7m
kcuPgpRead_LIBS += boost_thread
kcuPgpRead_LIBS += boost_python37
kcuPgpRead_LIBS += zmq
kcuPgpRead_LIBS += bz2

#DBD        += pgpCamlink.dbd

LIBRARY_DEFAULT = pgpCamlink
#LIB_SRCS   += pgpCamlink.cpp
LIB_SRCS		+= rogue_example_memory_master.cpp

HOST_OPT = NO
USR_CPPFLAGS += -O0 -DUSE_TYPED_RSET -DUSE_TYPED_DSET -DUSE_TYPED_DRVET

#include $(ADCORE)/ADApp/commonLibraryMakefile


PROD_SYS_LIBS += util pthread rt
#$(info PRODNAME=$(PRODNAME) )
rogue_core_DIR		= $(ROGUE_LIB)
#USR_LDFLAGS			+= -L$(ROGUE_LIB)
SHRLIB_SEARCH_DIRS	+=$(ROGUE_LIB)
python3.7m_DIR		= $(CONDA_DIR)/lib
boost_python37_DIR	= $(CONDA_DIR)/lib
boost_thread_DIR	= $(CONDA_DIR)/lib
bz2_DIR				= $(CONDA_DIR)/lib
zmq_DIR				= $(CONDA_DIR)/lib
readline_DIR		= $(CONDA_DIR)/lib
ncurses_DIR			= $(CONDA_DIR)/lib
USR_LDFLAGS			+= -L$(CONDA_DIR)/lib

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
# ADD RULES AFTER THIS LINE

#$(foreach v, $(filter-out .VARIABLES, $(.VARIABLES)), $(info $(v) = $($(v))))

