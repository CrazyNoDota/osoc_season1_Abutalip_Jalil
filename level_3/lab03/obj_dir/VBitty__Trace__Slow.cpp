// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBitty__Syms.h"


//======================

void VBitty::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VBitty::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VBitty::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VBitty::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VBitty::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+45,"clk", false,-1);
        tracep->declBit(c+46,"reset", false,-1);
        tracep->declBus(c+47,"din", false,-1, 15,0);
        tracep->declBit(c+48,"done", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+49+i*1,"dout", true,(i+0), 15,0);}}
        tracep->declBit(c+60,"run", false,-1);
        tracep->declBit(c+45,"Bitty clk", false,-1);
        tracep->declBit(c+46,"Bitty reset", false,-1);
        tracep->declBus(c+47,"Bitty din", false,-1, 15,0);
        tracep->declBit(c+1,"Bitty done", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+2+i*1,"Bitty dout", true,(i+0), 15,0);}}
        tracep->declBit(c+60,"Bitty run", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+61+i*1,"Bitty d_out", true,(i+0), 15,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+72+i*1,"Bitty d_in", true,(i+0), 15,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+83+i*1,"Bitty reg_en", true,(i+0));}}
        tracep->declBus(c+13,"Bitty alu_sel", false,-1, 3,0);
        tracep->declBus(c+14,"Bitty mux_sel", false,-1, 2,0);
        tracep->declBit(c+15,"Bitty mode", false,-1);
        tracep->declBit(c+16,"Bitty carry_out", false,-1);
        tracep->declBit(c+94,"Bitty compare", false,-1);
        tracep->declBus(c+17,"Bitty alu_out", false,-1, 15,0);
        tracep->declBus(c+18,"Bitty mux_out", false,-1, 15,0);
        tracep->declBit(c+127,"Bitty carry_in", false,-1);
        tracep->declBit(c+45,"Bitty regC clk", false,-1);
        tracep->declBit(c+46,"Bitty regC reset", false,-1);
        tracep->declBit(c+95,"Bitty regC enable", false,-1);
        tracep->declBus(c+96,"Bitty regC in", false,-1, 15,0);
        tracep->declBus(c+19,"Bitty regC out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty regS clk", false,-1);
        tracep->declBit(c+46,"Bitty regS reset", false,-1);
        tracep->declBit(c+97,"Bitty regS enable", false,-1);
        tracep->declBus(c+98,"Bitty regS in", false,-1, 15,0);
        tracep->declBus(c+20,"Bitty regS out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty reg_inst clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst reset", false,-1);
        tracep->declBit(c+99,"Bitty reg_inst enable", false,-1);
        tracep->declBus(c+47,"Bitty reg_inst in", false,-1, 15,0);
        tracep->declBus(c+21,"Bitty reg_inst out", false,-1, 15,0);
        tracep->declBus(c+100,"Bitty mux1 reg0", false,-1, 15,0);
        tracep->declBus(c+101,"Bitty mux1 reg1", false,-1, 15,0);
        tracep->declBus(c+102,"Bitty mux1 reg2", false,-1, 15,0);
        tracep->declBus(c+103,"Bitty mux1 reg3", false,-1, 15,0);
        tracep->declBus(c+104,"Bitty mux1 reg4", false,-1, 15,0);
        tracep->declBus(c+105,"Bitty mux1 reg5", false,-1, 15,0);
        tracep->declBus(c+106,"Bitty mux1 reg6", false,-1, 15,0);
        tracep->declBus(c+107,"Bitty mux1 reg7", false,-1, 15,0);
        tracep->declBus(c+14,"Bitty mux1 sel", false,-1, 2,0);
        tracep->declBus(c+18,"Bitty mux1 out", false,-1, 15,0);
        tracep->declBit(c+128,"Bitty alu1 carry_in", false,-1);
        tracep->declBus(c+108,"Bitty alu1 in_a", false,-1, 15,0);
        tracep->declBus(c+18,"Bitty alu1 in_b", false,-1, 15,0);
        tracep->declBus(c+13,"Bitty alu1 sel", false,-1, 3,0);
        tracep->declBit(c+15,"Bitty alu1 mode", false,-1);
        tracep->declBit(c+16,"Bitty alu1 carry_out", false,-1);
        tracep->declBit(c+94,"Bitty alu1 compare", false,-1);
        tracep->declBus(c+17,"Bitty alu1 alu_out", false,-1, 15,0);
        tracep->declBus(c+22,"Bitty alu1 temp_a_out", false,-1, 15,0);
        tracep->declBus(c+23,"Bitty alu1 temp_l_out", false,-1, 15,0);
        tracep->declBit(c+24,"Bitty alu1 arithmetic_carry_out", false,-1);
        tracep->declBit(c+128,"Bitty alu1 myArithUnit carry_in", false,-1);
        tracep->declBus(c+108,"Bitty alu1 myArithUnit in_a", false,-1, 15,0);
        tracep->declBus(c+18,"Bitty alu1 myArithUnit in_b", false,-1, 15,0);
        tracep->declBus(c+13,"Bitty alu1 myArithUnit sel", false,-1, 3,0);
        tracep->declBit(c+24,"Bitty alu1 myArithUnit carry_out", false,-1);
        tracep->declBus(c+22,"Bitty alu1 myArithUnit alu_out", false,-1, 15,0);
        tracep->declBus(c+108,"Bitty alu1 myLogicUnit in_a", false,-1, 15,0);
        tracep->declBus(c+18,"Bitty alu1 myLogicUnit in_b", false,-1, 15,0);
        tracep->declBus(c+13,"Bitty alu1 myLogicUnit sel", false,-1, 3,0);
        tracep->declBus(c+23,"Bitty alu1 myLogicUnit alu_out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty ControlUnit1 clk", false,-1);
        tracep->declBit(c+46,"Bitty ControlUnit1 reset", false,-1);
        tracep->declBus(c+109,"Bitty ControlUnit1 instruction", false,-1, 15,0);
        tracep->declBit(c+60,"Bitty ControlUnit1 run", false,-1);
        tracep->declBus(c+13,"Bitty ControlUnit1 alu_sel", false,-1, 3,0);
        tracep->declBus(c+14,"Bitty ControlUnit1 mux_sel", false,-1, 2,0);
        tracep->declBit(c+15,"Bitty ControlUnit1 mode", false,-1);
        tracep->declBit(c+25,"Bitty ControlUnit1 en_s", false,-1);
        tracep->declBit(c+26,"Bitty ControlUnit1 en_c", false,-1);
        tracep->declBit(c+27,"Bitty ControlUnit1 en_0", false,-1);
        tracep->declBit(c+28,"Bitty ControlUnit1 en_1", false,-1);
        tracep->declBit(c+29,"Bitty ControlUnit1 en_2", false,-1);
        tracep->declBit(c+30,"Bitty ControlUnit1 en_3", false,-1);
        tracep->declBit(c+31,"Bitty ControlUnit1 en_4", false,-1);
        tracep->declBit(c+32,"Bitty ControlUnit1 en_5", false,-1);
        tracep->declBit(c+33,"Bitty ControlUnit1 en_6", false,-1);
        tracep->declBit(c+34,"Bitty ControlUnit1 en_7", false,-1);
        tracep->declBit(c+35,"Bitty ControlUnit1 en_inst", false,-1);
        tracep->declBit(c+1,"Bitty ControlUnit1 done", false,-1);
        tracep->declBus(c+36,"Bitty ControlUnit1 state", false,-1, 1,0);
        tracep->declBus(c+110,"Bitty ControlUnit1 next_state", false,-1, 1,0);
        tracep->declBit(c+45,"Bitty reg_inst_block[2] regN clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst_block[2] regN reset", false,-1);
        tracep->declBit(c+111,"Bitty reg_inst_block[2] regN enable", false,-1);
        tracep->declBus(c+112,"Bitty reg_inst_block[2] regN in", false,-1, 15,0);
        tracep->declBus(c+37,"Bitty reg_inst_block[2] regN out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty reg_inst_block[3] regN clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst_block[3] regN reset", false,-1);
        tracep->declBit(c+113,"Bitty reg_inst_block[3] regN enable", false,-1);
        tracep->declBus(c+114,"Bitty reg_inst_block[3] regN in", false,-1, 15,0);
        tracep->declBus(c+38,"Bitty reg_inst_block[3] regN out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty reg_inst_block[4] regN clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst_block[4] regN reset", false,-1);
        tracep->declBit(c+115,"Bitty reg_inst_block[4] regN enable", false,-1);
        tracep->declBus(c+116,"Bitty reg_inst_block[4] regN in", false,-1, 15,0);
        tracep->declBus(c+39,"Bitty reg_inst_block[4] regN out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty reg_inst_block[5] regN clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst_block[5] regN reset", false,-1);
        tracep->declBit(c+117,"Bitty reg_inst_block[5] regN enable", false,-1);
        tracep->declBus(c+118,"Bitty reg_inst_block[5] regN in", false,-1, 15,0);
        tracep->declBus(c+40,"Bitty reg_inst_block[5] regN out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty reg_inst_block[6] regN clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst_block[6] regN reset", false,-1);
        tracep->declBit(c+119,"Bitty reg_inst_block[6] regN enable", false,-1);
        tracep->declBus(c+120,"Bitty reg_inst_block[6] regN in", false,-1, 15,0);
        tracep->declBus(c+41,"Bitty reg_inst_block[6] regN out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty reg_inst_block[7] regN clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst_block[7] regN reset", false,-1);
        tracep->declBit(c+121,"Bitty reg_inst_block[7] regN enable", false,-1);
        tracep->declBus(c+122,"Bitty reg_inst_block[7] regN in", false,-1, 15,0);
        tracep->declBus(c+42,"Bitty reg_inst_block[7] regN out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty reg_inst_block[8] regN clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst_block[8] regN reset", false,-1);
        tracep->declBit(c+123,"Bitty reg_inst_block[8] regN enable", false,-1);
        tracep->declBus(c+124,"Bitty reg_inst_block[8] regN in", false,-1, 15,0);
        tracep->declBus(c+43,"Bitty reg_inst_block[8] regN out", false,-1, 15,0);
        tracep->declBit(c+45,"Bitty reg_inst_block[9] regN clk", false,-1);
        tracep->declBit(c+46,"Bitty reg_inst_block[9] regN reset", false,-1);
        tracep->declBit(c+125,"Bitty reg_inst_block[9] regN enable", false,-1);
        tracep->declBus(c+126,"Bitty reg_inst_block[9] regN in", false,-1, 15,0);
        tracep->declBus(c+44,"Bitty reg_inst_block[9] regN out", false,-1, 15,0);
    }
}

void VBitty::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VBitty::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VBitty::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSymsp->TOP__Bitty.done));
        tracep->fullSData(oldp+2,(vlSymsp->TOP__Bitty.dout[0]),16);
        tracep->fullSData(oldp+3,(vlSymsp->TOP__Bitty.dout[1]),16);
        tracep->fullSData(oldp+4,(vlSymsp->TOP__Bitty.dout[2]),16);
        tracep->fullSData(oldp+5,(vlSymsp->TOP__Bitty.dout[3]),16);
        tracep->fullSData(oldp+6,(vlSymsp->TOP__Bitty.dout[4]),16);
        tracep->fullSData(oldp+7,(vlSymsp->TOP__Bitty.dout[5]),16);
        tracep->fullSData(oldp+8,(vlSymsp->TOP__Bitty.dout[6]),16);
        tracep->fullSData(oldp+9,(vlSymsp->TOP__Bitty.dout[7]),16);
        tracep->fullSData(oldp+10,(vlSymsp->TOP__Bitty.dout[8]),16);
        tracep->fullSData(oldp+11,(vlSymsp->TOP__Bitty.dout[9]),16);
        tracep->fullSData(oldp+12,(vlSymsp->TOP__Bitty.dout[10]),16);
        tracep->fullCData(oldp+13,(vlSymsp->TOP__Bitty.__PVT__alu_sel),4);
        tracep->fullCData(oldp+14,(vlSymsp->TOP__Bitty.__PVT__mux_sel),3);
        tracep->fullBit(oldp+15,(vlSymsp->TOP__Bitty.__PVT__mode));
        tracep->fullBit(oldp+16,(vlSymsp->TOP__Bitty.__PVT__carry_out));
        tracep->fullSData(oldp+17,(vlSymsp->TOP__Bitty.__PVT__alu_out),16);
        tracep->fullSData(oldp+18,(vlSymsp->TOP__Bitty.__PVT__mux_out),16);
        tracep->fullSData(oldp+19,(vlSymsp->TOP__Bitty.__Vcellout__regC__out),16);
        tracep->fullSData(oldp+20,(vlSymsp->TOP__Bitty.__Vcellout__regS__out),16);
        tracep->fullSData(oldp+21,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst__out),16);
        tracep->fullSData(oldp+22,(vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_a_out),16);
        tracep->fullSData(oldp+23,(vlSymsp->TOP__Bitty.__PVT__alu1__DOT__temp_l_out),16);
        tracep->fullBit(oldp+24,(vlSymsp->TOP__Bitty.__PVT__alu1__DOT__arithmetic_carry_out));
        tracep->fullBit(oldp+25,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_s));
        tracep->fullBit(oldp+26,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_c));
        tracep->fullBit(oldp+27,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_0));
        tracep->fullBit(oldp+28,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_1));
        tracep->fullBit(oldp+29,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_2));
        tracep->fullBit(oldp+30,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_3));
        tracep->fullBit(oldp+31,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_4));
        tracep->fullBit(oldp+32,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_5));
        tracep->fullBit(oldp+33,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_6));
        tracep->fullBit(oldp+34,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_7));
        tracep->fullBit(oldp+35,(vlSymsp->TOP__Bitty.__Vcellout__ControlUnit1__en_inst));
        tracep->fullCData(oldp+36,(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state),2);
        tracep->fullSData(oldp+37,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__2__KET____DOT__regN__out),16);
        tracep->fullSData(oldp+38,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__3__KET____DOT__regN__out),16);
        tracep->fullSData(oldp+39,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__4__KET____DOT__regN__out),16);
        tracep->fullSData(oldp+40,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__5__KET____DOT__regN__out),16);
        tracep->fullSData(oldp+41,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__6__KET____DOT__regN__out),16);
        tracep->fullSData(oldp+42,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__7__KET____DOT__regN__out),16);
        tracep->fullSData(oldp+43,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__8__KET____DOT__regN__out),16);
        tracep->fullSData(oldp+44,(vlSymsp->TOP__Bitty.__Vcellout__reg_inst_block__BRA__9__KET____DOT__regN__out),16);
        tracep->fullBit(oldp+45,(vlTOPp->clk));
        tracep->fullBit(oldp+46,(vlTOPp->reset));
        tracep->fullSData(oldp+47,(vlTOPp->din),16);
        tracep->fullBit(oldp+48,(vlTOPp->done));
        tracep->fullSData(oldp+49,(vlTOPp->dout[0]),16);
        tracep->fullSData(oldp+50,(vlTOPp->dout[1]),16);
        tracep->fullSData(oldp+51,(vlTOPp->dout[2]),16);
        tracep->fullSData(oldp+52,(vlTOPp->dout[3]),16);
        tracep->fullSData(oldp+53,(vlTOPp->dout[4]),16);
        tracep->fullSData(oldp+54,(vlTOPp->dout[5]),16);
        tracep->fullSData(oldp+55,(vlTOPp->dout[6]),16);
        tracep->fullSData(oldp+56,(vlTOPp->dout[7]),16);
        tracep->fullSData(oldp+57,(vlTOPp->dout[8]),16);
        tracep->fullSData(oldp+58,(vlTOPp->dout[9]),16);
        tracep->fullSData(oldp+59,(vlTOPp->dout[10]),16);
        tracep->fullBit(oldp+60,(vlTOPp->run));
        tracep->fullSData(oldp+61,(vlSymsp->TOP__Bitty.d_out[0]),16);
        tracep->fullSData(oldp+62,(vlSymsp->TOP__Bitty.d_out[1]),16);
        tracep->fullSData(oldp+63,(vlSymsp->TOP__Bitty.d_out[2]),16);
        tracep->fullSData(oldp+64,(vlSymsp->TOP__Bitty.d_out[3]),16);
        tracep->fullSData(oldp+65,(vlSymsp->TOP__Bitty.d_out[4]),16);
        tracep->fullSData(oldp+66,(vlSymsp->TOP__Bitty.d_out[5]),16);
        tracep->fullSData(oldp+67,(vlSymsp->TOP__Bitty.d_out[6]),16);
        tracep->fullSData(oldp+68,(vlSymsp->TOP__Bitty.d_out[7]),16);
        tracep->fullSData(oldp+69,(vlSymsp->TOP__Bitty.d_out[8]),16);
        tracep->fullSData(oldp+70,(vlSymsp->TOP__Bitty.d_out[9]),16);
        tracep->fullSData(oldp+71,(vlSymsp->TOP__Bitty.d_out[10]),16);
        tracep->fullSData(oldp+72,(vlSymsp->TOP__Bitty.d_in[0]),16);
        tracep->fullSData(oldp+73,(vlSymsp->TOP__Bitty.d_in[1]),16);
        tracep->fullSData(oldp+74,(vlSymsp->TOP__Bitty.d_in[2]),16);
        tracep->fullSData(oldp+75,(vlSymsp->TOP__Bitty.d_in[3]),16);
        tracep->fullSData(oldp+76,(vlSymsp->TOP__Bitty.d_in[4]),16);
        tracep->fullSData(oldp+77,(vlSymsp->TOP__Bitty.d_in[5]),16);
        tracep->fullSData(oldp+78,(vlSymsp->TOP__Bitty.d_in[6]),16);
        tracep->fullSData(oldp+79,(vlSymsp->TOP__Bitty.d_in[7]),16);
        tracep->fullSData(oldp+80,(vlSymsp->TOP__Bitty.d_in[8]),16);
        tracep->fullSData(oldp+81,(vlSymsp->TOP__Bitty.d_in[9]),16);
        tracep->fullSData(oldp+82,(vlSymsp->TOP__Bitty.d_in[10]),16);
        tracep->fullBit(oldp+83,(vlSymsp->TOP__Bitty.reg_en[0]));
        tracep->fullBit(oldp+84,(vlSymsp->TOP__Bitty.reg_en[1]));
        tracep->fullBit(oldp+85,(vlSymsp->TOP__Bitty.reg_en[2]));
        tracep->fullBit(oldp+86,(vlSymsp->TOP__Bitty.reg_en[3]));
        tracep->fullBit(oldp+87,(vlSymsp->TOP__Bitty.reg_en[4]));
        tracep->fullBit(oldp+88,(vlSymsp->TOP__Bitty.reg_en[5]));
        tracep->fullBit(oldp+89,(vlSymsp->TOP__Bitty.reg_en[6]));
        tracep->fullBit(oldp+90,(vlSymsp->TOP__Bitty.reg_en[7]));
        tracep->fullBit(oldp+91,(vlSymsp->TOP__Bitty.reg_en[8]));
        tracep->fullBit(oldp+92,(vlSymsp->TOP__Bitty.reg_en[9]));
        tracep->fullBit(oldp+93,(vlSymsp->TOP__Bitty.reg_en[10]));
        tracep->fullBit(oldp+94,((vlSymsp->TOP__Bitty.d_out
                                  [0U] == (IData)(vlSymsp->TOP__Bitty.__PVT__mux_out))));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__Bitty.reg_en
                                 [1U]));
        tracep->fullSData(oldp+96,(vlSymsp->TOP__Bitty.d_in
                                   [1U]),16);
        tracep->fullBit(oldp+97,(vlSymsp->TOP__Bitty.reg_en
                                 [0U]));
        tracep->fullSData(oldp+98,(vlSymsp->TOP__Bitty.d_in
                                   [0U]),16);
        tracep->fullBit(oldp+99,(vlSymsp->TOP__Bitty.reg_en
                                 [0xaU]));
        tracep->fullSData(oldp+100,(vlSymsp->TOP__Bitty.d_out
                                    [2U]),16);
        tracep->fullSData(oldp+101,(vlSymsp->TOP__Bitty.d_out
                                    [3U]),16);
        tracep->fullSData(oldp+102,(vlSymsp->TOP__Bitty.d_out
                                    [4U]),16);
        tracep->fullSData(oldp+103,(vlSymsp->TOP__Bitty.d_out
                                    [5U]),16);
        tracep->fullSData(oldp+104,(vlSymsp->TOP__Bitty.d_out
                                    [6U]),16);
        tracep->fullSData(oldp+105,(vlSymsp->TOP__Bitty.d_out
                                    [7U]),16);
        tracep->fullSData(oldp+106,(vlSymsp->TOP__Bitty.d_out
                                    [8U]),16);
        tracep->fullSData(oldp+107,(vlSymsp->TOP__Bitty.d_out
                                    [9U]),16);
        tracep->fullSData(oldp+108,(vlSymsp->TOP__Bitty.d_out
                                    [0U]),16);
        tracep->fullSData(oldp+109,(vlSymsp->TOP__Bitty.d_out
                                    [0xaU]),16);
        tracep->fullCData(oldp+110,(((2U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                                      ? ((1U & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                                          ? ((IData)(vlTOPp->run)
                                              ? 0U : 3U)
                                          : 3U) : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__Bitty.__PVT__ControlUnit1__DOT__state))
                                                    ? 2U
                                                    : 1U))),2);
        tracep->fullBit(oldp+111,(vlSymsp->TOP__Bitty.reg_en
                                  [2U]));
        tracep->fullSData(oldp+112,(vlSymsp->TOP__Bitty.d_in
                                    [2U]),16);
        tracep->fullBit(oldp+113,(vlSymsp->TOP__Bitty.reg_en
                                  [3U]));
        tracep->fullSData(oldp+114,(vlSymsp->TOP__Bitty.d_in
                                    [3U]),16);
        tracep->fullBit(oldp+115,(vlSymsp->TOP__Bitty.reg_en
                                  [4U]));
        tracep->fullSData(oldp+116,(vlSymsp->TOP__Bitty.d_in
                                    [4U]),16);
        tracep->fullBit(oldp+117,(vlSymsp->TOP__Bitty.reg_en
                                  [5U]));
        tracep->fullSData(oldp+118,(vlSymsp->TOP__Bitty.d_in
                                    [5U]),16);
        tracep->fullBit(oldp+119,(vlSymsp->TOP__Bitty.reg_en
                                  [6U]));
        tracep->fullSData(oldp+120,(vlSymsp->TOP__Bitty.d_in
                                    [6U]),16);
        tracep->fullBit(oldp+121,(vlSymsp->TOP__Bitty.reg_en
                                  [7U]));
        tracep->fullSData(oldp+122,(vlSymsp->TOP__Bitty.d_in
                                    [7U]),16);
        tracep->fullBit(oldp+123,(vlSymsp->TOP__Bitty.reg_en
                                  [8U]));
        tracep->fullSData(oldp+124,(vlSymsp->TOP__Bitty.d_in
                                    [8U]),16);
        tracep->fullBit(oldp+125,(vlSymsp->TOP__Bitty.reg_en
                                  [9U]));
        tracep->fullSData(oldp+126,(vlSymsp->TOP__Bitty.d_in
                                    [9U]),16);
        tracep->fullBit(oldp+127,(vlSymsp->TOP__Bitty.__PVT__carry_in));
        tracep->fullBit(oldp+128,(0U));
    }
}
