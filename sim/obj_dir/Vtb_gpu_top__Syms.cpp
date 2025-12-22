// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_gpu_top__pch.h"
#include "Vtb_gpu_top.h"
#include "Vtb_gpu_top___024root.h"
#include "Vtb_gpu_top___024unit.h"

// FUNCTIONS
Vtb_gpu_top__Syms::~Vtb_gpu_top__Syms()
{
}

Vtb_gpu_top__Syms::Vtb_gpu_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_gpu_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(890);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
