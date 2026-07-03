// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfifo_tb__pch.h"

Vfifo_tb__Syms::Vfifo_tb__Syms(VerilatedContext* contextp, const char* namep, Vfifo_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(308);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
}

Vfifo_tb__Syms::~Vfifo_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP____024unit.dtor();
}
