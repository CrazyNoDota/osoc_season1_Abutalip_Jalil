module Bitty(
    input logic clk,
    input logic reset,
    input logic [15:0] din,
    output logic done,
    output logic [15:0] dout[10:0],
    input run,
    input logic init_en,
    input logic [15:0] init_data[7:0]
);
    
    logic [15:0] d_out[10:0] /* verilator public */;
    assign dout = d_out;
    
    logic [15:0] d_in[10:0] /* verilator public */;
    
    logic reg_en [10:0] /* verilator public */;

    // Data input assignments
    assign d_in[0] = mux_out; // Load from mux to regS when en_s is active
    assign d_in[1] = alu_out; // ALU output to regC

    // Assign d_in for other registers
    genvar i;
    generate
        for(i = 2; i <= 9; i = i + 1) begin : reg_block
            assign d_in[i] = alu_out; // ALU output is written to destination registers
        end
    endgenerate

    // Instantiate registers
    register regC (
        .clk(clk),
        .reset(reset),
        .enable(reg_en[1]),
        .in(d_in[1]),
        .out(d_out[1])
    );

    register regS(
        .clk(clk),
        .reset(reset),
        .enable(reg_en[0]),
        .in(d_in[0]),
        .out(d_out[0])
    );

    // Instantiate registers with initialization capability
generate
    for(i = 2; i <= 9; i = i + 1) begin : reg_inst_block
        register regN(
            .clk(clk),
            .reset(reset),
            .enable(reg_en[i] || init_en),
            .in(init_en ? init_data[i-2] : d_in[i]),
            .out(d_out[i])
        );
    end
endgenerate


    // Instruction register
    register reg_inst(
        .clk(clk),
        .reset(reset),
        .enable(reg_en[10]),
        .in(din),
        .out(d_out[10])
    );

    // Signals used
    logic [3:0] alu_sel;
    logic [2:0] mux_sel;
    logic mode;
    logic carry_out;
    logic compare;
    logic [15:0] alu_out;
    logic [15:0] mux_out;
    logic carry_in;

    // Instantiate Mux
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

    // Instantiate ALU
    alu alu1(
        .carry_in(1'b0),
        .in_a(d_out[0]),
        .in_b(mux_out),
        .sel(alu_sel),
        .mode(mode),
        .carry_out(carry_out),
        .compare(compare),
        .alu_out(alu_out)
    );

    // Instantiate ControlUnit and connect reg_en signals
    ControlUnit ControlUnit1(
        .clk(clk),
        .reset(reset),
        .instruction(d_out[10]),
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
