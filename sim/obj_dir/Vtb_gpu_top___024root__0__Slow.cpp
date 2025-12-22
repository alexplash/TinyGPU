// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gpu_top.h for the primary calling header

#include "Vtb_gpu_top__pch.h"

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_static(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_static\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gpu_top__DOT__clk__0 
        = vlSelfRef.tb_gpu_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gpu_top__DOT__rst_n__0 
        = vlSelfRef.tb_gpu_top__DOT__rst_n;
}

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_initial__TOP(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial__TOP\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_gpu_top__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_final(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_final\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_gpu_top___024root___eval_phase__stl(Vtb_gpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_settle(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_settle\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_gpu_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../rtl/../tb/tb_gpu_top.sv", 5, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_gpu_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_triggers__stl(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_triggers__stl\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gpu_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_gpu_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_gpu_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_gpu_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_gpu_top___024root___stl_sequent__TOP__0(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data 
        = ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full)
            ? (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data)
            : (IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_data));
    vlSelfRef.tb_gpu_top__DOT__result_vld = 0U;
    if ((0U != (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
        if ((1U != (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state))) {
                vlSelfRef.tb_gpu_top__DOT__result_vld = 1U;
            }
        }
    }
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy = 0U;
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire 
        = ((IData)(vlSelfRef.tb_gpu_top__DOT__result_rdy) 
           & (IData)(vlSelfRef.tb_gpu_top__DOT__result_vld));
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
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire 
        = ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy) 
           & ((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full) 
              | (IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld)));
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full)) 
                 | (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy)));
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d 
        = vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q;
    if (vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire) {
        vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d 
            = ((IData)(1U) + vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q);
    }
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
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__stall_req 
        = (1U & ((~ (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy)) 
                 | (1U <= vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q)));
    vlSelfRef.tb_gpu_top__DOT__m_req_addr = 0U;
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
    vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire 
        = ((IData)(vlSelfRef.tb_gpu_top__DOT__m_req_rdy) 
           & (IData)(vlSelfRef.tb_gpu_top__DOT__m_req_vld));
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

VL_ATTR_COLD void Vtb_gpu_top___024root____Vm_traceActivitySetAll(Vtb_gpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_stl(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_stl\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_gpu_top___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_gpu_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_gpu_top___024root___eval_phase__stl(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_phase__stl\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_gpu_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_gpu_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_gpu_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_gpu_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_gpu_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_gpu_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_gpu_top.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_gpu_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gpu_top___024root____Vm_traceActivitySetAll(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root____Vm_traceActivitySetAll\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
}

VL_ATTR_COLD void Vtb_gpu_top___024root___ctor_var_reset(Vtb_gpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___ctor_var_reset\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_gpu_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3526358830909207125ull);
    vlSelf->tb_gpu_top__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13792947490235911875ull);
    vlSelf->tb_gpu_top__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10758994765673080291ull);
    vlSelf->tb_gpu_top__DOT__op_code = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12333897146728745729ull);
    vlSelf->tb_gpu_top__DOT__cfg_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11993415948275053652ull);
    vlSelf->tb_gpu_top__DOT__m_req_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11080974360050013160ull);
    vlSelf->tb_gpu_top__DOT__m_req_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16666090691866612049ull);
    vlSelf->tb_gpu_top__DOT__m_req_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 915594117353810357ull);
    vlSelf->tb_gpu_top__DOT__m_rsp_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1763142234814694769ull);
    vlSelf->tb_gpu_top__DOT__m_rsp_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8721707900425475877ull);
    vlSelf->tb_gpu_top__DOT__result_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16180756341091694369ull);
    vlSelf->tb_gpu_top__DOT__result_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8929355358913983103ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_gpu_top__DOT__pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15990464081882926747ull);
    vlSelf->tb_gpu_top__DOT__pend_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8941641602919740848ull);
    vlSelf->tb_gpu_top__DOT__countdown = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__A[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__B[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__C[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__D[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__E[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__F[__Vi0] = 0;
    }
    vlSelf->tb_gpu_top__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->tb_gpu_top__DOT__unnamedblk9__DOT__r = 0;
    vlSelf->tb_gpu_top__DOT__unnamedblk9__DOT__unnamedblk10__DOT__c = 0;
    vlSelf->tb_gpu_top__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->tb_gpu_top__DOT__unnamedblk12__DOT__i = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__fe_src_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16943698729879734352ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__fe_src_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17583337861404363320ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__core_is_computing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2538094431286621766ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_w_base = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14411129557365665282ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_x_base = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1303697090512777188ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 402870424181894470ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14065345497412054486ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3510385505492486193ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11219789715150057393ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11593663518005937662ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__stall_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7923675102511630141ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4118769210497182311ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2556794981923586432ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4768355873493603029ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16947028748650376801ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14568949843983723144ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4475252974928145671ull);
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14523907186009177867ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2596308024575670372ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14306821720568464049ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5547306840145225126ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 832849908027413023ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17205608296957228241ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14632135440853555886ull);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9499772318542993094ull);
    vlSelf->__Vdly__tb_gpu_top__DOT__m_req_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13913630240066725807ull);
    vlSelf->__Vdly__tb_gpu_top__DOT__pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1091714979923711996ull);
    vlSelf->__Vdly__tb_gpu_top__DOT__pend_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7748996119248030771ull);
    vlSelf->__Vdly__tb_gpu_top__DOT__countdown = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_gpu_top__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2467895721149410805ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_gpu_top__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1224141101625628027ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
