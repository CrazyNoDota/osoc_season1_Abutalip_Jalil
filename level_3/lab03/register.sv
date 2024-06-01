module register(
    input wire clk,
    input wire enable,
    input wire [15:0] in,
    output reg [15:0] out
);

    always@(posedge clk) begin
        if(enable) begin
            in <= out;
        end
    end

endmodule