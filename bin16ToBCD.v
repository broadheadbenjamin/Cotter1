///////////////////////////////////////////////////////////
//
//Deisgned by: Tony McDaniel 09/2016
//
///////////////////////////////////////////////////////////

module bin16ToBCD(input[15:0] binNum,
    output reg[3:0] ones,
    output reg[3:0] tens,
    output reg[3:0] hundreds,
    output reg[3:0] thousands,
    output reg[3:0] tenThousands
    );
    
    parameter[4:0] four = 4'd4;
    
    integer i;
    always@(binNum)
    begin
        ones = 4'b0000;
        tens = 4'b0000;
        hundreds = 4'b0000;
        thousands = 4'b0000;
        tenThousands = 4'b0000;
        
        for (i = 15; i >= 0; i= i - 1)
        begin
            if(ones > four)
                ones = ones + 2'b11;
            if(tens > four)
                tens = tens + 2'b11;
            if(hundreds > four)
                hundreds = hundreds + 2'b11;
            if(thousands > four)
                thousands = thousands + 2'b11;
            if(tenThousands > four)
                tenThousands = tenThousands + 2'b11;
                
            tenThousands = tenThousands << 1;
            tenThousands[0] = thousands[3];
            
            thousands = thousands << 1;
            thousands[0] = hundreds[3];
            
            hundreds = hundreds << 1;
            hundreds[0] = tens[3];
            
            tens = tens << 1;
            tens[0] = ones[3];
            
            ones = ones << 1;
            ones[0] = binNum[i];
        
        end
    end  
endmodule