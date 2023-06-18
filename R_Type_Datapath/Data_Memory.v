`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:09:58 03/23/2023 
// Design Name: 
// Module Name:    Data_Memory 
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
module Data_Memory(
		input [31:0] Address,
		input [31:0] Write_Data,
		input MemRead, MemWrite,
		input reset, clk,
		output reg [31:0] Read_Data
    );
	 
		reg [31:0] Data_Mem [31:0];
		
		always @(negedge reset)
		begin
			//$readmemh("Data_Mem.mem",Data_Mem);
			Data_Mem[9]=32'h00007A10;
			Data_Mem[8]=32'h00007A20;
		end
		
		always @(negedge clk)
		begin
				if(MemRead==0 && MemWrite==1) Data_Mem[Address]=Write_Data;
		end
		
		always @(Address)
		begin
				if(MemRead==1) Read_Data=Data_Mem[Address];
		end

endmodule
