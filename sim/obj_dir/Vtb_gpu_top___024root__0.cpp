// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gpu_top.h for the primary calling header

#include "Vtb_gpu_top__pch.h"

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_initial__TOP(Vtb_gpu_top___024root* vlSelf);
VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__0(Vtb_gpu_top___024root* vlSelf);
VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__1(Vtb_gpu_top___024root* vlSelf);

void Vtb_gpu_top___024root___eval_initial(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_gpu_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__0(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_gpu_top__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_gpu_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    std::string __Vtask_tb_gpu_top__DOT__do_test__0__name;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__W_BASE;
    __Vtask_tb_gpu_top__DOT__do_test__0__W_BASE = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__X_BASE;
    __Vtask_tb_gpu_top__DOT__do_test__0__X_BASE = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vtask_tb_gpu_top__DOT__do_test__0__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__0__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__0__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__0__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk4__DOT__i;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk5__DOT__r;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk5__DOT__r = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__r;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__r = 0;
    SData/*15:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__0__got;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__0__got[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__out_count;
    __Vtask_tb_gpu_top__DOT__do_test__0__out_count = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__0__watchdog;
    __Vtask_tb_gpu_top__DOT__do_test__0__watchdog = 0;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__0__expY;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__0__expY[__Vi0] = 0;
    }
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__1__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__1__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__1__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__1__data = 0;
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__2__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__2__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__2__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__2__data = 0;
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__3__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__3__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__3__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__3__data = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_mat4__4__label;
    VlUnpacked<CData/*7:0*/, 16> __Vtask_tb_gpu_top__DOT__print_mat4__4__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_mat4__4__W[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__print_mat4__4__unnamedblk2__DOT__r;
    __Vtask_tb_gpu_top__DOT__print_mat4__4__unnamedblk2__DOT__r = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_vec4__5__label;
    VlUnpacked<CData/*7:0*/, 4> __Vtask_tb_gpu_top__DOT__print_vec4__5__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_vec4__5__X[__Vi0] = 0;
    }
    std::string __Vtask_tb_gpu_top__DOT__print_out4__6__label;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__print_out4__6__Y;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_out4__6__Y[__Vi0] = 0;
    }
    SData/*15:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vfunc_tb_gpu_top__DOT__expected_row__7__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__7__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vfunc_tb_gpu_top__DOT__expected_row__7__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__7__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0;
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__7__sum;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_out4__8__label;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__print_out4__8__Y;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_out4__8__Y[__Vi0] = 0;
    }
    SData/*15:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vfunc_tb_gpu_top__DOT__expected_row__9__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__9__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vfunc_tb_gpu_top__DOT__expected_row__9__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__9__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0;
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__9__sum;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0;
    std::string __Vtask_tb_gpu_top__DOT__do_test__10__name;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__W_BASE;
    __Vtask_tb_gpu_top__DOT__do_test__10__W_BASE = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__X_BASE;
    __Vtask_tb_gpu_top__DOT__do_test__10__X_BASE = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vtask_tb_gpu_top__DOT__do_test__10__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__10__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__10__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__10__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk4__DOT__i;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk5__DOT__r;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk5__DOT__r = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__r;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__r = 0;
    SData/*15:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__10__got;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__10__got[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__out_count;
    __Vtask_tb_gpu_top__DOT__do_test__10__out_count = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__10__watchdog;
    __Vtask_tb_gpu_top__DOT__do_test__10__watchdog = 0;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__10__expY;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__10__expY[__Vi0] = 0;
    }
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__11__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__11__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__11__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__11__data = 0;
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__12__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__12__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__12__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__12__data = 0;
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__13__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__13__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__13__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__13__data = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_mat4__14__label;
    VlUnpacked<CData/*7:0*/, 16> __Vtask_tb_gpu_top__DOT__print_mat4__14__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_mat4__14__W[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__print_mat4__14__unnamedblk2__DOT__r;
    __Vtask_tb_gpu_top__DOT__print_mat4__14__unnamedblk2__DOT__r = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_vec4__15__label;
    VlUnpacked<CData/*7:0*/, 4> __Vtask_tb_gpu_top__DOT__print_vec4__15__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_vec4__15__X[__Vi0] = 0;
    }
    std::string __Vtask_tb_gpu_top__DOT__print_out4__16__label;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__print_out4__16__Y;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_out4__16__Y[__Vi0] = 0;
    }
    SData/*15:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vfunc_tb_gpu_top__DOT__expected_row__17__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__17__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vfunc_tb_gpu_top__DOT__expected_row__17__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__17__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0;
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__17__sum;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_out4__18__label;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__print_out4__18__Y;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_out4__18__Y[__Vi0] = 0;
    }
    SData/*15:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vfunc_tb_gpu_top__DOT__expected_row__19__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__19__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vfunc_tb_gpu_top__DOT__expected_row__19__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__19__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0;
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__19__sum;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0;
    std::string __Vtask_tb_gpu_top__DOT__do_test__20__name;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__W_BASE;
    __Vtask_tb_gpu_top__DOT__do_test__20__W_BASE = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__X_BASE;
    __Vtask_tb_gpu_top__DOT__do_test__20__X_BASE = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vtask_tb_gpu_top__DOT__do_test__20__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__20__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__20__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__20__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk4__DOT__i;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk5__DOT__r;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk5__DOT__r = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__r;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__r = 0;
    SData/*15:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__20__got;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__20__got[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__out_count;
    __Vtask_tb_gpu_top__DOT__do_test__20__out_count = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__do_test__20__watchdog;
    __Vtask_tb_gpu_top__DOT__do_test__20__watchdog = 0;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__do_test__20__expY;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__20__expY[__Vi0] = 0;
    }
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__21__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__21__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__21__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__21__data = 0;
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__22__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__22__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__22__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__22__data = 0;
    CData/*1:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__23__opc;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__23__opc = 0;
    CData/*7:0*/ __Vtask_tb_gpu_top__DOT__pulse_cmd__23__data;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__23__data = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_mat4__24__label;
    VlUnpacked<CData/*7:0*/, 16> __Vtask_tb_gpu_top__DOT__print_mat4__24__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_mat4__24__W[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__print_mat4__24__unnamedblk2__DOT__r;
    __Vtask_tb_gpu_top__DOT__print_mat4__24__unnamedblk2__DOT__r = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_vec4__25__label;
    VlUnpacked<CData/*7:0*/, 4> __Vtask_tb_gpu_top__DOT__print_vec4__25__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_vec4__25__X[__Vi0] = 0;
    }
    std::string __Vtask_tb_gpu_top__DOT__print_out4__26__label;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__print_out4__26__Y;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_out4__26__Y[__Vi0] = 0;
    }
    SData/*15:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vfunc_tb_gpu_top__DOT__expected_row__27__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__27__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vfunc_tb_gpu_top__DOT__expected_row__27__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__27__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0;
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__27__sum;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0;
    std::string __Vtask_tb_gpu_top__DOT__print_out4__28__label;
    VlUnpacked<SData/*15:0*/, 4> __Vtask_tb_gpu_top__DOT__print_out4__28__Y;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__print_out4__28__Y[__Vi0] = 0;
    }
    SData/*15:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 16> __Vfunc_tb_gpu_top__DOT__expected_row__29__W;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__29__W[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vfunc_tb_gpu_top__DOT__expected_row__29__X;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_tb_gpu_top__DOT__expected_row__29__X[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0;
    IData/*31:0*/ __Vfunc_tb_gpu_top__DOT__expected_row__29__sum;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0;
    // Body
    vlSelfRef.tb_gpu_top__DOT__unnamedblk8__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_gpu_top__DOT__unnamedblk8__DOT__i)) {
        vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU 
                                        & vlSelfRef.tb_gpu_top__DOT__unnamedblk8__DOT__i)] = 0U;
        vlSelfRef.tb_gpu_top__DOT__unnamedblk8__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_gpu_top__DOT__unnamedblk8__DOT__i);
    }
    vlSelfRef.tb_gpu_top__DOT__A[0U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__A[1U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[2U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[3U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[4U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[5U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__A[6U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[7U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[8U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[9U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[0x0aU] = 1U;
    vlSelfRef.tb_gpu_top__DOT__A[0x0bU] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[0x0cU] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[0x0dU] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[0x0eU] = 0U;
    vlSelfRef.tb_gpu_top__DOT__A[0x0fU] = 1U;
    vlSelfRef.tb_gpu_top__DOT__unnamedblk9__DOT__unnamedblk10__DOT__c = 4U;
    vlSelfRef.tb_gpu_top__DOT__unnamedblk9__DOT__r = 4U;
    vlSelfRef.tb_gpu_top__DOT__B[0U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__B[1U] = 2U;
    vlSelfRef.tb_gpu_top__DOT__B[2U] = 3U;
    vlSelfRef.tb_gpu_top__DOT__B[3U] = 4U;
    vlSelfRef.tb_gpu_top__DOT__C[0U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[1U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[3U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[4U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[5U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[6U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[7U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[8U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[9U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[0x0aU] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[0x0bU] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[0x0cU] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[0x0dU] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[0x0eU] = 1U;
    vlSelfRef.tb_gpu_top__DOT__C[0x0fU] = 1U;
    vlSelfRef.tb_gpu_top__DOT__unnamedblk11__DOT__i = 0x00000010U;
    vlSelfRef.tb_gpu_top__DOT__D[0U] = 5U;
    vlSelfRef.tb_gpu_top__DOT__D[1U] = 6U;
    vlSelfRef.tb_gpu_top__DOT__D[2U] = 7U;
    vlSelfRef.tb_gpu_top__DOT__D[3U] = 8U;
    vlSelfRef.tb_gpu_top__DOT__E[0U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__E[1U] = 2U;
    vlSelfRef.tb_gpu_top__DOT__E[2U] = 3U;
    vlSelfRef.tb_gpu_top__DOT__E[3U] = 4U;
    vlSelfRef.tb_gpu_top__DOT__E[4U] = 5U;
    vlSelfRef.tb_gpu_top__DOT__E[5U] = 6U;
    vlSelfRef.tb_gpu_top__DOT__E[6U] = 7U;
    vlSelfRef.tb_gpu_top__DOT__E[7U] = 8U;
    vlSelfRef.tb_gpu_top__DOT__E[8U] = 9U;
    vlSelfRef.tb_gpu_top__DOT__E[9U] = 0x0aU;
    vlSelfRef.tb_gpu_top__DOT__E[0x0aU] = 0x0bU;
    vlSelfRef.tb_gpu_top__DOT__E[0x0bU] = 0x0cU;
    vlSelfRef.tb_gpu_top__DOT__E[0x0cU] = 0x0dU;
    vlSelfRef.tb_gpu_top__DOT__E[0x0dU] = 0x0eU;
    vlSelfRef.tb_gpu_top__DOT__E[0x0eU] = 0x0fU;
    vlSelfRef.tb_gpu_top__DOT__E[0x0fU] = 0x10U;
    vlSelfRef.tb_gpu_top__DOT__unnamedblk12__DOT__i = 0x00000010U;
    vlSelfRef.tb_gpu_top__DOT__F[0U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__F[1U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__F[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__F[3U] = 0U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    vlSelfRef.tb_gpu_top__DOT__rst_n = 0U;
    tb_gpu_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_gpu_top__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_gpu_top.clk)", 
                                                             "../rtl/../tb/tb_gpu_top.sv", 
                                                             282);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_gpu_top__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_gpu_top__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_gpu_top__DOT__rst_n = 1U;
    __Vtask_tb_gpu_top__DOT__do_test__0__X[0U] = vlSelfRef.tb_gpu_top__DOT__B
        [0U];
    __Vtask_tb_gpu_top__DOT__do_test__0__X[1U] = vlSelfRef.tb_gpu_top__DOT__B
        [1U];
    __Vtask_tb_gpu_top__DOT__do_test__0__X[2U] = vlSelfRef.tb_gpu_top__DOT__B
        [2U];
    __Vtask_tb_gpu_top__DOT__do_test__0__X[3U] = vlSelfRef.tb_gpu_top__DOT__B
        [3U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[0U] = vlSelfRef.tb_gpu_top__DOT__A
        [0U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[1U] = vlSelfRef.tb_gpu_top__DOT__A
        [1U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[2U] = vlSelfRef.tb_gpu_top__DOT__A
        [2U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[3U] = vlSelfRef.tb_gpu_top__DOT__A
        [3U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[4U] = vlSelfRef.tb_gpu_top__DOT__A
        [4U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[5U] = vlSelfRef.tb_gpu_top__DOT__A
        [5U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[6U] = vlSelfRef.tb_gpu_top__DOT__A
        [6U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[7U] = vlSelfRef.tb_gpu_top__DOT__A
        [7U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[8U] = vlSelfRef.tb_gpu_top__DOT__A
        [8U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[9U] = vlSelfRef.tb_gpu_top__DOT__A
        [9U];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU] 
        = vlSelfRef.tb_gpu_top__DOT__A[0x0000000aU];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU] 
        = vlSelfRef.tb_gpu_top__DOT__A[0x0000000bU];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU] 
        = vlSelfRef.tb_gpu_top__DOT__A[0x0000000cU];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU] 
        = vlSelfRef.tb_gpu_top__DOT__A[0x0000000dU];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU] 
        = vlSelfRef.tb_gpu_top__DOT__A[0x0000000eU];
    __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU] 
        = vlSelfRef.tb_gpu_top__DOT__A[0x0000000fU];
    __Vtask_tb_gpu_top__DOT__do_test__0__X_BASE = 0x80U;
    __Vtask_tb_gpu_top__DOT__do_test__0__W_BASE = 0x10U;
    __Vtask_tb_gpu_top__DOT__do_test__0__name = "TEST1 A*B"s;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk4__DOT__i = 0;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk5__DOT__r = 0;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__r = 0;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__0__got[__Vi0] = 0;
    }
    __Vtask_tb_gpu_top__DOT__do_test__0__out_count = 0;
    __Vtask_tb_gpu_top__DOT__do_test__0__watchdog = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__0__expY[__Vi0] = 0;
    }
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0U;
    vlSelfRef.tb_gpu_top__DOT__mem[__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 1U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(1U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 2U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(2U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 3U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(3U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 4U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(4U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 5U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(5U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 6U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(6U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 7U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(7U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 8U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(8U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 9U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(9U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0x0000000aU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0aU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0aU];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0x0000000bU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0bU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0bU];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0x0000000cU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0cU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0cU];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0x0000000dU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0dU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0dU];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0x0000000eU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0eU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0eU];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0x0000000fU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0fU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0fU];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk3__DOT__i = 0x00000010U;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk4__DOT__i = 0U;
    vlSelfRef.tb_gpu_top__DOT__mem[__Vtask_tb_gpu_top__DOT__do_test__0__X_BASE] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk4__DOT__i = 1U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(1U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk4__DOT__i = 2U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(2U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk4__DOT__i = 3U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(3U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk4__DOT__i = 4U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__1__data = __Vtask_tb_gpu_top__DOT__do_test__0__W_BASE;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__1__opc = 0U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__1__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__1__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__2__data = __Vtask_tb_gpu_top__DOT__do_test__0__X_BASE;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__2__opc = 1U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__2__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__2__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    __Vtask_tb_gpu_top__DOT__do_test__0__out_count = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__3__data = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__3__opc = 2U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__3__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__3__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    VL_WRITEF_NX("\n==============================\n%@\nW_BASE=0x%0x X_BASE=0x%0x\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__do_test__0__name),
                 8,(IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE),
                 8,__Vtask_tb_gpu_top__DOT__do_test__0__X_BASE);
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[0U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[1U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[2U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[3U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[4U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[5U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[6U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[7U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[8U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[9U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vtask_tb_gpu_top__DOT__print_mat4__4__label = "W"s;
    __Vtask_tb_gpu_top__DOT__print_mat4__4__unnamedblk2__DOT__r = 0;
    VL_WRITEF_NX("%@ =\n",0,-1,&(__Vtask_tb_gpu_top__DOT__print_mat4__4__label));
    __Vtask_tb_gpu_top__DOT__print_mat4__4__unnamedblk2__DOT__r = 0U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [0U],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [1U],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [2U],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [3U]);
    __Vtask_tb_gpu_top__DOT__print_mat4__4__unnamedblk2__DOT__r = 1U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [4U],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [5U],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [6U],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [7U]);
    __Vtask_tb_gpu_top__DOT__print_mat4__4__unnamedblk2__DOT__r = 2U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [8U],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [9U],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [0x0aU],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [0x0bU]);
    __Vtask_tb_gpu_top__DOT__print_mat4__4__unnamedblk2__DOT__r = 3U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [0x0cU],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [0x0dU],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [0x0eU],8,__Vtask_tb_gpu_top__DOT__print_mat4__4__W
                 [0x0fU]);
    __Vtask_tb_gpu_top__DOT__print_mat4__4__unnamedblk2__DOT__r = 4U;
    __Vtask_tb_gpu_top__DOT__print_vec4__5__X[0U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vtask_tb_gpu_top__DOT__print_vec4__5__X[1U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vtask_tb_gpu_top__DOT__print_vec4__5__X[2U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vtask_tb_gpu_top__DOT__print_vec4__5__X[3U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vtask_tb_gpu_top__DOT__print_vec4__5__label = "X"s;
    VL_WRITEF_NX("%@ = [%0d %0d %0d %0d]\n",0,-1,&(__Vtask_tb_gpu_top__DOT__print_vec4__5__label),
                 8,__Vtask_tb_gpu_top__DOT__print_vec4__5__X
                 [0U],8,__Vtask_tb_gpu_top__DOT__print_vec4__5__X
                 [1U],8,__Vtask_tb_gpu_top__DOT__print_vec4__5__X
                 [2U],8,__Vtask_tb_gpu_top__DOT__print_vec4__5__X
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__0__watchdog = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_gpu_top__DOT__do_test__0__out_count)) {
        co_await vlSelfRef.__VtrigSched_h0b0126f9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_gpu_top.clk)", 
                                                             "../rtl/../tb/tb_gpu_top.sv", 
                                                             204);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_gpu_top__DOT__do_test__0__watchdog 
            = ((IData)(1U) + __Vtask_tb_gpu_top__DOT__do_test__0__watchdog);
        if (VL_UNLIKELY(((0x00001388U < __Vtask_tb_gpu_top__DOT__do_test__0__watchdog)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:208: Assertion failed in %Ntb_gpu_top.do_test: %@ TIMEOUT: never received 4 results (got %0d)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),-1,&(__Vtask_tb_gpu_top__DOT__do_test__0__name),
                         32,__Vtask_tb_gpu_top__DOT__do_test__0__out_count);
            VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 208, "", false);
        }
        if (((IData)(vlSelfRef.tb_gpu_top__DOT__result_vld) 
             & (IData)(vlSelfRef.tb_gpu_top__DOT__result_rdy))) {
            __Vtask_tb_gpu_top__DOT__do_test__0__got[(3U 
                                                      & __Vtask_tb_gpu_top__DOT__do_test__0__out_count)] 
                = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                [vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt];
            __Vtask_tb_gpu_top__DOT__do_test__0__out_count 
                = ((IData)(1U) + __Vtask_tb_gpu_top__DOT__do_test__0__out_count);
        }
    }
    __Vtask_tb_gpu_top__DOT__print_out4__6__Y[0U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__got[0U];
    __Vtask_tb_gpu_top__DOT__print_out4__6__Y[1U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__got[1U];
    __Vtask_tb_gpu_top__DOT__print_out4__6__Y[2U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__got[2U];
    __Vtask_tb_gpu_top__DOT__print_out4__6__Y[3U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__got[3U];
    __Vtask_tb_gpu_top__DOT__print_out4__6__label = "Y_got"s;
    VL_WRITEF_NX("%@ =\n  dec: [%0# %0# %0# %0#]\n  hex: [0x%0x 0x%0x 0x%0x 0x%0x]\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__print_out4__6__label),
                 16,__Vtask_tb_gpu_top__DOT__print_out4__6__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__6__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__6__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__6__Y
                 [3U],16,__Vtask_tb_gpu_top__DOT__print_out4__6__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__6__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__6__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__6__Y
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk5__DOT__r = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                      [0U])) * (0x000000ffU 
                                                & VL_EXTENDS_II(32,8, 
                                                                __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [1U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                   [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [2U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                   [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [3U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                   [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__7__sum);
    __Vtask_tb_gpu_top__DOT__do_test__0__expY[0U] = __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk5__DOT__r = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                      [4U])) * (0x000000ffU 
                                                & VL_EXTENDS_II(32,8, 
                                                                __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [5U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                   [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [6U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                   [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [7U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                   [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__7__sum);
    __Vtask_tb_gpu_top__DOT__do_test__0__expY[1U] = __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk5__DOT__r = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                      [8U])) * (0x000000ffU 
                                                & VL_EXTENDS_II(32,8, 
                                                                __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [9U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                   [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [0x0aU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [0x0bU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__7__sum);
    __Vtask_tb_gpu_top__DOT__do_test__0__expY[2U] = __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk5__DOT__r = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                      [0x0cU])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                                                   [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [0x0dU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [0x0eU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__7__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__W
                                         [0x0fU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__7__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__7__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__7__sum);
    __Vtask_tb_gpu_top__DOT__do_test__0__expY[3U] = __Vfunc_tb_gpu_top__DOT__expected_row__7__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk5__DOT__r = 4U;
    __Vtask_tb_gpu_top__DOT__print_out4__8__Y[0U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__expY[0U];
    __Vtask_tb_gpu_top__DOT__print_out4__8__Y[1U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__expY[1U];
    __Vtask_tb_gpu_top__DOT__print_out4__8__Y[2U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__expY[2U];
    __Vtask_tb_gpu_top__DOT__print_out4__8__Y[3U] = 
        __Vtask_tb_gpu_top__DOT__do_test__0__expY[3U];
    __Vtask_tb_gpu_top__DOT__print_out4__8__label = "Y_exp"s;
    VL_WRITEF_NX("%@ =\n  dec: [%0# %0# %0# %0#]\n  hex: [0x%0x 0x%0x 0x%0x 0x%0x]\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__print_out4__8__label),
                 16,__Vtask_tb_gpu_top__DOT__print_out4__8__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__8__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__8__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__8__Y
                 [3U],16,__Vtask_tb_gpu_top__DOT__print_out4__8__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__8__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__8__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__8__Y
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__r = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                      [0U])) * (0x000000ffU 
                                                & VL_EXTENDS_II(32,8, 
                                                                __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [1U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                   [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [2U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                   [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [3U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                   [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__9__sum);
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__0__got
                      [0U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 0: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__0__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__0__got
                     [0U],16,__Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__r = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                      [4U])) * (0x000000ffU 
                                                & VL_EXTENDS_II(32,8, 
                                                                __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [5U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                   [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [6U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                   [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [7U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                   [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__9__sum);
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__0__got
                      [1U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 1: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__0__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__0__got
                     [1U],16,__Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__r = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                      [8U])) * (0x000000ffU 
                                                & VL_EXTENDS_II(32,8, 
                                                                __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [9U])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                   [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [0x0aU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [0x0bU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__9__sum);
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__0__got
                      [2U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 2: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__0__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__0__got
                     [2U],16,__Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__r = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__0__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                      [0x0cU])) * (0x000000ffU 
                                                   & VL_EXTENDS_II(32,8, 
                                                                   __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                                                   [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [0x0dU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [0x0eU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__sum = 
        (__Vfunc_tb_gpu_top__DOT__expected_row__9__sum 
         + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__W
                                         [0x0fU])) 
            * (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__9__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__9__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__9__sum);
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__9__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__0__got
                      [3U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 3: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__0__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__0__got
                     [3U],16,__Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__0__unnamedblk6__DOT__r = 4U;
    VL_WRITEF_NX("%@ PASS (W_BASE=0x%0x X_BASE=0x%0x)\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__do_test__0__name),
                 8,(IData)(__Vtask_tb_gpu_top__DOT__do_test__0__W_BASE),
                 8,__Vtask_tb_gpu_top__DOT__do_test__0__X_BASE);
    __Vtask_tb_gpu_top__DOT__do_test__10__X[0U] = vlSelfRef.tb_gpu_top__DOT__D
        [0U];
    __Vtask_tb_gpu_top__DOT__do_test__10__X[1U] = vlSelfRef.tb_gpu_top__DOT__D
        [1U];
    __Vtask_tb_gpu_top__DOT__do_test__10__X[2U] = vlSelfRef.tb_gpu_top__DOT__D
        [2U];
    __Vtask_tb_gpu_top__DOT__do_test__10__X[3U] = vlSelfRef.tb_gpu_top__DOT__D
        [3U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[0U] = vlSelfRef.tb_gpu_top__DOT__C
        [0U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[1U] = vlSelfRef.tb_gpu_top__DOT__C
        [1U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[2U] = vlSelfRef.tb_gpu_top__DOT__C
        [2U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[3U] = vlSelfRef.tb_gpu_top__DOT__C
        [3U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[4U] = vlSelfRef.tb_gpu_top__DOT__C
        [4U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[5U] = vlSelfRef.tb_gpu_top__DOT__C
        [5U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[6U] = vlSelfRef.tb_gpu_top__DOT__C
        [6U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[7U] = vlSelfRef.tb_gpu_top__DOT__C
        [7U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[8U] = vlSelfRef.tb_gpu_top__DOT__C
        [8U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[9U] = vlSelfRef.tb_gpu_top__DOT__C
        [9U];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU] 
        = vlSelfRef.tb_gpu_top__DOT__C[0x0000000aU];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU] 
        = vlSelfRef.tb_gpu_top__DOT__C[0x0000000bU];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU] 
        = vlSelfRef.tb_gpu_top__DOT__C[0x0000000cU];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU] 
        = vlSelfRef.tb_gpu_top__DOT__C[0x0000000dU];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU] 
        = vlSelfRef.tb_gpu_top__DOT__C[0x0000000eU];
    __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU] 
        = vlSelfRef.tb_gpu_top__DOT__C[0x0000000fU];
    __Vtask_tb_gpu_top__DOT__do_test__10__X_BASE = 0xa0U;
    __Vtask_tb_gpu_top__DOT__do_test__10__W_BASE = 0x30U;
    __Vtask_tb_gpu_top__DOT__do_test__10__name = "TEST2 C*D"s;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk4__DOT__i = 0;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk5__DOT__r = 0;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__r = 0;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__10__got[__Vi0] = 0;
    }
    __Vtask_tb_gpu_top__DOT__do_test__10__out_count = 0;
    __Vtask_tb_gpu_top__DOT__do_test__10__watchdog = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__10__expY[__Vi0] = 0;
    }
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0U;
    vlSelfRef.tb_gpu_top__DOT__mem[__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 1U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(1U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 2U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(2U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 3U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(3U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 4U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(4U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 5U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(5U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 6U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(6U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 7U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(7U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 8U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(8U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 9U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(9U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0x0000000aU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0aU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0aU];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0x0000000bU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0bU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0bU];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0x0000000cU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0cU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0cU];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0x0000000dU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0dU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0dU];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0x0000000eU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0eU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0eU];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0x0000000fU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0fU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0fU];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk3__DOT__i = 0x00000010U;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk4__DOT__i = 0U;
    vlSelfRef.tb_gpu_top__DOT__mem[__Vtask_tb_gpu_top__DOT__do_test__10__X_BASE] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk4__DOT__i = 1U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(1U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk4__DOT__i = 2U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(2U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk4__DOT__i = 3U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(3U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk4__DOT__i = 4U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__11__data = __Vtask_tb_gpu_top__DOT__do_test__10__W_BASE;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__11__opc = 0U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__11__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__11__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__12__data = __Vtask_tb_gpu_top__DOT__do_test__10__X_BASE;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__12__opc = 1U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__12__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__12__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    __Vtask_tb_gpu_top__DOT__do_test__10__out_count = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__13__data = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__13__opc = 2U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__13__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__13__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    VL_WRITEF_NX("\n==============================\n%@\nW_BASE=0x%0x X_BASE=0x%0x\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__do_test__10__name),
                 8,(IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE),
                 8,__Vtask_tb_gpu_top__DOT__do_test__10__X_BASE);
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vtask_tb_gpu_top__DOT__print_mat4__14__label = "W"s;
    __Vtask_tb_gpu_top__DOT__print_mat4__14__unnamedblk2__DOT__r = 0;
    VL_WRITEF_NX("%@ =\n",0,-1,&(__Vtask_tb_gpu_top__DOT__print_mat4__14__label));
    __Vtask_tb_gpu_top__DOT__print_mat4__14__unnamedblk2__DOT__r = 0U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [0U],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [1U],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [2U],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [3U]);
    __Vtask_tb_gpu_top__DOT__print_mat4__14__unnamedblk2__DOT__r = 1U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [4U],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [5U],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [6U],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [7U]);
    __Vtask_tb_gpu_top__DOT__print_mat4__14__unnamedblk2__DOT__r = 2U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [8U],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [9U],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [0x0aU],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [0x0bU]);
    __Vtask_tb_gpu_top__DOT__print_mat4__14__unnamedblk2__DOT__r = 3U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [0x0cU],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [0x0dU],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [0x0eU],8,__Vtask_tb_gpu_top__DOT__print_mat4__14__W
                 [0x0fU]);
    __Vtask_tb_gpu_top__DOT__print_mat4__14__unnamedblk2__DOT__r = 4U;
    __Vtask_tb_gpu_top__DOT__print_vec4__15__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vtask_tb_gpu_top__DOT__print_vec4__15__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vtask_tb_gpu_top__DOT__print_vec4__15__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vtask_tb_gpu_top__DOT__print_vec4__15__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vtask_tb_gpu_top__DOT__print_vec4__15__label = "X"s;
    VL_WRITEF_NX("%@ = [%0d %0d %0d %0d]\n",0,-1,&(__Vtask_tb_gpu_top__DOT__print_vec4__15__label),
                 8,__Vtask_tb_gpu_top__DOT__print_vec4__15__X
                 [0U],8,__Vtask_tb_gpu_top__DOT__print_vec4__15__X
                 [1U],8,__Vtask_tb_gpu_top__DOT__print_vec4__15__X
                 [2U],8,__Vtask_tb_gpu_top__DOT__print_vec4__15__X
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__10__watchdog = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_gpu_top__DOT__do_test__10__out_count)) {
        co_await vlSelfRef.__VtrigSched_h0b0126f9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_gpu_top.clk)", 
                                                             "../rtl/../tb/tb_gpu_top.sv", 
                                                             204);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_gpu_top__DOT__do_test__10__watchdog 
            = ((IData)(1U) + __Vtask_tb_gpu_top__DOT__do_test__10__watchdog);
        if (VL_UNLIKELY(((0x00001388U < __Vtask_tb_gpu_top__DOT__do_test__10__watchdog)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:208: Assertion failed in %Ntb_gpu_top.do_test: %@ TIMEOUT: never received 4 results (got %0d)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),-1,&(__Vtask_tb_gpu_top__DOT__do_test__10__name),
                         32,__Vtask_tb_gpu_top__DOT__do_test__10__out_count);
            VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 208, "", false);
        }
        if (((IData)(vlSelfRef.tb_gpu_top__DOT__result_vld) 
             & (IData)(vlSelfRef.tb_gpu_top__DOT__result_rdy))) {
            __Vtask_tb_gpu_top__DOT__do_test__10__got[(3U 
                                                       & __Vtask_tb_gpu_top__DOT__do_test__10__out_count)] 
                = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                [vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt];
            __Vtask_tb_gpu_top__DOT__do_test__10__out_count 
                = ((IData)(1U) + __Vtask_tb_gpu_top__DOT__do_test__10__out_count);
        }
    }
    __Vtask_tb_gpu_top__DOT__print_out4__16__Y[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__got
        [0U];
    __Vtask_tb_gpu_top__DOT__print_out4__16__Y[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__got
        [1U];
    __Vtask_tb_gpu_top__DOT__print_out4__16__Y[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__got
        [2U];
    __Vtask_tb_gpu_top__DOT__print_out4__16__Y[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__got
        [3U];
    __Vtask_tb_gpu_top__DOT__print_out4__16__label = "Y_got"s;
    VL_WRITEF_NX("%@ =\n  dec: [%0# %0# %0# %0#]\n  hex: [0x%0x 0x%0x 0x%0x 0x%0x]\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__print_out4__16__label),
                 16,__Vtask_tb_gpu_top__DOT__print_out4__16__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__16__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__16__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__16__Y
                 [3U],16,__Vtask_tb_gpu_top__DOT__print_out4__16__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__16__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__16__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__16__Y
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk5__DOT__r = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                        [0U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [1U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [2U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [3U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__17__sum);
    __Vtask_tb_gpu_top__DOT__do_test__10__expY[0U] 
        = __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk5__DOT__r = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                        [4U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [5U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [6U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [7U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__17__sum);
    __Vtask_tb_gpu_top__DOT__do_test__10__expY[1U] 
        = __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk5__DOT__r = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                        [8U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [9U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [0x0aU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                             [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [0x0bU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                             [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__17__sum);
    __Vtask_tb_gpu_top__DOT__do_test__10__expY[2U] 
        = __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk5__DOT__r = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                        [0x0cU])) * 
           (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                        [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [0x0dU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                             [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [0x0eU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                             [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__17__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__17__W
                                           [0x0fU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__17__X
                                             [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__17__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__17__sum);
    __Vtask_tb_gpu_top__DOT__do_test__10__expY[3U] 
        = __Vfunc_tb_gpu_top__DOT__expected_row__17__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk5__DOT__r = 4U;
    __Vtask_tb_gpu_top__DOT__print_out4__18__Y[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__expY
        [0U];
    __Vtask_tb_gpu_top__DOT__print_out4__18__Y[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__expY
        [1U];
    __Vtask_tb_gpu_top__DOT__print_out4__18__Y[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__expY
        [2U];
    __Vtask_tb_gpu_top__DOT__print_out4__18__Y[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__expY
        [3U];
    __Vtask_tb_gpu_top__DOT__print_out4__18__label = "Y_exp"s;
    VL_WRITEF_NX("%@ =\n  dec: [%0# %0# %0# %0#]\n  hex: [0x%0x 0x%0x 0x%0x 0x%0x]\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__print_out4__18__label),
                 16,__Vtask_tb_gpu_top__DOT__print_out4__18__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__18__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__18__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__18__Y
                 [3U],16,__Vtask_tb_gpu_top__DOT__print_out4__18__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__18__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__18__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__18__Y
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__r = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                        [0U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [1U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [2U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [3U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__19__sum);
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__10__got
                      [0U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 0: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__10__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__10__got
                     [0U],16,__Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__r = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                        [4U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [5U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [6U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [7U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__19__sum);
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__10__got
                      [1U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 1: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__10__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__10__got
                     [1U],16,__Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__r = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                        [8U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [9U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [0x0aU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                             [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [0x0bU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                             [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__19__sum);
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__10__got
                      [2U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 2: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__10__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__10__got
                     [2U],16,__Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__r = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__10__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                        [0x0cU])) * 
           (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                        [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [0x0dU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                             [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [0x0eU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                             [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__19__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__19__W
                                           [0x0fU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__19__X
                                             [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__19__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__19__sum);
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__19__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__10__got
                      [3U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 3: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__10__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__10__got
                     [3U],16,__Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__10__unnamedblk6__DOT__r = 4U;
    VL_WRITEF_NX("%@ PASS (W_BASE=0x%0x X_BASE=0x%0x)\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__do_test__10__name),
                 8,(IData)(__Vtask_tb_gpu_top__DOT__do_test__10__W_BASE),
                 8,__Vtask_tb_gpu_top__DOT__do_test__10__X_BASE);
    __Vtask_tb_gpu_top__DOT__do_test__20__X[0U] = vlSelfRef.tb_gpu_top__DOT__F
        [0U];
    __Vtask_tb_gpu_top__DOT__do_test__20__X[1U] = vlSelfRef.tb_gpu_top__DOT__F
        [1U];
    __Vtask_tb_gpu_top__DOT__do_test__20__X[2U] = vlSelfRef.tb_gpu_top__DOT__F
        [2U];
    __Vtask_tb_gpu_top__DOT__do_test__20__X[3U] = vlSelfRef.tb_gpu_top__DOT__F
        [3U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[0U] = vlSelfRef.tb_gpu_top__DOT__E
        [0U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[1U] = vlSelfRef.tb_gpu_top__DOT__E
        [1U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[2U] = vlSelfRef.tb_gpu_top__DOT__E
        [2U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[3U] = vlSelfRef.tb_gpu_top__DOT__E
        [3U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[4U] = vlSelfRef.tb_gpu_top__DOT__E
        [4U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[5U] = vlSelfRef.tb_gpu_top__DOT__E
        [5U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[6U] = vlSelfRef.tb_gpu_top__DOT__E
        [6U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[7U] = vlSelfRef.tb_gpu_top__DOT__E
        [7U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[8U] = vlSelfRef.tb_gpu_top__DOT__E
        [8U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[9U] = vlSelfRef.tb_gpu_top__DOT__E
        [9U];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU] 
        = vlSelfRef.tb_gpu_top__DOT__E[0x0000000aU];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU] 
        = vlSelfRef.tb_gpu_top__DOT__E[0x0000000bU];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU] 
        = vlSelfRef.tb_gpu_top__DOT__E[0x0000000cU];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU] 
        = vlSelfRef.tb_gpu_top__DOT__E[0x0000000dU];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU] 
        = vlSelfRef.tb_gpu_top__DOT__E[0x0000000eU];
    __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU] 
        = vlSelfRef.tb_gpu_top__DOT__E[0x0000000fU];
    __Vtask_tb_gpu_top__DOT__do_test__20__X_BASE = 0xc0U;
    __Vtask_tb_gpu_top__DOT__do_test__20__W_BASE = 0x50U;
    __Vtask_tb_gpu_top__DOT__do_test__20__name = "TEST3 E*F"s;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk4__DOT__i = 0;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk5__DOT__r = 0;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__r = 0;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__20__got[__Vi0] = 0;
    }
    __Vtask_tb_gpu_top__DOT__do_test__20__out_count = 0;
    __Vtask_tb_gpu_top__DOT__do_test__20__watchdog = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_gpu_top__DOT__do_test__20__expY[__Vi0] = 0;
    }
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0U;
    vlSelfRef.tb_gpu_top__DOT__mem[__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 1U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(1U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 2U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(2U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 3U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(3U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 4U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(4U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 5U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(5U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 6U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(6U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 7U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(7U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 8U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(8U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 9U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(9U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0x0000000aU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0aU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0aU];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0x0000000bU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0bU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0bU];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0x0000000cU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0cU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0cU];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0x0000000dU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0dU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0dU];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0x0000000eU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0eU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0eU];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0x0000000fU;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(0x0fU) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0fU];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk3__DOT__i = 0x00000010U;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk4__DOT__i = 0U;
    vlSelfRef.tb_gpu_top__DOT__mem[__Vtask_tb_gpu_top__DOT__do_test__20__X_BASE] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk4__DOT__i = 1U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(1U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk4__DOT__i = 2U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(2U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk4__DOT__i = 3U;
    vlSelfRef.tb_gpu_top__DOT__mem[(0x000000ffU & ((IData)(3U) 
                                                   + (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__X_BASE)))] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk4__DOT__i = 4U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__21__data = __Vtask_tb_gpu_top__DOT__do_test__20__W_BASE;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__21__opc = 0U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__21__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__21__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__22__data = __Vtask_tb_gpu_top__DOT__do_test__20__X_BASE;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__22__opc = 1U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__22__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__22__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    __Vtask_tb_gpu_top__DOT__do_test__20__out_count = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__23__data = 0U;
    __Vtask_tb_gpu_top__DOT__pulse_cmd__23__opc = 2U;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 1U;
    vlSelfRef.tb_gpu_top__DOT__op_code = __Vtask_tb_gpu_top__DOT__pulse_cmd__23__opc;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = __Vtask_tb_gpu_top__DOT__pulse_cmd__23__data;
    co_await vlSelfRef.__VtrigSched_h0b0126ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gpu_top.clk)", 
                                                         "../rtl/../tb/tb_gpu_top.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_gpu_top__DOT__start = 0U;
    vlSelfRef.tb_gpu_top__DOT__op_code = 0U;
    vlSelfRef.tb_gpu_top__DOT__cfg_data = 0U;
    VL_WRITEF_NX("\n==============================\n%@\nW_BASE=0x%0x X_BASE=0x%0x\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__do_test__20__name),
                 8,(IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE),
                 8,__Vtask_tb_gpu_top__DOT__do_test__20__X_BASE);
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vtask_tb_gpu_top__DOT__print_mat4__24__label = "W"s;
    __Vtask_tb_gpu_top__DOT__print_mat4__24__unnamedblk2__DOT__r = 0;
    VL_WRITEF_NX("%@ =\n",0,-1,&(__Vtask_tb_gpu_top__DOT__print_mat4__24__label));
    __Vtask_tb_gpu_top__DOT__print_mat4__24__unnamedblk2__DOT__r = 0U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [0U],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [1U],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [2U],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [3U]);
    __Vtask_tb_gpu_top__DOT__print_mat4__24__unnamedblk2__DOT__r = 1U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [4U],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [5U],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [6U],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [7U]);
    __Vtask_tb_gpu_top__DOT__print_mat4__24__unnamedblk2__DOT__r = 2U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [8U],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [9U],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [0x0aU],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [0x0bU]);
    __Vtask_tb_gpu_top__DOT__print_mat4__24__unnamedblk2__DOT__r = 3U;
    VL_WRITEF_NX("  [%0d %0d %0d %0d]\n",0,8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [0x0cU],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [0x0dU],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [0x0eU],8,__Vtask_tb_gpu_top__DOT__print_mat4__24__W
                 [0x0fU]);
    __Vtask_tb_gpu_top__DOT__print_mat4__24__unnamedblk2__DOT__r = 4U;
    __Vtask_tb_gpu_top__DOT__print_vec4__25__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vtask_tb_gpu_top__DOT__print_vec4__25__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vtask_tb_gpu_top__DOT__print_vec4__25__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vtask_tb_gpu_top__DOT__print_vec4__25__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vtask_tb_gpu_top__DOT__print_vec4__25__label = "X"s;
    VL_WRITEF_NX("%@ = [%0d %0d %0d %0d]\n",0,-1,&(__Vtask_tb_gpu_top__DOT__print_vec4__25__label),
                 8,__Vtask_tb_gpu_top__DOT__print_vec4__25__X
                 [0U],8,__Vtask_tb_gpu_top__DOT__print_vec4__25__X
                 [1U],8,__Vtask_tb_gpu_top__DOT__print_vec4__25__X
                 [2U],8,__Vtask_tb_gpu_top__DOT__print_vec4__25__X
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__20__watchdog = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_gpu_top__DOT__do_test__20__out_count)) {
        co_await vlSelfRef.__VtrigSched_h0b0126f9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_gpu_top.clk)", 
                                                             "../rtl/../tb/tb_gpu_top.sv", 
                                                             204);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_gpu_top__DOT__do_test__20__watchdog 
            = ((IData)(1U) + __Vtask_tb_gpu_top__DOT__do_test__20__watchdog);
        if (VL_UNLIKELY(((0x00001388U < __Vtask_tb_gpu_top__DOT__do_test__20__watchdog)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:208: Assertion failed in %Ntb_gpu_top.do_test: %@ TIMEOUT: never received 4 results (got %0d)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),-1,&(__Vtask_tb_gpu_top__DOT__do_test__20__name),
                         32,__Vtask_tb_gpu_top__DOT__do_test__20__out_count);
            VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 208, "", false);
        }
        if (((IData)(vlSelfRef.tb_gpu_top__DOT__result_vld) 
             & (IData)(vlSelfRef.tb_gpu_top__DOT__result_rdy))) {
            __Vtask_tb_gpu_top__DOT__do_test__20__got[(3U 
                                                       & __Vtask_tb_gpu_top__DOT__do_test__20__out_count)] 
                = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                [vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt];
            __Vtask_tb_gpu_top__DOT__do_test__20__out_count 
                = ((IData)(1U) + __Vtask_tb_gpu_top__DOT__do_test__20__out_count);
        }
    }
    __Vtask_tb_gpu_top__DOT__print_out4__26__Y[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__got
        [0U];
    __Vtask_tb_gpu_top__DOT__print_out4__26__Y[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__got
        [1U];
    __Vtask_tb_gpu_top__DOT__print_out4__26__Y[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__got
        [2U];
    __Vtask_tb_gpu_top__DOT__print_out4__26__Y[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__got
        [3U];
    __Vtask_tb_gpu_top__DOT__print_out4__26__label = "Y_got"s;
    VL_WRITEF_NX("%@ =\n  dec: [%0# %0# %0# %0#]\n  hex: [0x%0x 0x%0x 0x%0x 0x%0x]\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__print_out4__26__label),
                 16,__Vtask_tb_gpu_top__DOT__print_out4__26__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__26__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__26__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__26__Y
                 [3U],16,__Vtask_tb_gpu_top__DOT__print_out4__26__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__26__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__26__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__26__Y
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk5__DOT__r = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                        [0U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [1U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [2U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [3U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__27__sum);
    __Vtask_tb_gpu_top__DOT__do_test__20__expY[0U] 
        = __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk5__DOT__r = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                        [4U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [5U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [6U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [7U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__27__sum);
    __Vtask_tb_gpu_top__DOT__do_test__20__expY[1U] 
        = __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk5__DOT__r = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                        [8U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [9U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [0x0aU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                             [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [0x0bU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                             [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__27__sum);
    __Vtask_tb_gpu_top__DOT__do_test__20__expY[2U] 
        = __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk5__DOT__r = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                        [0x0cU])) * 
           (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                        [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [0x0dU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                             [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [0x0eU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                             [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__27__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__27__W
                                           [0x0fU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__27__X
                                             [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__27__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__27__sum);
    __Vtask_tb_gpu_top__DOT__do_test__20__expY[3U] 
        = __Vfunc_tb_gpu_top__DOT__expected_row__27__Vfuncout;
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk5__DOT__r = 4U;
    __Vtask_tb_gpu_top__DOT__print_out4__28__Y[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__expY
        [0U];
    __Vtask_tb_gpu_top__DOT__print_out4__28__Y[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__expY
        [1U];
    __Vtask_tb_gpu_top__DOT__print_out4__28__Y[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__expY
        [2U];
    __Vtask_tb_gpu_top__DOT__print_out4__28__Y[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__expY
        [3U];
    __Vtask_tb_gpu_top__DOT__print_out4__28__label = "Y_exp"s;
    VL_WRITEF_NX("%@ =\n  dec: [%0# %0# %0# %0#]\n  hex: [0x%0x 0x%0x 0x%0x 0x%0x]\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__print_out4__28__label),
                 16,__Vtask_tb_gpu_top__DOT__print_out4__28__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__28__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__28__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__28__Y
                 [3U],16,__Vtask_tb_gpu_top__DOT__print_out4__28__Y
                 [0U],16,__Vtask_tb_gpu_top__DOT__print_out4__28__Y
                 [1U],16,__Vtask_tb_gpu_top__DOT__print_out4__28__Y
                 [2U],16,__Vtask_tb_gpu_top__DOT__print_out4__28__Y
                 [3U]);
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__r = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                        [0U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [1U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [2U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [3U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__29__sum);
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__20__got
                      [0U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 0: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__20__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__20__got
                     [0U],16,__Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__r = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                        [4U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [5U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [6U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                           [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [7U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                           [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__29__sum);
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__20__got
                      [1U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 1: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__20__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__20__got
                     [1U],16,__Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__r = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                        [8U])) * (0x000000ffU 
                                                  & VL_EXTENDS_II(32,8, 
                                                                  __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                                                  [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [9U])) * 
              (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                           [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [0x0aU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                             [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [0x0bU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                             [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__29__sum);
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__20__got
                      [2U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 2: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__20__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__20__got
                     [2U],16,__Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__r = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__X[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__X[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[1U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[1U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[2U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[2U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[3U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[3U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[4U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[4U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[5U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[5U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[6U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[6U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[7U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[7U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[8U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[8U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[9U] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[9U];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000aU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000aU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000bU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000bU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000cU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000cU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000dU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000dU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000eU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000eU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__W[0x0000000fU] 
        = __Vtask_tb_gpu_top__DOT__do_test__20__W[0x0000000fU];
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 0U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                        [0x0cU])) * 
           (0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                        [0U])));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 1U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [0x0dU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                             [1U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 2U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [0x0eU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                             [2U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 3U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
        = (__Vfunc_tb_gpu_top__DOT__expected_row__29__sum 
           + ((0x000000ffU & VL_EXTENDS_II(32,8, __Vfunc_tb_gpu_top__DOT__expected_row__29__W
                                           [0x0fU])) 
              * (0x000000ffU & VL_EXTENDS_II(32,8, 
                                             __Vfunc_tb_gpu_top__DOT__expected_row__29__X
                                             [3U]))));
    __Vfunc_tb_gpu_top__DOT__expected_row__29__unnamedblk1__DOT__c = 4U;
    __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout 
        = (0x0000ffffU & __Vfunc_tb_gpu_top__DOT__expected_row__29__sum);
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp 
        = __Vfunc_tb_gpu_top__DOT__expected_row__29__Vfuncout;
    if (VL_UNLIKELY(((__Vtask_tb_gpu_top__DOT__do_test__20__got
                      [3U] != (IData)(__Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gpu_top.sv:231: Assertion failed in %Ntb_gpu_top.do_test.unnamedblk6.unnamedblk7: %@ FAIL row 3: got=0x%0x exp=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_gpu_top__DOT__do_test__20__name),
                     16,__Vtask_tb_gpu_top__DOT__do_test__20__got
                     [3U],16,__Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__unnamedblk7__DOT__exp);
        VL_STOP_MT("../rtl/../tb/tb_gpu_top.sv", 231, "", false);
    }
    __Vtask_tb_gpu_top__DOT__do_test__20__unnamedblk6__DOT__r = 4U;
    VL_WRITEF_NX("%@ PASS (W_BASE=0x%0x X_BASE=0x%0x)\nGPU_TOP ALL TESTS PASS\n",0,
                 -1,&(__Vtask_tb_gpu_top__DOT__do_test__20__name),
                 8,(IData)(__Vtask_tb_gpu_top__DOT__do_test__20__W_BASE),
                 8,__Vtask_tb_gpu_top__DOT__do_test__20__X_BASE);
    VL_FINISH_MT("../rtl/../tb/tb_gpu_top.sv", 293, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__1(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "../rtl/../tb/tb_gpu_top.sv", 
                                             52);
        vlSelfRef.tb_gpu_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_gpu_top___024root___eval_triggers__act(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_triggers__act\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((~ (IData)(vlSelfRef.tb_gpu_top__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gpu_top__DOT__clk__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_gpu_top__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gpu_top__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_gpu_top__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gpu_top__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gpu_top__DOT__clk__0 
        = vlSelfRef.tb_gpu_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gpu_top__DOT__rst_n__0 
        = vlSelfRef.tb_gpu_top__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gpu_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_gpu_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_gpu_top___024root___act_comb__TOP__0(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___act_comb__TOP__0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q;
    if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d 
            = ((IData)(1U) + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q);
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q;
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q;
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d 
        = ((vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q 
            + ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire)
                ? 1U : 0U)) - (((IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld) 
                                & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy))
                                ? 1U : 0U));
    if ((1U & (~ ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q)))) {
            if (((IData)(vlSelfRef.tb_gpu_top__DOT__start) 
                 & (2U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code)))) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d = 0U;
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
            if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire) {
                if ((0x0000000fU != vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q)) {
                    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d 
                        = ((IData)(1U) + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q);
                }
            }
        } else if (((IData)(vlSelfRef.tb_gpu_top__DOT__start) 
                    & (2U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code)))) {
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d = 0U;
        }
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q)))) {
            if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire) {
                if ((3U != vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q)) {
                    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d 
                        = ((IData)(1U) + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q);
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
            if (((0x00000013U == vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q) 
                 & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire))) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire) {
            if ((3U == vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q)) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
        if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire) {
            if ((0x0000000fU == vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q)) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d = 0U;
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = 2U;
            }
        }
    } else if (((IData)(vlSelfRef.tb_gpu_top__DOT__start) 
                & (2U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code)))) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = 1U;
    }
}

void Vtb_gpu_top___024root___eval_act(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_act\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_gpu_top___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_gpu_top___024root___nba_sequent__TOP__0(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt;
    __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt = 0;
    CData/*1:0*/ __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt;
    __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt = 0;
    CData/*1:0*/ __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt;
    __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt = 0;
    CData/*7:0*/ __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0;
    __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0;
    __VdlyDim0__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v0;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4;
    __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4 = 0;
    SData/*15:0*/ __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5;
    __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5 = 0;
    SData/*15:0*/ __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6;
    __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6 = 0;
    SData/*15:0*/ __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7;
    __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v8;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v1;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v1 = 0;
    // Body
    vlSelfRef.__Vdly__tb_gpu_top__DOT__pending = vlSelfRef.tb_gpu_top__DOT__pending;
    vlSelfRef.__Vdly__tb_gpu_top__DOT__pend_addr = vlSelfRef.tb_gpu_top__DOT__pend_addr;
    vlSelfRef.__Vdly__tb_gpu_top__DOT__countdown = vlSelfRef.tb_gpu_top__DOT__countdown;
    vlSelfRef.__Vdly__tb_gpu_top__DOT__m_req_rdy = vlSelfRef.tb_gpu_top__DOT__m_req_rdy;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0 = 0U;
    __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt;
    __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt;
    __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v0 = 0U;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4 = 0U;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5 = 0U;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6 = 0U;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7 = 0U;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v8 = 0U;
    __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v1 = 0U;
    if (vlSelfRef.tb_gpu_top__DOT__rst_n) {
        if (((0U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)) 
             & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire))) {
            __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0 
                = vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data;
            __VdlyDim0__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0 
                = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt;
            __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0 = 1U;
            if ((0x0fU == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt))) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__r = 4U;
                __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt = 0U;
                __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt = 0U;
                __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt = 0U;
                __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v0 = 1U;
            } else {
                __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt)));
            }
        }
        if (((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)) 
             & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire))) {
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod 
                = (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem
                   [(0x0000000fU & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt))] 
                   * (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data));
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__r = 4U;
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum 
                = (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                   [0U] + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod);
            __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4 
                = (0x0000ffffU & vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum);
            __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4 = 1U;
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod 
                = (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem
                   [(0x0000000fU & ((IData)(4U) + (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt)))] 
                   * (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data));
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum 
                = (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                   [1U] + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod);
            __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5 
                = (0x0000ffffU & vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum);
            __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5 = 1U;
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod 
                = (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem
                   [(0x0000000fU & ((IData)(8U) + (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt)))] 
                   * (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data));
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum 
                = (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                   [2U] + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod);
            __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6 
                = (0x0000ffffU & vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum);
            __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6 = 1U;
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod 
                = (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem
                   [(0x0000000fU & ((IData)(0x0cU) 
                                    + (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt)))] 
                   * (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data));
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum 
                = (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                   [3U] + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod);
            __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7 
                = (0x0000ffffU & vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum);
            __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7 = 1U;
            if ((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt))) {
                __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt = 0U;
                __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt = 0U;
            } else {
                __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt)));
            }
        }
        if (((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)) 
             & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire))) {
            __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt 
                = ((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt))));
        }
        if ((((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)) 
              & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire)) 
             & (3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt)))) {
            __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt = 0U;
            __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt = 0U;
        }
    } else {
        __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt = 0U;
        __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt = 0U;
        __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v8 = 1U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__r = 4U;
        __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt = 0U;
        __VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v1 = 1U;
    }
    if (vlSelfRef.tb_gpu_top__DOT__rst_n) {
        vlSelfRef.tb_gpu_top__DOT__result_rdy = (0U 
                                                 != 
                                                 VL_URANDOM_RANGE_I(0U, 3U));
    } else {
        vlSelfRef.tb_gpu_top__DOT__result_rdy = 0U;
    }
    if (vlSelfRef.tb_gpu_top__DOT__rst_n) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q 
            = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q 
            = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q 
            = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q 
            = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q 
            = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d;
        if (vlSelfRef.tb_gpu_top__DOT__start) {
            if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code)) 
                                       << 1U) | (0U 
                                                 == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code))))))) {
                if ((0U != (((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code)) 
                             << 1U) | (0U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: fetch_engine.sv:253: Assertion failed in %Ntb_gpu_top.dut.u_fetch: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name(),
                                     2,(IData)(vlSelfRef.tb_gpu_top__DOT__op_code));
                        VL_STOP_MT("../rtl/../rtl/fetch_engine.sv", 253, "");
                    }
                }
            }
            if ((0U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code))) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_w_base 
                    = vlSelfRef.tb_gpu_top__DOT__cfg_data;
            } else if ((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code))) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_x_base 
                    = vlSelfRef.tb_gpu_top__DOT__cfg_data;
            }
        }
    } else {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_w_base = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_x_base = 0U;
    }
    if (vlSelfRef.tb_gpu_top__DOT__rst_n) {
        if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full) {
            if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy) {
                if (vlSelfRef.tb_gpu_top__DOT__m_rsp_vld) {
                    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full = 1U;
                    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data 
                        = vlSelfRef.tb_gpu_top__DOT__m_rsp_data;
                } else {
                    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full = 0U;
                }
            }
        } else if (((IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld) 
                    & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy)))) {
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full = 1U;
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data 
                = vlSelfRef.tb_gpu_top__DOT__m_rsp_data;
        }
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state 
            = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n;
    } else {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state = 0U;
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt 
        = __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt;
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt 
        = __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt;
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt 
        = __Vdly__tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt;
    if (__VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[__VdlyDim0__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0] 
            = __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v0;
    }
    if (__VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v0) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[0U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[1U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[2U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[3U] = 0U;
    }
    if (__VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[0U] 
            = __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v4;
    }
    if (__VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[1U] 
            = __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v5;
    }
    if (__VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[2U] 
            = __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v6;
    }
    if (__VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[3U] 
            = __VdlyVal__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v7;
    }
    if (__VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem__v8) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[0U] = 0U;
    }
    if (__VdlySet__tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem__v1) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[1U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[2U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[3U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[4U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[5U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[6U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[7U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[8U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[9U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0x0aU] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0x0bU] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0x0cU] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0x0dU] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0x0eU] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0x0fU] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[1U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[2U] = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[3U] = 0U;
    }
    if ((1U & (~ VL_ONEHOT_I((((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)))))))) {
        if ((0U != (((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: matrix_core.sv:74: Assertion failed in %Ntb_gpu_top.dut.u_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state));
                VL_STOP_MT("../rtl/../rtl/matrix_core.sv", 74, "");
            }
        }
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__core_is_computing = 0U;
    vlSelfRef.tb_gpu_top__DOT__result_vld = 0U;
    if ((0U != (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
        if ((1U != (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
                vlSelfRef.tb_gpu_top__DOT__result_vld = 1U;
            }
        }
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy = 0U;
    if ((0U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__core_is_computing = 1U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy = 1U;
    } else if ((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__core_is_computing = 1U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy = 1U;
    } else if ((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__core_is_computing = 1U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy = 0U;
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire 
        = ((IData)(vlSelfRef.tb_gpu_top__DOT__result_rdy) 
           & (IData)(vlSelfRef.tb_gpu_top__DOT__result_vld));
}

void Vtb_gpu_top___024root___nba_sequent__TOP__1(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_gpu_top__DOT__rst_n) 
                       & (IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld)) 
                      & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: fetch_engine.sv:81: Assertion failed in %Ntb_gpu_top.dut.u_fetch: FETCH_ENGINE overflow: m_rsp_vld when skid cannot accept (skid_in_rdy=0)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../rtl/../rtl/fetch_engine.sv", 81, "", false);
    }
}

void Vtb_gpu_top___024root___nba_sequent__TOP__2(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full)) 
                 | (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy)));
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__stall_req 
        = (1U & ((~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy)) 
                 | (1U <= vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q)));
    if (vlSelfRef.tb_gpu_top__DOT__rst_n) {
        vlSelfRef.__Vdly__tb_gpu_top__DOT__m_req_rdy 
            = ((1U & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__pending))) 
               && (0U != VL_URANDOM_RANGE_I(0U, 3U)));
        vlSelfRef.tb_gpu_top__DOT__m_rsp_vld = 0U;
        if (((IData)(vlSelfRef.tb_gpu_top__DOT__m_req_vld) 
             & (IData)(vlSelfRef.tb_gpu_top__DOT__m_req_rdy))) {
            vlSelfRef.__Vdly__tb_gpu_top__DOT__pending = 1U;
            vlSelfRef.__Vdly__tb_gpu_top__DOT__pend_addr 
                = vlSelfRef.tb_gpu_top__DOT__m_req_addr;
            vlSelfRef.__Vdly__tb_gpu_top__DOT__countdown 
                = VL_URANDOM_RANGE_I(1U, 4U);
        }
        if (vlSelfRef.tb_gpu_top__DOT__pending) {
            if ((0U == vlSelfRef.tb_gpu_top__DOT__countdown)) {
                vlSelfRef.tb_gpu_top__DOT__m_rsp_vld = 1U;
                vlSelfRef.tb_gpu_top__DOT__m_rsp_data 
                    = vlSelfRef.tb_gpu_top__DOT__mem
                    [vlSelfRef.tb_gpu_top__DOT__pend_addr];
                vlSelfRef.__Vdly__tb_gpu_top__DOT__pending = 0U;
            } else {
                vlSelfRef.__Vdly__tb_gpu_top__DOT__countdown 
                    = (vlSelfRef.tb_gpu_top__DOT__countdown 
                       - (IData)(1U));
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_gpu_top__DOT__countdown = 0U;
        vlSelfRef.__Vdly__tb_gpu_top__DOT__m_req_rdy = 0U;
        vlSelfRef.tb_gpu_top__DOT__m_rsp_vld = 0U;
        vlSelfRef.tb_gpu_top__DOT__m_rsp_data = 0U;
        vlSelfRef.__Vdly__tb_gpu_top__DOT__pending = 0U;
        vlSelfRef.__Vdly__tb_gpu_top__DOT__pend_addr = 0U;
    }
    vlSelfRef.tb_gpu_top__DOT__pending = vlSelfRef.__Vdly__tb_gpu_top__DOT__pending;
    vlSelfRef.tb_gpu_top__DOT__pend_addr = vlSelfRef.__Vdly__tb_gpu_top__DOT__pend_addr;
    vlSelfRef.tb_gpu_top__DOT__countdown = vlSelfRef.__Vdly__tb_gpu_top__DOT__countdown;
    vlSelfRef.tb_gpu_top__DOT__m_req_addr = 0U;
    vlSelfRef.tb_gpu_top__DOT__m_req_rdy = vlSelfRef.__Vdly__tb_gpu_top__DOT__m_req_rdy;
    vlSelfRef.tb_gpu_top__DOT__m_req_vld = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__stall_req)))) {
        if ((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
            vlSelfRef.tb_gpu_top__DOT__m_req_addr = 
                (0x000000ffU & ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_w_base) 
                                + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q));
            vlSelfRef.tb_gpu_top__DOT__m_req_vld = 1U;
        } else if ((2U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
            vlSelfRef.tb_gpu_top__DOT__m_req_addr = 
                (0x000000ffU & ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_x_base) 
                                + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q));
            vlSelfRef.tb_gpu_top__DOT__m_req_vld = 1U;
        }
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data 
        = ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full)
            ? (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data)
            : (IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_data));
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire 
        = ((IData)(vlSelfRef.tb_gpu_top__DOT__m_req_rdy) 
           & (IData)(vlSelfRef.tb_gpu_top__DOT__m_req_vld));
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire 
        = ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy) 
           & ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full) 
              | (IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld)));
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state;
    if ((0U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
        if (((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire) 
             & (0x0fU == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt)))) {
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
        if (((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire) 
             & (3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt)))) {
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
        if (((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire) 
             & (3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt)))) {
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n = 0U;
        }
    } else {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n = 0U;
    }
}

void Vtb_gpu_top___024root___nba_comb__TOP__0(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_comb__TOP__0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q;
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q;
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d 
        = ((vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q 
            + ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire)
                ? 1U : 0U)) - (((IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld) 
                                & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy))
                                ? 1U : 0U));
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q;
    if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d 
            = ((IData)(1U) + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
            if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire) {
                if ((0x0000000fU != vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q)) {
                    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d 
                        = ((IData)(1U) + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q);
                }
            }
        } else if (((IData)(vlSelfRef.tb_gpu_top__DOT__start) 
                    & (2U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code)))) {
            vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q)))) {
            if (((IData)(vlSelfRef.tb_gpu_top__DOT__start) 
                 & (2U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code)))) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d = 0U;
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d = 0U;
            }
        }
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q)))) {
            if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire) {
                if ((3U != vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q)) {
                    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d 
                        = ((IData)(1U) + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q);
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
            if (((0x00000013U == vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q) 
                 & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire))) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire) {
            if ((3U == vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q)) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))) {
        if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire) {
            if ((0x0000000fU == vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q)) {
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d = 0U;
                vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = 2U;
            }
        }
    } else if (((IData)(vlSelfRef.tb_gpu_top__DOT__start) 
                & (2U == (IData)(vlSelfRef.tb_gpu_top__DOT__op_code)))) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d = 0U;
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = 1U;
    }
}

void Vtb_gpu_top___024root___eval_nba(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_nba\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_gpu_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_gpu_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_gpu_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_gpu_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

void Vtb_gpu_top___024root___timing_commit(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___timing_commit\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h0b0126ba__0.commit(
                                                   "@(negedge tb_gpu_top.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h0b0126f9__0.commit(
                                                   "@(posedge tb_gpu_top.clk)");
    }
}

void Vtb_gpu_top___024root___timing_resume(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___timing_resume\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0b0126ba__0.resume(
                                                   "@(negedge tb_gpu_top.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0b0126f9__0.resume(
                                                   "@(posedge tb_gpu_top.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_gpu_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_gpu_top___024root___eval_phase__act(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_phase__act\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_gpu_top___024root___eval_triggers__act(vlSelf);
    Vtb_gpu_top___024root___timing_commit(vlSelf);
    Vtb_gpu_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_gpu_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_gpu_top___024root___timing_resume(vlSelf);
        Vtb_gpu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_gpu_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_gpu_top___024root___eval_phase__nba(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_phase__nba\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_gpu_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_gpu_top___024root___eval_nba(vlSelf);
        Vtb_gpu_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_gpu_top___024root___eval(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_gpu_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../rtl/../tb/tb_gpu_top.sv", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_gpu_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../rtl/../tb/tb_gpu_top.sv", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_gpu_top___024root___eval_phase__act(vlSelf));
    } while (Vtb_gpu_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_gpu_top___024root___eval_debug_assertions(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_debug_assertions\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
