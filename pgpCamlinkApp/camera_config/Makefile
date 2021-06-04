# # Specify T_A as host arch so we don't create O.$(ARCH) directories and
# # can use DB_INSTALLS directly to install our model specific files
# # No need to do ARCH specific builds here.
# T_A=$(EPICS_HOST_ARCH)
TOP=../..
include $(TOP)/configure/CONFIG

#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#----------------------------------------------------

# Install all models with env files
MODELS := $(wildcard ../*.env)
MODELS := $(subst .env,,$(MODELS))
MODELS := $(subst ../,,$(MODELS))

# Expand to install all needed files
# Symbolic links can be used if desired for shared files, but
# each model installed gets its own copy of each file installed
DB += $(addsuffix  .db,    $(MODELS))
MODEL_FILES += $(addsuffix  .yml,   $(MODELS))
MODEL_FILES += $(addsuffix  .env,   $(MODELS))
MODEL_FILES += $(addsuffix  .proto, $(MODELS))
DB_INSTALLS =  $(addprefix  $(TOP)/pgpCamlinkApp/camera_config/, $(MODEL_FILES))
DB_INSTALLS += $(TOP)/pgpCamlinkApp/camera_config/Basler.proto

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

