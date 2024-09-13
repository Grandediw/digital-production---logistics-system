begin 

// Input file opening 

open "dir/input.csv" for reading save result as V_pointer //Automod  v14  or greater 

//open "arc/input.csv " for reading save results as V_pointer //Automod  v12 or greater 

read V_useless(1),V_useless(2),V_useless(3),V_useless(4),V_useless(5) from V_pointer with delimiter ";"


// Reading each row of the input file (WHILE LOOP STRUCTURE)

while 1=1 do 
	begin 
	
	read V_id, V_time, V_type, V_dim, V_dest  from V_pointer with delimiter ";" at end 
	  
		begin 
			print " My input file is fully read" to message 
			send to die 
		end 	

	wait for (V_time - ac) sec
	
	

	clone V_dim to P_powder	
	
	
	end 

end 



