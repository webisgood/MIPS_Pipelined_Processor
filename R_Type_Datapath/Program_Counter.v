`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:37:21 04/04/2023 
// Design Name: 
// Module Name:    Program_Counter 
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
module Program_Counter(
	   input stall,
		input [31:0] PCIn, PC_Next,
		input clk, reset,
		output reg [31:0] PC_out
    );
	 
	reg [31:0] PC;
	
	always@(negedge reset)
	begin
			PC = PCIn;
	end

	always@(posedge clk)
	begin
		PC_out = PC;
	end
	
	always@(negedge clk, stall)
	begin
		if(stall == 0)
			PC = PC_Next;
	end

endmodule
