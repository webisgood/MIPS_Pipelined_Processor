`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:17:44 04/22/2023 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
	input clk,
	input stall,
	input flush,
	input reset,
	input [31:0] BranchAddr_in,
	input [31:0] JumpAddr_in,
	input [31:0] PCincr_in,
	input [31:0] ReadData1_in,
	input [31:0] ReadData2_in,
	input [31:0] SignExtdNo_in,
	input [19:0] IC_chunk_in, // contains rs, rt, rd, shamt
	input RegDest_in,
	input Jump_in,
	input [1:0] Branch_in,
	input MemRead_in,
	input MemToReg_in,
	input [3:0] ALUCntrl_in,
	input MemWrite_in,
	input ALUSrc_in,
	input RegWrite_in,
	output reg [31:0] BranchAddr_out,
	output reg [31:0] JumpAddr_out,
	output reg [31:0] PCincr_out,
	output reg [31:0] ReadData1_out,
	output reg [31:0] ReadData2_out,
	output reg [31:0] SignExtdNo_out,
	output reg [19:0] IC_chunk_out,
	output reg RegDest_out,
	output reg Jump_out,
	output reg [1:0] Branch_out,
	output reg MemRead_out,
	output reg MemToReg_out,
	output reg [3:0] ALUCntrl_out,
	output reg MemWrite_out,
	output reg ALUSrc_out,
	output reg RegWrite_out
);

	reg [224:0] ID_EX_reg;

	always@(negedge reset)
	begin
		ID_EX_reg[224:0] = 225'b0;
	end
	
	always@(negedge clk, flush, stall)
	begin
	if(flush == 1 | stall == 1)
		ID_EX_reg = 225'b0;
	else
	begin		
		ID_EX_reg[224:193] = BranchAddr_in;
		ID_EX_reg[192:161] = JumpAddr_in;
		ID_EX_reg[160:129] = PCincr_in;
		ID_EX_reg[128:97] = ReadData1_in;
		ID_EX_reg[96:65] = ReadData2_in;
		ID_EX_reg[64:33] = SignExtdNo_in;
		ID_EX_reg[32:13] = IC_chunk_in;
		ID_EX_reg[12] = RegDest_in;
		ID_EX_reg[11] = Jump_in;
		ID_EX_reg[10:9] = Branch_in;
		ID_EX_reg[8] = MemRead_in;
		ID_EX_reg[7] = MemToReg_in;
		ID_EX_reg[6:3] = ALUCntrl_in;
		ID_EX_reg[2] = MemWrite_in;
		ID_EX_reg[1] = ALUSrc_in;
		ID_EX_reg[0] = RegWrite_in;
	end
	end
	
	always@(posedge clk)
	begin
		BranchAddr_out = ID_EX_reg[224:193];
		JumpAddr_out = ID_EX_reg[192:161];
		PCincr_out = ID_EX_reg[160:129];
		ReadData1_out = ID_EX_reg[128:97];
		ReadData2_out = ID_EX_reg[96:65];
		SignExtdNo_out = ID_EX_reg[64:33];
		IC_chunk_out = ID_EX_reg[32:13];
		RegDest_out = ID_EX_reg[12];
		Jump_out = ID_EX_reg[11];
		Branch_out = ID_EX_reg[10:9];
		MemRead_out = ID_EX_reg[8];
		MemToReg_out = ID_EX_reg[7];
		ALUCntrl_out = ID_EX_reg[6:3];
		MemWrite_out = ID_EX_reg[2];
		ALUSrc_out = ID_EX_reg[1];
		RegWrite_out = ID_EX_reg[0];
	end
	

endmodule
