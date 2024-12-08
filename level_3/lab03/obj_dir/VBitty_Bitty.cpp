// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitty.h for the primary calling header

#include "VBitty_Bitty.h"
#include "VBitty__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VBitty_Bitty::_sequent__TOP__Bitty__1(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBitty_Bitty::_sequent__TOP__Bitty__1\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__next_state));
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst__out = 0U;
    } else {
        if (vlSymsp->TOP__Bitty.reg_en[0xaU]) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst__out 
                = vlTOPp->din;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__regS__out = 0U;
    } else {
        if (vlSymsp->TOP__Bitty.reg_en[0U]) {
            vlSymsp->TOP__Bitty.__Vcellout__regS__out 
                = vlSymsp->TOP__Bitty.d_in[0U];
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__regC__out = 0U;
    } else {
        if (vlSymsp->TOP__Bitty.reg_en[1U]) {
            vlSymsp->TOP__Bitty.__Vcellout__regC__out 
                = vlSymsp->TOP__Bitty.d_in[1U];
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__9__KET____DOT__regN__out = 0U;
    } else {
        if ((vlSymsp->TOP__Bitty.reg_en[9U] | (IData)(vlTOPp->init_en))) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__9__KET____DOT__regN__out 
                = ((IData)(vlTOPp->init_en) ? vlSymsp->TOP__Bitty.init_data
                   [7U] : vlSymsp->TOP__Bitty.d_in[9U]);
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__8__KET____DOT__regN__out = 0U;
    } else {
        if ((vlSymsp->TOP__Bitty.reg_en[8U] | (IData)(vlTOPp->init_en))) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__8__KET____DOT__regN__out 
                = ((IData)(vlTOPp->init_en) ? vlSymsp->TOP__Bitty.init_data
                   [6U] : vlSymsp->TOP__Bitty.d_in[8U]);
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__7__KET____DOT__regN__out = 0U;
    } else {
        if ((vlSymsp->TOP__Bitty.reg_en[7U] | (IData)(vlTOPp->init_en))) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__7__KET____DOT__regN__out 
                = ((IData)(vlTOPp->init_en) ? vlSymsp->TOP__Bitty.init_data
                   [5U] : vlSymsp->TOP__Bitty.d_in[7U]);
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__6__KET____DOT__regN__out = 0U;
    } else {
        if ((vlSymsp->TOP__Bitty.reg_en[6U] | (IData)(vlTOPp->init_en))) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__6__KET____DOT__regN__out 
                = ((IData)(vlTOPp->init_en) ? vlSymsp->TOP__Bitty.init_data
                   [4U] : vlSymsp->TOP__Bitty.d_in[6U]);
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__5__KET____DOT__regN__out = 0U;
    } else {
        if ((vlSymsp->TOP__Bitty.reg_en[5U] | (IData)(vlTOPp->init_en))) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__5__KET____DOT__regN__out 
                = ((IData)(vlTOPp->init_en) ? vlSymsp->TOP__Bitty.init_data
                   [3U] : vlSymsp->TOP__Bitty.d_in[5U]);
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__4__KET____DOT__regN__out = 0U;
    } else {
        if ((vlSymsp->TOP__Bitty.reg_en[4U] | (IData)(vlTOPp->init_en))) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__4__KET____DOT__regN__out 
                = ((IData)(vlTOPp->init_en) ? vlSymsp->TOP__Bitty.init_data
                   [2U] : vlSymsp->TOP__Bitty.d_in[4U]);
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__3__KET____DOT__regN__out = 0U;
    } else {
        if ((vlSymsp->TOP__Bitty.reg_en[3U] | (IData)(vlTOPp->init_en))) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__3__KET____DOT__regN__out 
                = ((IData)(vlTOPp->init_en) ? vlSymsp->TOP__Bitty.init_data
                   [1U] : vlSymsp->TOP__Bitty.d_in[3U]);
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__2__KET____DOT__regN__out = 0U;
    } else {
        if ((vlSymsp->TOP__Bitty.reg_en[2U] | (IData)(vlTOPp->init_en))) {
            vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__2__KET____DOT__regN__out 
                = ((IData)(vlTOPp->init_en) ? vlSymsp->TOP__Bitty.init_data
                   [0U] : vlSymsp->TOP__Bitty.d_in[2U]);
        }
    }
    vlSymsp->TOP__Bitty.done = (1U & (((IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state) 
                                       >> 1U) & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))));
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_c = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_c 
            = (1U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state));
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_s = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_s 
            = (1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)));
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_inst = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_inst = 1U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_inst = 0U;
        }
    }
    vlSymsp->TOP__Bitty.d_out[0xaU] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst__out;
    vlSymsp->TOP__Bitty.d_out[0U] = vlSymsp->TOP__Bitty.__Vcellout__regS__out;
    vlSymsp->TOP__Bitty.d_out[1U] = vlSymsp->TOP__Bitty.__Vcellout__regC__out;
    vlSymsp->TOP__Bitty.d_out[9U] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__9__KET____DOT__regN__out;
    vlSymsp->TOP__Bitty.d_out[8U] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__8__KET____DOT__regN__out;
    vlSymsp->TOP__Bitty.d_out[7U] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__7__KET____DOT__regN__out;
    vlSymsp->TOP__Bitty.d_out[6U] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__6__KET____DOT__regN__out;
    vlSymsp->TOP__Bitty.d_out[5U] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__5__KET____DOT__regN__out;
    vlSymsp->TOP__Bitty.d_out[4U] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__4__KET____DOT__regN__out;
    vlSymsp->TOP__Bitty.d_out[3U] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__3__KET____DOT__regN__out;
    vlSymsp->TOP__Bitty.d_out[2U] = vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__2__KET____DOT__regN__out;
    vlSymsp->TOP__Bitty.reg_en[1U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_c;
    vlSymsp->TOP__Bitty.reg_en[0U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_s;
    vlSymsp->TOP__Bitty.reg_en[0xaU] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_inst;
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_7 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & vlSymsp->TOP__Bitty.d_out
                 [0xaU])) {
                if ((0x4000U & vlSymsp->TOP__Bitty.d_out
                     [0xaU])) {
                    if ((0x2000U & vlSymsp->TOP__Bitty.d_out
                         [0xaU])) {
                        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_7 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_7 = 0U;
        }
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_6 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & vlSymsp->TOP__Bitty.d_out
                 [0xaU])) {
                if ((0x4000U & vlSymsp->TOP__Bitty.d_out
                     [0xaU])) {
                    if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                                  [0xaU] >> 0xdU)))) {
                        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_6 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_6 = 0U;
        }
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_5 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & vlSymsp->TOP__Bitty.d_out
                 [0xaU])) {
                if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                              [0xaU] >> 0xeU)))) {
                    if ((0x2000U & vlSymsp->TOP__Bitty.d_out
                         [0xaU])) {
                        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_5 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_5 = 0U;
        }
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_4 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & vlSymsp->TOP__Bitty.d_out
                 [0xaU])) {
                if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                              [0xaU] >> 0xeU)))) {
                    if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                                  [0xaU] >> 0xdU)))) {
                        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_4 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_4 = 0U;
        }
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_3 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                          [0xaU] >> 0xfU)))) {
                if ((0x4000U & vlSymsp->TOP__Bitty.d_out
                     [0xaU])) {
                    if ((0x2000U & vlSymsp->TOP__Bitty.d_out
                         [0xaU])) {
                        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_3 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_3 = 0U;
        }
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_2 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                          [0xaU] >> 0xfU)))) {
                if ((0x4000U & vlSymsp->TOP__Bitty.d_out
                     [0xaU])) {
                    if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                                  [0xaU] >> 0xdU)))) {
                        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_2 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_2 = 0U;
        }
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_1 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                          [0xaU] >> 0xfU)))) {
                if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                              [0xaU] >> 0xeU)))) {
                    if ((0x2000U & vlSymsp->TOP__Bitty.d_out
                         [0xaU])) {
                        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_1 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_1 = 0U;
        }
    }
    vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_0 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                          [0xaU] >> 0xfU)))) {
                if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                              [0xaU] >> 0xeU)))) {
                    if ((1U & (~ (vlSymsp->TOP__Bitty.d_out
                                  [0xaU] >> 0xdU)))) {
                        vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_0 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state)))) {
            vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_0 = 0U;
        }
    }
    vlSymsp->TOP__Bitty.dout[0xaU] = vlSymsp->TOP__Bitty.d_out
        [0xaU];
    vlSymsp->TOP__Bitty.dout[9U] = vlSymsp->TOP__Bitty.d_out
        [9U];
    vlSymsp->TOP__Bitty.dout[8U] = vlSymsp->TOP__Bitty.d_out
        [8U];
    vlSymsp->TOP__Bitty.dout[7U] = vlSymsp->TOP__Bitty.d_out
        [7U];
    vlSymsp->TOP__Bitty.dout[6U] = vlSymsp->TOP__Bitty.d_out
        [6U];
    vlSymsp->TOP__Bitty.dout[5U] = vlSymsp->TOP__Bitty.d_out
        [5U];
    vlSymsp->TOP__Bitty.dout[4U] = vlSymsp->TOP__Bitty.d_out
        [4U];
    vlSymsp->TOP__Bitty.dout[3U] = vlSymsp->TOP__Bitty.d_out
        [3U];
    vlSymsp->TOP__Bitty.dout[2U] = vlSymsp->TOP__Bitty.d_out
        [2U];
    vlSymsp->TOP__Bitty.dout[1U] = vlSymsp->TOP__Bitty.d_out
        [1U];
    vlSymsp->TOP__Bitty.dout[0U] = vlSymsp->TOP__Bitty.d_out
        [0U];
    vlSymsp->TOP__Bitty.__PVT__mode = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
            vlSymsp->TOP__Bitty.__PVT__mode = (1U & 
                                               (vlSymsp->TOP__Bitty.d_out
                                                [0xaU] 
                                                >> 2U));
        }
    }
    vlSymsp->TOP__Bitty.__PVT__alu_sel = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))) {
            vlSymsp->TOP__Bitty.__PVT__alu_sel = (0xfU 
                                                  & (vlSymsp->TOP__Bitty.d_out
                                                     [0xaU] 
                                                     >> 3U));
        }
    }
    vlSymsp->TOP__Bitty.__PVT__mux_sel = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlSymsp->TOP__Bitty.__PVT__mux_sel = (7U & 
                                              ((1U 
                                                & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                                                ? (
                                                   vlSymsp->TOP__Bitty.d_out
                                                   [0xaU] 
                                                   >> 0xaU)
                                                : (
                                                   vlSymsp->TOP__Bitty.d_out
                                                   [0xaU] 
                                                   >> 0xdU)));
    }
    vlSymsp->TOP__Bitty.reg_en[9U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_7;
    vlSymsp->TOP__Bitty.reg_en[8U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_6;
    vlSymsp->TOP__Bitty.reg_en[7U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_5;
    vlSymsp->TOP__Bitty.reg_en[6U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_4;
    vlSymsp->TOP__Bitty.reg_en[5U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_3;
    vlSymsp->TOP__Bitty.reg_en[4U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_2;
    vlSymsp->TOP__Bitty.reg_en[3U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_1;
    vlSymsp->TOP__Bitty.reg_en[2U] = vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_0;
    vlSymsp->TOP__Bitty.__PVT__mux_out = ((4U & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_sel))
                                           ? ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_sel))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_sel))
                                                   ? 
                                                  vlSymsp->TOP__Bitty.d_out
                                                  [9U]
                                                   : 
                                                  vlSymsp->TOP__Bitty.d_out
                                                  [8U])
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_sel))
                                                   ? 
                                                  vlSymsp->TOP__Bitty.d_out
                                                  [7U]
                                                   : 
                                                  vlSymsp->TOP__Bitty.d_out
                                                  [6U]))
                                           : ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_sel))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_sel))
                                                   ? 
                                                  vlSymsp->TOP__Bitty.d_out
                                                  [5U]
                                                   : 
                                                  vlSymsp->TOP__Bitty.d_out
                                                  [4U])
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_sel))
                                                   ? 
                                                  vlSymsp->TOP__Bitty.d_out
                                                  [3U]
                                                   : 
                                                  vlSymsp->TOP__Bitty.d_out
                                                  [2U])));
    vlSymsp->TOP__Bitty.__PVT__alu1__DOT__arithmetic_carry_out 
        = (1U & ((8U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                  ? ((4U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                      ? ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                          ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                              ? (1U & ((vlSymsp->TOP__Bitty.d_out
                                        [0U] - (IData)(1U)) 
                                       >> 0x10U)) : 
                             (1U & (((vlSymsp->TOP__Bitty.d_out
                                      [0U] + (0xffffU 
                                              & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))) 
                                     + vlSymsp->TOP__Bitty.d_out
                                     [0U]) >> 0x10U)))
                          : ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                              ? (1U & (((vlSymsp->TOP__Bitty.d_out
                                         [0U] | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                        + vlSymsp->TOP__Bitty.d_out
                                        [0U]) >> 0x10U))
                              : (1U & ((vlSymsp->TOP__Bitty.d_out
                                        [0U] + vlSymsp->TOP__Bitty.d_out
                                        [0U]) >> 0x10U))))
                      : ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                          ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                              ? (1U & (((vlSymsp->TOP__Bitty.d_out
                                         [0U] & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                        - (IData)(1U)) 
                                       >> 0x10U)) : 
                             (1U & (((vlSymsp->TOP__Bitty.d_out
                                      [0U] | (0xffffU 
                                              & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))) 
                                     + (vlSymsp->TOP__Bitty.d_out
                                        [0U] & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & ((vlSymsp->TOP__Bitty.d_out
                                                        [0U] 
                                                        + (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & ((vlSymsp->TOP__Bitty.d_out
                                                        [0U] 
                                                        + 
                                                        (vlSymsp->TOP__Bitty.d_out
                                                         [0U] 
                                                         & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))) 
                                                       >> 0x10U)))))
                  : ((4U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                      ? ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                          ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                              ? (1U & (((0xffffU & 
                                         (vlSymsp->TOP__Bitty.d_out
                                          [0U] & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))) 
                                        - (IData)(1U)) 
                                       >> 0x10U)) : 
                             (1U & (((vlSymsp->TOP__Bitty.d_out
                                      [0U] - (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                     - (IData)(1U)) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & (((vlSymsp->TOP__Bitty.d_out
                                                         [0U] 
                                                         | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                                        + 
                                                        (~ 
                                                         (vlSymsp->TOP__Bitty.d_out
                                                          [0U] 
                                                          & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))) 
                                                       >> 0x10U))
                                                    : 
                                                   (vlSymsp->TOP__Bitty.d_out
                                                    [0U] 
                                                    >> 0x10U)))
                      : ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                          ? ((IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel) 
                             | (vlSymsp->TOP__Bitty.d_out
                                [0U] >> 0x10U)) : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                                    ? 
                                                   ((vlSymsp->TOP__Bitty.d_out
                                                     [0U] 
                                                     | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSymsp->TOP__Bitty.d_out
                                                    [0U] 
                                                    >> 0x10U))))));
    vlSymsp->TOP__Bitty.d_in[0U] = vlSymsp->TOP__Bitty.__PVT__mux_out;
    if ((8U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))) {
        vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_a_out 
            = (0xffffU & ((4U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                           ? ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                               ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? (vlSymsp->TOP__Bitty.d_out
                                      [0U] - (IData)(1U))
                                   : ((vlSymsp->TOP__Bitty.d_out
                                       [0U] + (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))) 
                                      + vlSymsp->TOP__Bitty.d_out
                                      [0U])) : ((1U 
                                                 & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                                 ? 
                                                ((vlSymsp->TOP__Bitty.d_out
                                                  [0U] 
                                                  | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                                 + 
                                                 vlSymsp->TOP__Bitty.d_out
                                                 [0U])
                                                 : 
                                                (vlSymsp->TOP__Bitty.d_out
                                                 [0U] 
                                                 + 
                                                 vlSymsp->TOP__Bitty.d_out
                                                 [0U])))
                           : ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                               ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? ((vlSymsp->TOP__Bitty.d_out
                                       [0U] & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                      - (IData)(1U))
                                   : ((vlSymsp->TOP__Bitty.d_out
                                       [0U] | (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))) 
                                      + (vlSymsp->TOP__Bitty.d_out
                                         [0U] & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))))
                               : ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? (vlSymsp->TOP__Bitty.d_out
                                      [0U] + (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))
                                   : (vlSymsp->TOP__Bitty.d_out
                                      [0U] + (vlSymsp->TOP__Bitty.d_out
                                              [0U] 
                                              & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))))));
        vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_l_out 
            = (0xffffU & ((4U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                           ? ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                               ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? vlSymsp->TOP__Bitty.d_out
                                  [0U] : (vlSymsp->TOP__Bitty.d_out
                                          [0U] | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))
                               : ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? (vlSymsp->TOP__Bitty.d_out
                                      [0U] | (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))
                                   : 1U)) : ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                                  ? 
                                                 (vlSymsp->TOP__Bitty.d_out
                                                  [0U] 
                                                  & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))
                                                  : (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                                  ? 
                                                 (~ 
                                                  (vlSymsp->TOP__Bitty.d_out
                                                   [0U] 
                                                   ^ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))
                                                  : 
                                                 ((~ 
                                                   vlSymsp->TOP__Bitty.d_out
                                                   [0U]) 
                                                  | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))))));
    } else {
        vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_a_out 
            = (0xffffU & ((4U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                           ? ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                               ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? ((vlSymsp->TOP__Bitty.d_out
                                       [0U] & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))) 
                                      - (IData)(1U))
                                   : ((vlSymsp->TOP__Bitty.d_out
                                       [0U] - (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                      - (IData)(1U)))
                               : ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? ((vlSymsp->TOP__Bitty.d_out
                                       [0U] | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)) 
                                      + (~ (vlSymsp->TOP__Bitty.d_out
                                            [0U] & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))))
                                   : (vlSymsp->TOP__Bitty.d_out
                                      [0U] | (vlSymsp->TOP__Bitty.d_out
                                              [0U] 
                                              & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))))))
                           : ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                               ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? 1U : (vlSymsp->TOP__Bitty.d_out
                                           [0U] | (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))))
                               : ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? (vlSymsp->TOP__Bitty.d_out
                                      [0U] | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))
                                   : vlSymsp->TOP__Bitty.d_out
                                  [0U]))));
        vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_l_out 
            = (0xffffU & ((4U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                           ? ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                               ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? (vlSymsp->TOP__Bitty.d_out
                                      [0U] & (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))
                                   : (vlSymsp->TOP__Bitty.d_out
                                      [0U] ^ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))
                               : ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? (~ (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))
                                   : (~ (vlSymsp->TOP__Bitty.d_out
                                         [0U] & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))))
                           : ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                               ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? 0U : ((~ vlSymsp->TOP__Bitty.d_out
                                            [0U]) & (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))
                               : ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__alu_sel))
                                   ? (~ (vlSymsp->TOP__Bitty.d_out
                                         [0U] | (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out)))
                                   : (~ vlSymsp->TOP__Bitty.d_out
                                      [0U])))));
    }
    if (vlSymsp->TOP__Bitty.__PVT__mode) {
        if (vlSymsp->TOP__Bitty.__PVT__mode) {
            vlSymsp->TOP__Bitty.__PVT__carry_out = 0U;
        }
    } else {
        vlSymsp->TOP__Bitty.__PVT__carry_out = vlSymsp->TOP__Bitty.__PVT__alu1__DOT__arithmetic_carry_out;
    }
    if (vlSymsp->TOP__Bitty.__PVT__mode) {
        if (vlSymsp->TOP__Bitty.__PVT__mode) {
            vlSymsp->TOP__Bitty.__PVT__alu_out = vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_l_out;
        }
    } else {
        vlSymsp->TOP__Bitty.__PVT__alu_out = vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_a_out;
    }
    vlSymsp->TOP__Bitty.d_in[1U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
    vlSymsp->TOP__Bitty.d_in[2U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
    vlSymsp->TOP__Bitty.d_in[3U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
    vlSymsp->TOP__Bitty.d_in[4U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
    vlSymsp->TOP__Bitty.d_in[5U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
    vlSymsp->TOP__Bitty.d_in[6U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
    vlSymsp->TOP__Bitty.d_in[7U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
    vlSymsp->TOP__Bitty.d_in[8U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
    vlSymsp->TOP__Bitty.d_in[9U] = vlSymsp->TOP__Bitty.__PVT__alu_out;
}

VL_INLINE_OPT void VBitty_Bitty::_combo__TOP__Bitty__3(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBitty_Bitty::_combo__TOP__Bitty__3\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__next_state 
        = ((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
            ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                ? ((IData)(vlTOPp->run) ? 0U : 3U) : 3U)
            : ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                ? 2U : 1U));
}
