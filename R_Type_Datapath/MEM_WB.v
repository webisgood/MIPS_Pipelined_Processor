`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:48:35 04/22/2023 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
	input clk,
	input reset,
	input RegDest_in,
	input RegWrite_in,
	input [31:0] MemToReg_Res_in,
	input [14:0] rs_rt_rd_in,
	output RegDest_out,
	output RegWrite_out,
	output [31:0] MemToReg_Res_out,
	output [14:0] rs_rt_rd_out
);
	
	reg [48:0] MEM_WB_reg;

	always@(negedge reset)
	begin
		MEM_WB_reg = 49'b0;
	end

	always@(posedge clk)
	begin
		MEM_WB_reg[48] = RegDest_in;
		MEM_WB_reg[47] = RegWrite_in;
		MEM_WB_reg[46:15] = MemToReg_Res_in;
		MEM_WB_reg[14:0] = rs_rt_rd_in;
	end
	
	assign RegDest_out = MEM_WB_reg[48];
	assign RegWrite_out = MEM_WB_reg[47];
	assign MemToReg_Res_out = MEM_WB_reg[46:15];
	assign rs_rt_rd_out = MEM_WB_reg[14:0];

endmodule
