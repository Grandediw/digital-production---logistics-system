// P_powdera.c
// AutoMod® 14.6 Generated File
// Build: 14.6.0.5
// Model name:	finalprojecttobe3
// Model path:	C:\Users\grandediw\Desktop\finalprojecttobe3.dir\
// Generated:	Sun Jan 28 23:43:10 2024
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



typedef struct {
	int32 value;
} Nextof0;

static Nextof0 List0[] = {
	1,
	3
};

static int32
nextofFunc0(load* thisObj)
{
	static int ind = 1;

	ind = (ind+1) % 2;
	return List0[ind].value;
}


typedef struct {
	int32 value;
} Nextof1;

static Nextof1 List1[] = {
	2,
	4
};

static int32
nextofFunc1(load* thisObj)
{
	static int ind = 1;

	ind = (ind+1) % 2;
	return List1[ind].value;
}

static int32
P_powder_arriving(load* thisObj, int32 step, void* args)
{
	void* am_localargs = INIT_Pointer;
	int32 retval = Continue;
	switch (step) { // Make the step switcher
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	case Step 8: goto Label8;
	case Step 9: goto Label9;
	case Step 10: goto Label10;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  // Step1
	{
		{
			LdSetType(thisObj, am2_L_powder);
			EntityChanged(0x00000040);
		}
		{
			pushppa(thisObj, P_powder_arriving, Step 2, am_localargs);
			pushppa(thisObj, inqueue, Step 1, am2_Q_rawmaterials);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			pushppa(thisObj, P_powder_arriving, Step 3, am_localargs);
			load_SetDestLoc(thisObj, LocGetQualifier(am_model.am_forklift.am_raw_materials_in, -9999));
			pushppa(thisObj, move_in_loc, Step 1, NULL);
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			pushppa(thisObj, P_powder_arriving, Step 4, am_localargs);
			load_SetDestLoc(thisObj, LocGetQualifier(am_model.am_forklift.am_rawpowder_drop, -9999));
			pushppa(thisObj, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label4: ; // Step 4
		}
		{
			if (waitfor(ToModelTime(10, UNITSECONDS), thisObj, P_powder_arriving, Step 5, am_localargs) == Delayed)
				return Delayed;
Label5: ; // Step 5
		}
		{
			pushppa(thisObj, P_powder_arriving, Step 6, am_localargs);
			pushppa(thisObj, inqueue, Step 1, am2_Q_in);
			return Continue; // go move into territory
Label6: ; // Step 6
		}
		{
			pushppa(thisObj, P_powder_arriving, Step 7, am_localargs);
			load_SetDestLoc(thisObj, LocGetQualifier(am_model.am_conv.am_stain, -9999));
			pushppa(thisObj, move_in_loc, Step 1, NULL);
			return Continue; // go move into territory
Label7: ; // Step 7
		}
		{
			return usefor(am2_Rin, 1, thisObj, P_powder_arriving, Step 8, am_localargs, ToModelTime(normal1(am2_stream0, 30, 3), UNITSECONDS));
Label8: ; // Step 8
		}
		{
			pushppa(thisObj, P_powder_arriving, Step 9, am_localargs);
			load_SetDestLoc(thisObj, LocGetQualifier(am_model.am_conv.am_sta_mix, -9999));
			pushppa(thisObj, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label9: ; // Step 9
		}
		{
			am2_V_count_pow += 1;
			EntityChanged(0x01000000);
		}
		{
			return usefor(am2_Rin, 1, thisObj, P_powder_arriving, Step 10, am_localargs, ToModelTime(normal1(am2_stream0, 30, 3), UNITSECONDS));
Label10: ; // Step 10
		}
		{
			clone(thisObj, 1, &(am2_P_rawB[ValidIndex("am_model.am_P_rawB", thisObj->attribute->am2_V_type, 2)]), NULL);
		}
		{
			if (thisObj->attribute->am2_V_type == 1) {
				{
					clone(thisObj, 10, &(am2_P_mixing[ValidIndex("am_model.am_P_mixing", nextofFunc0(thisObj), 4)]), NULL);
				}
			}
		}
		{
			if (thisObj->attribute->am2_V_type == 2) {
				{
					clone(thisObj, 10, &(am2_P_mixing[ValidIndex("am_model.am_P_mixing", nextofFunc1(thisObj), 4)]), NULL);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} // end of P_powder_arriving



/* init function for P_powdera.m */
void
model_P_powdera_init(struct model_struct* data)
{
	data->am_P_powder->aprc = P_powder_arriving;
}

