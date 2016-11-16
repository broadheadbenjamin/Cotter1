`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:00:27 10/31/2016 
// Design Name: 
// Module Name:    phy_controller 
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
module phy_controller(
	 input CLK,
    inout mdio,
    input collision_detect,
    input carrier_sense,
    input trans_CLK,
	 input [15:0] fromMemory,
    input [3:0] recieve,
    input recieve_ERR,
    input recieve_data_valid,
    input recieve_CLK,
    output md_CLk,
    output reset,
	 output [15:0] toMemory,
	 output [14:0] readLocation,
	 output [14:0] writeLocation,
    output [3:0] transmit,
    output trans_error,
    output trans_enabled,
	 output write
    );
		parameter startEthernetHeader = 15'd25;
		parameter endEthernetHeader = 15'd57;
		
	 	parameter startWrtPos = endEthernetHeader + 1;
		
		reg [11:0] setupCounter = 12'b0;
		reg [3:0] transmit = 4'b0000;
		reg [3:0] phase = 4'b0101;
		reg trans_error = 1'b0;
		reg trans_enabled = 1'b0;
		reg reset = 1'b0;
				
		reg [15:0] toMemory = 16'b0;
		reg [14:0] readLocation = startEthernetHeader;
		reg [14:0] writeLocation = startWrtPos;
		reg write = 1'b0;
		
		wire [15:0] from_MDI;
		wire ready;
		
		mdioControl MdIo(CLK, setupCounter[11], mdio, from_MDI, ready, md_CLk);

		always@(posedge CLK)
		begin
			if(setupCounter[11])
			begin
				//phase <= phase + 1'b1;
				write <= 1'b0;
			end
			else if(setupCounter == 11'b111_1111_0000)
			begin
				setupCounter <=	setupCounter + 1'b1;
				reset <= 1'b1;
			end 
			else
				setupCounter <=	setupCounter + 1'b1;
			
			if(ready)
			begin
				if(phase[1:0] == 2'b00)
				begin
					write <= 1'b0;
					case(phase[3:2])
						2'b00:
						begin
							transmit <= fromMemory[15:12];
						end
						2'b01:
						begin
							transmit <= fromMemory[11:8];
						end
						2'b10:
						begin
							transmit <= fromMemory[7:4];
						end
						default:
						begin 
							transmit <= fromMemory[3:0];
						end		
					endcase
				end
				else if(phase[1:0] == 2'b01)
				begin
					case(phase[3:2])
						2'b00:
						begin
							toMemory[15:12] <= recieve;
						end
						2'b01:
						begin
							toMemory[11:8] <= recieve;
						end
						2'b10:
						begin
							toMemory[7:4] <= recieve;					
						end
						default:
						begin 
							toMemory[3:0] <= recieve;
						end
					endcase
				end
				else if(phase == 4'd14)
				begin
					if(readLocation < endEthernetHeader)
						readLocation <= readLocation + 1'b1;
					else
						readLocation <= startEthernetHeader;
				end
				else if(phase == 4'd15)
				begin
					write <= 1'b1;
					trans_enabled <= 1'b1;
				end
			end			
		end
endmodule
