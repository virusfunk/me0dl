// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __window_uitofp_32nbkb__HH__
#define __window_uitofp_32nbkb__HH__
#include "ACMP_uitofp.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int dout_WIDTH>
SC_MODULE(window_uitofp_32nbkb) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_uitofp<ID, 2, din0_WIDTH, dout_WIDTH> ACMP_uitofp_U;

    SC_CTOR(window_uitofp_32nbkb):  ACMP_uitofp_U ("ACMP_uitofp_U") {
        ACMP_uitofp_U.clk(clk);
        ACMP_uitofp_U.reset(reset);
        ACMP_uitofp_U.ce(ce);
        ACMP_uitofp_U.din0(din0);
        ACMP_uitofp_U.dout(dout);

    }

};

#endif //
