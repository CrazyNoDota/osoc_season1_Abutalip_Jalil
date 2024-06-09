module mux(
    input [15:0] reg0,
    input [15:0] reg1,
    input [15:0] reg2,
    input [15:0] reg3,
    input [15:0] reg4,
    input [15:0] reg5,
    input [15:0] reg6,
    input [15:0] reg7,
    input [2:0] sel,
    output logic [15:0] out
);
    

    always@(*) begin
        case(sel)
            3'd0: out = reg0;
            3'd1: out = reg1;
            3'd2: out = reg2;
            3'd3: out = reg3;
            3'd4: out = reg4;
            3'd5: out = reg5;
            3'd6: out = reg6;
            3'd7: out = reg7;
            default: out = 16'd0;
        endcase
    end
endmodule