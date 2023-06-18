`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:37:22 04/23/2023 
// Design Name: 
// Module Name:    Forwarding_unit 
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
module Forwarding_unit(
	input [4:0] EX_MEM_rd,ID_EX_rs,ID_EX_rt,MEM_WB_rd,
	input MEM_WB_regwrite,EX_MEM_regwrite,
	output reg [1:0] forward_rs,forward_rt
);
	 always@(*)
	 begin
		if(EX_MEM_regwrite==1 && EX_MEM_rd==ID_EX_rs && EX_MEM_rd!=0) // source 1 is the dependent register
			begin
				forward_rs<=01;
				forward_rt<=00;
			end
		else if(EX_MEM_regwrite==1 && EX_MEM_rd==ID_EX_rt && EX_MEM_rd!=0) // source 2 is the dependent register
			begin
				forward_rs<=00;
				forward_rt<=01;
			end
		else if(MEM_WB_regwrite==1 && MEM_WB_rd==ID_EX_rs && MEM_WB_rd!=0 &&~(EX_MEM_regwrite==1 && EX_MEM_rd==ID_EX_rs && EX_MEM_rd!=0)) // source 1 is the dependent register in MEM hazard
			begin
				forward_rs<=10;
				forward_rt<=00;
			end
		else if(MEM_WB_regwrite==1 && MEM_WB_rd==ID_EX_rt && MEM_WB_rd!=0 &&~(EX_MEM_regwrite==1 && EX_MEM_rd==ID_EX_rt && EX_MEM_rd!=0)) // source 2 is the dependent register in MEM hazard
			begin
				forward_rs<=00;
				forward_rt<=10;
			end
		else if(EX_MEM_regwrite==1 && EX_MEM_rd==ID_EX_rs && EX_MEM_rd!=0 && EX_MEM_rd==ID_EX_rt && EX_MEM_rd!=0)// both source 1 and 2 are dependent registers for EX hazard
			begin
				forward_rs<=01;
				forward_rt<=01;
			end
		else if(MEM_WB_regwrite==1 && MEM_WB_rd==ID_EX_rs && MEM_WB_rd!=0 &&~(EX_MEM_regwrite==1 && EX_MEM_rd==ID_EX_rs && EX_MEM_rd!=0) && MEM_WB_rd==ID_EX_rt && MEM_WB_rd!=0 &&~(EX_MEM_regwrite==1 && EX_MEM_rd==ID_EX_rt && EX_MEM_rd!=0)) // both source 1 and 2 are dependent registers for MEM hazard
			begin
				forward_rs<=10;
				forward_rt<=10;
			end
		else // if there is no data dependency
			begin
				forward_rs <= 00;
				forward_rt <= 00;
			end
	 end


endmodule




