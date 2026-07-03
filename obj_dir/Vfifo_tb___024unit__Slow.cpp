// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

void Vfifo_tb___024unit___ctor_var_reset(Vfifo_tb___024unit* vlSelf);

Vfifo_tb___024unit::Vfifo_tb___024unit() = default;
Vfifo_tb___024unit::~Vfifo_tb___024unit() = default;

void Vfifo_tb___024unit::ctor(Vfifo_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vfifo_tb___024unit___ctor_var_reset(this);
}

void Vfifo_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vfifo_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
