// P_shipa.c
// AutoMod® 14.6 Generated File
// Build: 14.6.0.5
// Model name:	thebpillsasis
// Model path:	C:\Users\grandediw\Desktop\thebpillsasis.dir\
// Generated:	Tue Jan 30 23:21:28 2024
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
P_ship_arriving(load* thisObj, int32 step, void* args)
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
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  // Step1
	{
		{
			LdSetType(thisObj, &(am2_L_B[ValidIndex("am_model.am_L_B", CurProcIndex(), 2)]));
			EntityChanged(0x00000040);
		}
		{
			pushppa(thisObj, P_ship_arriving, Step 2, am_localargs);
			load_SetDestLoc(thisObj, LocGetQualifier(am_model.am_conv.am_sta_mach, -9999));
			pushppa(thisObj, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label2: ; // Step 2
		}
		{
			return usefor(am2_R_mach, 1, thisObj, P_ship_arriving, Step 3, am_localargs, ToModelTime(normal1(am2_stream0, 20, 3), UNITSECONDS));
Label3: ; // Step 3
		}
		{
			pushppa(thisObj, P_ship_arriving, Step 4, am_localargs);
			load_SetDestLoc(thisObj, SysGetQualifier(am_model.am_conv.$sys, "sta_out", CurProcIndex(), -9999));
			pushppa(thisObj, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label4: ; // Step 4
		}
		{
			return usefor(&(am2_R_out[ValidIndex("am_model.am_R_out", CurProcIndex(), 2)]), 1, thisObj, P_ship_arriving, Step 5, am_localargs, ToModelTime(normal1(am2_stream0, 20, 3), UNITSECONDS));
Label5: ; // Step 5
		}
		{
			pushppa(thisObj, P_ship_arriving, Step 6, am_localargs);
			pushppa(thisObj, inqueue, Step 1, &(am2_Q_out[ValidIndex("am_model.am_Q_out", CurProcIndex(), 2)]));
			return Continue; // go move into territory
Label6: ; // Step 6
		}
		{
			pushppa(thisObj, P_ship_arriving, Step 7, am_localargs);
			load_SetDestLoc(thisObj, SysGetQualifier(am_model.am_forklift.$sys, "bb_in", CurProcIndex(), -9999));
			pushppa(thisObj, move_in_loc, Step 1, NULL);
			return Continue; // go move into territory
Label7: ; // Step 7
		}
		{
			pushppa(thisObj, P_ship_arriving, Step 8, am_localargs);
			load_SetDestLoc(thisObj, SysGetQualifier(am_model.am_forklift.$sys, "bottle_blister_out", CurProcIndex(), -9999));
			pushppa(thisObj, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label8: ; // Step 8
		}
		{
			pushppa(thisObj, P_ship_arriving, Step 9, am_localargs);
			pushppa(thisObj, inqueue, Step 1, &(am2_Q_out_bb[ValidIndex("am_model.am_Q_out_bb", CurProcIndex(), 2)]));
			return Continue; // go move into territory
Label9: ; // Step 9
		}
		{
			am2_Tot_B += 1;
			EntityChanged(0x01000000);
		}
		{
			am2_V_mean_B = FromModelTime(ASIclock / (am2_Tot_B * 60), UNITSECONDS);
			EntityChanged(0x01000000);
		}
		{
			{
				char* pArg1 = "A box of type:";
				char* pArg2 = " ";
				int32 pArg3 = CurProcIndex();
				char* pArg4 = " ";
				char* pArg5 = "delivered to destination after time:";
				char* pArg6 = " ";
				double pArg7 = FromModelTime((ASIclock / 60), UNITSECONDS);
				char* pArg8 = " ";
				char* pArg9 = " min";

				updatelabel(&(am2_LB[1]), "%s%s%d%s%s%s%lf%s%s", pArg1, pArg2, pArg3, pArg4, pArg5, pArg6, pArg7, pArg8, pArg9);
			}
		}
		{
			{
				char* pArg1 = "Total number of boxes delivered:";
				char* pArg2 = " ";
				int32 pArg3 = am2_Tot_B;
				char* pArg4 = " ";
				char* pArg5 = "with average time of:";
				char* pArg6 = " ";
				double pArg7 = am2_V_mean_B;
				char* pArg8 = " ";
				char* pArg9 = " min ";

				updatelabel(&(am2_LB[2]), "%s%s%d%s%s%s%lf%s%s", pArg1, pArg2, pArg3, pArg4, pArg5, pArg6, pArg7, pArg8, pArg9);
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} // end of P_ship_arriving



/* init function for P_shipa.m */
void
model_P_shipa_init(struct model_struct* data)
{
	data->am_P_ship->aprc = P_ship_arriving;
}

