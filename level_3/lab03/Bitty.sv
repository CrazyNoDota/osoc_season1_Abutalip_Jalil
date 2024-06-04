module Bitty(
    input logic clk,
    input logic reset,
    input logic [15:0] din,
    output logic done
);
    logic [15:0] d_out[7:0];
    logic [15:0] d_in[7:0];
    logic reg_en [7:0];

    //wire [15:0] mux_out_in;
    wire en_regS;
    register regC (
        .clk(clk),
        .enable(reg_en[0]),
        .in(d_in[1]),
        .out(d_out[2])
    );

    register regS(
        .clk(clk),
        .enable(en_regS),
        .in(),
        .out()
    );
    logic [3:0] mux_sel;
    logic [15:0] mux_out;
    mux mux1(
        .regC(regC),
        .reg0(reg0),
        .reg1(reg1),
        .reg2(reg2),
        .reg3(reg3),
        .reg4(reg4),
        .reg5(reg5),
        .reg6(reg6),
        .reg7(reg7),
        .regA(regA),
        .sel(mux_sel),
        .out(mux_out)
    );
    logic carry_in;
    logic alu_sel[3:0];
    logic mode;
    logic carry_out;
    logic compare;
    logic [15:0] alu_out;
    alu alu1(
        .carry_in(carry_in),
        .in_a(regS),
        .in_b(mux_out),
        .sel(alu_sel),
        .mode(mode),
        .carry_out(carry_out),
        .compare(compare),
        .alu_out(alu_out)
    );
    logic run;
    ControlUnit ControlUnit1(
        .clk(clk),
        .reset(reset),
        .instruction(din),
        .run(run),
        .alu_sel(alu_sel),
        .mux_sel(mux_sel),
        .mode(mode),
        .en_s(en_regS),
        .en_c(reg_en[0]),
        .en_0(reg_en[1]),
        .en_1(reg_en[2]),
        .en_2(reg_en[3]),
        .en_3(reg_en[4]),
        .en_4(reg_en[5]),
        .en_5(reg_en[6]),
        .en_6(reg_en[7]),
        .en_7(reg_en[8]),
        .en_inst(),
        .done(done)

    );


endmodule