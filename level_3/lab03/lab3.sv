module mux(
    input [15:0] reg0,
    input [15:0] reg1,
    input [15:0] reg2,
    input [15:0] reg3,
    input [15:0] reg4,
    input [15:0] reg5,
    input [15:0] reg6,
    input [15:0] reg7,
    input [15:0] regA,
    input [15:0] regC,
    input [3:0] sel,
    output logic [15:0] out
);
    

    always@(*) begin
        case(sel):

            

        endcase
    end
endmodule