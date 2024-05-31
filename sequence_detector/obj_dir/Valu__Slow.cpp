// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu.h"
#include "Valu__Syms.h"

//==========
CData/*3:0*/ Valu::__Vtable1_alu__DOT__state[64];

VL_CTOR_IMP(Valu) {
    Valu__Syms* __restrict vlSymsp = __VlSymsp = new Valu__Syms(this, name());
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Valu::__Vconfigure(Valu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Valu::~Valu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Valu::_settle__TOP__2(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_settle__TOP__2\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->start_shifting = (4U == (IData)(vlTOPp->alu__DOT__state));
    vlTOPp->state_out = vlTOPp->alu__DOT__state;
}

void Valu::_eval_initial(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval_initial\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Valu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::final\n"); );
    // Variables
    Valu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu::_eval_settle(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval_settle\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Valu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    data = VL_RAND_RESET_I(1);
    start_shifting = VL_RAND_RESET_I(1);
    state_out = VL_RAND_RESET_I(4);
    alu__DOT__state = VL_RAND_RESET_I(4);
    __Vtable1_alu__DOT__state[0] = 0U;
    __Vtable1_alu__DOT__state[1] = 0U;
    __Vtable1_alu__DOT__state[2] = 0U;
    __Vtable1_alu__DOT__state[3] = 0U;
    __Vtable1_alu__DOT__state[4] = 3U;
    __Vtable1_alu__DOT__state[5] = 0U;
    __Vtable1_alu__DOT__state[6] = 0U;
    __Vtable1_alu__DOT__state[7] = 0U;
    __Vtable1_alu__DOT__state[8] = 0U;
    __Vtable1_alu__DOT__state[9] = 0U;
    __Vtable1_alu__DOT__state[10] = 0U;
    __Vtable1_alu__DOT__state[11] = 0U;
    __Vtable1_alu__DOT__state[12] = 0U;
    __Vtable1_alu__DOT__state[13] = 0U;
    __Vtable1_alu__DOT__state[14] = 0U;
    __Vtable1_alu__DOT__state[15] = 0U;
    __Vtable1_alu__DOT__state[16] = 0U;
    __Vtable1_alu__DOT__state[17] = 0U;
    __Vtable1_alu__DOT__state[18] = 0U;
    __Vtable1_alu__DOT__state[19] = 0U;
    __Vtable1_alu__DOT__state[20] = 0U;
    __Vtable1_alu__DOT__state[21] = 0U;
    __Vtable1_alu__DOT__state[22] = 0U;
    __Vtable1_alu__DOT__state[23] = 0U;
    __Vtable1_alu__DOT__state[24] = 0U;
    __Vtable1_alu__DOT__state[25] = 0U;
    __Vtable1_alu__DOT__state[26] = 0U;
    __Vtable1_alu__DOT__state[27] = 0U;
    __Vtable1_alu__DOT__state[28] = 0U;
    __Vtable1_alu__DOT__state[29] = 0U;
    __Vtable1_alu__DOT__state[30] = 0U;
    __Vtable1_alu__DOT__state[31] = 0U;
    __Vtable1_alu__DOT__state[32] = 1U;
    __Vtable1_alu__DOT__state[33] = 0U;
    __Vtable1_alu__DOT__state[34] = 2U;
    __Vtable1_alu__DOT__state[35] = 0U;
    __Vtable1_alu__DOT__state[36] = 0U;
    __Vtable1_alu__DOT__state[37] = 0U;
    __Vtable1_alu__DOT__state[38] = 4U;
    __Vtable1_alu__DOT__state[39] = 0U;
    __Vtable1_alu__DOT__state[40] = 0U;
    __Vtable1_alu__DOT__state[41] = 0U;
    __Vtable1_alu__DOT__state[42] = 0U;
    __Vtable1_alu__DOT__state[43] = 0U;
    __Vtable1_alu__DOT__state[44] = 0U;
    __Vtable1_alu__DOT__state[45] = 0U;
    __Vtable1_alu__DOT__state[46] = 0U;
    __Vtable1_alu__DOT__state[47] = 0U;
    __Vtable1_alu__DOT__state[48] = 0U;
    __Vtable1_alu__DOT__state[49] = 0U;
    __Vtable1_alu__DOT__state[50] = 0U;
    __Vtable1_alu__DOT__state[51] = 0U;
    __Vtable1_alu__DOT__state[52] = 0U;
    __Vtable1_alu__DOT__state[53] = 0U;
    __Vtable1_alu__DOT__state[54] = 0U;
    __Vtable1_alu__DOT__state[55] = 0U;
    __Vtable1_alu__DOT__state[56] = 0U;
    __Vtable1_alu__DOT__state[57] = 0U;
    __Vtable1_alu__DOT__state[58] = 0U;
    __Vtable1_alu__DOT__state[59] = 0U;
    __Vtable1_alu__DOT__state[60] = 0U;
    __Vtable1_alu__DOT__state[61] = 0U;
    __Vtable1_alu__DOT__state[62] = 0U;
    __Vtable1_alu__DOT__state[63] = 0U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
