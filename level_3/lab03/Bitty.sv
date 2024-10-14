module Bitty(
    input logic clk,
    input logic reset,
    input logic [15:0] din,
    input logic [15:0] regs[10:0], // data input of registers
    output logic done,
    output logic [15:0] dout[10:0],
    input write,
    input run,
    input logic regen[10:0] // to control enable signal of registers
);
    
    logic [15:0] d_out[10:0];
    assign dout = d_out;
    logic [15:0] d_in[10:0];
    assign d_in = regs;
    logic reg_en [10:0];
    assign reg_en = regen;
    
    assign d_in[1] = alu_out;

    
   
    //wire [15:0] mux_out_in; // forgot why do I need it
    register regC (
        .clk(clk),
        .enable(reg_en[1]),
        .in(d_in[1]),
        .out(d_out[1])
    );

    register regS(
        .clk(clk),
        .enable(reg_en[0]),
        .in(d_in[0]),
        .out(d_out[0])
    );

    
    register reg0(
        .clk(clk),
        .enable(reg_en[2]),
        .in(d_in[2]),
        .out(d_out[2])
    );
     register reg1(
        .clk(clk),
        .enable(reg_en[3]),
        .in(d_in[3]),
        .out(d_out[3])
    );
    register reg2(
        .clk(clk),
        .enable(reg_en[4]),
        .in(d_in[4]),
        .out(d_out[4])
    );
    register reg3(
        .clk(clk),
        .enable(reg_en[5]),
        .in(d_in[5]),
        .out(d_out[5])
    );
    
    register reg4(
        .clk(clk),
        .enable(reg_en[6]),
        .in(d_in[6]),
        .out(d_out[6])
    );
     register reg5(
        .clk(clk),
        .enable(reg_en[7]),
        .in(d_in[7]),
        .out(d_out[7])
    );
    register reg6(
        .clk(clk),
        .enable(reg_en[8]),
        .in(d_in[8]),
        .out(d_out[8])
    );
    register reg7(
        .clk(clk),
        .enable(reg_en[9]),
        .in(d_in[9]),
        .out(d_out[9])
    );

    register reg_inst(
        .clk(clk),
        .enable(reg_en[10]),
        .in(d_in[10]),
        .out(d_out[10])
    );


    

    logic [2:0] mux_sel;
    logic [15:0] mux_out;
    mux mux1(
        .reg0(d_out[2]),
        .reg1(d_out[3]),
        .reg2(d_out[4]),
        .reg3(d_out[5]),
        .reg4(d_out[6]),
        .reg5(d_out[7]),
        .reg6(d_out[8]),
        .reg7(d_out[9]),
        .sel(mux_sel),
        .out(mux_out)
    );
    logic carry_in;
    logic [3:0] alu_sel;
    logic mode;
    logic carry_out;
    logic compare;
    logic [15:0] alu_out;
    alu alu1(
        .carry_in(carry_in),
        .in_a(d_out[0]),
        .in_b(mux_out),
        .sel(alu_sel),
        .mode(mode),
        .carry_out(carry_out),
        .compare(compare),
        .alu_out(alu_out)
    );
    
    ControlUnit ControlUnit1(
        .clk(clk),
        .reset(reset),
        .instruction(din),
        .run(run),
        .alu_sel(alu_sel),
        .mux_sel(mux_sel),
        .mode(mode),
        .en_s(reg_en[0]),
        .en_c(reg_en[1]),
        .en_0(reg_en[2]),
        .en_1(reg_en[3]),
        .en_2(reg_en[4]),
        .en_3(reg_en[5]),
        .en_4(reg_en[6]),
        .en_5(reg_en[7]),
        .en_6(reg_en[8]),
        .en_7(reg_en[9]),
        .en_inst(reg_en[10]),
        .done(done)

    );


endmodule