// thebpillsasis~init1.c
// AutoMod® 14.6 Generated File
// Build: 14.6.0.5
// Model name:	thebpillsasis
// Model path:	C:\Users\grandediw\Desktop\thebpillsasis.dir\
// Generated:	Tue Jan 30 23:23:19 2024
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


#include "decls.h"

void
initglobs0(void)
{
	am_model.$sys = model;
	am_model.am_forklift.$sys = symGetSystemDataByName(am_model.$sys, "forklift");
	am_model.am_forklift.am_fork1 = symGetSystemDataByName(am_model.am_forklift.$sys, "fork1");
	am_model.am_forklift.am_DefSegment = symGetSystemDataByName(am_model.am_forklift.$sys, "DefSegment");
	am_model.am_forklift.am_raw_materials_in = symGetSystemDataByName(am_model.am_forklift.$sys, "raw_materials_in");
	am_model.am_forklift.am_rawpowder_drop = symGetSystemDataByName(am_model.am_forklift.$sys, "rawpowder_drop");
	am_model.am_forklift.am_cp_park = symGetSystemDataByName(am_model.am_forklift.$sys, "cp_park");
	am_model.am_forklift.am_b_drop1 = symGetSystemDataByName(am_model.am_forklift.$sys, "b_drop1");
	am_model.am_forklift.am_b_drop2 = symGetSystemDataByName(am_model.am_forklift.$sys, "b_drop2");
	am_model.am_forklift.am_forklift = symGetSystemDataByName(am_model.am_forklift.$sys, "forklift");
	am_model.am_forklift.am_bottle_blister_out2 = symGetSystemDataByName(am_model.am_forklift.$sys, "bottle_blister_out2");
	am_model.am_forklift.am_DefVehicle = symGetSystemDataByName(am_model.am_forklift.$sys, "DefVehicle");
	am_model.am_forklift.am_parentsys = symGetSystemDataByName(am_model.am_forklift.$sys, "parentsys");
	am_model.am_forklift.am_bottle_blister_out1 = symGetSystemDataByName(am_model.am_forklift.$sys, "bottle_blister_out1");
	am_model.am_forklift.am_bb_in1 = symGetSystemDataByName(am_model.am_forklift.$sys, "bb_in1");
	am_model.am_forklift.am_bb_in2 = symGetSystemDataByName(am_model.am_forklift.$sys, "bb_in2");
	am_model.am_conv.$sys = symGetSystemDataByName(am_model.$sys, "conv");
	am_model.am_conv.am_stain = symGetSystemDataByName(am_model.am_conv.$sys, "stain");
	am_model.am_conv.am_sta_B1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_B1");
	am_model.am_conv.am_sta_B2 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_B2");
	am_model.am_conv.am_sta_C2 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_C2");
	am_model.am_conv.am_sta_C1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_C1");
	am_model.am_conv.am_sta_out2 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_out2");
	am_model.am_conv.am_sta_out1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_out1");
	am_model.am_conv.am_sta1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta1");
	am_model.am_conv.am_sta_mix = symGetSystemDataByName(am_model.am_conv.$sys, "sta_mix");
	am_model.am_conv.am_sta_mach = symGetSystemDataByName(am_model.am_conv.$sys, "sta_mach");
	am_model.am_conv.am_parentsys = symGetSystemDataByName(am_model.am_conv.$sys, "parentsys");
	am_model.am_OL_b = symGetSystemDataByName(am_model.$sys, "OL_b");
	am_model.am_stream_R_mach_1 = symGetSystemDataByName(am_model.$sys, "stream_R_mach_1");
	am_model.am_Q_inB = symGetSystemDataByName(am_model.$sys, "Q_inB");
	am_model.am_L_powder = symGetSystemDataByName(am_model.$sys, "L_powder");
	am_model.am_die = symGetSystemDataByName(am_model.$sys, "die");
	am_model.am_P_powder = symGetSystemDataByName(am_model.$sys, "P_powder");
	am_model.am_P_read = symGetSystemDataByName(am_model.$sys, "P_read");
	am_model.am_R_b_cart = symGetSystemDataByName(am_model.$sys, "R_b_cart");
	am_model.am_Q_cart = symGetSystemDataByName(am_model.$sys, "Q_cart");
	am_model.am_V_dim_B$var = symGetSystemDataByName(am_model.$sys, "V_dim_B");
	am_model.am_V_dim_B$var->data = (void*)&am_model.am_V_dim_B;
	am_model.am_OPCTimestamp$var = symGetSystemDataByName(am_model.$sys, "OPCTimestamp");
	am_model.am_OPCTimestamp$var->data = (void*)&am_model.am_OPCTimestamp;
	am_model.am_OL_cartoning = symGetSystemDataByName(am_model.$sys, "OL_cartoning");
	am_model.am_Tot_B$var = symGetSystemDataByName(am_model.$sys, "Tot_B");
	am_model.am_Tot_B$var->data = (void*)&am_model.am_Tot_B;
	am_model.am_V_count_pills$var = symGetSystemDataByName(am_model.$sys, "V_count_pills");
	am_model.am_V_count_pills = (int32*)xcalloc(3, sizeof(*am_model.am_V_count_pills));
	am_model.am_V_count_pills$var->data = (void*)am_model.am_V_count_pills;
	am_model.am_stream_L_blister_1 = symGetSystemDataByName(am_model.$sys, "stream_L_blister_1");
	am_model.am_R_b_fill = symGetSystemDataByName(am_model.$sys, "R_b_fill");
	am_model.am_V_dest$att = symGetSystemDataByName(am_model.$sys, "V_dest");
	am_model.am_P_conv = symGetSystemDataByName(am_model.$sys, "P_conv");
	am_model.am_Q_out = symGetSystemDataByName(am_model.$sys, "Q_out");
	am_model.am_R_out = symGetSystemDataByName(am_model.$sys, "R_out");
	am_model.am_L_B = symGetSystemDataByName(am_model.$sys, "L_B");
	am_model.am_V_type$att = symGetSystemDataByName(am_model.$sys, "V_type");
	am_model.am_stream_L_bottle_1 = symGetSystemDataByName(am_model.$sys, "stream_L_bottle_1");
	am_model.am_V_useless$var = symGetSystemDataByName(am_model.$sys, "V_useless");
	am_model.am_V_useless = (char**)xcalloc(6, sizeof(*am_model.am_V_useless));
	am_model.am_V_useless$var->data = (void*)am_model.am_V_useless;
	am_model.am_stream_R_out_1 = symGetSystemDataByName(am_model.$sys, "stream_R_out_1");
	am_model.am_V_count_cartoning$var = symGetSystemDataByName(am_model.$sys, "V_count_cartoning");
	am_model.am_V_count_cartoning = (int32*)xcalloc(3, sizeof(*am_model.am_V_count_cartoning));
	am_model.am_V_count_cartoning$var->data = (void*)am_model.am_V_count_cartoning;
	am_model.am_modelsys = symGetSystemDataByName(am_model.$sys, "modelsys");
	am_model.am_V_pointer$var = symGetSystemDataByName(am_model.$sys, "V_pointer");
	am_model.am_V_pointer$var->data = (void*)&am_model.am_V_pointer;
	am_model.am_Q_B = symGetSystemDataByName(am_model.$sys, "Q_B");
	am_model.am_Space = symGetSystemDataByName(am_model.$sys, "Space");
	am_model.am_stream_R_b_cart_1 = symGetSystemDataByName(am_model.$sys, "stream_R_b_cart_1");
	am_model.am_Rin = symGetSystemDataByName(am_model.$sys, "Rin");
	am_model.am_V_id$att = symGetSystemDataByName(am_model.$sys, "V_id");
	am_model.am_V_dim$att = symGetSystemDataByName(am_model.$sys, "V_dim");
	am_model.am_V_time$att = symGetSystemDataByName(am_model.$sys, "V_time");
	am_model.am_stream0 = symGetSystemDataByName(am_model.$sys, "stream0");
	am_model.am_stream_Rin_1 = symGetSystemDataByName(am_model.$sys, "stream_Rin_1");
	am_model.am_R_mix = symGetSystemDataByName(am_model.$sys, "R_mix");
	am_model.am_stream_L_dummy_2 = symGetSystemDataByName(am_model.$sys, "stream_L_dummy_2");
	am_model.am_V_mean_B$var = symGetSystemDataByName(am_model.$sys, "V_mean_B");
	am_model.am_V_mean_B$var->data = (void*)&am_model.am_V_mean_B;
	am_model.am_V_value$att = symGetSystemDataByName(am_model.$sys, "V_value");
	am_model.am_L_mixpowder = symGetSystemDataByName(am_model.$sys, "L_mixpowder");
	am_model.am_parentsys = NULL;
	am_model.am_P_rawB = symGetSystemDataByName(am_model.$sys, "P_rawB");
	am_model.am_stream_R_mix_1 = symGetSystemDataByName(am_model.$sys, "stream_R_mix_1");
	am_model.am_P_mixing = symGetSystemDataByName(am_model.$sys, "P_mixing");
	am_model.am_LB = symGetSystemDataByName(am_model.$sys, "LB");
	am_model.am_L_rawB = symGetSystemDataByName(am_model.$sys, "L_rawB");
	am_model.am_Q_out_bb = symGetSystemDataByName(am_model.$sys, "Q_out_bb");
	am_model.am_Q_in = symGetSystemDataByName(am_model.$sys, "Q_in");
	am_model.am_stream_L_powder_1 = symGetSystemDataByName(am_model.$sys, "stream_L_powder_1");
	am_model.am_R_mach = symGetSystemDataByName(am_model.$sys, "R_mach");
	am_model.am_Q_rawmaterials = symGetSystemDataByName(am_model.$sys, "Q_rawmaterials");
	am_model.am_stream_R_b_fill_1 = symGetSystemDataByName(am_model.$sys, "stream_R_b_fill_1");
	am_model.am_V_ship$var = symGetSystemDataByName(am_model.$sys, "V_ship");
	am_model.am_V_ship = (int32*)xcalloc(3, sizeof(*am_model.am_V_ship));
	am_model.am_V_ship$var->data = (void*)am_model.am_V_ship;
	am_model.am_P_ship = symGetSystemDataByName(am_model.$sys, "P_ship");
	am_model.am_OPCQuality$var = symGetSystemDataByName(am_model.$sys, "OPCQuality");
	am_model.am_OPCQuality$var->data = (void*)&am_model.am_OPCQuality;
	am_model.am_stream_LoadType1_1 = symGetSystemDataByName(am_model.$sys, "stream_LoadType1_1");
	am_model.am_stream_L_bottle0_1 = symGetSystemDataByName(am_model.$sys, "stream_L_bottle0_1");
	model_P_powdera_init(&am_model);
	model_P_reada_init(&am_model);
	model_P_rawBa_init(&am_model);
	model_P_mixinga_init(&am_model);
	model_P_shipa_init(&am_model);
	model_P_conva_init(&am_model);
	{
		Iter(List, FileList) it = Begin(List, FileList, &((ProcSystem*)am_model.$sys)->files);

	}
	{
		Iter(List, AMTypeList) it = Begin(List, AMTypeList, &((ProcSystem*)am_model.$sys)->types);

		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Acceleration);
		IterValue(List, AMTypeList, it)->valstrfunc = Acceleration_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AlignmentValue);
		IterValue(List, AMTypeList, it)->valstrfunc = AlignmentValue_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(block*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))BlockPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMBlockList*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASI_Color);
		IterValue(List, AMTypeList, it)->valstrfunc = Color_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Color_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Container*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ContainerPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMContainerList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(counter*);
		IterValue(List, AMTypeList, it)->valstrfunc = CounterPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))CounterPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Distance);
		IterValue(List, AMTypeList, it)->valstrfunc = Distance_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(iofile*);
		IterValue(List, AMTypeList, it)->valstrfunc = FilePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))FilePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(bgraph*);
		IterValue(List, AMTypeList, it)->valstrfunc = GraphPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))GraphPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(int32);
		IterValue(List, AMTypeList, it)->valstrfunc = Integer_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMIntegerList*);
		IterValue(List, AMTypeList, it)->valstrfunc = IntegerList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(label*);
		IterValue(List, AMTypeList, it)->valstrfunc = LabelPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LabelPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(load*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLoadList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(loadtype*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(simloc*);
		IterValue(List, AMTypeList, it)->valstrfunc = Location_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Location_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(LocationType*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LocationTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(State_machine*);
		IterValue(List, AMTypeList, it)->valstrfunc = MonitorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MonitorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvMotor*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvMotorList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(MotorType*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMMotorTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ordlist*);
		IterValue(List, AMTypeList, it)->valstrfunc = OrderListPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))OrderListPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Path*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPathList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AgvPathType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMAgvPathTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Photoeye*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(PhotoeyeType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyeTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoeyeTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(process*);
		IterValue(List, AMTypeList, it)->valstrfunc = ProcessPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ProcessPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(queue*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueuePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))QueuePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMQueueList*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueueList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Rate);
		IterValue(List, AMTypeList, it)->valstrfunc = Rate_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(double);
		IterValue(List, AMTypeList, it)->valstrfunc = Real_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(resource*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourcePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ResourcePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMResourceList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourceList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(SchedJob*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SchedJobPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMSchedJobList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSection*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSectionType*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(States*);
		IterValue(List, AMTypeList, it)->valstrfunc = StatePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StatePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(rnstream*);
		IterValue(List, AMTypeList, it)->valstrfunc = StreamPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StreamPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(char*);
		IterValue(List, AMTypeList, it)->valstrfunc = String_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMStringList*);
		IterValue(List, AMTypeList, it)->valstrfunc = StringList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(System*);
		IterValue(List, AMTypeList, it)->valstrfunc = SystemPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SystemPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(table*);
		IterValue(List, AMTypeList, it)->valstrfunc = TablePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TablePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASITime);
		IterValue(List, AMTypeList, it)->valstrfunc = Time_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvTransfer*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(TransferType*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(vehicle*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehiclePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehiclePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehicleList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehicleList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(VehSeg*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehSegPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehSegList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Velocity);
		IterValue(List, AMTypeList, it)->valstrfunc = Velocity_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
	}

}

