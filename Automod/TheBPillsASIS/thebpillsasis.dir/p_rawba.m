begin

	set load type = L_rawB(procindex)

	move into forklift.raw_materials_in

	travel to forklift.b_drop(procindex)

	move into Q_inB(procindex)

end


