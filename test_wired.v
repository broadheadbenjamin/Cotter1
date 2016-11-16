`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:41:55 11/02/2016
// Design Name:   wired_together
// Module Name:   H:/CS 3710/Cotter1 Project/Cotter1/test_wired.v
// Project Name:  Cotter1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: wired_together
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_wired;

	// Inputs
	reg CLK;
	reg [7:0] switchs;
	reg [4:0] buttons;
	reg collision_detect;
	reg carrier_sense;
	reg trans_CLK;
	reg [3:0] recieve;
	reg recieve_ERR;
	reg recieve_data_valid;
	reg recieve_CLK;

	// Outputs
	wire [7:0] leds;
	wire sevenSeg1;
	wire sevenSeg2;
	wire sevenSeg3;
	wire sevenSeg4;
	wire sevenSegP;
	wire sevenSegA;
	wire sevenSegB;
	wire sevenSegC;
	wire sevenSegD;
	wire sevenSegE;
	wire sevenSegF;
	wire sevenSegG;
	wire [2:0] vgaRed;
	wire [2:0] vgaGreen;
	wire [1:0] vgaBlue;
	wire Hsync;
	wire Vsync;
	wire [15:0] data_out;
	wire [3:0] transmit;
	wire trans_error;
	wire trans_enabled;
	wire md_CLK;
	wire resetE;
	wire CLK25;

	// Bidirs
	wire MDIO;

	// Instantiate the Unit Under Test (UUT)
	wired_together uut (
		.CLK(CLK), 
		.switchs(switchs), 
		.buttons(buttons), 
		.MDIO(MDIO), 
		.collision_detect(collision_detect), 
		.carrier_sense(carrier_sense), 
		.trans_CLK(trans_CLK), 
		.recieve(recieve), 
		.recieve_ERR(recieve_ERR), 
		.recieve_data_valid(recieve_data_valid), 
		.recieve_CLK(recieve_CLK), 
		.leds(leds), 
		.sevenSeg1(sevenSeg1), 
		.sevenSeg2(sevenSeg2), 
		.sevenSeg3(sevenSeg3), 
		.sevenSeg4(sevenSeg4), 
		.sevenSegP(sevenSegP), 
		.sevenSegA(sevenSegA), 
		.sevenSegB(sevenSegB), 
		.sevenSegC(sevenSegC), 
		.sevenSegD(sevenSegD), 
		.sevenSegE(sevenSegE), 
		.sevenSegF(sevenSegF), 
		.sevenSegG(sevenSegG), 
		.vgaRed(vgaRed), 
		.vgaGreen(vgaGreen), 
		.vgaBlue(vgaBlue), 
		.Hsync(Hsync), 
		.Vsync(Vsync), 
		.data_out(data_out), 
		.transmit(transmit), 
		.trans_error(trans_error), 
		.trans_enabled(trans_enabled), 
		.md_CLK(md_CLK), 
		.resetE(resetE), 
		.CLK25(CLK25)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		switchs = 0;
		buttons = 0;
		collision_detect = 0;
		carrier_sense = 0;
		trans_CLK = 0;
		recieve = 0;
		recieve_ERR = 0;
		recieve_data_valid = 0;
		recieve_CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always
	begin
		CLK = ~CLK;
		#10;
	end	
      
endmodule

