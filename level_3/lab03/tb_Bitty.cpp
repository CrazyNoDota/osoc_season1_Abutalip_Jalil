#include "VBitty.h"
#include <verilated.h>
#include "verilated_vcd_c.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_SIM_CYCLES 300

class Bitty {
    uint32_t result;

public:
    int Rx, Ry, alu_sel, mode;
    uint16_t registers[12];

    void fill(int reg, uint16_t data) {
        registers[reg] = data;
    }

    uint32_t evaluate() {
        uint16_t output = 0;
        if (mode == 1) { // Logic operation
            switch (alu_sel) {
            case 0:  output = ~registers[Rx]; break;
            case 1:  output = ~(registers[Rx] | registers[Ry]); break;
            case 2:  output = (~registers[Rx]) & registers[Ry]; break;
            case 3:  output = 0; break;
            case 4:  output = ~(registers[Rx] & registers[Ry]); break;
            case 5:  output = ~registers[Ry]; break;
            case 6:  output = registers[Rx] ^ registers[Ry]; break;
            case 7:  output = registers[Rx] & (~registers[Ry]); break;
            case 8:  output = (~registers[Rx]) | registers[Ry]; break;
            case 9:  output = ~(registers[Rx] ^ registers[Ry]); break;
            case 10: output = registers[Ry]; break;
            case 11: output = registers[Rx] & registers[Ry]; break;
            case 12: output = 1; break;
            case 13: output = registers[Rx] | (~registers[Ry]); break;
            case 14: output = registers[Rx] | registers[Ry]; break;
            case 15: output = registers[Rx]; break;
            default: output = 0; break;
            }
        } else { // Arithmetic operation
            switch (alu_sel) {
            case 0:  output = registers[Rx] + 0; break;
            case 1:  output = registers[Rx] | registers[Ry] + 0; break;
            case 2:  output = registers[Rx] | (~registers[Ry]) + 0; break;
            case 3:  output = -1; break;
            case 4:  output = registers[Rx] | (registers[Rx] & (~registers[Ry])) + 0; break;
            case 5:  output = (registers[Rx] | registers[Ry]) + (~(registers[Rx] & registers[Ry])) + 0; break;
            case 6:  output = registers[Rx] - registers[Ry] - 1 + 0; break;
            case 7:  output = (registers[Rx] & (~registers[Ry])) - 1 + 0; break;
            case 8:  output = registers[Rx] + (registers[Rx] & registers[Ry]) + 0; break;
            case 9:  output = registers[Rx] + registers[Ry] + 0; break;
            case 10: output = (registers[Rx] | (~registers[Ry])) + (registers[Rx] & registers[Ry]) + 0; break;
            case 11: output = (registers[Rx] & registers[Ry]) - 1 + 0; break;
            case 12: output = registers[Rx] + registers[Rx] + 0; break;
            case 13: output = (registers[Rx] | registers[Ry]) + registers[Rx] + 0; break;
            case 14: output = (registers[Rx] + (~registers[Ry])) + registers[Rx] + 0; break;
            case 15: output = registers[Rx] - 1 + 0; break;
            default: output = 0; break;
            }
        }
        registers[Rx] = output;
        return output;
    }

    int32_t generate_inst() {
        uint16_t inst = 0;
        Rx = rand() % 8;
        Ry = rand() % 8;
        alu_sel = rand() % 16;
        mode = rand() % 2;
        inst |= (Rx << 13);
        inst |= (Ry << 10);
        inst |= (alu_sel << 3);
        inst |= (mode << 2);
        return inst;
    }
};

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    VBitty* top = new VBitty;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    srand(time(nullptr));
    Bitty bitty;

    int cycle = 0;

    // Reset the design
    top->clk = 0;
    top->reset = 1;
    top->run = 0;
    top->init_en = 0;
    top->eval();
    tfp->dump(cycle++);

    top->clk = 1;
    top->eval();
    tfp->dump(cycle++);

    // Release reset
    top->reset = 0;
    top->clk = 0;
    top->eval();
    tfp->dump(cycle++);

    // Initialize the registers
    int register_data[10] = {0, 0, 1, 2, 3, 4, 5, 6, 7, 8};

    // Load initial values into the simulator's model
    for (int i = 2; i <= 9; i++) {
        bitty.fill(i, register_data[i]);
    }

    // Initialize the module's registers via init_en and init_data
    top->init_en = 1;
    for (int i = 0; i < 8; i++) {
        top->init_data[i] = register_data[i + 2]; // Registers 2 to 9
    }

    // Clock the module to load initial values
    for (int init_cycle = 0; init_cycle < 2; init_cycle++) {
        top->clk ^= 1;
        top->eval();
        tfp->dump(cycle++);
    }

    // Disable initialization
    top->init_en = 0;

    int state = 0; // 0: initial, 1: waiting for done, 2: check result
    uint32_t test_value = 0;

    for (; cycle < MAX_SIM_CYCLES; cycle++) {
        top->clk ^= 1;
        top->eval();
        tfp->dump(cycle);

        if (top->clk == 1) { // Rising edge
            if (state == 0) {
                uint16_t inst = bitty.generate_inst();
                top->din = inst;
                top->run = 1;
                std::cout << "Instruction: " << std::hex << inst << "\n";
                test_value = bitty.evaluate();
                state = 1;
            } else if (state == 1) {
                if (top->done) {
                    state = 2;
                }
            } else if (state == 2) {
                top->run = 0;
                uint32_t module_output = top->dout[bitty.Rx];
                if (test_value != module_output) {
                    std::cout << "Failed testcase: Expected " << std::hex << test_value
                              << ", got " << std::hex << module_output
                              << " in register " << bitty.Rx << "\n";
                } else {
                    std::cout << "Passed testcase: Output " << std::hex << module_output
                              << " in register " << bitty.Rx << "\n";
                }
                state = 0;
            }
        }
    }

    tfp->close();
    delete top;
    return 0;
}
