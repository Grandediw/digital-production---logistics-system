// P_mixinga.c
// AutoMod® 14.6 Generated File
// Build: 14.6.0.5
// Model name:	finalprojectasisfinito
// Model path:	C:\Users\grandediw\Desktop\finalprojectasisfinito.dir\
// Generated:	Mon Jan 29 12:49:41 2024
// Applied/AutoMod Licensee Confidential
// NO DISTRIBUTION OR REPRODUCTION RIGHTS GRANTED!
// Copyright © 1988-2022 Applied Materials. All rights reserved.
//
// All Rights Reserved.  Reproduction or transmission in whole or
// in part, in any form or by any means, electronic, mechanical or
// otherwise, is prohibited without the prior written consent of
// copyright owner.
//
// Licensed Material - Property of Applied Materials, Inc.
//
// Applied Materials, Inc.
// 3050 Bowers Drive
// P.O. Box 58039
// Santa Clara, CA 95054-3299
// U.S.A.
//


#include "cdecls.h"


static int32
P_mixing_arriving(load* thisObj, int32 step, void* args)
{
	void* am_localargs = INIT_Pointer;
	int32 retval = Continue;
	switch (step) { // Make the step switcher
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  // Step1
	{
		{
			LdSetType(thisObj, am2_L_mixpowder);
			EntityChanged(0x00000040);
		}
		{
			if (waitfor(ToModelTime(10, UNITSECONDS), thisObj, P_mixing_arriving, Step 2, am_localargs) == Delayed)
				return Delayed;
Label2: ; // Step 2
		}
		{
			pushppa(thisObj, P_mixing_arriving, Step 3, am_localargs);
			load_SetDestLoc(thisObj, LocGetQualifier(am_model.am_conv.am_sta1, -9999));
			pushppa(thisObj, move_in_loc, Step 1, NULL);
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			thisObj->nextproc = &(am2_P_conv[ValidIndex("am_model.am_P_conv", thisObj->attribute->am2_V_type, 2)]); /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} // end of P_mixing_arriving



/* init function for P_mixinga.m */
void
model_P_mixinga_init(struct model_struct* data)
{
	data->am_P_mixing->aprc = P_mixing_arriving;
}

