TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
# ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#LIBRARY_IOC = pgpCamlink
PROD_IOC = pgpTest

#DBD        += pgpCamlink.dbd

#LIB_SRCS   += pgpCamlink.cpp
#LIB_SRCS   += rogue_register_access.cpp
LIB_SRCS   += pyrogue_register_access.cpp
pgpTest_SRCS   += pyrogue_register_access.cpp

USR_CPPFLAGS += -DUSE_TYPED_RSET -DUSE_TYPED_DSET -DUSE_TYPED_DRVET

#include $(ADCORE)/ADApp/commonLibraryMakefile

pgpTest_LIBS += python3.7m
PROD_SYS_LIBS += util

python3.7m_DIR = $(CONDA_DIR)/lib

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
# ADD RULES AFTER THIS LINE

