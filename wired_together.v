`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:51:56 10/12/2016 
// Design Name: 
// Module Name:    wired_together 
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
module wired_together(
		input CLK,
		input [7:0]switchs,
		input [4:0] buttons,
		inout MDIO,
		input collision_detect,
		input carrier_sense,
		input trans_CLK,
		input [3:0] recieve,
		input recieve_ERR,
		input recieve_data_valid,
		input recieve_CLK,
		output [7:0] leds,
		output reg sevenSeg1,
		output reg sevenSeg2,
		output reg sevenSeg3,
		output reg sevenSeg4,
		output reg sevenSegP,
		output sevenSegA,
		output sevenSegB,
		output sevenSegC,
		output sevenSegD,
		output sevenSegE,
		output sevenSegF,
		output sevenSegG,
		output [2:0] vgaRed,
		output [2:0] vgaGreen,
		output [1:0] vgaBlue,
		output Hsync,
		output Vsync,
		output [15:0]data_out,
		output [3:0] transmit,
		output trans_error,
      output trans_enabled,
		output md_CLK,
		output resetE,
		input CLK25
   );
	
		parameter[24:0] tenMillion = 24'b100110001001011010000000;
		parameter[9:0] sevenSegFreqCounter = 10'b1111111111;

		reg [23:0] milDiv = 24'b0;
		reg [15:0] timerCount = 16'd0;
		reg [15:0] displayInfo = 16'b0;
		reg [10:0] slowSeg = 11'b0;
		reg [1:0] segCounter = 2'b00;

		wire write_memory;
		wire [127:0] outReg;
		wire [23:0] memory_location;
		wire [15:0] memory_input;
		wire [15:0] data_out;
		wire [15:0] camera;			
		wire [15:0] move_command;

		wire [15:0] timerInDec;
		wire [3:0] extraBits;
		wire [7:0] deSwitchs;
		wire [4:0] deButtons;
		
		wire[15:0] infoToWrite;
		wire[15:0] infoToRead;
		wire[5:0] memAddress;
		wire writeEnabled;

		Debouncer debouncersw1(CLK, switchs[0], deSwitchs[0]);
		Debouncer debouncersw2(CLK, switchs[1], deSwitchs[1]);
		Debouncer debouncersw3(CLK, switchs[2], deSwitchs[2]);
		Debouncer debouncersw4(CLK, switchs[3], deSwitchs[3]);
		Debouncer debouncersw5(CLK, switchs[4], deSwitchs[4]);
		Debouncer debouncersw6(CLK, switchs[5], deSwitchs[5]);
		Debouncer debouncersw7(CLK, switchs[6], deSwitchs[6]);
		Debouncer debouncersw8(CLK, switchs[7], deSwitchs[7]);
		Debouncer debouncerbt1(CLK, buttons[0], deButtons[0]);
		Debouncer debouncerbt2(CLK, buttons[1], deButtons[1]);
		Debouncer debouncerbt3(CLK, buttons[2], deButtons[2]);
		Debouncer debouncerbt4(CLK, buttons[3], deButtons[3]);
		Debouncer debouncerbt5(CLK, buttons[4], deButtons[4]);

		sevenSegmenDisplay segControl(displayInfo, segCounter, sevenSegA, sevenSegB, 
												sevenSegC, sevenSegD, sevenSegE, sevenSegF, sevenSegG);

		bin16ToBCD timerToDec(timerCount, timerInDec[3:0], timerInDec[7:4], timerInDec[11:8], timerInDec[15:12], extraBits);

		vgaSource snowVGA(CLK, timerCount[10:3],{deSwitchs[2], deSwitchs[1], deSwitchs[0]}, vgaRed, vgaGreen, vgaBlue, Hsync, Vsync);

		CPU_Set processor(CLK, deButtons[4], camera, move_command, data_out, memory_location, memory_input, outReg, write_memory);
		
		reg CLK50 = 1'b0;
		//reg CLK25 = 1'b0;
		wire[15:0] fromMemoryE, toMemoryE;
		wire[14:0] readLocationE, writeLocationE;
		
		phy_controller pleaseWork(CLK, MDIO, collision_detect, carrier_sense, trans_CLK, fromMemoryE, recieve, recieve_ERR,
			recieve_data_valid, recieve_CLK, md_CLK, resetE, toMemoryE, readLocationE, writeLocationE, transmit,
			trans_error, trans_enabled, writeE);
		
			
		Control memory(CLK, write_memory, memory_location, memory_input, data_out, writeE, writeLocationE,
			readLocationE, toMemoryE, fromMemoryE);

		assign leds = deSwitchs;

		always@(*)
		begin

			// decide which seg to turn on
			case(segCounter)
				 2'b00:
				 begin
					  sevenSeg1 = 1'b0;
					  sevenSeg2 = 1'b1;
					  sevenSeg3 = 1'b1;
					  sevenSeg4 = 1'b1;
					  sevenSegP = 1'b1; 
				 end				 
				 2'b01:
				 begin
					  sevenSeg1 = 1'b1;
					  sevenSeg2 = 1'b0;
					  sevenSeg3 = 1'b1;
					  sevenSeg4 = 1'b1;
					  
					  if(deSwitchs[7] == 1'b1)
					  begin
							sevenSegP = 1'b0;
					  end
					  else 
					  begin 
							sevenSegP = 1'b1;
					  end
				 end
				 
				 2'b10:
				 begin
					  sevenSeg1 = 1'b1;
					  sevenSeg2 = 1'b1;
					  sevenSeg3 = 1'b0;
					  sevenSeg4 = 1'b1;
					  sevenSegP = 1'b1;
				 end
				 
				 2'b11:
				 begin
					  sevenSeg1 = 1'b1;
					  sevenSeg2 = 1'b1;
					  sevenSeg3 = 1'b1;
					  sevenSeg4 = 1'b0;
					  sevenSegP = 1'b1;
				  end
			endcase
			
			if(deSwitchs[7] == 1'b1)
			begin
				displayInfo <= timerInDec;
			end
			else
			begin
				case(deSwitchs[2:0])
					3'd0:	displayInfo <= outReg[15:0];
					3'd1:	displayInfo <= outReg[31:16];
					3'd2:	displayInfo <= outReg[47:32];
					3'd3:	displayInfo <= outReg[63:48];
					3'd4:	displayInfo <= outReg[79:64];
					3'd5:	displayInfo <= outReg[95:80];
					3'd6:	displayInfo <= outReg[111:96];
					default: displayInfo <= outReg[127:112];
				endcase
			end
		end
		
		//always@(posedge CLK50)
			//CLK25 <= ~CLK25;
			
		
		always@(posedge CLK)
		begin
			CLK50 <= ~CLK50;
			
			slowSeg <= slowSeg + 1'b1;
				 
			if(slowSeg == sevenSegFreqCounter)
			begin
				segCounter <= segCounter + 2'b01;
			end
			
			if(deButtons[4] == 1'b1)
			begin
				timerCount <= 16'b0;
			end
			else if(deSwitchs[7] == 1'b1)
			begin
				if(milDiv == tenMillion)
				begin
					if(timerCount == 16'd9999)
					begin
						timerCount <= 16'd0;
					end
					else
					begin
						timerCount <= timerCount + 1'd1;
					end
					milDiv <= 24'b0;
				end
				else 
				begin 
					milDiv <= milDiv + 1'b1;
				end
			end
		end
endmodule
