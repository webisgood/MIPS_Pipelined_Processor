`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:42:02 03/23/2023 
// Design Name: 
// Module Name:    MUX_32 
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
module MUX_32(
		input [31:0] Input1, Input2,
		input Select,
		output [31:0] Out
    );
	 
	 assign Out = (Select==1'b0) ? Input1 : Input2;
	 
	 //if(Select==0) assign Out=Input1;
	 //else assign Out=Input2;
	 


endmodule
