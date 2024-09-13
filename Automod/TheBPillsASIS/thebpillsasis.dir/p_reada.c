// P_reada.c
// AutoMod® 14.6 Generated File
// Build: 14.6.0.5
// Model name:	thebpillsasis
// Model path:	C:\Users\grandediw\Desktop\thebpillsasis.dir\
// Generated:	Tue Jan 30 16:22:08 2024
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
P_read_arriving(load* thisObj, int32 step, void* args)
{
	void* am_localargs = INIT_Pointer;
	int32 retval = Continue;
	switch (step) { // Make the step switcher
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  // Step1
	{
		{
			am2_V_pointer = OpenFilePtr(am_model.$sys, "dir/input.csv", "r");
		}
				{
			if (isFileValid(am2_V_pointer, 1)) {
				int rflag;
				static ReadRef st1;
				static ReadRef st2;
				static ReadRef st3;
				static ReadRef st4;
				static ReadRef st5;

				setupReadRef(&st1, 0, am_model.am_V_useless$var, &am2_V_useless[1], NULL, -1, FALSE);
				setupReadRef(&st2, 0, am_model.am_V_useless$var, &am2_V_useless[2], NULL, -1, FALSE);
				setupReadRef(&st3, 0, am_model.am_V_useless$var, &am2_V_useless[3], NULL, -1, FALSE);
				setupReadRef(&st4, 0, am_model.am_V_useless$var, &am2_V_useless[4], NULL, -1, FALSE);
				setupReadRef(&st5, 0, am_model.am_V_useless$var, &am2_V_useless[5], NULL, -1, FALSE);
				rflag = readFile(am2_V_pointer->fp, ";", &st1, &st2, &st3, &st4, &st5, NULL);
				SetFileAtEof(am2_V_pointer, EOF, rflag);
			}
		}
		{
			while (1 == 1) {
								{
					if (isFileValid(am2_V_pointer, 1)) {
						int rflag;
						static ReadRef st1;
						static ReadRef st2;
						static ReadRef st3;
						static ReadRef st4;
						static ReadRef st5;

						setupReadRef(&st1, 1, am_model.am_V_id$att, &thisObj->attribute->am2_V_id, NULL, -1, FALSE);
						setupReadRef(&st2, 1, am_model.am_V_time$att, &thisObj->attribute->am2_V_time, NULL, -1, FALSE);
						setupReadRef(&st3, 1, am_model.am_V_type$att, &thisObj->attribute->am2_V_type, NULL, -1, FALSE);
						setupReadRef(&st4, 1, am_model.am_V_dim$att, &thisObj->attribute->am2_V_dim, NULL, -1, FALSE);
						setupReadRef(&st5, 1, am_model.am_V_dest$att, &thisObj->attribute->am2_V_dest, NULL, -1, FALSE);
						rflag = readFile(am2_V_pointer->fp, ";", &st1, &st2, &st3, &st4, &st5, NULL);
						SetFileAtEof(am2_V_pointer, EOF, rflag);
						if (rflag == EOF) {
							{
								{
									char* pArg1 = " My input file is fully read";

									message("%s", pArg1);
								}
							}
							{
								thisObj->nextproc = am2_die; /* send to ... */
								EntityChanged(W_LOAD);
								retval = Continue;
								goto LabelRet;
							}
						}
					}
				}
				{
					if (waitfor(ToModelTime((thisObj->attribute->am2_V_time - FromModelTime(ASIclock, UNITSECONDS)), UNITSECONDS), thisObj, P_read_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					clone(thisObj, thisObj->attribute->am2_V_dim, am2_P_powder, NULL);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} // end of P_read_arriving



/* init function for P_reada.m */
void
model_P_reada_init(struct model_struct* data)
{
	data->am_P_read->aprc = P_read_arriving;
}

