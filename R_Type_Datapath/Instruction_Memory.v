`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:15 03/22/2023 
// Design Name: 
// Module Name:    Instruction_Memory 
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
module Instruction_Memory(
		input [31:0] PC,
		input reset, clk,
		output reg [31:0] Instruction
    );

		reg [7:0] Instr_Mem [71:0];

always @(negedge reset)
begin
		// Demo of flushing when jump and R-type
		{Instr_Mem[0],Instr_Mem[1],Instr_Mem[2],Instr_Mem[3]}=32'h08000005; // j 5
		{Instr_Mem[4],Instr_Mem[5],Instr_Mem[6],Instr_Mem[7]}=32'h00430820; // add r1, r2, r3
		{Instr_Mem[8],Instr_Mem[9],Instr_Mem[10],Instr_Mem[11]}=32'h00430824; // and r1, r2, r3
		{Instr_Mem[12],Instr_Mem[13],Instr_Mem[14],Instr_Mem[15]}=32'h00430825; // or r1, r2, r3
		{Instr_Mem[16],Instr_Mem[17],Instr_Mem[18],Instr_Mem[19]}=32'h0043082A; // slt r1, r2, r3
		{Instr_Mem[20],Instr_Mem[21],Instr_Mem[22],Instr_Mem[23]}=32'h00430822; // sub r1, r2, r3
		{Instr_Mem[24],Instr_Mem[25],Instr_Mem[26],Instr_Mem[27]}=32'h00430820; //add r1, r2, r3
		{Instr_Mem[28],Instr_Mem[29],Instr_Mem[30],Instr_Mem[31]}=32'h00430825; // or r1, r2, r3
		{Instr_Mem[32],Instr_Mem[33],Instr_Mem[34],Instr_Mem[35]}=32'h8E240001; //lw r4, 1(r17)
		{Instr_Mem[36],Instr_Mem[37],Instr_Mem[38],Instr_Mem[39]}=32'h00442820; //add r5, r2, r4
		{Instr_Mem[40],Instr_Mem[41],Instr_Mem[42],Instr_Mem[43]}=32'h0; // nop
   	{Instr_Mem[44],Instr_Mem[45],Instr_Mem[46],Instr_Mem[47]}=32'h0; // nop
		{Instr_Mem[48],Instr_Mem[49],Instr_Mem[50],Instr_Mem[51]}=32'h00430820; // add r1, r2, r3
		{Instr_Mem[52],Instr_Mem[53],Instr_Mem[54],Instr_Mem[55]}=32'h00232022; // sub r4, r1, r3
		{Instr_Mem[56],Instr_Mem[57],Instr_Mem[58],Instr_Mem[59]}=32'h00430825; // or r1, r2, r3
		{Instr_Mem[60],Instr_Mem[61],Instr_Mem[62],Instr_Mem[63]}=32'h14430001; // bne r2, r3, 1
		{Instr_Mem[64],Instr_Mem[65],Instr_Mem[66],Instr_Mem[67]}=32'h0043082A; // slt r1, r2, r3
		{Instr_Mem[68],Instr_Mem[69],Instr_Mem[70],Instr_Mem[71]}=32'hAE210003; // sw r1, 3(r17)
		
		/*// Demo of R-type data-forwarding
		{Instr_Mem[0],Instr_Mem[1],Instr_Mem[2],Instr_Mem[3]}=32'h00430820; // add r1, r2, r3
		{Instr_Mem[4],Instr_Mem[5],Instr_Mem[6],Instr_Mem[7]}=32'h00232022; // sub r4, r1, r3
		{Instr_Mem[8],Instr_Mem[9],Instr_Mem[10],Instr_Mem[11]}=32'h00430825; // or r1, r2, r3*/
		
end
		always @(PC)
		begin
			Instruction = {Instr_Mem[PC],Instr_Mem[PC+1],Instr_Mem[PC+2],Instr_Mem[PC+3]};
		end


endmodule
