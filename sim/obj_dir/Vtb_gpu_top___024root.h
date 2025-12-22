// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gpu_top.h for the primary calling header

#ifndef VERILATED_VTB_GPU_TOP___024ROOT_H_
#define VERILATED_VTB_GPU_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_gpu_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gpu_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_gpu_top__DOT__clk;
        CData/*0:0*/ tb_gpu_top__DOT__rst_n;
        CData/*0:0*/ tb_gpu_top__DOT__start;
        CData/*1:0*/ tb_gpu_top__DOT__op_code;
        CData/*7:0*/ tb_gpu_top__DOT__cfg_data;
        CData/*0:0*/ tb_gpu_top__DOT__m_req_vld;
        CData/*0:0*/ tb_gpu_top__DOT__m_req_rdy;
        CData/*7:0*/ tb_gpu_top__DOT__m_req_addr;
        CData/*0:0*/ tb_gpu_top__DOT__m_rsp_vld;
        CData/*7:0*/ tb_gpu_top__DOT__m_rsp_data;
        CData/*0:0*/ tb_gpu_top__DOT__result_vld;
        CData/*0:0*/ tb_gpu_top__DOT__result_rdy;
        CData/*0:0*/ tb_gpu_top__DOT__pending;
        CData/*7:0*/ tb_gpu_top__DOT__pend_addr;
        CData/*0:0*/ tb_gpu_top__DOT__dut__DOT__fe_src_rdy;
        CData/*7:0*/ tb_gpu_top__DOT__dut__DOT__fe_src_data;
        CData/*0:0*/ tb_gpu_top__DOT__dut__DOT__core_is_computing;
        CData/*7:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_w_base;
        CData/*7:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_x_base;
        CData/*0:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy;
        CData/*1:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q;
        CData/*1:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d;
        CData/*0:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire;
        CData/*0:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire;
        CData/*0:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__stall_req;
        CData/*0:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full;
        CData/*7:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data;
        CData/*1:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__state;
        CData/*1:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n;
        CData/*3:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt;
        CData/*1:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt;
        CData/*1:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt;
        CData/*0:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire;
        CData/*0:0*/ __Vdly__tb_gpu_top__DOT__m_req_rdy;
        CData/*0:0*/ __Vdly__tb_gpu_top__DOT__pending;
        CData/*7:0*/ __Vdly__tb_gpu_top__DOT__pend_addr;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_gpu_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_gpu_top__DOT__rst_n__0;
        IData/*31:0*/ tb_gpu_top__DOT__countdown;
        IData/*31:0*/ tb_gpu_top__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ tb_gpu_top__DOT__unnamedblk9__DOT__r;
        IData/*31:0*/ tb_gpu_top__DOT__unnamedblk9__DOT__unnamedblk10__DOT__c;
        IData/*31:0*/ tb_gpu_top__DOT__unnamedblk11__DOT__i;
        IData/*31:0*/ tb_gpu_top__DOT__unnamedblk12__DOT__i;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__r;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__c;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod;
        IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum;
        IData/*31:0*/ __Vdly__tb_gpu_top__DOT__countdown;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 256> tb_gpu_top__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16> tb_gpu_top__DOT__A;
        VlUnpacked<CData/*7:0*/, 4> tb_gpu_top__DOT__B;
        VlUnpacked<CData/*7:0*/, 16> tb_gpu_top__DOT__C;
        VlUnpacked<CData/*7:0*/, 4> tb_gpu_top__DOT__D;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 16> tb_gpu_top__DOT__E;
        VlUnpacked<CData/*7:0*/, 4> tb_gpu_top__DOT__F;
        VlUnpacked<CData/*7:0*/, 16> tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem;
        VlUnpacked<SData/*15:0*/, 4> tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0b0126ba__0;
    VlTriggerScheduler __VtrigSched_h0b0126f9__0;

    // INTERNAL VARIABLES
    Vtb_gpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_gpu_top___024root(Vtb_gpu_top__Syms* symsp, const char* v__name);
    ~Vtb_gpu_top___024root();
    VL_UNCOPYABLE(Vtb_gpu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
