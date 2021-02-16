#include "dense_large.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_large::thread_zext_ln76_17_fu_41137_p1() {
    zext_ln76_17_fu_41137_p1 = esl_zext<12,11>(select_ln76_16_fu_41129_p3.read());
}

void dense_large::thread_zext_ln76_18_fu_41340_p1() {
    zext_ln76_18_fu_41340_p1 = esl_zext<12,11>(select_ln76_17_fu_41332_p3.read());
}

void dense_large::thread_zext_ln76_1_fu_37895_p1() {
    zext_ln76_1_fu_37895_p1 = esl_zext<12,11>(select_ln76_fu_37887_p3.read());
}

void dense_large::thread_zext_ln76_2_fu_38092_p1() {
    zext_ln76_2_fu_38092_p1 = esl_zext<12,11>(select_ln76_1_fu_38084_p3.read());
}

void dense_large::thread_zext_ln76_3_fu_38295_p1() {
    zext_ln76_3_fu_38295_p1 = esl_zext<12,11>(select_ln76_2_fu_38287_p3.read());
}

void dense_large::thread_zext_ln76_4_fu_38498_p1() {
    zext_ln76_4_fu_38498_p1 = esl_zext<12,11>(select_ln76_3_fu_38490_p3.read());
}

void dense_large::thread_zext_ln76_5_fu_38701_p1() {
    zext_ln76_5_fu_38701_p1 = esl_zext<12,11>(select_ln76_4_fu_38693_p3.read());
}

void dense_large::thread_zext_ln76_6_fu_38904_p1() {
    zext_ln76_6_fu_38904_p1 = esl_zext<12,11>(select_ln76_5_fu_38896_p3.read());
}

void dense_large::thread_zext_ln76_7_fu_39107_p1() {
    zext_ln76_7_fu_39107_p1 = esl_zext<12,11>(select_ln76_6_fu_39099_p3.read());
}

void dense_large::thread_zext_ln76_8_fu_39310_p1() {
    zext_ln76_8_fu_39310_p1 = esl_zext<12,11>(select_ln76_7_fu_39302_p3.read());
}

void dense_large::thread_zext_ln76_9_fu_39513_p1() {
    zext_ln76_9_fu_39513_p1 = esl_zext<12,11>(select_ln76_8_fu_39505_p3.read());
}

void dense_large::thread_zext_ln76_fu_37876_p1() {
    zext_ln76_fu_37876_p1 = esl_zext<64,1>(ap_phi_mux_w_index365_phi_fu_14969_p6.read());
}

}

