begin


	move into conv.sta1
	travel to conv.sta_B(procindex)
	wait for 10 sec


	use R_b_fill(procindex) for normal (10*V_type),3 sec
	move into Q_B(procindex)

	inc V_count_pills(procindex) by 1

	if V_count_pills(procindex) < V_dim_B

		begin
			wait to be ordered on OL_b(procindex)		
		end
	else
		begin 
	
			order (V_dim_B -1) loads from OL_b(procindex) to die

			wait for 5 sec
			set V_count_pills(procindex) to 0
	
		end



	set this load type = L_rawB(procindex)

	use R_b_cart(procindex) for normal 30,3 sec

	move into Q_cart(procindex)

	inc V_count_cartoning(procindex) by 1

	if V_count_cartoning(procindex)  < V_dim 

		begin
			wait to be ordered on OL_cartoning(procindex)  
   		end
	else
		begin 
 
			order (V_dim-1) loads from OL_cartoning(procindex) to die

			wait for 5 sec

			set V_count_cartoning(procindex) to 0

    		move into conv.sta_C(procindex)
    

  		end
  

 send to P_ship(V_dest)	
	

end	

