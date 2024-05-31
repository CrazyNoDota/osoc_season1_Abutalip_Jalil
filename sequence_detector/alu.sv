module alu (
    input clk,
    input reset,       
    input data,
    output start_shifting,
    output [3:0] state_out // Expose state for debugging
);
    
    reg [3:0] state;
    
    assign start_shifting = (state == 4'd4);
    assign state_out = state; // Assign internal state to output signal
    
    always @(posedge clk) begin
        if (reset) begin
            state <= 4'b0000;
        end else begin
            case (state)
                4'd0: state <= data ? 4'd1 : 4'd0;
                4'd1: state <= data ? 4'd2 : 4'd0;
                4'd2: state <= data ? 4'd0 : 4'd3;
                4'd3: state <= data ? 4'd4 : 4'd0;
                4'd4: state <= 4'd0; // Stay in state 4
                default: state <= 4'd0;
            endcase
        end
    end

endmodule
