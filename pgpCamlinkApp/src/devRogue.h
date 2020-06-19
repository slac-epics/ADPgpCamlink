#ifndef DEV_ROGUE_H
#define DEV_ROGUE_H

#include <dbScan.h>
#include <link.h>
#include "pgpClDev.h"

typedef struct _rogue_info_t
{
	std::string	varPath;
	pgpClDevPtr	pClDev;
}	rogue_info_t;

template<class R>		   int		 devRogue_init_record(	R * record, DBLINK link	);
//template<class R, class EV, class RV> int devRogue_read_record( R * record, EV & epicsVal, RV &rogueVal );
template<class R, class V> int		 devRogue_read_record( R * record, V & valueRet );
template<class R, class V> int		 devRogue_write_record(	R * record, V value	);
template<class R>		   int		 devRogue_init_record_specialized(	R * record	);
template<class R>		   int		 devRogue_read_record_specialized(	R * record	);
template<class R>		   int		 devRogue_write_record_specialized(	R * record	);
template<class R>		   IOSCANPVT devRogue_getioscanpvt_specialized(	R * record	);

#endif	/* DEV_ROGUE_H */
