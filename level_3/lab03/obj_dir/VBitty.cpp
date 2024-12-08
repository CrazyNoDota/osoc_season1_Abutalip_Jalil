// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitty.h for the primary calling header

#include "VBitty.h"
#include "VBitty__Syms.h"

#include "verilated_dpi.h"

//==========

void VBitty::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBitty::eval\n"); );
    VBitty__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Bitty.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBitty::_eval_initial_loop(VBitty__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Bitty.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBitty::_sequent__TOP__1(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_sequent__TOP__1\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->done = vlSymsp->TOP__Bitty.done;
    vlTOPp->dout[0xaU] = vlSymsp->TOP__Bitty.dout[0xaU];
    vlTOPp->dout[9U] = vlSymsp->TOP__Bitty.dout[9U];
    vlTOPp->dout[8U] = vlSymsp->TOP__Bitty.dout[8U];
    vlTOPp->dout[7U] = vlSymsp->TOP__Bitty.dout[7U];
    vlTOPp->dout[6U] = vlSymsp->TOP__Bitty.dout[6U];
    vlTOPp->dout[5U] = vlSymsp->TOP__Bitty.dout[5U];
    vlTOPp->dout[4U] = vlSymsp->TOP__Bitty.dout[4U];
    vlTOPp->dout[3U] = vlSymsp->TOP__Bitty.dout[3U];
    vlTOPp->dout[2U] = vlSymsp->TOP__Bitty.dout[2U];
    vlTOPp->dout[1U] = vlSymsp->TOP__Bitty.dout[1U];
    vlTOPp->dout[0U] = vlSymsp->TOP__Bitty.dout[0U];
}

VL_INLINE_OPT void VBitty::_settle__TOP__2(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_settle__TOP__2\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Bitty.init_data[7U] = vlTOPp->init_data
        [7U];
    vlSymsp->TOP__Bitty.init_data[6U] = vlTOPp->init_data
        [6U];
    vlSymsp->TOP__Bitty.init_data[5U] = vlTOPp->init_data
        [5U];
    vlSymsp->TOP__Bitty.init_data[4U] = vlTOPp->init_data
        [4U];
    vlSymsp->TOP__Bitty.init_data[3U] = vlTOPp->init_data
        [3U];
    vlSymsp->TOP__Bitty.init_data[2U] = vlTOPp->init_data
        [2U];
    vlSymsp->TOP__Bitty.init_data[1U] = vlTOPp->init_data
        [1U];
    vlSymsp->TOP__Bitty.init_data[0U] = vlTOPp->init_data
        [0U];
}

void VBitty::_eval(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_eval\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlSymsp->TOP__Bitty._sequent__TOP__Bitty__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__Bitty._combo__TOP__Bitty__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VBitty::_change_request(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_change_request\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBitty::_change_request_1(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_change_request_1\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBitty::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((run & 0xfeU))) {
        Verilated::overWidthError("run");}
    if (VL_UNLIKELY((init_en & 0xfeU))) {
        Verilated::overWidthError("init_en");}
}
#endif  // VL_DEBUG
