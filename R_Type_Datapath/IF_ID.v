`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:35:26 04/21/2023 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
	input clk,
	input stall,
	input flush,
	input reset,
	input [31:0] Instr_Code_next,
	input [31:0] PC_next,
	output reg [31:0] Instr_Code_curr,
	output reg [31:0] PC_curr
);

	reg [31:0] IC_reg;
	reg [31:0] PC_reg;
	
	always@(negedge reset)
	begin
		IC_reg = 32'h0;
		PC_reg = 32'h0;
	
	end
	
	always@(negedge clk, flush, stall)
	begin
	if(flush==1) begin
		IC_reg = 32'h0;
		PC_reg = 32'h0;
	end
	else begin
		if(stall == 0)
		begin
			IC_reg = Instr_Code_next;
			PC_reg = PC_next;
		end
	end
	
	end
	
	always@(posedge clk)
	begin
	   Instr_Code_curr = IC_reg;
		PC_curr = PC_reg;
	end
	

endmodule
