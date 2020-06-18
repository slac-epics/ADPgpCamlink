
#include <stdio.h>
#include <alarm.h>
#include <link.h>

#include <devSup.h>
#include <dbCommon.h>
#include <longinRecord.h>
//#include <dbAccess.h>
//#include <dbAccessDefs.h>
#include <dbScan.h>
#include <recGbl.h>
#include <epicsExport.h>

//#include "drvRogue.h"
#include "devRogue.h"



static int
devRogue_bad_field(
	void *record,
	const char *message,
	const char *fieldname )
{
	fprintf( stderr, "devRogue_init_record: %s %s\n", message, fieldname );
	//recGblRecordError( S_db_badField, record, message );
	//return S_db_badField;
	return 15;
}

template < class T > int
devRogue_init_record(
	T		*	record,
	DBLINK		link )
{
	const char * functionName = "template devRogue_init_record";
	if ( link.type != INST_IO )
	{
		return devRogue_bad_field( record, "wrong link type", "" );
	}
	struct instio      *pinstio = &link.value.instio;

	if ( !pinstio->string )
	{
		return devRogue_bad_field( record, "invalid link", "" );
	}

	rogue_record_t		*	arc		= new rogue_record_t;
	const char			*	sinp	= pinstio->string;
	int                 	status;
	epicsUInt32            	board;
	epicsUInt32            	lane;
	char                	varPath[512];

	status = sscanf( sinp, "B%u L%u %511s", &board, &lane, varPath );
	if ( status != 3 )
	{
		return devRogue_bad_field( record, "cannot parse INP or OUT field!\n%s\n", sinp );
	}
	printf( "%s Parse succeeded: Board %u, Lane %u, VarPath %s\n", functionName, board, lane, varPath );
	//rogue_driver_t	*	ad = &( rogue_drivers[arc->module] );

	record->dpvt = arc;

#if 0
	status = devRogue_init_record_specialized( record );
	if ( status )
	{
		record->dpvt = 0;
		delete              arc;

		return devRogue_bad_field( record, "cannot find record name", sinp );
	}
#endif
	return 0;
}

template < class T > int
devRogue_read_record(
	T * record )
{
	int					status	= 1;
//	rogue_record_t	*	arc		= reinterpret_cast < rogue_record_t * >( record->dpvt );
//	rogue_driver_t	*	ad		= &rogue_drivers[arc->module];
//	status = !ad->run_semaphore || devRogue_read_record_specialized( record );

	if ( status )
	{
		record->nsta = UDF_ALARM;
		record->nsev = INVALID_ALARM;
		return -1;
	}
	return 0;
}

template < class T > int
devRogue_write_record(
	T * record )
{
	rogue_record_t	*	arc		= reinterpret_cast < rogue_record_t * >( record->dpvt );
	int					status	= 0;
//	rogue_driver_t	*	ad		= &rogue_drivers[arc->module];
//	status	= !ad->run_semaphore || devRogue_write_record_specialized( record );

	if ( status )
	{
		record->nsta = UDF_ALARM;
		record->nsev = INVALID_ALARM;
		return -1;
	}
	return 0;
}

#if 0
#include <longoutRecord.h>
#include <aiRecord.h>
#include <aoRecord.h>
#include <mbbiRecord.h>
#include <mbboRecord.h>
#include <waveformRecord.h>
template int        devRogue_init_record(	longoutRecord	*, DBLINK );
template int        devRogue_init_record(	aiRecord		*, DBLINK );
template int        devRogue_init_record(	aoRecord		*, DBLINK );
template int        devRogue_init_record(	mbbiRecord		*, DBLINK );
template int        devRogue_init_record(	mbboRecord		*, DBLINK );
template int        devRogue_init_record(	waveformRecord	*, DBLINK );
#endif

template int        devRogue_init_record(	longinRecord	*, DBLINK );
template int        devRogue_read_record(	longinRecord * );
#if 0
template int        devRogue_read_record(	longoutRecord * );
template int        devRogue_read_record(	aiRecord * );
template int        devRogue_read_record(	aoRecord * );
template int        devRogue_read_record(	mbbiRecord * );
template int        devRogue_read_record(	mbboRecord * );
template int        devRogue_read_record(	waveformRecord * );

template int        devRogue_write_record(	longoutRecord * );
template int        devRogue_write_record(	aoRecord * );
template int        devRogue_write_record(	mbbiRecord * );
#endif

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef USE_TYPED_DSET
static long init_record( struct dbCommon * pCommon )
#else
static long init_record( void * pCommon )
#endif
{
	longinRecord	*	pRecord	= reinterpret_cast < longinRecord * >( pCommon );
	int             status	= devRogue_init_record( pRecord, pRecord->inp );
	if ( status == 0 )
	{
		devRogue_read_record( pRecord );
		//pRecord->linr = 0;		// prevent conversions
	}
	return status;
}

#ifdef USE_TYPED_DSET
static long read_li( longinRecord	*	pRecord )
{
	//epicsUInt32		longValue = 0;
	return devRogue_read_record( pRecord );
}
#else
static long read_li( void	*	record )
{
	longinRecord	*	pRecord	= reinterpret_cast <longinRecord *>( record );
	//epicsUInt32		longValue = 0;
	return devRogue_read_record( pRecord );
}
#endif

struct
{
#ifndef USE_TYPED_DSET
	long                number;
	DEVSUPFUN           report;
	DEVSUPFUN           init;
	DEVSUPFUN           init_record;
	DEVSUPFUN           get_ioint_info;
	DEVSUPFUN           read_li;
	DEVSUPFUN           special_linconv;
#else
	dset				common;
	long (*read_li)(	struct longinRecord	*	pRec );
#endif
}	dsetRogueLi =
#ifdef USE_TYPED_DSET
{ { 5, NULL, NULL, init_record, NULL }, read_li };
#else
{ 5, NULL, NULL, init_record, NULL, read_li };
#endif


epicsExportAddress( dset, dsetRogueLi );

#ifdef __cplusplus
}
#endif
