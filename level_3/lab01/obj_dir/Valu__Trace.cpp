// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Valu::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->alu__DOT__temp_a_out),16);
            tracep->chgSData(oldp+1,(vlTOPp->alu__DOT__temp_l_out),16);
            tracep->chgBit(oldp+2,(vlTOPp->alu__DOT__arithmetic_carry_out));
        }
        tracep->chgBit(oldp+3,(vlTOPp->carry_in));
        tracep->chgSData(oldp+4,(vlTOPp->in_a),16);
        tracep->chgSData(oldp+5,(vlTOPp->in_b),16);
        tracep->chgCData(oldp+6,(vlTOPp->sel),4);
        tracep->chgBit(oldp+7,(vlTOPp->mode));
        tracep->chgBit(oldp+8,(vlTOPp->carry_out));
        tracep->chgBit(oldp+9,(vlTOPp->compare));
        tracep->chgSData(oldp+10,(vlTOPp->alu_out),16);
    }
}

void Valu::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
