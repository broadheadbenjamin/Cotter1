`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:05:36 11/03/2016 
// Design Name: 
// Module Name:    checkSum16 
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
module checkSum16(
input [15:0] bits_in,
input ready_to_calc,
output[15:0] bits_out
    );
	 reg [31:0] running_total = 32'b0;
	 reg [31:0] running_total1 = 32'b0;
	 reg [31:0] running_total2 = 32'b0;
	 
	 



endmodule
