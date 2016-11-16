`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:59 10/28/2016 
// Design Name: 
// Module Name:    ethermetControler 
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
module ethermetControler(input CLK,
		input [3:0] fromMemory,
		input [3:0] fromModem,
		output reg [3:0] toModem,
		output reg [3:0] toMemory,
		output reg [14:0] readMemLoc
    );
		parameter startwWrtPos = 15'b256 
			 
		reg [14:0] packetLocation = 15'b0 - 1'b1;
		reg [3:0] phase = 1'b0;
		
		always@(posedge CLK)
		begin
			phase <= phase + 1'b1;
			
			if(phase[1:0] == 2'b00)
			begin
				case(phase[3:2])
					case 2'b00:
					begin
						toModem <= fromMemory[15:12];
					end
					case 2'b01:
					begin
						toModem <= fromMemory[11:8];
					end
					case 2'b10:
					begin
						toModem <= fromMemory[7:4];					
					end
					default:
					begin 
						toModem <= fromMemory[3:0];
					end
					
				endcase
			end
			else if(phase == 4'd14)
				packetLocation <= packetLocation - 1'b0;
			else
			begin
				
			end
			
		end
endmodule
