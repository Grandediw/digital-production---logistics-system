// P_rawBa.c
// AutoMod® 14.6 Generated File
// Build: 14.6.0.5
// Model name:	thebpillsasis
// Model path:	C:\Users\grandediw\Desktop\thebpillsasis.dir\
// Generated:	Tue Jan 30 18:03:43 2024
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
P_rawB_arriving(load* thisObj, int32 step, void* args)
{
	void* am_localargs = INIT_Pointer;
	int32 retval = Continue;
	switch (step) { // Make the step switcher
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  // Step1
	{
		{
			LdSetType(thisObj, &(am2_L_rawB[ValidIndex("am_model.am_L_rawB", CurProcIndex(), 2)]));
			EntityChanged(0x00000040);
		}
		{
			pushppa(thisObj, P_rawB_arriving, Step 2, am_localargs);
			load_SetDestLoc(thisObj, LocGetQualifier(am_model.am_forklift.am_raw_materials_in, -9999));
			pushppa(thisObj, move_in_loc, Step 1, NULL);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			pushppa(thisObj, P_rawB_arriving, Step 3, am_localargs);
			load_SetDestLoc(thisObj, SysGetQualifier(am_model.am_forklift.$sys, "b_drop", CurProcIndex(), -9999));
			pushppa(thisObj, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label3: ; // Step 3
		}
		{
			pushppa(thisObj, P_rawB_arriving, Step 4, am_localargs);
			pushppa(thisObj, inqueue, Step 1, &(am2_Q_inB[ValidIndex("am_model.am_Q_inB", CurProcIndex(), 2)]));
			return Continue; // go move into territory
Label4: ; // Step 4
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} // end of P_rawB_arriving



/* init function for P_rawBa.m */
void
model_P_rawBa_init(struct model_struct* data)
{
	data->am_P_rawB->aprc = P_rawB_arriving;
}

