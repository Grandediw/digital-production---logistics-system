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

	set this load type = L_rawB(V_type)

	use R_b_cart(V_type) for normal 30,3 sec

	move into Q_cart(V_type)

	inc V_count_cartoning(V_type) by 1

  	if V_count_cartoning(V_type)  < V_dim 

   		begin
    		wait to be ordered on OL_cartoning(V_type)  
   		end
  	else
   		begin 
	   		order (V_dim-1) loads from OL_cartoning(V_type) to die
   			 wait for 5 sec
   			 
  			 set V_count_cartoning(V_type) to 0
   
  		end
  		
 	
  	move into conv.sta_C(V_type)	
  	
	
  	send to P_ship(V_dest)
		
end	

