# source to setup env for running pgpCamLink test app
this_script=`readlink -f $BASH_ARGV`
TOP=`readlink -f $(dirname $this_script)`

# Activate Rogue conda Environment
#source ~bhill/miniconda3/etc/profile.d/conda.sh
#conda activate rogue_env
# Use my rogue build
#conda activate rogue-build-noepics
#pythonpathmunge ~bhill/git-wa-neh/slaclab/rogue-git/python
#pythonpathmunge ~bhill/git-wa-neh/slaclab/cameralink-gateway-git/software/scripts
#pythonpathmunge ~bhill/git-wa-neh/slaclab/cameralink-gateway-git/software/python
#pythonpathmunge $TOP/pgpCamlinkApp/pythonSrc

#ldpathmunge ~bhill/git-wa-neh/slaclab/rogue-git/build
#ldpathmunge /reg/g/pcds/epics/R7.0.2-2.0/modules/pcas/latest/lib/$EPICS_HOST_ARCH

source $PSPKG_ROOT/etc/env_add_pkg.sh cmake/3.15.0
source $PSPKG_ROOT/etc/env_add_pkg.sh zeromq/4.1.5
ldpathmunge ~bhill/git-wa-neh/slaclab/rogue-no-python-git/lib

