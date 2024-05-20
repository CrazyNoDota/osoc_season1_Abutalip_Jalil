#include "Valu.h"
#include "verilated.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Valu* top = new Valu;

    // Test case 1: ADD (Arithmetic mode)
    top->carry_in = 2;
    top->in_a = 900000;         // 3
    top->in_b = 5;         // 5
    top->sel = 9;          // ADD operation
    top->mode = 0;         // Arithmetic mode
    top->eval();
    printf("in_a: 3 , in_b: 5, ADD Result: %d, Carry Out: %d ,\n", top->alu_out, top->carry_out); // Expected: 8, Carry Out: 0

    // Test case 2: SUB (Arithmetic mode)
    top->carry_in = 0;
    top->in_a = 9;         // 9
    top->in_b = 4;         // 4
    top->sel = 6;          // SUB operation
    top->mode = 0;         // Arithmetic mode
    top->eval();
    printf("SUB Result: %d, Carry Out: %d Expected: 5 \n", top->alu_out, top->carry_out); // Expected: 5, Carry Out: 0

    // Test case 3: AND (Logic mode)
    top->in_a = 6;         // 0110
    top->in_b = 11;        // 1011
    top->sel = 11;         // AND operation
    top->mode = 1;         // Logic mode
    top->eval();
    printf("AND Result: %d\n", top->alu_out); // Expected: 2

    // Test case 4: OR (Logic mode)
    top->in_a = 6;         // 0110
    top->in_b = 9;         // 1001
    top->sel = 14;         // OR operation
    top->mode = 1;         // Logic mode
    top->eval();
    printf("OR Result: %d\n", top->alu_out); // Expected: 15

    // Test case 5: Compare (Arithmetic mode)
    top->in_a = 10;         // 10
    top->in_b = 10;         // 10
    top->mode = 0;         // Arithmetic mode
    top->eval();
    printf("Compare Result: %d\n", top->compare); // Expected: 1 (True)

    // Test case 6: Compare (Logic mode)
    top->in_a = 10;         // 10
    top->in_b = 5;          // 5
    top->mode = 1;         // Logic mode
    top->eval();
    printf("Compare Result: %d\n", top->compare); // Expected: 0 (False)

    delete top;
    return 0;
}
