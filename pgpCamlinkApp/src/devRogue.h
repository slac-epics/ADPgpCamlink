#ifndef DEV_ROGUE_H
#define DEV_ROGUE_H

#include <dbScan.h>
#include <link.h>

typedef struct _rogue_record_t
{
	int			module;
	int			channel;
	char		name[8];
	void	*	pvt;
}	rogue_record_t;

template<class T> int		devRogue_init_record(	T * record, DBLINK link	);
template<class T> int		devRogue_read_record(	T * record	);
template<class T> int		devRogue_write_record(	T * record	);
template<class T> int		devRogue_init_record_specialized(	T * record	);
template<class T> int		devRogue_read_record_specialized(	T * record	);
template<class T> int		devRogue_write_record_specialized(	T * record	);
template<class T> IOSCANPVT	devRogue_getioscanpvt_specialized(	T * record	);

#endif	/* DEV_ROGUE_H */
