module mux(
    input [15:0] regC,
    input [15:0] reg0,
    input [15:0] reg1,
    input [15:0] reg2,
    input [15:0] reg3,
    input [15:0] reg4,
    input [15:0] reg5,
    input [15:0] reg6,
    input [15:0] reg7,
    input [15:0] regA,
    input [3:0] sel,
    output logic [15:0] out
);
    

    always@(*) begin
        case(sel)
            4'd0: out = regC;
            4'd1: out = reg0;
            4'd2: out = reg1;
            4'd3: out = reg2;
            4'd4: out = reg3;
            4'd5: out = reg4;
            4'd6: out = reg5;
            4'd7: out = reg6;
            4'd8: out = reg7;
            4'd9: out = regA;
            default: out = 16'd0;
        endcase
    end
endmodule