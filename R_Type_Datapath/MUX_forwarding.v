`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:38:13 04/23/2023 
// Design Name: 
// Module Name:    MUX_forwarding 
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
module MUX_forwarding(
input [31:0] rs_data,ALU_Result_out,MemToReg_Res_out,
input [1:0] forwarding_sel,
output reg [31:0] ALU_input_1
    );
	 
	 always@(*)
	 begin
		case(forwarding_sel)
			2'b00: ALU_input_1=rs_data;
			2'b01: ALU_input_1=ALU_Result_out;
			2'b10: ALU_input_1=MemToReg_Res_out;
			default: ALU_input_1=32'hxxxxxxxx;
		endcase
	 end

endmodule
