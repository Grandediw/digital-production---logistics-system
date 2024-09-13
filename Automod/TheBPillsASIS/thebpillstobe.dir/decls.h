// decls.h
// AutoMod® 14.6 Generated File
// Build: 14.6.0.5
// Model name:	thebpillstobe
// Model path:	C:\Users\grandediw\Desktop\thebpillstobe.dir\
// Generated:	Tue Jan 30 19:08:37 2024
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


#ifndef __DECLS_H__
#define __DECLS_H__

#include "user.h"
struct model_forklift_struct {
	System* $sys;
	VehType* am_fork;
	LocHead* am_raw_materials_in;
	LocHead* am_rawpowder_drop;
	LocHead* am_cp_park;
	LocHead* am_b_drop1;
	LocHead* am_b_drop2;
	VehSegSpec* am_forklift;
	LocHead* am_bottle_blister_out2;
	VehType* am_DefVehicle;
	System* am_parentsys;
	LocHead* am_bottle_blister_out1;
	LocHead* am_bb_in1;
	LocHead* am_bb_in2;
};
struct model_conv_struct {
	System* $sys;
	LocHead* am_sta_B3;
	LocHead* am_stain;
	LocHead* am_sta_B1;
	LocHead* am_sta_B2;
	LocHead* am_sta_C2;
	LocHead* am_sta_C1;
	LocHead* am_sta_out2;
	LocHead* am_sta_out1;
	LocHead* am_sta1;
	LocHead* am_sta_mix;
	LocHead* am_sta_mach;
	LocHead* am_sta_B4;
	System* am_parentsys;
};
char* Acceleration_valstrfunc(void*);
Acceleration Acceleration_strvalfunc(char*);
char* AlignmentValue_valstrfunc(void*);
char* BlockPtr_valstrfunc(void*);
block* BlockPtr_strvalfunc(char*);
char* BlockList_valstrfunc(void*);
char* Color_valstrfunc(void*);
ASI_Color Color_strvalfunc(char*);
char* ContainerPtr_valstrfunc(void*);
Container* ContainerPtr_strvalfunc(char*);
char* ContainerList_valstrfunc(void*);
char* CounterPtr_valstrfunc(void*);
counter* CounterPtr_strvalfunc(char*);
char* Distance_valstrfunc(void*);
Distance Distance_strvalfunc(char*);
char* FilePtr_valstrfunc(void*);
iofile* FilePtr_strvalfunc(char*);
char* GraphPtr_valstrfunc(void*);
bgraph* GraphPtr_strvalfunc(char*);
char* Integer_valstrfunc(void*);
int32 Integer_strvalfunc(char*);
char* IntegerList_valstrfunc(void*);
char* LabelPtr_valstrfunc(void*);
label* LabelPtr_strvalfunc(char*);
char* LoadPtr_valstrfunc(void*);
load* LoadPtr_strvalfunc(char*);
char* LoadList_valstrfunc(void*);
char* LoadTypePtr_valstrfunc(void*);
loadtype* LoadTypePtr_strvalfunc(char*);
char* Location_valstrfunc(void*);
simloc* Location_strvalfunc(char*);
char* LocationList_valstrfunc(void*);
char* LocationTypePtr_valstrfunc(void*);
LocationType* LocationTypePtr_strvalfunc(char*);
char* LocationTypeList_valstrfunc(void*);
char* MonitorPtr_valstrfunc(void*);
State_machine* MonitorPtr_strvalfunc(char*);
char* MotorPtr_valstrfunc(void*);
ConvMotor* MotorPtr_strvalfunc(char*);
char* MotorList_valstrfunc(void*);
char* MotorTypePtr_valstrfunc(void*);
MotorType* MotorTypePtr_strvalfunc(char*);
char* MotorTypeList_valstrfunc(void*);
char* OrderListPtr_valstrfunc(void*);
ordlist* OrderListPtr_strvalfunc(char*);
char* PathPtr_valstrfunc(void*);
Path* PathPtr_strvalfunc(char*);
char* PathList_valstrfunc(void*);
char* PathTypePtr_valstrfunc(void*);
AgvPathType* PathTypePtr_strvalfunc(char*);
char* PathTypeList_valstrfunc(void*);
char* PhotoeyePtr_valstrfunc(void*);
Photoeye* PhotoeyePtr_strvalfunc(char*);
char* PhotoeyeList_valstrfunc(void*);
char* PhotoeyeTypePtr_valstrfunc(void*);
PhotoeyeType* PhotoeyeTypePtr_strvalfunc(char*);
char* PhotoeyeTypeList_valstrfunc(void*);
char* ProcessPtr_valstrfunc(void*);
process* ProcessPtr_strvalfunc(char*);
char* QueuePtr_valstrfunc(void*);
queue* QueuePtr_strvalfunc(char*);
char* QueueList_valstrfunc(void*);
char* Rate_valstrfunc(void*);
Rate Rate_strvalfunc(char*);
char* Real_valstrfunc(void*);
double Real_strvalfunc(char*);
char* ResourcePtr_valstrfunc(void*);
resource* ResourcePtr_strvalfunc(char*);
char* ResourceList_valstrfunc(void*);
char* SchedJobPtr_valstrfunc(void*);
SchedJob* SchedJobPtr_strvalfunc(char*);
char* SchedJobList_valstrfunc(void*);
char* SectionPtr_valstrfunc(void*);
ConvSection* SectionPtr_strvalfunc(char*);
char* SectionList_valstrfunc(void*);
char* SectionTypePtr_valstrfunc(void*);
ConvSectionType* SectionTypePtr_strvalfunc(char*);
char* SectionTypeList_valstrfunc(void*);
char* StatePtr_valstrfunc(void*);
States* StatePtr_strvalfunc(char*);
char* StreamPtr_valstrfunc(void*);
rnstream* StreamPtr_strvalfunc(char*);
char* String_valstrfunc(void*);
char* String_strvalfunc(char*);
char* StringList_valstrfunc(void*);
char* SystemPtr_valstrfunc(void*);
System* SystemPtr_strvalfunc(char*);
char* TablePtr_valstrfunc(void*);
table* TablePtr_strvalfunc(char*);
char* Time_valstrfunc(void*);
ASITime Time_strvalfunc(char*);
char* TransferPtr_valstrfunc(void*);
ConvTransfer* TransferPtr_strvalfunc(char*);
char* TransferTypePtr_valstrfunc(void*);
TransferType* TransferTypePtr_strvalfunc(char*);
char* VehiclePtr_valstrfunc(void*);
vehicle* VehiclePtr_strvalfunc(char*);
char* VehicleList_valstrfunc(void*);
char* VehSegPtr_valstrfunc(void*);
VehSeg* VehSegPtr_strvalfunc(char*);
char* VehSegList_valstrfunc(void*);
char* Velocity_valstrfunc(void*);
Velocity Velocity_strvalfunc(char*);
struct model_struct {
	System* $sys;
	ordlist* am_OL_b;
	rnstream* am_stream_R_mach_1;
	queue* am_Q_inB;
	loadtype* am_L_powder;
	process* am_die;
	process* am_P_powder;
	process* am_P_read;
	resource* am_R_b_cart;
	queue* am_Q_cart;
	variable* am_V_dim_B$var;
	int32 am_V_dim_B;
	variable* am_OPCTimestamp$var;
	char* am_OPCTimestamp;
	variable* am_V_count_pow$var;
	int32 am_V_count_pow;
	ordlist* am_OL_cartoning;
	variable* am_Tot_B$var;
	int32 am_Tot_B;
	variable* am_V_count_pills$var;
	int32 *am_V_count_pills;
	rnstream* am_stream_L_blister_1;
	resource* am_R_b_fill;
	attribute* am_V_dest$att;
	process* am_P_conv;
	queue* am_Q_out;
	resource* am_R_out;
	loadtype* am_L_B;
	attribute* am_V_type$att;
	rnstream* am_stream_L_bottle_1;
	variable* am_V_useless$var;
	char* *am_V_useless;
	rnstream* am_stream_R_out_1;
	variable* am_V_count_cartoning$var;
	int32 *am_V_count_cartoning;
	System* am_modelsys;
	variable* am_V_pointer$var;
	iofile* am_V_pointer;
	queue* am_Q_B;
	queue* am_Space;
	rnstream* am_stream_R_b_cart_1;
	resource* am_Rin;
	attribute* am_V_id$att;
	attribute* am_V_dim$att;
	struct model_forklift_struct am_forklift;
	attribute* am_V_time$att;
	rnstream* am_stream0;
	rnstream* am_stream_Rin_1;
	rnstream* am_stream_L_dummy_2;
	variable* am_V_mean_B$var;
	double am_V_mean_B;
	loadtype* am_L_mixpowder;
	System* am_parentsys;
	process* am_P_rawB;
	process* am_P_mixing;
	struct model_conv_struct am_conv;
	label* am_LB;
	loadtype* am_L_rawB;
	queue* am_Q_out_bb;
	queue* am_Q_in;
	rnstream* am_stream_L_powder_1;
	resource* am_R_mach;
	queue* am_Q_rawmaterials;
	rnstream* am_stream_R_b_fill_1;
	variable* am_V_ship$var;
	int32 *am_V_ship;
	process* am_P_ship;
	variable* am_OPCQuality$var;
	int32 am_OPCQuality;
	rnstream* am_stream_LoadType1_1;
	rnstream* am_stream_L_bottle0_1;
};
extern struct model_struct am_model;
void initglobs0(void);
#endif // __DECLS_H__
