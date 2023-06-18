`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:45:52 03/23/2023 
// Design Name: 
// Module Name:    MUX_5 
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
module MUX_5(
    input [4:0] Input1, Input2,
		input Select,
		output [4:0] Out
    );
	 
	 
	 assign Out = (Select==1'b0) ? Input1 : Input2;
	 
	 //if(Select==1'b0) assign Out=Input1;
	 //else assign Out=Input2;
	 
endmodule
