`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:28:33 03/23/2023 
// Design Name: 
// Module Name:    Sign_Extender 
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
module Sign_Extender(
		input [15:0] UnExt,
		output [31:0] Ext
    );
	 
	 assign Ext={{16{UnExt[15]}},UnExt};


endmodule
