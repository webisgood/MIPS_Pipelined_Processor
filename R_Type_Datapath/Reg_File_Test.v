`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:04:08 03/24/2023
// Design Name:   Register_File
// Module Name:   D:/OneDrive - hyderabad.bits-pilani.ac.in/Assignment/R_Type_Datapath/Reg_File_Test.v
// Project Name:  R_Type_Datapath
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Register_File
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Reg_File_Test;

	// Inputs
	reg [4:0] read_reg_num_1;
	reg [4:0] read_reg_num_2;
	reg [4:0] write_reg_num;
	reg [31:0] write_data;
	reg regWrite;
	reg reset;

	// Outputs
	wire [31:0] read_data_1;
	wire [31:0] read_data_2;

	// Instantiate the Unit Under Test (UUT)
	Register_File uut (
		.read_reg_num_1(read_reg_num_1), 
		.read_reg_num_2(read_reg_num_2), 
		.write_reg_num(write_reg_num), 
		.write_data(write_data), 
		.read_data_1(read_data_1), 
		.read_data_2(read_data_2), 
		.regWrite(regWrite), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		read_reg_num_1 = 5'b10001;
		read_reg_num_2 = 5'b10010;
		write_reg_num = 5'b00010;
		
		regWrite = 1;
		reset = 0;
		#2 write_data = 32'h0002FA41;

		// Wait 100 ns for global reset to finish
		#10
		$finish;
        
		// Add stimulus here

	end
      
endmodule

