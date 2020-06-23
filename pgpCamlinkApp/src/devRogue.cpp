
#include <stdio.h>
#include <alarm.h>
#include <link.h>

#include <devSup.h>
#include <dbCommon.h>
#include <biRecord.h>
#include <longinRecord.h>
#include <longoutRecord.h>
//#include <dbAccess.h>
//#include <dbAccessDefs.h>
#include <dbScan.h>
#include <recGbl.h>
#include <epicsExport.h>

//#include "drvRogue.h"
#include "devRogue.h"
#include "pgpCamlink.h"


int	DEBUG_ROGUE_DEV = 2;


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

template < class R >
int devRogue_init_record(
	R		*	record,
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

	pgpCamlink	*	pgpCam = pgpCamlink::CameraFindByBoardLane( board, lane );

	if ( DEBUG_ROGUE_DEV >= 4 )
		printf( "%s Parse succeeded: Board %u, Lane %u, VarPath %s\n", functionName, board, lane, varPath );

	rogue_info_t	*	pRogueInfo		= new rogue_info_t;
	pRogueInfo->varPath	= varPath;
	pRogueInfo->pClDev	= pgpCam->GetDevPtr();
	record->dpvt		= pRogueInfo;

#if 0
	status = devRogue_init_record_specialized( record );
	if ( status )
	{
		record->dpvt = 0;
		delete              pRogueInfo;

		return devRogue_bad_field( record, "cannot find record name", sinp );
	}
#endif
	return 0;
}

template < class R, class V >
int devRogue_read_record( R * record, V & valueRet )
{
	const char 		*	functionName = "devRogue_read_record<R>";
	int					status		= 1;
	rogue_info_t	*	pRogueInfo	= reinterpret_cast < rogue_info_t * >( record->dpvt );
	status = pRogueInfo->pClDev->readVarPath( pRogueInfo->varPath.c_str(), valueRet );

	rogue::interfaces::memory::VariablePtr	pVar;
	pVar = pRogueInfo->pClDev->getVariable( pRogueInfo->varPath );
	if ( !pVar )
	{
		printf( "%s error: %s not found!\n", functionName, pRogueInfo->varPath.c_str() );
	}
	if ( status )
	{
		record->nsta = UDF_ALARM;
		record->nsev = INVALID_ALARM;
		return -1;
	}
	return 0;
}

template < class R, class V >
int devRogue_write_record( R * record, const V & value )
{
//	const char 		*	functionName = "devRogue_write_record<R>";
	int					status		= 1;
	rogue_info_t	*	pRogueInfo	= reinterpret_cast < rogue_info_t * >( record->dpvt );
	status = pRogueInfo->pClDev->writeVarPath( pRogueInfo->varPath.c_str(), value );

#if 0
	// TODO: Can pVar lookup be moved into devRogue_init_record?
	rogue::interfaces::memory::VariablePtr	pVar;
	pVar = pRogueInfo->pClDev->getVariable( pRogueInfo->varPath );
	if ( !pVar )
	{
		printf( "%s error: %s not found!\n", functionName, pRogueInfo->varPath.c_str() );
	}
	if ( status )
	{
		record->nsta = UDF_ALARM;
		record->nsev = INVALID_ALARM;
		return -1;
	}
#endif
	return status;
}

#if 0
#include <longoutRecord.h>
#include <aiRecord.h>
#include <aoRecord.h>
#include <biRecord.h>
#include <boRecord.h>
#include <mbbiRecord.h>
#include <mbboRecord.h>
#include <waveformRecord.h>
template int        devRogue_init_record(	longoutRecord	*, DBLINK );
template int        devRogue_init_record(	aiRecord		*, DBLINK );
template int        devRogue_init_record(	aoRecord		*, DBLINK );
template int        devRogue_init_record(	biRecord		*, DBLINK );
template int        devRogue_init_record(	boRecord		*, DBLINK );
template int        devRogue_init_record(	mbbiRecord		*, DBLINK );
template int        devRogue_init_record(	mbboRecord		*, DBLINK );
template int        devRogue_init_record(	waveformRecord	*, DBLINK );
#endif

#if 0
template int        devRogue_read_record(	aiRecord * );
template int        devRogue_read_record(	aoRecord * );
template int        devRogue_read_record(	mbbiRecord * );
template int        devRogue_read_record(	mbboRecord * );
template int        devRogue_read_record(	waveformRecord * );

template int        devRogue_write_record(	aoRecord	*, const double		& value );
template int        devRogue_write_record(	mbbiRecord	*, const uint64_t	& value );
#endif

// longin record support
#ifdef __cplusplus
extern "C"
{
#endif
template int        devRogue_init_record(	longinRecord	*, DBLINK );
template int        devRogue_read_record(	longinRecord *, int64_t  & rogueVal );
template int        devRogue_read_record(	longinRecord *, uint64_t & rogueVal );

#ifdef USE_TYPED_DSET
static long init_li( struct dbCommon * pCommon )
#else
static long init_li( void * pCommon )
#endif
{
	longinRecord	*	pRecord	= reinterpret_cast < longinRecord * >( pCommon );
	int             status	= devRogue_init_record( pRecord, pRecord->inp );
	if ( status == 0 )
	{
		bool	signedValue	= false;
		if ( signedValue )
		{
			int64_t		rogueValue;
			devRogue_read_record( pRecord, rogueValue );
			pRecord->val = static_cast<epicsInt32>( rogueValue );
		}
		else
		{
			uint64_t	rogueValue;
			devRogue_read_record( pRecord, rogueValue );
			pRecord->val = static_cast<epicsInt32>( rogueValue );
		}
		//pRecord->linr = 0;		// prevent conversions
	}
	return status;
}

#ifdef USE_TYPED_DSET
static long read_li( longinRecord	*	pRecord )
{
	long	status = 0;
	bool	signedValue	= false;
	if ( signedValue )
	{
		int64_t		rogueValue;
		status = devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsInt32>( rogueValue );
	}
	else
	{
		uint64_t	rogueValue;
		status = devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsInt32>( rogueValue );
	}
	//pRecord->linr = 0;		// prevent conversions
	return status;
}
#else
static long read_li( void	*	record )
{
	const char 		*	functionName = "read_li";
	long				status = 0;
	longinRecord	*	pRecord	= reinterpret_cast <longinRecord *>( record );
	bool				signedValue	= false;
	if ( signedValue )
	{
		int64_t		rogueValue	= -1L;
		status = devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsInt32>( rogueValue );
		if ( DEBUG_ROGUE_DEV >= 4 )
			printf( "%s: status %ld, intValue %d\n", functionName, status, pRecord->val );
	}
	else
	{
		uint64_t	rogueValue	= 0L;
		status = devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsInt32>( rogueValue );
		if ( DEBUG_ROGUE_DEV >= 4 )
			printf( "%s: status %ld, uintValue %u\n", functionName, status, pRecord->val );
	}
	return status;
}
#endif

struct
{
#ifndef USE_TYPED_DSET
	long                number;
	DEVSUPFUN           report;
	DEVSUPFUN           init;
	DEVSUPFUN           init_li;
	DEVSUPFUN           get_ioint_info;
	DEVSUPFUN           read_li;
	DEVSUPFUN           special_linconv;
#else
	dset				common;
	long (*read_li)(	struct longinRecord	*	pRec );
#endif
}	dsetRogueLi =
#ifdef USE_TYPED_DSET
{ { 5, NULL, NULL, init_li, NULL }, read_li };
#else
{ 5, NULL, NULL, init_li, NULL, read_li };
#endif


epicsExportAddress( dset, dsetRogueLi );

#ifdef __cplusplus
}
#endif

template int        devRogue_init_record(	longoutRecord	*, DBLINK );
//template int        devRogue_read_record(	longoutRecord *, int64_t  & rogueVal );
//template int        devRogue_read_record(	longoutRecord *, uint64_t & rogueVal );
template int        devRogue_write_record(	longoutRecord *, const uint64_t & rogueVal );
// longout record support

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef USE_TYPED_DSET
static long init_lo( struct dbCommon * pCommon )
#else
static long init_lo( void * pCommon )
#endif
{
	longoutRecord	*	pRecord	= reinterpret_cast < longoutRecord * >( pCommon );
	int             	status	= devRogue_init_record( pRecord, pRecord->out );
	return status;
}

#ifdef USE_TYPED_DSET
static long write_lo( longoutRecord	*	pRecord )
{
	long	status = 0;
	bool	signedValue	= false;
	if ( signedValue )
	{
		int64_t		rogueValue;
		status = devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsInt32>( rogueValue );
	}
	else
	{
		uint64_t	rogueValue;
		status = devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsInt32>( rogueValue );
	}
	//pRecord->linr = 0;		// prevent conversions
	return status;
}
#else
static long write_lo( void	*	record )
{
	const char 		*	functionName = "write_lo";
	long				status = 0;
	longoutRecord	*	pRecord	= reinterpret_cast <longoutRecord *>( record );
	bool				signedValue	= false;
	if ( signedValue )
	{
		int64_t		rogueValue	= -1L;
		status = devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsInt32>( rogueValue );
		if ( DEBUG_ROGUE_DEV >= 4 )
			printf( "%s: status %ld, intValue %d\n", functionName, status, pRecord->val );
	}
	else
	{
		uint64_t	rogueValue	= 0L;
		status = devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsInt32>( rogueValue );
		if ( DEBUG_ROGUE_DEV >= 4 )
			printf( "%s: status %ld, uintValue %u\n", functionName, status, pRecord->val );
	}
	return status;
}
#endif

struct
{
#ifndef USE_TYPED_DSET
	long                number;
	DEVSUPFUN           report;
	DEVSUPFUN           init;
	DEVSUPFUN           init_lo;
	DEVSUPFUN           get_ioint_info;
	DEVSUPFUN           write_lo;
#else
	dset				common;
	long (*write_lo)(	struct longoutRecord	*	pRec );
#endif
}	dsetRogueLo =
#ifdef USE_TYPED_DSET
{ { 5, NULL, NULL, init_lo, NULL }, write_lo };
#else
{ 5, NULL, NULL, init_lo, NULL, write_lo };
#endif


epicsExportAddress( dset, dsetRogueLo );

#ifdef __cplusplus
}
#endif

// bi record support
#ifdef __cplusplus
extern "C"
{
#endif

template int        devRogue_init_record(	biRecord	*, DBLINK );
template int        devRogue_read_record(	biRecord	*, bool  & rogueVal );

#ifdef USE_TYPED_DSET
static long init_bi( struct dbCommon * pCommon )
#else
static long init_bi( void * pCommon )
#endif
{
	biRecord	*	pRecord	= reinterpret_cast < biRecord * >( pCommon );
	int             status	= devRogue_init_record( pRecord, pRecord->inp );
	if ( status == 0 )
	{
		bool	rogueValue;
		devRogue_read_record( pRecord, rogueValue );
		pRecord->val = static_cast<epicsEnum16>( rogueValue );

		//pRecord->linr = 0;		// prevent conversions
	}
	return status;
}

#ifdef USE_TYPED_DSET
static long read_bi( biRecord	*	pRecord )
{
	long	status = 0;
	bool	rogueValue;
	devRogue_read_record( pRecord, rogueValue );
	pRecord->val = static_cast<epicsEnum16>( rogueValue );
	//pRecord->linr = 0;		// prevent conversions
	return status;
}
#else
static long read_bi( void	*	record )
{
	const char 		*	functionName = "read_bi";
	long				status = 0;
	biRecord		*	pRecord	= reinterpret_cast <biRecord *>( record );
	bool				rogueValue;
	devRogue_read_record( pRecord, rogueValue );
	pRecord->val = static_cast<epicsEnum16>( rogueValue );
	if ( DEBUG_ROGUE_DEV >= 4 )
		printf( "%s: status %ld, biValue %d\n", functionName, status, pRecord->val );
	return status;
}
#endif

struct
{
#ifndef USE_TYPED_DSET
	long                number;
	DEVSUPFUN           report;
	DEVSUPFUN           init;
	DEVSUPFUN           init_bi;
	DEVSUPFUN           get_ioint_info;
	DEVSUPFUN           read_bi;
	DEVSUPFUN           special_linconv;
#else
	dset				common;
	long (*read_bi)(	struct biRecord	*	pRec );
#endif
}	dsetRogueBi =
#ifdef USE_TYPED_DSET
{ { 5, NULL, NULL, init_bi, NULL }, read_bi };
#else
{ 5, NULL, NULL, init_bi, NULL, read_bi };
#endif

epicsExportAddress( dset, dsetRogueBi );

#ifdef __cplusplus
}
#endif
