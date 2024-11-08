// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitty.h for the primary calling header

#include "VBitty.h"
#include "VBitty__Syms.h"

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
    vlTOPp->Bitty__DOT__ControlUnit1__DOT__state = 
        ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__next_state));
    vlTOPp->done = (1U & (((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                           >> 1U) & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))));
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst = 1U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_c 
            = (1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state));
    }
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_s 
            = (1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)));
    }
}

VL_INLINE_OPT void VBitty::_sequent__TOP__2(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_sequent__TOP__2\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Bitty__DOT__reg_en[0xaU]) {
        vlTOPp->Bitty__DOT____Vcellout__reg_inst__out 
            = vlTOPp->Bitty__DOT__d_in[0xaU];
    }
    if (vlTOPp->Bitty__DOT__reg_en[9U]) {
        vlTOPp->Bitty__DOT____Vcellout__reg7__out = 
            vlTOPp->Bitty__DOT__d_in[9U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[8U]) {
        vlTOPp->Bitty__DOT____Vcellout__reg6__out = 
            vlTOPp->Bitty__DOT__d_in[8U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[7U]) {
        vlTOPp->Bitty__DOT____Vcellout__reg5__out = 
            vlTOPp->Bitty__DOT__d_in[7U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[6U]) {
        vlTOPp->Bitty__DOT____Vcellout__reg4__out = 
            vlTOPp->Bitty__DOT__d_in[6U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[5U]) {
        vlTOPp->Bitty__DOT____Vcellout__reg3__out = 
            vlTOPp->Bitty__DOT__d_in[5U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[4U]) {
        vlTOPp->Bitty__DOT____Vcellout__reg2__out = 
            vlTOPp->Bitty__DOT__d_in[4U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[3U]) {
        vlTOPp->Bitty__DOT____Vcellout__reg1__out = 
            vlTOPp->Bitty__DOT__d_in[3U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[2U]) {
        vlTOPp->Bitty__DOT____Vcellout__reg0__out = 
            vlTOPp->Bitty__DOT__d_in[2U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[0U]) {
        vlTOPp->Bitty__DOT____Vcellout__regS__out = 
            vlTOPp->Bitty__DOT__d_in[0U];
    }
    if (vlTOPp->Bitty__DOT__reg_en[1U]) {
        vlTOPp->Bitty__DOT____Vcellout__regC__out = 
            vlTOPp->Bitty__DOT__d_in[1U];
    }
    vlTOPp->Bitty__DOT__d_out[0xaU] = vlTOPp->Bitty__DOT____Vcellout__reg_inst__out;
    vlTOPp->Bitty__DOT__d_out[9U] = vlTOPp->Bitty__DOT____Vcellout__reg7__out;
    vlTOPp->Bitty__DOT__d_out[8U] = vlTOPp->Bitty__DOT____Vcellout__reg6__out;
    vlTOPp->Bitty__DOT__d_out[7U] = vlTOPp->Bitty__DOT____Vcellout__reg5__out;
    vlTOPp->Bitty__DOT__d_out[6U] = vlTOPp->Bitty__DOT____Vcellout__reg4__out;
    vlTOPp->Bitty__DOT__d_out[5U] = vlTOPp->Bitty__DOT____Vcellout__reg3__out;
    vlTOPp->Bitty__DOT__d_out[4U] = vlTOPp->Bitty__DOT____Vcellout__reg2__out;
    vlTOPp->Bitty__DOT__d_out[3U] = vlTOPp->Bitty__DOT____Vcellout__reg1__out;
    vlTOPp->Bitty__DOT__d_out[2U] = vlTOPp->Bitty__DOT____Vcellout__reg0__out;
    vlTOPp->Bitty__DOT__d_out[0U] = vlTOPp->Bitty__DOT____Vcellout__regS__out;
    vlTOPp->Bitty__DOT__d_out[1U] = vlTOPp->Bitty__DOT____Vcellout__regC__out;
    vlTOPp->dout[0xaU] = vlTOPp->Bitty__DOT__d_out[0xaU];
    vlTOPp->dout[9U] = vlTOPp->Bitty__DOT__d_out[9U];
    vlTOPp->dout[8U] = vlTOPp->Bitty__DOT__d_out[8U];
    vlTOPp->dout[7U] = vlTOPp->Bitty__DOT__d_out[7U];
    vlTOPp->dout[6U] = vlTOPp->Bitty__DOT__d_out[6U];
    vlTOPp->dout[5U] = vlTOPp->Bitty__DOT__d_out[5U];
    vlTOPp->dout[4U] = vlTOPp->Bitty__DOT__d_out[4U];
    vlTOPp->dout[3U] = vlTOPp->Bitty__DOT__d_out[3U];
    vlTOPp->dout[2U] = vlTOPp->Bitty__DOT__d_out[2U];
    vlTOPp->dout[1U] = vlTOPp->Bitty__DOT__d_out[1U];
    vlTOPp->dout[0U] = vlTOPp->Bitty__DOT__d_out[0U];
}

VL_INLINE_OPT void VBitty::_combo__TOP__4(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_combo__TOP__4\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Bitty__DOT__ControlUnit1__DOT__next_state 
        = ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))
            ? ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))
                ? ((IData)(vlTOPp->run) ? 0U : 3U) : 3U)
            : ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))
                ? 2U : 1U));
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
            vlTOPp->Bitty__DOT__mode = (1U & ((IData)(vlTOPp->din) 
                                              >> 2U));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
            vlTOPp->Bitty__DOT__alu_sel = (0xfU & ((IData)(vlTOPp->din) 
                                                   >> 3U));
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & (IData)(vlTOPp->din))) {
                if ((1U & (~ ((IData)(vlTOPp->din) 
                              >> 0xeU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->din) 
                                  >> 0xdU)))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & (IData)(vlTOPp->din))) {
                if ((1U & (~ ((IData)(vlTOPp->din) 
                              >> 0xeU)))) {
                    if ((0x2000U & (IData)(vlTOPp->din))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & (IData)(vlTOPp->din))) {
                if ((0x4000U & (IData)(vlTOPp->din))) {
                    if ((1U & (~ ((IData)(vlTOPp->din) 
                                  >> 0xdU)))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & (IData)(vlTOPp->din))) {
                if ((0x4000U & (IData)(vlTOPp->din))) {
                    if ((0x2000U & (IData)(vlTOPp->din))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ ((IData)(vlTOPp->din) >> 0xfU)))) {
                if ((0x4000U & (IData)(vlTOPp->din))) {
                    if ((0x2000U & (IData)(vlTOPp->din))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ ((IData)(vlTOPp->din) >> 0xfU)))) {
                if ((0x4000U & (IData)(vlTOPp->din))) {
                    if ((1U & (~ ((IData)(vlTOPp->din) 
                                  >> 0xdU)))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ ((IData)(vlTOPp->din) >> 0xfU)))) {
                if ((1U & (~ ((IData)(vlTOPp->din) 
                              >> 0xeU)))) {
                    if ((0x2000U & (IData)(vlTOPp->din))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ ((IData)(vlTOPp->din) >> 0xfU)))) {
                if ((1U & (~ ((IData)(vlTOPp->din) 
                              >> 0xeU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->din) 
                                  >> 0xdU)))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0 = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlTOPp->Bitty__DOT__mux_sel = (7U & ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))
                                              ? ((IData)(vlTOPp->din) 
                                                 >> 0xaU)
                                              : ((IData)(vlTOPp->din) 
                                                 >> 0xdU)));
    }
    vlTOPp->Bitty__DOT__reg_en[0xaU] = vlTOPp->regen
        [0xaU];
    vlTOPp->Bitty__DOT__reg_en[9U] = vlTOPp->regen[9U];
    vlTOPp->Bitty__DOT__reg_en[8U] = vlTOPp->regen[8U];
    vlTOPp->Bitty__DOT__reg_en[7U] = vlTOPp->regen[7U];
    vlTOPp->Bitty__DOT__reg_en[6U] = vlTOPp->regen[6U];
    vlTOPp->Bitty__DOT__reg_en[5U] = vlTOPp->regen[5U];
    vlTOPp->Bitty__DOT__reg_en[4U] = vlTOPp->regen[4U];
    vlTOPp->Bitty__DOT__reg_en[3U] = vlTOPp->regen[3U];
    vlTOPp->Bitty__DOT__reg_en[2U] = vlTOPp->regen[2U];
    vlTOPp->Bitty__DOT__reg_en[1U] = vlTOPp->regen[1U];
    vlTOPp->Bitty__DOT__reg_en[0U] = vlTOPp->regen[0U];
    vlTOPp->Bitty__DOT__reg_en[6U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4;
    vlTOPp->Bitty__DOT__reg_en[7U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5;
    vlTOPp->Bitty__DOT__reg_en[8U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6;
    vlTOPp->Bitty__DOT__reg_en[9U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7;
    vlTOPp->Bitty__DOT__reg_en[5U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3;
    vlTOPp->Bitty__DOT__reg_en[4U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2;
    vlTOPp->Bitty__DOT__reg_en[3U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1;
    vlTOPp->Bitty__DOT__reg_en[2U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0;
    vlTOPp->Bitty__DOT__mux_out = ((4U & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                    ? ((2U & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                        ? ((1U & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                            ? vlTOPp->Bitty__DOT__d_out
                                           [9U] : vlTOPp->Bitty__DOT__d_out
                                           [8U]) : 
                                       ((1U & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                         ? vlTOPp->Bitty__DOT__d_out
                                        [7U] : vlTOPp->Bitty__DOT__d_out
                                        [6U])) : ((2U 
                                                   & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                                    ? 
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [5U]
                                                    : 
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [4U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                                    ? 
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [3U]
                                                    : 
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [2U])));
    if ((8U & (IData)(vlTOPp->Bitty__DOT__alu_sel))) {
        vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out 
            = (1U & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                      ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                          ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                              ? (1U & (((vlTOPp->Bitty__DOT__d_out
                                         [0U] - (IData)(1U)) 
                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                       >> 0x10U)) : 
                             (1U & ((((vlTOPp->Bitty__DOT__d_out
                                       [0U] + (0xffffU 
                                               & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                      + vlTOPp->Bitty__DOT__d_out
                                      [0U]) + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & ((((vlTOPp->Bitty__DOT__d_out
                                                          [0U] 
                                                          | (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                                         + 
                                                         vlTOPp->Bitty__DOT__d_out
                                                         [0U]) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & (((vlTOPp->Bitty__DOT__d_out
                                                         [0U] 
                                                         + 
                                                         vlTOPp->Bitty__DOT__d_out
                                                         [0U]) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))))
                      : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                          ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                              ? (1U & ((((vlTOPp->Bitty__DOT__d_out
                                          [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                         - (IData)(1U)) 
                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                       >> 0x10U)) : 
                             (1U & ((((vlTOPp->Bitty__DOT__d_out
                                       [0U] | (0xffffU 
                                               & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                      + (vlTOPp->Bitty__DOT__d_out
                                         [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                     + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & (((vlTOPp->Bitty__DOT__d_out
                                                         [0U] 
                                                         + (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & (((vlTOPp->Bitty__DOT__d_out
                                                         [0U] 
                                                         + 
                                                         (vlTOPp->Bitty__DOT__d_out
                                                          [0U] 
                                                          & (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))))));
        vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out = 
            (0xffffU & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                         ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? vlTOPp->Bitty__DOT__d_out
                                [0U] : (vlTOPp->Bitty__DOT__d_out
                                        [0U] | (IData)(vlTOPp->Bitty__DOT__mux_out)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (vlTOPp->Bitty__DOT__d_out
                                    [0U] | (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))
                                 : 1U)) : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                            ? ((1U 
                                                & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                ? (
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [0U] 
                                                   & (IData)(vlTOPp->Bitty__DOT__mux_out))
                                                : (IData)(vlTOPp->Bitty__DOT__mux_out))
                                            : ((1U 
                                                & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                ? (~ 
                                                   (vlTOPp->Bitty__DOT__d_out
                                                    [0U] 
                                                    ^ (IData)(vlTOPp->Bitty__DOT__mux_out)))
                                                : (
                                                   (~ 
                                                    vlTOPp->Bitty__DOT__d_out
                                                    [0U]) 
                                                   | (IData)(vlTOPp->Bitty__DOT__mux_out))))));
        vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out = 
            (0xffffU & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                         ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? ((vlTOPp->Bitty__DOT__d_out
                                     [0U] - (IData)(1U)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (((vlTOPp->Bitty__DOT__d_out
                                      [0U] + (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                     + vlTOPp->Bitty__DOT__d_out
                                     [0U]) + (IData)(vlTOPp->Bitty__DOT__carry_in)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (((vlTOPp->Bitty__DOT__d_out
                                      [0U] | (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                     + vlTOPp->Bitty__DOT__d_out
                                     [0U]) + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : ((vlTOPp->Bitty__DOT__d_out
                                     [0U] + vlTOPp->Bitty__DOT__d_out
                                     [0U]) + (IData)(vlTOPp->Bitty__DOT__carry_in))))
                         : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (((vlTOPp->Bitty__DOT__d_out
                                      [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                     - (IData)(1U)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (((vlTOPp->Bitty__DOT__d_out
                                      [0U] | (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                     + (vlTOPp->Bitty__DOT__d_out
                                        [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? ((vlTOPp->Bitty__DOT__d_out
                                     [0U] + (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : ((vlTOPp->Bitty__DOT__d_out
                                     [0U] + (vlTOPp->Bitty__DOT__d_out
                                             [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))))));
    } else {
        vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out 
            = (1U & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                      ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                          ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                              ? (1U & ((((0xffffU & 
                                          (vlTOPp->Bitty__DOT__d_out
                                           [0U] & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                         - (IData)(1U)) 
                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                       >> 0x10U)) : 
                             (1U & ((((vlTOPp->Bitty__DOT__d_out
                                       [0U] - (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                      - (IData)(1U)) 
                                     + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & ((((vlTOPp->Bitty__DOT__d_out
                                                          [0U] 
                                                          | (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                                         + 
                                                         (~ 
                                                          (vlTOPp->Bitty__DOT__d_out
                                                           [0U] 
                                                           & (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & ((vlTOPp->Bitty__DOT__d_out
                                                        [0U] 
                                                        | ((0xffffU 
                                                            & (vlTOPp->Bitty__DOT__d_out
                                                               [0U] 
                                                               & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                                           + (IData)(vlTOPp->Bitty__DOT__carry_in))) 
                                                       >> 0x10U))))
                      : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                          ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                              ? (1U & (((IData)(0x10001U) 
                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                       >> 0x10U)) : 
                             (1U & ((vlTOPp->Bitty__DOT__d_out
                                     [0U] | ((0xffffU 
                                              & (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                             + (IData)(vlTOPp->Bitty__DOT__carry_in))) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & ((vlTOPp->Bitty__DOT__d_out
                                                        [0U] 
                                                        | ((IData)(vlTOPp->Bitty__DOT__mux_out) 
                                                           + (IData)(vlTOPp->Bitty__DOT__carry_in))) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & ((vlTOPp->Bitty__DOT__d_out
                                                        [0U] 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))))));
        vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out = 
            (0xffffU & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                         ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (vlTOPp->Bitty__DOT__d_out
                                    [0U] & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))
                                 : (vlTOPp->Bitty__DOT__d_out
                                    [0U] ^ (IData)(vlTOPp->Bitty__DOT__mux_out)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (~ (IData)(vlTOPp->Bitty__DOT__mux_out))
                                 : (~ (vlTOPp->Bitty__DOT__d_out
                                       [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out)))))
                         : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? 0U : ((~ vlTOPp->Bitty__DOT__d_out
                                          [0U]) & (IData)(vlTOPp->Bitty__DOT__mux_out)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (~ (vlTOPp->Bitty__DOT__d_out
                                       [0U] | (IData)(vlTOPp->Bitty__DOT__mux_out)))
                                 : (~ vlTOPp->Bitty__DOT__d_out
                                    [0U])))));
        vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out = 
            (0xffffU & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                         ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (((vlTOPp->Bitty__DOT__d_out
                                      [0U] & (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                     - (IData)(1U)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (((vlTOPp->Bitty__DOT__d_out
                                      [0U] - (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                     - (IData)(1U)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (((vlTOPp->Bitty__DOT__d_out
                                      [0U] | (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                     + (~ (vlTOPp->Bitty__DOT__d_out
                                           [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (vlTOPp->Bitty__DOT__d_out
                                    [0U] | ((vlTOPp->Bitty__DOT__d_out
                                             [0U] & 
                                             (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                            + (IData)(vlTOPp->Bitty__DOT__carry_in)))))
                         : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? ((IData)(1U) + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (vlTOPp->Bitty__DOT__d_out
                                    [0U] | ((~ (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                            + (IData)(vlTOPp->Bitty__DOT__carry_in))))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (vlTOPp->Bitty__DOT__d_out
                                    [0U] | ((IData)(vlTOPp->Bitty__DOT__mux_out) 
                                            + (IData)(vlTOPp->Bitty__DOT__carry_in)))
                                 : (vlTOPp->Bitty__DOT__d_out
                                    [0U] + (IData)(vlTOPp->Bitty__DOT__carry_in))))));
    }
    if (vlTOPp->Bitty__DOT__mode) {
        if (vlTOPp->Bitty__DOT__mode) {
            vlTOPp->Bitty__DOT__carry_out = 0U;
        }
    } else {
        vlTOPp->Bitty__DOT__carry_out = vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out;
    }
    if (vlTOPp->Bitty__DOT__mode) {
        if (vlTOPp->Bitty__DOT__mode) {
            vlTOPp->Bitty__DOT__alu_out = vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out;
        }
    } else {
        vlTOPp->Bitty__DOT__alu_out = vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out;
    }
    vlTOPp->Bitty__DOT__d_in[1U] = vlTOPp->Bitty__DOT__alu_out;
}

VL_INLINE_OPT void VBitty::_sequent__TOP__5(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_sequent__TOP__5\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Bitty__DOT__reg_en[0xaU] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst;
    vlTOPp->Bitty__DOT__reg_en[1U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_c;
    vlTOPp->Bitty__DOT__reg_en[0U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_s;
}

VL_INLINE_OPT void VBitty::_combo__TOP__6(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_combo__TOP__6\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Bitty__DOT__d_in[2U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [2U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [2U]);
    vlTOPp->Bitty__DOT__d_in[3U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [3U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [3U]);
    vlTOPp->Bitty__DOT__d_in[4U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [4U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [4U]);
    vlTOPp->Bitty__DOT__d_in[5U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [5U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [5U]);
    vlTOPp->Bitty__DOT__d_in[6U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [6U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [6U]);
    vlTOPp->Bitty__DOT__d_in[7U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [7U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [7U]);
    vlTOPp->Bitty__DOT__d_in[8U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [8U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [8U]);
    vlTOPp->Bitty__DOT__d_in[9U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [9U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [9U]);
}

void VBitty::_eval(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_eval\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
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
    if (VL_UNLIKELY((write & 0xfeU))) {
        Verilated::overWidthError("write");}
    if (VL_UNLIKELY((run & 0xfeU))) {
        Verilated::overWidthError("run");}
}
#endif  // VL_DEBUG
