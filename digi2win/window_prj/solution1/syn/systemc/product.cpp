// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "product.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic product::ap_const_logic_1 = sc_dt::Log_1;
const bool product::ap_const_boolean_1 = true;
const sc_lv<32> product::ap_const_lv32_4 = "100";
const sc_lv<32> product::ap_const_lv32_F = "1111";
const sc_logic product::ap_const_logic_0 = sc_dt::Log_0;

product::product(sc_module_name name) : sc_module(name), mVcdFile(0) {
    window_mul_mul_12dEe_U381 = new window_mul_mul_12dEe<1,1,12,12,16>("window_mul_mul_12dEe_U381");
    window_mul_mul_12dEe_U381->din0(w_V);
    window_mul_mul_12dEe_U381->din1(a_V);
    window_mul_mul_12dEe_U381->dout(r_V_fu_41_p2);

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( r_V_fu_41_p2 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "product_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a_V, "(port)a_V");
    sc_trace(mVcdFile, w_V, "(port)w_V");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, r_V_fu_41_p2, "r_V_fu_41_p2");
#endif

    }
}

product::~product() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete window_mul_mul_12dEe_U381;
}

void product::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void product::thread_ap_return() {
    ap_return = r_V_fu_41_p2.read().range(15, 4);
}

}

