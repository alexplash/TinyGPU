// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_gpu_top__Syms.h"


VL_ATTR_COLD void Vtb_gpu_top___024root__trace_init_sub__TOP__bronco_params__0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_init_sub__TOP__0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_init_sub__TOP__0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("bronco_params", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_gpu_top___024root__trace_init_sub__TOP__bronco_params__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_gpu_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"W_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"op_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"cfg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"m_req_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"m_req_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"m_req_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+122,0,"m_rsp_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"m_rsp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+75,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"result_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"result_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"result_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+124,0,"pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"pend_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"countdown",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("A", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("B", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+21+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("C", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("D", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("E", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("F", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"op_code",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"cfg_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"m_req_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"m_req_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"m_req_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+122,0,"m_rsp_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"m_rsp_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+75,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"result_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"result_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"result_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+135,0,"fe_src_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"fe_src_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"fe_src_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+80,0,"fe_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"core_is_computing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+138,0,"MAT_DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"W_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+138,0,"X_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"snk_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"snk_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"snk_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+76,0,"src_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"src_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"src_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+81,0,"is_computing",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"state_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("w_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+83+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acc_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+99+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+103,0,"w_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,0,"x_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+105,0,"out_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+129,0,"snk_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"src_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+139,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+138,0,"MAT_DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+140,0,"MAX_INFLIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"op_code",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"cfg_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"m_req_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"m_req_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"m_req_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+122,0,"m_rsp_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"m_rsp_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+135,0,"src_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"src_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"src_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+80,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"W_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+138,0,"X_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+141,0,"TOTAL_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+110,0,"reg_w_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"reg_x_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+130,0,"skid_in_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"w_idx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+71,0,"w_idx_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+114,0,"x_idx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+72,0,"x_idx_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+115,0,"inflight_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"inflight_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+116,0,"consumed_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+74,0,"consumed_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+131,0,"req_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"rsp_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"src_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"stall_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_rsp_skid", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+135,0,"out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+117,0,"skid_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"skid_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+66,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_init_sub__TOP__bronco_params__0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_init_sub__TOP__bronco_params__0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+137,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+138,0,"MAT_DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"W_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+138,0,"X_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+142,0,"OP_SET_W_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"OP_SET_X_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"OP_RUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+145,0,"OP_RSVD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
}

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_init_top(Vtb_gpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_init_top\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_gpu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_gpu_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_gpu_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_gpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_register(Vtb_gpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_register\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_gpu_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_gpu_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_gpu_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_gpu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_const_0_sub_0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_const_0\n"); );
    // Body
    Vtb_gpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gpu_top___024root*>(voidSelf);
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_gpu_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_const_0_sub_0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_const_0_sub_0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+136,(0x00000010U),32);
    bufp->fullIData(oldp+137,(8U),32);
    bufp->fullIData(oldp+138,(4U),32);
    bufp->fullIData(oldp+139,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__c),32);
    bufp->fullIData(oldp+140,(1U),32);
    bufp->fullIData(oldp+141,(0x00000014U),32);
    bufp->fullCData(oldp+142,(0U),2);
    bufp->fullCData(oldp+143,(1U),2);
    bufp->fullCData(oldp+144,(2U),2);
    bufp->fullCData(oldp+145,(3U),2);
}

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_full_0_sub_0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_full_0\n"); );
    // Body
    Vtb_gpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gpu_top___024root*>(voidSelf);
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_gpu_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_gpu_top___024root__trace_full_0_sub_0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_full_0_sub_0\n"); );
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.tb_gpu_top__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_gpu_top__DOT__start));
    bufp->fullCData(oldp+3,(vlSelfRef.tb_gpu_top__DOT__op_code),2);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_gpu_top__DOT__cfg_data),8);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_gpu_top__DOT__A[0]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_gpu_top__DOT__A[1]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_gpu_top__DOT__A[2]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_gpu_top__DOT__A[3]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_gpu_top__DOT__A[4]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_gpu_top__DOT__A[5]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_gpu_top__DOT__A[6]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_gpu_top__DOT__A[7]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_gpu_top__DOT__A[8]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_gpu_top__DOT__A[9]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.tb_gpu_top__DOT__A[10]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_gpu_top__DOT__A[11]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.tb_gpu_top__DOT__A[12]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.tb_gpu_top__DOT__A[13]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.tb_gpu_top__DOT__A[14]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.tb_gpu_top__DOT__A[15]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_gpu_top__DOT__B[0]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_gpu_top__DOT__B[1]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_gpu_top__DOT__B[2]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_gpu_top__DOT__B[3]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.tb_gpu_top__DOT__C[0]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_gpu_top__DOT__C[1]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_gpu_top__DOT__C[2]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_gpu_top__DOT__C[3]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_gpu_top__DOT__C[4]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_gpu_top__DOT__C[5]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_gpu_top__DOT__C[6]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_gpu_top__DOT__C[7]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_gpu_top__DOT__C[8]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_gpu_top__DOT__C[9]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_gpu_top__DOT__C[10]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_gpu_top__DOT__C[11]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_gpu_top__DOT__C[12]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_gpu_top__DOT__C[13]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_gpu_top__DOT__C[14]),8);
    bufp->fullCData(oldp+40,(vlSelfRef.tb_gpu_top__DOT__C[15]),8);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_gpu_top__DOT__D[0]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.tb_gpu_top__DOT__D[1]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_gpu_top__DOT__D[2]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.tb_gpu_top__DOT__D[3]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_gpu_top__DOT__E[0]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.tb_gpu_top__DOT__E[1]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_gpu_top__DOT__E[2]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.tb_gpu_top__DOT__E[3]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.tb_gpu_top__DOT__E[4]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_gpu_top__DOT__E[5]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.tb_gpu_top__DOT__E[6]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.tb_gpu_top__DOT__E[7]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.tb_gpu_top__DOT__E[8]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.tb_gpu_top__DOT__E[9]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_gpu_top__DOT__E[10]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.tb_gpu_top__DOT__E[11]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.tb_gpu_top__DOT__E[12]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.tb_gpu_top__DOT__E[13]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.tb_gpu_top__DOT__E[14]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.tb_gpu_top__DOT__E[15]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.tb_gpu_top__DOT__F[0]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.tb_gpu_top__DOT__F[1]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.tb_gpu_top__DOT__F[2]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.tb_gpu_top__DOT__F[3]),8);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_gpu_top__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_gpu_top__DOT__unnamedblk12__DOT__i),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_gpu_top__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_gpu_top__DOT__unnamedblk9__DOT__r),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_gpu_top__DOT__unnamedblk9__DOT__unnamedblk10__DOT__c),32);
    bufp->fullCData(oldp+70,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_d),2);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_d),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_d),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_d),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_d),32);
    bufp->fullBit(oldp+75,(((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__core_is_computing) 
                            | (0U != (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q)))));
    bufp->fullBit(oldp+76,(vlSelfRef.tb_gpu_top__DOT__result_vld));
    bufp->fullBit(oldp+77,(vlSelfRef.tb_gpu_top__DOT__result_rdy));
    bufp->fullSData(oldp+78,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem
                             [vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt]),16);
    bufp->fullBit(oldp+79,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_rdy));
    bufp->fullBit(oldp+80,((0U != (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q))));
    bufp->fullBit(oldp+81,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__core_is_computing));
    bufp->fullCData(oldp+82,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state),2);
    bufp->fullCData(oldp+83,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[0]),8);
    bufp->fullCData(oldp+84,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[1]),8);
    bufp->fullCData(oldp+85,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[2]),8);
    bufp->fullCData(oldp+86,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[3]),8);
    bufp->fullCData(oldp+87,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[4]),8);
    bufp->fullCData(oldp+88,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[5]),8);
    bufp->fullCData(oldp+89,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[6]),8);
    bufp->fullCData(oldp+90,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[7]),8);
    bufp->fullCData(oldp+91,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[8]),8);
    bufp->fullCData(oldp+92,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[9]),8);
    bufp->fullCData(oldp+93,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[10]),8);
    bufp->fullCData(oldp+94,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[11]),8);
    bufp->fullCData(oldp+95,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[12]),8);
    bufp->fullCData(oldp+96,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[13]),8);
    bufp->fullCData(oldp+97,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[14]),8);
    bufp->fullCData(oldp+98,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_mem[15]),8);
    bufp->fullSData(oldp+99,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[0]),16);
    bufp->fullSData(oldp+100,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[1]),16);
    bufp->fullSData(oldp+101,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[2]),16);
    bufp->fullSData(oldp+102,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__acc_mem[3]),16);
    bufp->fullCData(oldp+103,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__w_cnt),4);
    bufp->fullCData(oldp+104,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__x_cnt),2);
    bufp->fullCData(oldp+105,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__out_cnt),2);
    bufp->fullBit(oldp+106,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__src_fire));
    bufp->fullIData(oldp+107,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__r),32);
    bufp->fullIData(oldp+108,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__prod),32);
    bufp->fullIData(oldp+109,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__unnamedblk1__DOT__sum),32);
    bufp->fullCData(oldp+110,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_w_base),8);
    bufp->fullCData(oldp+111,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__reg_x_base),8);
    bufp->fullCData(oldp+112,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__state_q),2);
    bufp->fullIData(oldp+113,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__w_idx_q),32);
    bufp->fullIData(oldp+114,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__x_idx_q),32);
    bufp->fullIData(oldp+115,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__inflight_q),32);
    bufp->fullIData(oldp+116,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__consumed_q),32);
    bufp->fullBit(oldp+117,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full));
    bufp->fullCData(oldp+118,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_data),8);
    bufp->fullBit(oldp+119,(vlSelfRef.tb_gpu_top__DOT__m_req_vld));
    bufp->fullBit(oldp+120,(vlSelfRef.tb_gpu_top__DOT__m_req_rdy));
    bufp->fullCData(oldp+121,(vlSelfRef.tb_gpu_top__DOT__m_req_addr),8);
    bufp->fullBit(oldp+122,(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld));
    bufp->fullCData(oldp+123,(vlSelfRef.tb_gpu_top__DOT__m_rsp_data),8);
    bufp->fullBit(oldp+124,(vlSelfRef.tb_gpu_top__DOT__pending));
    bufp->fullCData(oldp+125,(vlSelfRef.tb_gpu_top__DOT__pend_addr),8);
    bufp->fullIData(oldp+126,(vlSelfRef.tb_gpu_top__DOT__countdown),32);
    bufp->fullCData(oldp+127,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__fe_src_data),8);
    bufp->fullCData(oldp+128,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_core__DOT__state_n),2);
    bufp->fullBit(oldp+129,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__src_fire));
    bufp->fullBit(oldp+130,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy));
    bufp->fullBit(oldp+131,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__req_fire));
    bufp->fullBit(oldp+132,(((IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld) 
                             & (IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__skid_in_rdy))));
    bufp->fullBit(oldp+133,(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__stall_req));
    bufp->fullBit(oldp+134,(vlSelfRef.tb_gpu_top__DOT__clk));
    bufp->fullBit(oldp+135,(((IData)(vlSelfRef.tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__u_rsp_skid__DOT__skid_full) 
                             | (IData)(vlSelfRef.tb_gpu_top__DOT__m_rsp_vld))));
}
