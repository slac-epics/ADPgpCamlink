TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
# ADD MACRO DEFINITIONS AFTER THIS LINE

#----------------------------------------------------
# Optimization of db files using dbst (DEFAULT: NO)
# DB_OPT = YES

#----------------------------------------------------
# Create and install (or just install)
# databases, templates, substitutions like this

# db templates
DB += pgpCamlinkBase.template
DB += ClinkTop.template
DB += putMonitor.template
DB += rbvMonitor.template
DB += serialMonitor.template

# Install archive files
#ARCHIVE += foo.tpl-arch

# Install autosave files
#REQ     += foo.req

#----------------------------------------------------
# If <anyname>.db template is not named <anyname>*.template add
# <anyname>_template = <templatename>

include $(TOP)/configure/RULES
#----------------------------------------
# ADD RULES AFTER THIS LINE

