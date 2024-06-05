// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitty.h for the primary calling header

#include "VBitty.h"
#include "VBitty__Syms.h"

//==========

VL_CTOR_IMP(VBitty) {
    VBitty__Syms* __restrict vlSymsp = __VlSymsp = new VBitty__Syms(this, name());
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBitty::__Vconfigure(VBitty__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VBitty::~VBitty() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VBitty::_eval_initial(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_eval_initial\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VBitty::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::final\n"); );
    // Variables
    VBitty__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBitty::_eval_settle(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_eval_settle\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBitty::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    din = VL_RAND_RESET_I(16);
    done = VL_RAND_RESET_I(1);
}
