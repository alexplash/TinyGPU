// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_gpu_top__Syms.h"


void Vtb_gpu_top___024root__trace_chg_0_sub_0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_gpu_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_chg_0\n"); );
    // Body
    Vtb_gpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gpu_top___024root*>(voidSelf);
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_gpu_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_gpu_top___024root__trace_chg_0_sub_0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_gpu_top__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_gpu_top__DOT__start));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_gpu_top__DOT__op_code),2);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_gpu_top__DOT__cfg_data),8);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_gpu_top__DOT__A[0]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_gpu_top__DOT__A[1]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_gpu_top__DOT__A[2]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_gpu_top__DOT__A[3]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_gpu_top__DOT__A[4]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_gpu_top__DOT__A[5]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_gpu_top__DOT__A[6]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_gpu_top__DOT__A[7]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_gpu_top__DOT__A[8]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_gpu_top__DOT__A[9]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_gpu_top__DOT__A[10]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_gpu_top__DOT__A[11]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_gpu_top__DOT__A[12]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_gpu_top__DOT__A[13]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_gpu_top__DOT__A[14]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.tb_gpu_top__DOT__A[15]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_gpu_top__DOT__B[0]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_gpu_top__DOT__B[1]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_gpu_top__DOT__B[2]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_gpu_top__DOT__B[3]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_gpu_top__DOT__C[0]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_gpu_top__DOT__C[1]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_gpu_top__DOT__C[2]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_gpu_top__DOT__C[3]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_gpu_top__DOT__C[4]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_gpu_top__DOT__C[5]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_gpu_top__DOT__C[6]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_gpu_top__DOT__C[7]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_gpu_top__DOT__C[8]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_gpu_top__DOT__C[9]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_gpu_top__DOT__C[10]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_gpu_top__DOT__C[11]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_gpu_top__DOT__C[12]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_gpu_top__DOT__C[13]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_gpu_top__DOT__C[14]),8);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_gpu_top__DOT__C[15]),8);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_gpu_top__DOT__D[0]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_gpu_top__DOT__D[1]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_gpu_top__DOT__D[2]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_gpu_top__DOT__D[3]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_gpu_top__DOT__E[0]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_gpu_top__DOT__E[1]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_gpu_top__DOT__E[2]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_gpu_top__DOT__E[3]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_gpu_top__DOT__E[4]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_gpu_top__DOT__E[5]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.tb_gpu_top__DOT__E[6]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.tb_gpu_top__DOT__E[7]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.tb_gpu_top__DOT__E[8]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_gpu_top__DOT__E[9]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_gpu_top__DOT__E[10]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_gpu_top__DOT__E[11]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_gpu_top__DOT__E[12]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_gpu_top__DOT__E[13]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_gpu_top__DOT__E[14]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_gpu_top__DOT__E[15]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_gpu_top__DOT__F[0]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_gpu_top__DOT__F[1]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_gpu_top__DOT__F[2]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.tb_gpu_top__DOT__F[3]),8);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_gpu_top__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_gpu_top__DOT__unnamedblk12__DOT__i),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_gpu_top__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_gpu_top__DOT__unnamedblk9__DOT__r),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_gpu_top__DOT__unnamedblk9__DOT__unnamedblk10__DOT__c),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgCData(oldp+69,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d),2);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+74,(((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__core_is_computing) 
                               | (0U != (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q)))));
        bufp->chgBit(oldp+75,(vlSelfRef.tb_gpu_top__DOT__result_vld));
        bufp->chgBit(oldp+76,(vlSelfRef.tb_gpu_top__DOT__result_rdy));
        bufp->chgSData(oldp+77,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                                [vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt]),16);
        bufp->chgBit(oldp+78,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy));
        bufp->chgBit(oldp+79,((0U != (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))));
        bufp->chgBit(oldp+80,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__core_is_computing));
        bufp->chgCData(oldp+81,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state),2);
        bufp->chgCData(oldp+82,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0]),8);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[1]),8);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[2]),8);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[3]),8);
        bufp->chgCData(oldp+86,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[4]),8);
        bufp->chgCData(oldp+87,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[5]),8);
        bufp->chgCData(oldp+88,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[6]),8);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[7]),8);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[8]),8);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[9]),8);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[10]),8);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[11]),8);
        bufp->chgCData(oldp+94,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[12]),8);
        bufp->chgCData(oldp+95,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[13]),8);
        bufp->chgCData(oldp+96,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[14]),8);
        bufp->chgCData(oldp+97,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[15]),8);
        bufp->chgSData(oldp+98,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[0]),16);
        bufp->chgSData(oldp+99,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[1]),16);
        bufp->chgSData(oldp+100,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[2]),16);
        bufp->chgSData(oldp+101,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[3]),16);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt),4);
        bufp->chgCData(oldp+103,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt),2);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt),2);
        bufp->chgBit(oldp+105,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire));
        bufp->chgIData(oldp+106,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__r),32);
        bufp->chgIData(oldp+107,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod),32);
        bufp->chgIData(oldp+108,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum),32);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_w_base),8);
        bufp->chgCData(oldp+110,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_x_base),8);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q),2);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q),32);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q),32);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q),32);
        bufp->chgIData(oldp+115,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q),32);
        bufp->chgBit(oldp+116,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full));
        bufp->chgCData(oldp+117,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+118,(vlSelfRef.tb_gpu_top__DOT__m_req_vld));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_gpu_top__DOT__m_req_rdy));
        bufp->chgCData(oldp+120,(vlSelfRef.tb_gpu_top__DOT__m_req_addr),8);
        bufp->chgBit(oldp+121,(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld));
        bufp->chgCData(oldp+122,(vlSelfRef.tb_gpu_top__DOT__m_rsp_data),8);
        bufp->chgBit(oldp+123,(vlSelfRef.tb_gpu_top__DOT__pending));
        bufp->chgCData(oldp+124,(vlSelfRef.tb_gpu_top__DOT__pend_addr),8);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_gpu_top__DOT__countdown),32);
        bufp->chgCData(oldp+126,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data),8);
        bufp->chgCData(oldp+127,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n),2);
        bufp->chgBit(oldp+128,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy));
        bufp->chgBit(oldp+130,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire));
        bufp->chgBit(oldp+131,(((IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld) 
                                & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy))));
        bufp->chgBit(oldp+132,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__stall_req));
    }
    bufp->chgBit(oldp+133,(vlSelfRef.tb_gpu_top__DOT__clk));
    bufp->chgBit(oldp+134,(((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full) 
                            | (IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld))));
}

void Vtb_gpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_cleanup\n"); );
    // Body
    Vtb_gpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gpu_top___024root*>(voidSelf);
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
