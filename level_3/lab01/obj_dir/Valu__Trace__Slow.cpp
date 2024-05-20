// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


//======================

void Valu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Valu::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Valu::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Valu::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Valu::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"carry_in", false,-1);
        tracep->declBus(c+5,"in_a", false,-1, 15,0);
        tracep->declBus(c+6,"in_b", false,-1, 15,0);
        tracep->declBus(c+7,"sel", false,-1, 3,0);
        tracep->declBit(c+8,"mode", false,-1);
        tracep->declBit(c+9,"carry_out", false,-1);
        tracep->declBit(c+10,"compare", false,-1);
        tracep->declBus(c+11,"alu_out", false,-1, 15,0);
        tracep->declBit(c+4,"alu carry_in", false,-1);
        tracep->declBus(c+5,"alu in_a", false,-1, 15,0);
        tracep->declBus(c+6,"alu in_b", false,-1, 15,0);
        tracep->declBus(c+7,"alu sel", false,-1, 3,0);
        tracep->declBit(c+8,"alu mode", false,-1);
        tracep->declBit(c+9,"alu carry_out", false,-1);
        tracep->declBit(c+10,"alu compare", false,-1);
        tracep->declBus(c+11,"alu alu_out", false,-1, 15,0);
        tracep->declBus(c+1,"alu temp_a_out", false,-1, 15,0);
        tracep->declBus(c+2,"alu temp_l_out", false,-1, 15,0);
        tracep->declBit(c+3,"alu arithmetic_carry_out", false,-1);
        tracep->declBit(c+4,"alu myArithUnit carry_in", false,-1);
        tracep->declBus(c+5,"alu myArithUnit in_a", false,-1, 15,0);
        tracep->declBus(c+6,"alu myArithUnit in_b", false,-1, 15,0);
        tracep->declBus(c+7,"alu myArithUnit sel", false,-1, 3,0);
        tracep->declBit(c+3,"alu myArithUnit carry_out", false,-1);
        tracep->declBus(c+1,"alu myArithUnit alu_out", false,-1, 15,0);
        tracep->declBus(c+5,"alu myLogicUnit in_a", false,-1, 15,0);
        tracep->declBus(c+6,"alu myLogicUnit in_b", false,-1, 15,0);
        tracep->declBus(c+7,"alu myLogicUnit sel", false,-1, 3,0);
        tracep->declBus(c+2,"alu myLogicUnit alu_out", false,-1, 15,0);
    }
}

void Valu::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Valu::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Valu::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->alu__DOT__temp_a_out),16);
        tracep->fullSData(oldp+2,(vlTOPp->alu__DOT__temp_l_out),16);
        tracep->fullBit(oldp+3,(vlTOPp->alu__DOT__arithmetic_carry_out));
        tracep->fullBit(oldp+4,(vlTOPp->carry_in));
        tracep->fullSData(oldp+5,(vlTOPp->in_a),16);
        tracep->fullSData(oldp+6,(vlTOPp->in_b),16);
        tracep->fullCData(oldp+7,(vlTOPp->sel),4);
        tracep->fullBit(oldp+8,(vlTOPp->mode));
        tracep->fullBit(oldp+9,(vlTOPp->carry_out));
        tracep->fullBit(oldp+10,(vlTOPp->compare));
        tracep->fullSData(oldp+11,(vlTOPp->alu_out),16);
    }
}
