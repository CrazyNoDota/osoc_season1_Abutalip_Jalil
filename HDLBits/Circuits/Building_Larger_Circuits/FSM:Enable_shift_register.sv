module top_module (
    input clk,
    input reset,      // Synchronous reset
    output reg shift_ena
);

    // Declare a register for the timer
    reg [2:0] timer;

    // Synchronous always block for both reset and timer logic
    always @(posedge clk) begin
        if (reset) begin
            // On reset, initialize shift_ena and the timer
            shift_ena <= 1;
            timer <= 3;  // Initialize to 3 because timer decrements at the first clock edge after reset
        end else if (timer > 0) begin
            // Decrement the timer if it is greater than 0
            timer <= timer - 1;
            shift_ena <= 1;  // Keep shift_ena high while timer is decrementing
        end else begin
            // Once the timer reaches 0, set shift_ena to 0
            shift_ena <= 0;
        end
    end

endmodule

