`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:21:50 03/23/2023 
// Design Name: 
// Module Name:    Register_File 
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
module Register_File(
		input [4:0] read_reg_num_1,
		input [4:0] read_reg_num_2,
		input [4:0] write_reg_num,
		input [31:0] write_data,
		output [31:0] read_data_1,
		output [31:0] read_data_2,
		input regWrite, reset, clk
    );
	 
	 reg [31:0] RegMemory [31:0];
	 
	 always @(negedge reset)
		begin
			//$readmemh("Reg_Mem.mem",RegMemory);
			RegMemory[2] = 10;
			RegMemory[3] = 15;
			RegMemory[17]= 7;
		end
	 	 
	 assign read_data_1=RegMemory[read_reg_num_1];
	 assign read_data_2=RegMemory[read_reg_num_2];
	 
	 always @(negedge clk)
	 begin
      if(regWrite==1) RegMemory[write_reg_num]=write_data;
	 end

endmodule
