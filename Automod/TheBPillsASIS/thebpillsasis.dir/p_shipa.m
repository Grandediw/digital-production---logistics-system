begin
	set this load type = L_B(procindex)
	travel to conv.sta_mach
	use R_mach for normal 20,3 sec
		
	travel to conv.sta_out(procindex)
	use R_out(procindex) for normal 20,3 sec
	
	move into Q_out(procindex)
	
	
	move into forklift.bb_in(procindex)
	
	travel to forklift.bottle_blister_out(procindex)
	
	move into Q_out_bb(procindex)
	inc Tot_B by 1
	set V_mean_B to ac/(Tot_B*60)
	print "A box of type:",procindex , "delivered to destination after time:", (ac/60), " min"  to LB(1)
 	print "Total number of boxes delivered:",Tot_B, "with average time of:", V_mean_B, " min " to LB(2)



end

