module Bitty(
    input logic clk,
    input logic reset,
    input logic [15:0] din,
    output logic done
);
    logic [15:0] reg_q[7:0];
    logic [7:0] reg_en;

    register regs [7:0] (
        .clk(clk),
        .enable({}),
    );

    mux mux1(
        .in
    );


endmodule