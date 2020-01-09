TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
# ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#LIBRARY_IOC = pgpCamlink
PROD = pgpTest

#DBD        += pgpCamlink.dbd

#LIB_SRCS   += pgpCamlink.cpp
#LIB_SRCS   += rogue_register_access.cpp
LIB_SRCS   += rogue_example_memory_master.cpp
LIB_SRCS   += pyrogue_register_access.cpp
pgpTest_SRCS   += pyrogue_register_access.cpp

HOST_OPT = NO
USR_CPPFLAGS += -O0 -DUSE_TYPED_RSET -DUSE_TYPED_DSET -DUSE_TYPED_DRVET

#include $(ADCORE)/ADApp/commonLibraryMakefile

pgpTest_LIBS += rogue-core
pgpTest_LIBS += python3.7m
pgpTest_LIBS += boost_thread
pgpTest_LIBS += boost_python37
pgpTest_LIBS += zmq
pgpTest_LIBS += bz2
PROD_SYS_LIBS += util
#$(info PRODNAME=$(PRODNAME) )
rogue_core_DIR		= $(ROGUE_LIB)
#USR_LDFLAGS			+= -L$(ROGUE_LIB)
SHRLIB_SEARCH_DIRS	+=$(ROGUE_LIB)
python3.7m_DIR		= $(CONDA_DIR)/lib
boost_python37_DIR	= $(CONDA_DIR)/lib
boost_thread_DIR	= $(CONDA_DIR)/lib
bz2_DIR				= $(CONDA_DIR)/lib
zmq_DIR				= $(CONDA_DIR)/lib

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
# ADD RULES AFTER THIS LINE

#$(foreach v, $(filter-out .VARIABLES, $(.VARIABLES)), $(info $(v) = $($(v))))

