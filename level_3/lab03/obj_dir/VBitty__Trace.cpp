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
            tracep->chgBit(oldp+0,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_s));
            tracep->chgBit(oldp+1,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_c));
            tracep->chgBit(oldp+2,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst));
            tracep->chgCData(oldp+3,(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+4,(vlTOPp->Bitty__DOT__d_out[0]),16);
            tracep->chgSData(oldp+5,(vlTOPp->Bitty__DOT__d_out[1]),16);
            tracep->chgSData(oldp+6,(vlTOPp->Bitty__DOT__d_out[2]),16);
            tracep->chgSData(oldp+7,(vlTOPp->Bitty__DOT__d_out[3]),16);
            tracep->chgSData(oldp+8,(vlTOPp->Bitty__DOT__d_out[4]),16);
            tracep->chgSData(oldp+9,(vlTOPp->Bitty__DOT__d_out[5]),16);
            tracep->chgSData(oldp+10,(vlTOPp->Bitty__DOT__d_out[6]),16);
            tracep->chgSData(oldp+11,(vlTOPp->Bitty__DOT__d_out[7]),16);
            tracep->chgSData(oldp+12,(vlTOPp->Bitty__DOT__d_out[8]),16);
            tracep->chgSData(oldp+13,(vlTOPp->Bitty__DOT__d_out[9]),16);
            tracep->chgSData(oldp+14,(vlTOPp->Bitty__DOT__d_out[10]),16);
            tracep->chgSData(oldp+15,(vlTOPp->Bitty__DOT____Vcellout__regC__out),16);
            tracep->chgSData(oldp+16,(vlTOPp->Bitty__DOT____Vcellout__regS__out),16);
            tracep->chgSData(oldp+17,(vlTOPp->Bitty__DOT____Vcellout__reg0__out),16);
            tracep->chgSData(oldp+18,(vlTOPp->Bitty__DOT____Vcellout__reg1__out),16);
            tracep->chgSData(oldp+19,(vlTOPp->Bitty__DOT____Vcellout__reg2__out),16);
            tracep->chgSData(oldp+20,(vlTOPp->Bitty__DOT____Vcellout__reg3__out),16);
            tracep->chgSData(oldp+21,(vlTOPp->Bitty__DOT____Vcellout__reg4__out),16);
            tracep->chgSData(oldp+22,(vlTOPp->Bitty__DOT____Vcellout__reg5__out),16);
            tracep->chgSData(oldp+23,(vlTOPp->Bitty__DOT____Vcellout__reg6__out),16);
            tracep->chgSData(oldp+24,(vlTOPp->Bitty__DOT____Vcellout__reg7__out),16);
            tracep->chgSData(oldp+25,(vlTOPp->Bitty__DOT____Vcellout__reg_inst__out),16);
            tracep->chgSData(oldp+26,(vlTOPp->Bitty__DOT__d_out
                                      [2U]),16);
            tracep->chgSData(oldp+27,(vlTOPp->Bitty__DOT__d_out
                                      [3U]),16);
            tracep->chgSData(oldp+28,(vlTOPp->Bitty__DOT__d_out
                                      [4U]),16);
            tracep->chgSData(oldp+29,(vlTOPp->Bitty__DOT__d_out
                                      [5U]),16);
            tracep->chgSData(oldp+30,(vlTOPp->Bitty__DOT__d_out
                                      [6U]),16);
            tracep->chgSData(oldp+31,(vlTOPp->Bitty__DOT__d_out
                                      [7U]),16);
            tracep->chgSData(oldp+32,(vlTOPp->Bitty__DOT__d_out
                                      [8U]),16);
            tracep->chgSData(oldp+33,(vlTOPp->Bitty__DOT__d_out
                                      [9U]),16);
            tracep->chgSData(oldp+34,(vlTOPp->Bitty__DOT__d_out
                                      [0U]),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgSData(oldp+35,(vlTOPp->Bitty__DOT__d_in[0]),16);
            tracep->chgSData(oldp+36,(vlTOPp->Bitty__DOT__d_in[1]),16);
            tracep->chgSData(oldp+37,(vlTOPp->Bitty__DOT__d_in[2]),16);
            tracep->chgSData(oldp+38,(vlTOPp->Bitty__DOT__d_in[3]),16);
            tracep->chgSData(oldp+39,(vlTOPp->Bitty__DOT__d_in[4]),16);
            tracep->chgSData(oldp+40,(vlTOPp->Bitty__DOT__d_in[5]),16);
            tracep->chgSData(oldp+41,(vlTOPp->Bitty__DOT__d_in[6]),16);
            tracep->chgSData(oldp+42,(vlTOPp->Bitty__DOT__d_in[7]),16);
            tracep->chgSData(oldp+43,(vlTOPp->Bitty__DOT__d_in[8]),16);
            tracep->chgSData(oldp+44,(vlTOPp->Bitty__DOT__d_in[9]),16);
            tracep->chgSData(oldp+45,(vlTOPp->Bitty__DOT__d_in[10]),16);
            tracep->chgCData(oldp+46,(vlTOPp->Bitty__DOT__mux_sel),3);
            tracep->chgSData(oldp+47,(vlTOPp->Bitty__DOT__mux_out),16);
            tracep->chgCData(oldp+48,(vlTOPp->Bitty__DOT__alu_sel),4);
            tracep->chgBit(oldp+49,(vlTOPp->Bitty__DOT__mode));
            tracep->chgBit(oldp+50,(vlTOPp->Bitty__DOT__carry_out));
            tracep->chgSData(oldp+51,(vlTOPp->Bitty__DOT__alu_out),16);
            tracep->chgSData(oldp+52,(vlTOPp->Bitty__DOT__d_in
                                      [1U]),16);
            tracep->chgSData(oldp+53,(vlTOPp->Bitty__DOT__d_in
                                      [0U]),16);
            tracep->chgSData(oldp+54,(vlTOPp->Bitty__DOT__d_in
                                      [2U]),16);
            tracep->chgSData(oldp+55,(vlTOPp->Bitty__DOT__d_in
                                      [3U]),16);
            tracep->chgSData(oldp+56,(vlTOPp->Bitty__DOT__d_in
                                      [4U]),16);
            tracep->chgSData(oldp+57,(vlTOPp->Bitty__DOT__d_in
                                      [5U]),16);
            tracep->chgSData(oldp+58,(vlTOPp->Bitty__DOT__d_in
                                      [6U]),16);
            tracep->chgSData(oldp+59,(vlTOPp->Bitty__DOT__d_in
                                      [7U]),16);
            tracep->chgSData(oldp+60,(vlTOPp->Bitty__DOT__d_in
                                      [8U]),16);
            tracep->chgSData(oldp+61,(vlTOPp->Bitty__DOT__d_in
                                      [9U]),16);
            tracep->chgSData(oldp+62,(vlTOPp->Bitty__DOT__d_in
                                      [0xaU]),16);
            tracep->chgSData(oldp+63,(vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out),16);
            tracep->chgSData(oldp+64,(vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out),16);
            tracep->chgBit(oldp+65,(vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out));
            tracep->chgBit(oldp+66,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0));
            tracep->chgBit(oldp+67,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1));
            tracep->chgBit(oldp+68,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2));
            tracep->chgBit(oldp+69,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3));
            tracep->chgBit(oldp+70,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4));
            tracep->chgBit(oldp+71,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5));
            tracep->chgBit(oldp+72,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6));
            tracep->chgBit(oldp+73,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7));
            tracep->chgCData(oldp+74,(vlTOPp->Bitty__DOT__ControlUnit1__DOT__next_state),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [4U]))) {
            tracep->chgBit(oldp+75,(vlTOPp->Bitty__DOT__reg_en[0]));
            tracep->chgBit(oldp+76,(vlTOPp->Bitty__DOT__reg_en[1]));
            tracep->chgBit(oldp+77,(vlTOPp->Bitty__DOT__reg_en[2]));
            tracep->chgBit(oldp+78,(vlTOPp->Bitty__DOT__reg_en[3]));
            tracep->chgBit(oldp+79,(vlTOPp->Bitty__DOT__reg_en[4]));
            tracep->chgBit(oldp+80,(vlTOPp->Bitty__DOT__reg_en[5]));
            tracep->chgBit(oldp+81,(vlTOPp->Bitty__DOT__reg_en[6]));
            tracep->chgBit(oldp+82,(vlTOPp->Bitty__DOT__reg_en[7]));
            tracep->chgBit(oldp+83,(vlTOPp->Bitty__DOT__reg_en[8]));
            tracep->chgBit(oldp+84,(vlTOPp->Bitty__DOT__reg_en[9]));
            tracep->chgBit(oldp+85,(vlTOPp->Bitty__DOT__reg_en[10]));
            tracep->chgBit(oldp+86,(vlTOPp->Bitty__DOT__reg_en
                                    [1U]));
            tracep->chgBit(oldp+87,(vlTOPp->Bitty__DOT__reg_en
                                    [0U]));
            tracep->chgBit(oldp+88,(vlTOPp->Bitty__DOT__reg_en
                                    [2U]));
            tracep->chgBit(oldp+89,(vlTOPp->Bitty__DOT__reg_en
                                    [3U]));
            tracep->chgBit(oldp+90,(vlTOPp->Bitty__DOT__reg_en
                                    [4U]));
            tracep->chgBit(oldp+91,(vlTOPp->Bitty__DOT__reg_en
                                    [5U]));
            tracep->chgBit(oldp+92,(vlTOPp->Bitty__DOT__reg_en
                                    [6U]));
            tracep->chgBit(oldp+93,(vlTOPp->Bitty__DOT__reg_en
                                    [7U]));
            tracep->chgBit(oldp+94,(vlTOPp->Bitty__DOT__reg_en
                                    [8U]));
            tracep->chgBit(oldp+95,(vlTOPp->Bitty__DOT__reg_en
                                    [9U]));
            tracep->chgBit(oldp+96,(vlTOPp->Bitty__DOT__reg_en
                                    [0xaU]));
        }
        tracep->chgBit(oldp+97,(vlTOPp->clk));
        tracep->chgBit(oldp+98,(vlTOPp->reset));
        tracep->chgSData(oldp+99,(vlTOPp->din),16);
        tracep->chgSData(oldp+100,(vlTOPp->regs[0]),16);
        tracep->chgSData(oldp+101,(vlTOPp->regs[1]),16);
        tracep->chgSData(oldp+102,(vlTOPp->regs[2]),16);
        tracep->chgSData(oldp+103,(vlTOPp->regs[3]),16);
        tracep->chgSData(oldp+104,(vlTOPp->regs[4]),16);
        tracep->chgSData(oldp+105,(vlTOPp->regs[5]),16);
        tracep->chgSData(oldp+106,(vlTOPp->regs[6]),16);
        tracep->chgSData(oldp+107,(vlTOPp->regs[7]),16);
        tracep->chgSData(oldp+108,(vlTOPp->regs[8]),16);
        tracep->chgSData(oldp+109,(vlTOPp->regs[9]),16);
        tracep->chgSData(oldp+110,(vlTOPp->regs[10]),16);
        tracep->chgBit(oldp+111,(vlTOPp->done));
        tracep->chgSData(oldp+112,(vlTOPp->dout[0]),16);
        tracep->chgSData(oldp+113,(vlTOPp->dout[1]),16);
        tracep->chgSData(oldp+114,(vlTOPp->dout[2]),16);
        tracep->chgSData(oldp+115,(vlTOPp->dout[3]),16);
        tracep->chgSData(oldp+116,(vlTOPp->dout[4]),16);
        tracep->chgSData(oldp+117,(vlTOPp->dout[5]),16);
        tracep->chgSData(oldp+118,(vlTOPp->dout[6]),16);
        tracep->chgSData(oldp+119,(vlTOPp->dout[7]),16);
        tracep->chgSData(oldp+120,(vlTOPp->dout[8]),16);
        tracep->chgSData(oldp+121,(vlTOPp->dout[9]),16);
        tracep->chgSData(oldp+122,(vlTOPp->dout[10]),16);
        tracep->chgBit(oldp+123,(vlTOPp->write));
        tracep->chgBit(oldp+124,(vlTOPp->run));
        tracep->chgBit(oldp+125,(vlTOPp->regen[0]));
        tracep->chgBit(oldp+126,(vlTOPp->regen[1]));
        tracep->chgBit(oldp+127,(vlTOPp->regen[2]));
        tracep->chgBit(oldp+128,(vlTOPp->regen[3]));
        tracep->chgBit(oldp+129,(vlTOPp->regen[4]));
        tracep->chgBit(oldp+130,(vlTOPp->regen[5]));
        tracep->chgBit(oldp+131,(vlTOPp->regen[6]));
        tracep->chgBit(oldp+132,(vlTOPp->regen[7]));
        tracep->chgBit(oldp+133,(vlTOPp->regen[8]));
        tracep->chgBit(oldp+134,(vlTOPp->regen[9]));
        tracep->chgBit(oldp+135,(vlTOPp->regen[10]));
        tracep->chgBit(oldp+136,((vlTOPp->Bitty__DOT__d_out
                                  [0U] == (IData)(vlTOPp->Bitty__DOT__mux_out))));
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
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
    }
}
