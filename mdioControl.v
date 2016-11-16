`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Cotter 1
// Engineer: 
// 
// Create Date:    16:51:33 11/04/2016 
// Design Name: 
// Module Name:    mdioControl 
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
module mdioControl(
		input CLK,
		input start,
		inout MDIO,
		output[15:0] from_MDI,
		output ready,
		output mdCLK
    );
		parameter [127:0] setup = 128'hffff_ffff_5000_2100_ffff_ffff_5000_a1000;
		parameter [63:0] readReg0 = 64'hffffffff_6_000_0000;
		
		reg [33:0] softCounter = 34'b0;
		reg [15:0] from_MDI = 16'b0;
		reg [12:0] countWaitForSure = 13'b0;
		reg [6:0] counter = 7'd127;
		reg [5:0] countTo40 = 6'b0;
		reg triggerReady = 1'b0;
		reg ready = 1'b0;
		reg readySoft = 1'b0;
		reg setReadySoft = 1'b0; //FML 
		reg MDO = 1'b0; 
		reg MDI = 1'b0;
		reg out = 1'b1;
		
		
		mdCLK_gen md_CLK_gen(CLK, mdCLK);
		
		assign MDIO = out ? MDO : 1'bZ;
		
		always@(posedge mdCLK)
		begin
			if(start)
			begin
				if(~ready && ~triggerReady)
				begin
					MDO <= setup[counter];
					counter <= counter - 1'b1;
				
					if(counter == 7'd0)
					begin
						triggerReady <= 1'b1; //,,|,,(>.<)7
						counter <= 7'd63;
					end
				end
				else if(~ready && triggerReady)
				begin
					if(softCounter[20]) // <----(O.o)7
					begin
						setReadySoft <= 1'b1;
					end
					else
					begin
						softCounter <= softCounter + 1'b1;
					end
				end
				else
				begin
					if(counter > 16)
					begin
						MDO <= readReg0[counter];
						counter <= counter - 1'b1;
					end
					else if(counter == 16)
					begin
						counter <= counter - 1'b1;
						out <= 1'b0;
					end
					else
					begin 
						from_MDI[counter] <= MDI;
						counter <= counter - 1'b1;
					
						if(counter == 7'd0)
						begin
							counter <= 7'd63;
							out <= 1'b1;
						end
					end
				end
			end
		end

		always@(posedge CLK)
		begin
			MDI <= MDIO;
			if( ~ready && setReadySoft)
			begin
				if(countTo40 < 39)
					countTo40 = countTo40 + 1'b1;
				else	
					ready <= 1'b1;
			end
		end
endmodule
