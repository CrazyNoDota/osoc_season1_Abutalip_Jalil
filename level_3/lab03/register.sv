module register(
    input wire clk,
    input wire reset,
    input wire enable,
    input wire [15:0] in,
    output reg [15:0] out
);

    always@(posedge clk or posedge reset) begin
        if (reset) begin
            out <= 16'd0; // Initialize to zero or desired value
        end else if(enable) begin
            out <= in;
        end
    end

endmodule
