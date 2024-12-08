// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBitty__Syms.h"


void VBitty::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBitty::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__Bitty.done));
            tracep->chgSData(oldp+1,(vlSymsp->TOP__Bitty.dout[0]),16);
            tracep->chgSData(oldp+2,(vlSymsp->TOP__Bitty.dout[1]),16);
            tracep->chgSData(oldp+3,(vlSymsp->TOP__Bitty.dout[2]),16);
            tracep->chgSData(oldp+4,(vlSymsp->TOP__Bitty.dout[3]),16);
            tracep->chgSData(oldp+5,(vlSymsp->TOP__Bitty.dout[4]),16);
            tracep->chgSData(oldp+6,(vlSymsp->TOP__Bitty.dout[5]),16);
            tracep->chgSData(oldp+7,(vlSymsp->TOP__Bitty.dout[6]),16);
            tracep->chgSData(oldp+8,(vlSymsp->TOP__Bitty.dout[7]),16);
            tracep->chgSData(oldp+9,(vlSymsp->TOP__Bitty.dout[8]),16);
            tracep->chgSData(oldp+10,(vlSymsp->TOP__Bitty.dout[9]),16);
            tracep->chgSData(oldp+11,(vlSymsp->TOP__Bitty.dout[10]),16);
            tracep->chgCData(oldp+12,(vlSymsp->TOP__Bitty.__PVT__alu_sel),4);
            tracep->chgCData(oldp+13,(vlSymsp->TOP__Bitty.__PVT__mux_sel),3);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__Bitty.__PVT__mode));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__Bitty.__PVT__carry_out));
            tracep->chgSData(oldp+16,(vlSymsp->TOP__Bitty.__PVT__alu_out),16);
            tracep->chgSData(oldp+17,(vlSymsp->TOP__Bitty.__PVT__mux_out),16);
            tracep->chgSData(oldp+18,(vlSymsp->TOP__Bitty.__Vcellout__regC__out),16);
            tracep->chgSData(oldp+19,(vlSymsp->TOP__Bitty.__Vcellout__regS__out),16);
            tracep->chgSData(oldp+20,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst__out),16);
            tracep->chgSData(oldp+21,(vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_a_out),16);
            tracep->chgSData(oldp+22,(vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_l_out),16);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__Bitty.__PVT__alu1__DOT__arithmetic_carry_out));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_s));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_c));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_0));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_1));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_2));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_3));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_4));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_5));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_6));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_7));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_inst));
            tracep->chgCData(oldp+35,(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state),2);
            tracep->chgSData(oldp+36,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__2__KET____DOT__regN__out),16);
            tracep->chgSData(oldp+37,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__3__KET____DOT__regN__out),16);
            tracep->chgSData(oldp+38,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__4__KET____DOT__regN__out),16);
            tracep->chgSData(oldp+39,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__5__KET____DOT__regN__out),16);
            tracep->chgSData(oldp+40,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__6__KET____DOT__regN__out),16);
            tracep->chgSData(oldp+41,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__7__KET____DOT__regN__out),16);
            tracep->chgSData(oldp+42,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__8__KET____DOT__regN__out),16);
            tracep->chgSData(oldp+43,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__9__KET____DOT__regN__out),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+44,(vlSymsp->TOP__Bitty.init_data[0]),16);
            tracep->chgSData(oldp+45,(vlSymsp->TOP__Bitty.init_data[1]),16);
            tracep->chgSData(oldp+46,(vlSymsp->TOP__Bitty.init_data[2]),16);
            tracep->chgSData(oldp+47,(vlSymsp->TOP__Bitty.init_data[3]),16);
            tracep->chgSData(oldp+48,(vlSymsp->TOP__Bitty.init_data[4]),16);
            tracep->chgSData(oldp+49,(vlSymsp->TOP__Bitty.init_data[5]),16);
            tracep->chgSData(oldp+50,(vlSymsp->TOP__Bitty.init_data[6]),16);
            tracep->chgSData(oldp+51,(vlSymsp->TOP__Bitty.init_data[7]),16);
        }
        tracep->chgBit(oldp+52,(vlTOPp->clk));
        tracep->chgBit(oldp+53,(vlTOPp->reset));
        tracep->chgSData(oldp+54,(vlTOPp->din),16);
        tracep->chgBit(oldp+55,(vlTOPp->done));
        tracep->chgSData(oldp+56,(vlTOPp->dout[0]),16);
        tracep->chgSData(oldp+57,(vlTOPp->dout[1]),16);
        tracep->chgSData(oldp+58,(vlTOPp->dout[2]),16);
        tracep->chgSData(oldp+59,(vlTOPp->dout[3]),16);
        tracep->chgSData(oldp+60,(vlTOPp->dout[4]),16);
        tracep->chgSData(oldp+61,(vlTOPp->dout[5]),16);
        tracep->chgSData(oldp+62,(vlTOPp->dout[6]),16);
        tracep->chgSData(oldp+63,(vlTOPp->dout[7]),16);
        tracep->chgSData(oldp+64,(vlTOPp->dout[8]),16);
        tracep->chgSData(oldp+65,(vlTOPp->dout[9]),16);
        tracep->chgSData(oldp+66,(vlTOPp->dout[10]),16);
        tracep->chgBit(oldp+67,(vlTOPp->run));
        tracep->chgBit(oldp+68,(vlTOPp->init_en));
        tracep->chgSData(oldp+69,(vlTOPp->init_data[0]),16);
        tracep->chgSData(oldp+70,(vlTOPp->init_data[1]),16);
        tracep->chgSData(oldp+71,(vlTOPp->init_data[2]),16);
        tracep->chgSData(oldp+72,(vlTOPp->init_data[3]),16);
        tracep->chgSData(oldp+73,(vlTOPp->init_data[4]),16);
        tracep->chgSData(oldp+74,(vlTOPp->init_data[5]),16);
        tracep->chgSData(oldp+75,(vlTOPp->init_data[6]),16);
        tracep->chgSData(oldp+76,(vlTOPp->init_data[7]),16);
        tracep->chgSData(oldp+77,(vlSymsp->TOP__Bitty.d_out[0]),16);
        tracep->chgSData(oldp+78,(vlSymsp->TOP__Bitty.d_out[1]),16);
        tracep->chgSData(oldp+79,(vlSymsp->TOP__Bitty.d_out[2]),16);
        tracep->chgSData(oldp+80,(vlSymsp->TOP__Bitty.d_out[3]),16);
        tracep->chgSData(oldp+81,(vlSymsp->TOP__Bitty.d_out[4]),16);
        tracep->chgSData(oldp+82,(vlSymsp->TOP__Bitty.d_out[5]),16);
        tracep->chgSData(oldp+83,(vlSymsp->TOP__Bitty.d_out[6]),16);
        tracep->chgSData(oldp+84,(vlSymsp->TOP__Bitty.d_out[7]),16);
        tracep->chgSData(oldp+85,(vlSymsp->TOP__Bitty.d_out[8]),16);
        tracep->chgSData(oldp+86,(vlSymsp->TOP__Bitty.d_out[9]),16);
        tracep->chgSData(oldp+87,(vlSymsp->TOP__Bitty.d_out[10]),16);
        tracep->chgSData(oldp+88,(vlSymsp->TOP__Bitty.d_in[0]),16);
        tracep->chgSData(oldp+89,(vlSymsp->TOP__Bitty.d_in[1]),16);
        tracep->chgSData(oldp+90,(vlSymsp->TOP__Bitty.d_in[2]),16);
        tracep->chgSData(oldp+91,(vlSymsp->TOP__Bitty.d_in[3]),16);
        tracep->chgSData(oldp+92,(vlSymsp->TOP__Bitty.d_in[4]),16);
        tracep->chgSData(oldp+93,(vlSymsp->TOP__Bitty.d_in[5]),16);
        tracep->chgSData(oldp+94,(vlSymsp->TOP__Bitty.d_in[6]),16);
        tracep->chgSData(oldp+95,(vlSymsp->TOP__Bitty.d_in[7]),16);
        tracep->chgSData(oldp+96,(vlSymsp->TOP__Bitty.d_in[8]),16);
        tracep->chgSData(oldp+97,(vlSymsp->TOP__Bitty.d_in[9]),16);
        tracep->chgSData(oldp+98,(vlSymsp->TOP__Bitty.d_in[10]),16);
        tracep->chgBit(oldp+99,(vlSymsp->TOP__Bitty.reg_en[0]));
        tracep->chgBit(oldp+100,(vlSymsp->TOP__Bitty.reg_en[1]));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__Bitty.reg_en[2]));
        tracep->chgBit(oldp+102,(vlSymsp->TOP__Bitty.reg_en[3]));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__Bitty.reg_en[4]));
        tracep->chgBit(oldp+104,(vlSymsp->TOP__Bitty.reg_en[5]));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__Bitty.reg_en[6]));
        tracep->chgBit(oldp+106,(vlSymsp->TOP__Bitty.reg_en[7]));
        tracep->chgBit(oldp+107,(vlSymsp->TOP__Bitty.reg_en[8]));
        tracep->chgBit(oldp+108,(vlSymsp->TOP__Bitty.reg_en[9]));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__Bitty.reg_en[10]));
        tracep->chgBit(oldp+110,((vlSymsp->TOP__Bitty.d_out
                                  [0U] == (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))));
        tracep->chgBit(oldp+111,(vlSymsp->TOP__Bitty.reg_en
                                 [1U]));
        tracep->chgSData(oldp+112,(vlSymsp->TOP__Bitty.d_in
                                   [1U]),16);
        tracep->chgBit(oldp+113,(vlSymsp->TOP__Bitty.reg_en
                                 [0U]));
        tracep->chgSData(oldp+114,(vlSymsp->TOP__Bitty.d_in
                                   [0U]),16);
        tracep->chgBit(oldp+115,(vlSymsp->TOP__Bitty.reg_en
                                 [0xaU]));
        tracep->chgSData(oldp+116,(vlSymsp->TOP__Bitty.d_out
                                   [2U]),16);
        tracep->chgSData(oldp+117,(vlSymsp->TOP__Bitty.d_out
                                   [3U]),16);
        tracep->chgSData(oldp+118,(vlSymsp->TOP__Bitty.d_out
                                   [4U]),16);
        tracep->chgSData(oldp+119,(vlSymsp->TOP__Bitty.d_out
                                   [5U]),16);
        tracep->chgSData(oldp+120,(vlSymsp->TOP__Bitty.d_out
                                   [6U]),16);
        tracep->chgSData(oldp+121,(vlSymsp->TOP__Bitty.d_out
                                   [7U]),16);
        tracep->chgSData(oldp+122,(vlSymsp->TOP__Bitty.d_out
                                   [8U]),16);
        tracep->chgSData(oldp+123,(vlSymsp->TOP__Bitty.d_out
                                   [9U]),16);
        tracep->chgSData(oldp+124,(vlSymsp->TOP__Bitty.d_out
                                   [0U]),16);
        tracep->chgSData(oldp+125,(vlSymsp->TOP__Bitty.d_out
                                   [0xaU]),16);
        tracep->chgCData(oldp+126,(((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                                     ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                                         ? ((IData)(vlTOPp->run)
                                             ? 0U : 3U)
                                         : 3U) : ((1U 
                                                   & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                                                   ? 2U
                                                   : 1U))),2);
        tracep->chgBit(oldp+127,((vlSymsp->TOP__Bitty.reg_en
                                  [2U] | (IData)(vlTOPp->init_en))));
        tracep->chgSData(oldp+128,(((IData)(vlTOPp->init_en)
                                     ? vlSymsp->TOP__Bitty.init_data
                                    [0U] : vlSymsp->TOP__Bitty.d_in
                                    [2U])),16);
        tracep->chgBit(oldp+129,((vlSymsp->TOP__Bitty.reg_en
                                  [3U] | (IData)(vlTOPp->init_en))));
        tracep->chgSData(oldp+130,(((IData)(vlTOPp->init_en)
                                     ? vlSymsp->TOP__Bitty.init_data
                                    [1U] : vlSymsp->TOP__Bitty.d_in
                                    [3U])),16);
        tracep->chgBit(oldp+131,((vlSymsp->TOP__Bitty.reg_en
                                  [4U] | (IData)(vlTOPp->init_en))));
        tracep->chgSData(oldp+132,(((IData)(vlTOPp->init_en)
                                     ? vlSymsp->TOP__Bitty.init_data
                                    [2U] : vlSymsp->TOP__Bitty.d_in
                                    [4U])),16);
        tracep->chgBit(oldp+133,((vlSymsp->TOP__Bitty.reg_en
                                  [5U] | (IData)(vlTOPp->init_en))));
        tracep->chgSData(oldp+134,(((IData)(vlTOPp->init_en)
                                     ? vlSymsp->TOP__Bitty.init_data
                                    [3U] : vlSymsp->TOP__Bitty.d_in
                                    [5U])),16);
        tracep->chgBit(oldp+135,((vlSymsp->TOP__Bitty.reg_en
                                  [6U] | (IData)(vlTOPp->init_en))));
        tracep->chgSData(oldp+136,(((IData)(vlTOPp->init_en)
                                     ? vlSymsp->TOP__Bitty.init_data
                                    [4U] : vlSymsp->TOP__Bitty.d_in
                                    [6U])),16);
        tracep->chgBit(oldp+137,((vlSymsp->TOP__Bitty.reg_en
                                  [7U] | (IData)(vlTOPp->init_en))));
        tracep->chgSData(oldp+138,(((IData)(vlTOPp->init_en)
                                     ? vlSymsp->TOP__Bitty.init_data
                                    [5U] : vlSymsp->TOP__Bitty.d_in
                                    [7U])),16);
        tracep->chgBit(oldp+139,((vlSymsp->TOP__Bitty.reg_en
                                  [8U] | (IData)(vlTOPp->init_en))));
        tracep->chgSData(oldp+140,(((IData)(vlTOPp->init_en)
                                     ? vlSymsp->TOP__Bitty.init_data
                                    [6U] : vlSymsp->TOP__Bitty.d_in
                                    [8U])),16);
        tracep->chgBit(oldp+141,((vlSymsp->TOP__Bitty.reg_en
                                  [9U] | (IData)(vlTOPp->init_en))));
        tracep->chgSData(oldp+142,(((IData)(vlTOPp->init_en)
                                     ? vlSymsp->TOP__Bitty.init_data
                                    [7U] : vlSymsp->TOP__Bitty.d_in
                                    [9U])),16);
    }
}

void VBitty::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
