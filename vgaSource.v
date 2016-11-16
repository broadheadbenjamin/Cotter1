`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Tony McDaniel
// 
// Create Date:    21:31:45 09/05/2016 
// Design Name: 
// Module Name:    vgaSource 
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
module vgaSource( input clock,
		input[7:0] eightBitInput,
		input[2:0] selection,
		output reg[2:0] red,
		output reg[2:0] green,
		output reg[1:0] blue,
		output reg hSync,
		output reg vSync
    );
		initial hSync = 1'b1;
		initial vSync = 1'b1;
		
		reg[23:0] outputRand = 24'b110110110110110110110110;
		reg[9:0] horCounter = 10'b0;
		reg[9:0] vertCounter = 10'b0;
		reg[1:0] oneFourth = 2'b00;

		parameter[8:0] endVertVisRange = 9'd480;
		parameter[9:0] vertReset = 10'd523;
		parameter[8:0] beginVSync = 9'd490;
		parameter[8:0] endVSync = 9'd493;

		parameter[9:0] endHorVisRange = 10'd640;
		parameter[9:0] horReset = 10'd799;
		parameter[9:0] beginHSync = 10'd655;
		parameter[9:0] endHSync = 10'd712;
     
		always@(posedge clock)
		begin
			outputRand <= {outputRand[22:0],outputRand[23] ^ outputRand[10]};
			
			if(oneFourth == 2'b11)
			begin
				horCounter <= horCounter + 1'b1;
				
				if(horCounter > beginHSync && horCounter < endHSync)
					hSync <= 1'b0;
				else
					hSync <= 1'b1;
					
				if(horCounter == horReset)
				begin
					horCounter <= 1'd0;
					vertCounter <= vertCounter + 1'b1;
					
					if(vertCounter > beginVSync && vertCounter < endVSync)
						vSync <= 1'b0;
					else
						vSync <= 1'b1;
					
					if(vertCounter == vertReset)
						vertCounter <= 1'b0;
				end
					 
				// vga output
				if(horCounter < endHorVisRange && vertCounter < endVertVisRange)
				begin
					// show big squares
					if(selection == 3'b111)
					begin
						if(horCounter[5] ^ vertCounter[5])
						begin
							red   <= 3'b111;
							green <= 3'b111;
							blue  <= 2'b11;
						end
						else
						begin
							red   <= 1'b0;
							green <= 1'b0;
							blue  <= 1'b0;
						end
					end					
					// show small squares
					else if(selection == 3'b110)
					begin
						if(horCounter[3] ^ vertCounter[3])
						begin
							red   <= 3'b111;
							green <= 3'b111;
							blue  <= 2'b11;
						end
						else
						begin
							red   <= 1'b0;
							green <= 1'b0;
							blue  <= 1'b0;
						end
					end
					// color squares horizon only
					else if(selection == 3'b101)
					begin
						if(horCounter[4] ^ vertCounter[4])
						begin
							red   <= horCounter[9:7];
							green <= horCounter[6:4];
							blue  <= horCounter[3:2];
						end
						else
						begin
							red   <= horCounter[4:2];
							green <= horCounter[7:5];
							blue  <= horCounter[9:8];
						end
					end
					// color squares horizon v vertical
					else if(selection == 3'b100)
					begin
						if(horCounter[4] ^ vertCounter[4])
						begin
							red   <= horCounter[9:7];
							green <= horCounter[6:4];
							blue  <= horCounter[3:2];
						end
						else
						begin
							red   <= vertCounter[4:2];
							green <= vertCounter[7:5];
							blue  <= vertCounter[9:8];
						end
					end
					// color squares horizon with snow
					else if(selection == 3'b011)
					begin
						if(horCounter[4] ^ vertCounter[4])
						begin
							red   <= horCounter[7:5];
							green <= horCounter[4:2];
							blue  <= horCounter[1:0];
						end
						else
						begin
							red <= outputRand[22:20];
							green <= outputRand[11:9];
							blue <= outputRand[5:4];
						end
					end
					// live vga feed
					else if(selection == 3'b010)
					begin
						red <= eightBitInput[7:5] ^ vertCounter[7:5];
						green <= eightBitInput[4:2] ^ horCounter[4:2];
						blue <= eightBitInput[1:0] ^ horCounter[1:0];
					end
					// live vga feed
					else if(selection == 3'b001)
					begin
						red <= eightBitInput[7:5];
						green <= eightBitInput[4:2];
						blue <= eightBitInput[1:0];
					end
					// show snow
					else
					begin
						red <= outputRand[22:20];
						green <= outputRand[11:9];
						blue <= outputRand[5:4];
					end
				end
				else
				begin
					red   <= 1'b0;
					green <= 1'b0;
					blue  <= 1'b0;
				end
			end
			
			oneFourth <= oneFourth + 1'b1;
		end
endmodule
