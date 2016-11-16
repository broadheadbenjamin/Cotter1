`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineers: 
// 
// Create Date:    15:52:27 10/20/2016 
// Design Name: 
// Module Name:    Control 
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
module Control(
	input CLK, // input clka
   input write_memoryA, // input [0 : 0] wea
   input [23:0] memory_locationA, // input [14 : 0] addra
   input [15:0]memory_inputA, // input [15 : 0] dina
   output [15:0]data_outA,	// output [15 : 0] douta
	input write_memoryB, // input [0 : 0] wea
   input [14:0] memory_location_wrtB, // input [14 : 0] addra
   input [14:0] memory_location_rdB, // input [14 : 0] addra
   input [15:0]memory_inputB, // input [15 : 0] dina
   output [15:0]data_outB
    );
		reg [14:0]memory_locationB = 15'b0;

// 'MemoryCore' work
// 'memory' matts
		MemoryCore memory(
		CLK, // input clka
		write_memoryA, // input [0 : 0] wea
		memory_locationA[14:0], // input [14 : 0] addra
		memory_inputA, // input [15 : 0] dina
		data_outA,		// output [15 : 0] douta
		CLK,
		write_memoryB,
		memory_locationB,
		memory_inputB,
		data_outB
	);
	
	always@(*)
	begin
		if(write_memoryB)
			memory_locationB = memory_location_wrtB;
		else
			memory_locationB = memory_location_rdB;	
	end
	/*
input clka;
input [0 : 0] wea;
input [14 : 0] addra;
input [15 : 0] dina;
output [15 : 0] douta;
input clkb;
input [0 : 0] web;
input [14 : 0] addrb;
input [15 : 0] dinb;
output [15 : 0] doutb;*/

endmodule