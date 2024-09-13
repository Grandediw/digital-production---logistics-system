begin

	set load type = L_powder

	move into Q_rawmaterials

	move into forklift.raw_materials_in
	
	travel to forklift.rawpowder_drop
	
	move into Q_in

	wait for 10 sec
	move into conv.stain
	use Rin for normal 30,3 sec
	travel to conv.sta_mix


	use R_mix for normal 30,3 sec

	clone to P_rawB(V_type)

	
	clone 10 load to P_mixing

end



