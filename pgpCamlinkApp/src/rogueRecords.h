//////////////////////////////////////////////////////////////////////////////
// This file is part of 'ADPgpCamlink'.
// It is subject to the license terms in the LICENSE.txt file found in the 
// top-level directory of this distribution and at: 
//    https://confluence.slac.stanford.edu/display/ppareg/LICENSE.html. 
// No part of 'ADPgpCamlink', including this file, 
// may be copied, modified, propagated, or distributed except according to 
// the terms contained in the LICENSE.txt file.
//////////////////////////////////////////////////////////////////////////////
//
//	devRogue.h
//
//	Header file for devRogue class.
//	It provides the EPICS record interface to a pgpRogueDev device.
//
#ifndef DEV_ROGUE_H
#define DEV_ROGUE_H

#include <dbScan.h>
#include <link.h>
#include "pgpRogueDev.h"

typedef struct _rogue_info_t
{
	std::string			m_varPath;
	pgpRogueDevPtr		m_pRogueDev;
	bool				m_fSignedValue;
}	rogue_info_t;

template<class R>		   int		 devRogue_init_record(	R * record, DBLINK link	);
//template<class R, class EV, class RV> int devRogue_read_record( R * record, EV & epicsVal, RV &rogueVal );
template<class R, class V> int		 devRogue_read_record(  R * record, V & valueRet );
template<class R, class V> int		 devRogue_write_record(	R * record, const V & value );
template<class R>		   int		 devRogue_init_record_specialized(	R * record	);
template<class R>		   int		 devRogue_read_record_specialized(	R * record	);
template<class R>		   int		 devRogue_write_record_specialized(	R * record	);
template<class R>		   IOSCANPVT devRogue_getioscanpvt_specialized(	R * record	);

#endif	/* DEV_ROGUE_H */
