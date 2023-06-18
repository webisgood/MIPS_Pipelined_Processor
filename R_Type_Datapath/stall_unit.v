`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:52:59 04/23/2023 
// Design Name: 
// Module Name:    stall_unit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module stall_unit(
	input id_ex_memread,
	input [4:0] id_ex_rt, if_id_rs, if_id_rt,
	output reg stall
);

	always@(*)
	begin
		if(id_ex_memread & ((id_ex_rt == if_id_rs)|(id_ex_rt == if_id_rt)))
			stall = 1;
		else
			stall = 0;
	end

endmodule
