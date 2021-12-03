#if 0
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#endif

#include "iocsh.h"
#include "registryFunction.h"
#include "epicsExport.h"
#include "aSubRecord.h"

using namespace		std;

extern int		DEBUG_PGP_CAMLINK;

#if 0
extern "C" long Up900Shutter_Init(	aSubRecord	*	pSub	)
{
	static	bool	isInitialized	= false;

	// No need to do this more than once
	if ( isInitialized )
		return 0;

	isInitialized	= true;

	return 0;
}
#endif


//	Up900Shutter_Process
//	Computes CamAcquireTime_RBV and CamTriggerMode_RBV from UP900 raw shutter values
//	Inputs:
//		A:	DOUBLE, CamAcquireTime, sec
//		B:	LONG,	CamTriggerMode
//		C:	DOUBLE, PulseWidthScale_RBV
//
//	Outputs
//		A:	LONG,   Up900RawShutterSpeed
//		B:	LONG,   Up900RawShutterMode
//		C:	DOUBLE, PulseWidth
//
extern "C" long Up900Shutter_Process( aSubRecord	*	pSub	)
{
    static const char	*	functionName = "Up900Shutter_Process";
	int			status		= 0;

	// Get input value pointers
	double		*	pAcquireTimeVal	= static_cast<double     *>( pSub->a );
	epicsInt32	*	pTriggerModeVal	= static_cast<epicsInt32 *>( pSub->b );
	double		*	pPulseWidthScale= static_cast<double	 *>( pSub->c );
	
	// Get output value pointers
	epicsInt32	*	pRawShutterSpeed= static_cast<epicsInt32 *>( pSub->vala );
	epicsInt32	*	pRawShutterMode	= static_cast<epicsInt32 *>( pSub->valb );
	double		*	pPulseWidthVal	= static_cast<double	 *>( pSub->valc );
	
	if ( pTriggerModeVal == NULL || pTriggerModeVal	== NULL || pPulseWidthScale == NULL )
		return 0;

	double		acquireTime 	= *pAcquireTimeVal;
	epicsInt32	triggerMode 	= *pTriggerModeVal;
	double		pulseScale  	= *pPulseWidthScale;
	double		pulseWidthVal	= acquireTime * pulseScale;
	epicsInt32	rawShutterSpeed	= 0;
	epicsInt32	rawShutterMode	= 0;
	switch ( triggerMode )
	{
	case 0:
		rawShutterMode   = 1;			//	NM, Normal FreeRun Mode
		if ( acquireTime >= 1.0/15    ) { rawShutterSpeed = 0;  break; }
		if ( acquireTime >= 1.0/30    ) { rawShutterSpeed = 1;  break; }
		if ( acquireTime >= 1.0/60    ) { rawShutterSpeed = 2;  break; }
		if ( acquireTime >= 1.0/125   ) { rawShutterSpeed = 3;  break; }
		if ( acquireTime >= 1.0/250   ) { rawShutterSpeed = 4;  break; }
		if ( acquireTime >= 1.0/500   ) { rawShutterSpeed = 5;  break; }
		if ( acquireTime >= 1.0/1000  ) { rawShutterSpeed = 6;  break; }
		if ( acquireTime >= 1.0/2000  ) { rawShutterSpeed = 7;  break; }
		if ( acquireTime >= 1.0/3000  ) { rawShutterSpeed = 8;  break; }
		if ( acquireTime >= 1.0/4000  ) { rawShutterSpeed = 9;  break; }
		if ( acquireTime >= 1.0/5000  ) { rawShutterSpeed = 10; break; }
		if ( acquireTime >= 1.0/6000  ) { rawShutterSpeed = 11; break; }
		if ( acquireTime >= 1.0/7500  ) { rawShutterSpeed = 12; break; }
		if ( acquireTime >= 1.0/10000 ) { rawShutterSpeed = 13; break; }
		if ( acquireTime >= 1.0/15000 ) { rawShutterSpeed = 14; break; }
		rawShutterSpeed = 15;
		break;

	case 1:
		// External trigger mode
		rawShutterMode  = 0;	// AM, Async Triggered Mode
		rawShutterSpeed = 0;	// No shutter
		if ( acquireTime	> 1.0/10    ) { rawShutterSpeed = 0;  break; }
		if ( acquireTime	> 1.0/125   ) { rawShutterSpeed = 1;  break; }
		if ( acquireTime	> 1.0/250   ) { rawShutterSpeed = 2;  break; }
		if ( acquireTime	> 1.0/500   ) { rawShutterSpeed = 3;  break; }
		if ( acquireTime	> 1.0/1000  ) { rawShutterSpeed = 4;  break; }
		if ( acquireTime	> 1.0/2000  ) { rawShutterSpeed = 5;  break; }
		if ( acquireTime	> 1.0/3000  ) { rawShutterSpeed = 6;  break; }
		if ( acquireTime	> 1.0/4000  ) { rawShutterSpeed = 7;  break; }
		if ( acquireTime	> 1.0/5000  ) { rawShutterSpeed = 8;  break; }
		if ( acquireTime	> 1.0/6000  ) { rawShutterSpeed = 9;  break; }
		if ( acquireTime	> 1.0/7500  ) { rawShutterSpeed = 10; break; }
		if ( acquireTime	> 1.0/10000 ) { rawShutterSpeed = 11; break; }
		if ( acquireTime	> 1.0/15000 ) { rawShutterSpeed = 12; break; }
		if ( acquireTime	> 1.0/31000 ) { rawShutterSpeed = 13; break; }
		rawShutterSpeed = 14;
		break;

	case 2:
		// External trigger mode
		rawShutterMode  = 0;	// AM, Async Triggered Mode
		rawShutterSpeed = 15;	// Pulse Width Mode
		break;
	}

    if ( DEBUG_PGP_CAMLINK >= 2 )
		printf( "%s: acquireTime=%f, pw=%.0f, triggerMode=%d, rawShutterSpeed=%d, rawShutterMode=%d\n", functionName,
				acquireTime, pulseWidthVal, triggerMode, rawShutterSpeed, rawShutterMode	);

	if ( pPulseWidthVal  != NULL )
		*pPulseWidthVal = pulseWidthVal;
	if ( pRawShutterSpeed != NULL )
		*pRawShutterSpeed = rawShutterSpeed;
	if ( pRawShutterMode  != NULL )
		*pRawShutterMode = rawShutterMode;

	return status;
}

//	Up900Shutter_RBV_Process
//	Computes CamAcquireTime_RBV and CamTriggerMode_RBV from UP900 raw shutter values
//	Inputs:
//		A:	LONG, Up900RawShutterSpeed_RBV
//		B:	LONG, Up900RawShutterMode_RBV
//		C:	DOUBLE, PulseWidth_RBV
//		D:	DOUBLE, PulseWidthScale_RBV
//
//	Outputs
//		A:	DOUBLE, CamAcquireTime_RBV, sec
//		B:	LONG,	CamTriggerMode_RBV,	mbbo
//
extern "C" long Up900Shutter_RBV_Process( aSubRecord	*	pSub	)
{
    static const char	*	functionName = "Up900Shutter_RBV_Process";
	int			status		= 0;
	double		acquireTime	= 0;
	epicsInt32	triggerMode = 2;
	epicsInt32	rawShutterSpeed	= 15;

	// Get input value pointers
	epicsInt32	*	pRawShutterSpeed	= static_cast<epicsInt32 *>( pSub->a );
	epicsInt32	*	pRawShutterMode		= static_cast<epicsInt32 *>( pSub->b );
	double		*	pPulseWidthVal		= static_cast<double	 *>( pSub->c );
	double		*	pPulseWidthScale	= static_cast<double	 *>( pSub->d );
	
	// Get output value pointers
	double		*	pAcquireTimeVal		= static_cast<double *>(	 pSub->vala );
	epicsInt32	*	pTriggerModeVal		= static_cast<epicsInt32 *>( pSub->valb );

	if ( pRawShutterMode == NULL )
		return 0;
	rawShutterSpeed = *pRawShutterSpeed;

	if ( *pRawShutterMode == 1 )
	{
		//	NM, Normal FreeRun Mode
		triggerMode = 0;	// FreeRun
		switch ( rawShutterSpeed )
		{
			default:
			case 0:		acquireTime	= 1.0/15;		break;
			case 1:		acquireTime	= 1.0/30;		break;
			case 2:		acquireTime	= 1.0/60;		break;
			case 3:		acquireTime	= 1.0/125;		break;
			case 4:		acquireTime	= 1.0/250;		break;
			case 5:		acquireTime	= 1.0/500;		break;
			case 6:		acquireTime	= 1.0/1000;		break;
			case 7:		acquireTime	= 1.0/2000;		break;
			case 8:		acquireTime	= 1.0/3000;		break;
			case 9:		acquireTime	= 1.0/4000;		break;
			case 10:	acquireTime	= 1.0/5000;		break;
			case 11:	acquireTime	= 1.0/6000;		break;
			case 12:	acquireTime	= 1.0/7500;		break;
			case 13:	acquireTime	= 1.0/10000;	break;
			case 14:	acquireTime	= 1.0/15000;	break;
			case 15:	acquireTime	= 1.0/31000;	break;
		}
		if ( pAcquireTimeVal != NULL )
			*pAcquireTimeVal	= acquireTime;
		if ( pTriggerModeVal != NULL )
			*pTriggerModeVal	= triggerMode;	// FreeRun
	}
	else
	{
		triggerMode = 2;	// External

		//	AM, Async Triggered Mode
		switch ( rawShutterSpeed )
		{
			default:
			case 0:		acquireTime	= 10.0;			break;
			case 1:		acquireTime	= 1.0/60;		break;
			case 2:		acquireTime	= 1.0/125;		break;
			case 3:		acquireTime	= 1.0/250;		break;
			case 4:		acquireTime	= 1.0/500;		break;
			case 5:		acquireTime	= 1.0/1000;		break;
			case 6:		acquireTime	= 1.0/2000;		break;
			case 7:		acquireTime	= 1.0/3000;		break;
			case 8:		acquireTime	= 1.0/4000;		break;
			case 9:		acquireTime	= 1.0/5000;		break;
			case 10:	acquireTime	= 1.0/6000;		break;
			case 11:	acquireTime	= 1.0/7500;		break;
			case 12:	acquireTime	= 1.0/10000;	break;
			case 13:	acquireTime	= 1.0/15000;	break;
			case 14:	acquireTime	= 1.0/31000;	break;
			case 15:	// Pulse Width Mode
				if ( pPulseWidthVal != NULL && pPulseWidthScale != NULL && *pPulseWidthScale != 0.0 )
					acquireTime = *pPulseWidthVal / *pPulseWidthScale;
				triggerMode = 2;	// Pulse
				break;
		}
		if ( pAcquireTimeVal != NULL )
			*pAcquireTimeVal	= acquireTime;
		if ( pTriggerModeVal != NULL )
			*pTriggerModeVal	= triggerMode;
	}

    if ( DEBUG_PGP_CAMLINK >= 2 )
		printf( "%s: rawShutterSpeed %d, acquireTime=%f, triggerMode=%d\n", functionName, acquireTime, triggerMode );

	return status;
}


// Register aSub functions
extern "C"
{
// epicsRegisterFunction(	Up900Shutter_Init		);
epicsRegisterFunction(	Up900Shutter_Process	);
epicsRegisterFunction(	Up900Shutter_RBV_Process	);
}

