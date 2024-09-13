begin
	
	set load type = L_powder
	move into Q_rawmaterials

	move into forklift.raw_materials_in
	travel to forklift.rawpowder_drop
	wait for 10 sec
	move into Q_in
	
	move into conv.stain
	use Rin for normal 30, 3 sec
	travel to conv.sta_mix
	inc V_count_pow by 1

	use Rin for normal 30, 3 sec


	clone to P_rawB(V_type)
	

	if V_type == 1
		begin
			clone 10 load to P_mixing(nextof(1,3)) 
		end
	if V_type == 2
		begin
			clone 10 load to P_mixing(nextof(2,4)) 
		end

  	
end



