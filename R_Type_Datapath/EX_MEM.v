`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:10:19 04/22/2023 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
	input clk,
	input reset,
	input RegWrite_in,
	input [31:0] ALU_Result_in,
	input [31:0] ReadData2_in,
	input MemRead_in,
	input MemWrite_in,
	input MemToReg_in,
	input RegDest_in,
	input [14:0] rs_rt_rd_in,
	output reg RegWrite_out,
	output reg [31:0] ALU_Result_out,
	output reg [31:0] ReadData2_out,
	output reg MemRead_out,
	output reg MemWrite_out,
	output reg MemToReg_out,
	output reg RegDest_out,
	output reg [14:0] rs_rt_rd_out
);

	reg [83:0] EX_MEM_reg;

	always@(negedge reset)
	begin
		EX_MEM_reg = 84'h0;
	end
	
	always@(negedge clk)
	begin
		EX_MEM_reg[83] = RegWrite_in;
		EX_MEM_reg[82:51] = ALU_Result_in;
		EX_MEM_reg[50:19] = ReadData2_in;
		EX_MEM_reg[18] = MemRead_in;
		EX_MEM_reg[17] = MemWrite_in;
		EX_MEM_reg[16] = MemToReg_in;
		EX_MEM_reg[15] = RegDest_in;
		EX_MEM_reg[14:0] = rs_rt_rd_in;
	end
	
	always@(posedge clk)
	begin
		RegWrite_out = EX_MEM_reg[83];
		ALU_Result_out = EX_MEM_reg[82:51];
		ReadData2_out = EX_MEM_reg[50:19];
		MemRead_out = EX_MEM_reg[18];
		MemWrite_out = EX_MEM_reg[17];
		MemToReg_out = EX_MEM_reg[16];
		RegDest_out = EX_MEM_reg[15];
		rs_rt_rd_out = EX_MEM_reg[14:0];
	end

endmodule
