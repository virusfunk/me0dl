// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_HH_
#define _relu_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu : public sc_module {
    // Port declarations 123
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<12> > data_0_V_read;
    sc_in< sc_lv<12> > data_1_V_read;
    sc_in< sc_lv<12> > data_2_V_read;
    sc_in< sc_lv<12> > data_3_V_read;
    sc_in< sc_lv<12> > data_4_V_read;
    sc_in< sc_lv<12> > data_5_V_read;
    sc_in< sc_lv<12> > data_6_V_read;
    sc_in< sc_lv<12> > data_7_V_read;
    sc_in< sc_lv<12> > data_8_V_read;
    sc_in< sc_lv<12> > data_9_V_read;
    sc_in< sc_lv<12> > data_10_V_read;
    sc_in< sc_lv<12> > data_11_V_read;
    sc_in< sc_lv<12> > data_12_V_read;
    sc_in< sc_lv<12> > data_13_V_read;
    sc_in< sc_lv<12> > data_14_V_read;
    sc_in< sc_lv<12> > data_15_V_read;
    sc_in< sc_lv<12> > data_16_V_read;
    sc_in< sc_lv<12> > data_17_V_read;
    sc_in< sc_lv<12> > data_18_V_read;
    sc_in< sc_lv<12> > data_19_V_read;
    sc_in< sc_lv<12> > data_20_V_read;
    sc_in< sc_lv<12> > data_21_V_read;
    sc_in< sc_lv<12> > data_22_V_read;
    sc_in< sc_lv<12> > data_23_V_read;
    sc_in< sc_lv<12> > data_24_V_read;
    sc_in< sc_lv<12> > data_25_V_read;
    sc_in< sc_lv<12> > data_26_V_read;
    sc_in< sc_lv<12> > data_27_V_read;
    sc_in< sc_lv<12> > data_28_V_read;
    sc_in< sc_lv<12> > data_29_V_read;
    sc_in< sc_lv<12> > data_30_V_read;
    sc_in< sc_lv<12> > data_31_V_read;
    sc_in< sc_lv<12> > data_32_V_read;
    sc_in< sc_lv<12> > data_33_V_read;
    sc_in< sc_lv<12> > data_34_V_read;
    sc_in< sc_lv<12> > data_35_V_read;
    sc_in< sc_lv<12> > data_36_V_read;
    sc_in< sc_lv<12> > data_37_V_read;
    sc_in< sc_lv<12> > data_38_V_read;
    sc_in< sc_lv<12> > data_39_V_read;
    sc_in< sc_lv<12> > data_40_V_read;
    sc_in< sc_lv<12> > data_41_V_read;
    sc_in< sc_lv<12> > data_42_V_read;
    sc_in< sc_lv<12> > data_43_V_read;
    sc_in< sc_lv<12> > data_44_V_read;
    sc_in< sc_lv<12> > data_45_V_read;
    sc_in< sc_lv<12> > data_46_V_read;
    sc_in< sc_lv<12> > data_47_V_read;
    sc_in< sc_lv<12> > data_48_V_read;
    sc_in< sc_lv<12> > data_49_V_read;
    sc_in< sc_lv<12> > data_50_V_read;
    sc_in< sc_lv<12> > data_51_V_read;
    sc_in< sc_lv<12> > data_52_V_read;
    sc_in< sc_lv<12> > data_53_V_read;
    sc_in< sc_lv<12> > data_54_V_read;
    sc_in< sc_lv<12> > data_55_V_read;
    sc_in< sc_lv<12> > data_56_V_read;
    sc_in< sc_lv<12> > data_57_V_read;
    sc_out< sc_lv<11> > ap_return_0;
    sc_out< sc_lv<11> > ap_return_1;
    sc_out< sc_lv<11> > ap_return_2;
    sc_out< sc_lv<11> > ap_return_3;
    sc_out< sc_lv<11> > ap_return_4;
    sc_out< sc_lv<11> > ap_return_5;
    sc_out< sc_lv<11> > ap_return_6;
    sc_out< sc_lv<11> > ap_return_7;
    sc_out< sc_lv<11> > ap_return_8;
    sc_out< sc_lv<11> > ap_return_9;
    sc_out< sc_lv<11> > ap_return_10;
    sc_out< sc_lv<11> > ap_return_11;
    sc_out< sc_lv<11> > ap_return_12;
    sc_out< sc_lv<11> > ap_return_13;
    sc_out< sc_lv<11> > ap_return_14;
    sc_out< sc_lv<11> > ap_return_15;
    sc_out< sc_lv<11> > ap_return_16;
    sc_out< sc_lv<11> > ap_return_17;
    sc_out< sc_lv<11> > ap_return_18;
    sc_out< sc_lv<11> > ap_return_19;
    sc_out< sc_lv<11> > ap_return_20;
    sc_out< sc_lv<11> > ap_return_21;
    sc_out< sc_lv<11> > ap_return_22;
    sc_out< sc_lv<11> > ap_return_23;
    sc_out< sc_lv<11> > ap_return_24;
    sc_out< sc_lv<11> > ap_return_25;
    sc_out< sc_lv<11> > ap_return_26;
    sc_out< sc_lv<11> > ap_return_27;
    sc_out< sc_lv<11> > ap_return_28;
    sc_out< sc_lv<11> > ap_return_29;
    sc_out< sc_lv<11> > ap_return_30;
    sc_out< sc_lv<11> > ap_return_31;
    sc_out< sc_lv<11> > ap_return_32;
    sc_out< sc_lv<11> > ap_return_33;
    sc_out< sc_lv<11> > ap_return_34;
    sc_out< sc_lv<11> > ap_return_35;
    sc_out< sc_lv<11> > ap_return_36;
    sc_out< sc_lv<11> > ap_return_37;
    sc_out< sc_lv<11> > ap_return_38;
    sc_out< sc_lv<11> > ap_return_39;
    sc_out< sc_lv<11> > ap_return_40;
    sc_out< sc_lv<11> > ap_return_41;
    sc_out< sc_lv<11> > ap_return_42;
    sc_out< sc_lv<11> > ap_return_43;
    sc_out< sc_lv<11> > ap_return_44;
    sc_out< sc_lv<11> > ap_return_45;
    sc_out< sc_lv<11> > ap_return_46;
    sc_out< sc_lv<11> > ap_return_47;
    sc_out< sc_lv<11> > ap_return_48;
    sc_out< sc_lv<11> > ap_return_49;
    sc_out< sc_lv<11> > ap_return_50;
    sc_out< sc_lv<11> > ap_return_51;
    sc_out< sc_lv<11> > ap_return_52;
    sc_out< sc_lv<11> > ap_return_53;
    sc_out< sc_lv<11> > ap_return_54;
    sc_out< sc_lv<11> > ap_return_55;
    sc_out< sc_lv<11> > ap_return_56;
    sc_out< sc_lv<11> > ap_return_57;


    // Module declarations
    relu(sc_module_name name);
    SC_HAS_PROCESS(relu);

    ~relu();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > icmp_ln1494_fu_492_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_fu_488_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_1_fu_510_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_1_fu_506_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_2_fu_528_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_2_fu_524_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_3_fu_546_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_3_fu_542_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_4_fu_564_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_4_fu_560_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_5_fu_582_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_5_fu_578_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_6_fu_600_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_6_fu_596_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_7_fu_618_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_7_fu_614_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_8_fu_636_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_8_fu_632_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_9_fu_654_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_9_fu_650_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_10_fu_672_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_10_fu_668_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_11_fu_690_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_11_fu_686_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_12_fu_708_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_12_fu_704_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_13_fu_726_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_13_fu_722_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_14_fu_744_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_14_fu_740_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_15_fu_762_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_15_fu_758_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_16_fu_780_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_16_fu_776_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_17_fu_798_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_17_fu_794_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_18_fu_816_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_18_fu_812_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_19_fu_834_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_19_fu_830_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_20_fu_852_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_20_fu_848_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_21_fu_870_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_21_fu_866_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_22_fu_888_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_22_fu_884_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_23_fu_906_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_23_fu_902_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_24_fu_924_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_24_fu_920_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_25_fu_942_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_25_fu_938_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_26_fu_960_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_26_fu_956_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_27_fu_978_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_27_fu_974_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_28_fu_996_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_28_fu_992_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_29_fu_1014_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_29_fu_1010_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_30_fu_1032_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_30_fu_1028_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_31_fu_1050_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_31_fu_1046_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_32_fu_1068_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_32_fu_1064_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_33_fu_1086_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_33_fu_1082_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_34_fu_1104_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_34_fu_1100_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_35_fu_1122_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_35_fu_1118_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_36_fu_1140_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_36_fu_1136_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_37_fu_1158_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_37_fu_1154_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_38_fu_1176_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_38_fu_1172_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_39_fu_1194_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_39_fu_1190_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_40_fu_1212_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_40_fu_1208_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_41_fu_1230_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_41_fu_1226_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_42_fu_1248_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_42_fu_1244_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_43_fu_1266_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_43_fu_1262_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_44_fu_1284_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_44_fu_1280_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_45_fu_1302_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_45_fu_1298_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_46_fu_1320_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_46_fu_1316_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_47_fu_1338_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_47_fu_1334_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_48_fu_1356_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_48_fu_1352_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_49_fu_1374_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_49_fu_1370_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_50_fu_1392_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_50_fu_1388_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_51_fu_1410_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_51_fu_1406_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_52_fu_1428_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_52_fu_1424_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_53_fu_1446_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_53_fu_1442_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_54_fu_1464_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_54_fu_1460_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_55_fu_1482_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_55_fu_1478_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_56_fu_1500_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_56_fu_1496_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_57_fu_1518_p2;
    sc_signal< sc_lv<11> > trunc_ln1494_57_fu_1514_p1;
    sc_signal< sc_lv<11> > select_ln81_fu_498_p3;
    sc_signal< sc_lv<11> > select_ln81_1_fu_516_p3;
    sc_signal< sc_lv<11> > select_ln81_2_fu_534_p3;
    sc_signal< sc_lv<11> > select_ln81_3_fu_552_p3;
    sc_signal< sc_lv<11> > select_ln81_4_fu_570_p3;
    sc_signal< sc_lv<11> > select_ln81_5_fu_588_p3;
    sc_signal< sc_lv<11> > select_ln81_6_fu_606_p3;
    sc_signal< sc_lv<11> > select_ln81_7_fu_624_p3;
    sc_signal< sc_lv<11> > select_ln81_8_fu_642_p3;
    sc_signal< sc_lv<11> > select_ln81_9_fu_660_p3;
    sc_signal< sc_lv<11> > select_ln81_10_fu_678_p3;
    sc_signal< sc_lv<11> > select_ln81_11_fu_696_p3;
    sc_signal< sc_lv<11> > select_ln81_12_fu_714_p3;
    sc_signal< sc_lv<11> > select_ln81_13_fu_732_p3;
    sc_signal< sc_lv<11> > select_ln81_14_fu_750_p3;
    sc_signal< sc_lv<11> > select_ln81_15_fu_768_p3;
    sc_signal< sc_lv<11> > select_ln81_16_fu_786_p3;
    sc_signal< sc_lv<11> > select_ln81_17_fu_804_p3;
    sc_signal< sc_lv<11> > select_ln81_18_fu_822_p3;
    sc_signal< sc_lv<11> > select_ln81_19_fu_840_p3;
    sc_signal< sc_lv<11> > select_ln81_20_fu_858_p3;
    sc_signal< sc_lv<11> > select_ln81_21_fu_876_p3;
    sc_signal< sc_lv<11> > select_ln81_22_fu_894_p3;
    sc_signal< sc_lv<11> > select_ln81_23_fu_912_p3;
    sc_signal< sc_lv<11> > select_ln81_24_fu_930_p3;
    sc_signal< sc_lv<11> > select_ln81_25_fu_948_p3;
    sc_signal< sc_lv<11> > select_ln81_26_fu_966_p3;
    sc_signal< sc_lv<11> > select_ln81_27_fu_984_p3;
    sc_signal< sc_lv<11> > select_ln81_28_fu_1002_p3;
    sc_signal< sc_lv<11> > select_ln81_29_fu_1020_p3;
    sc_signal< sc_lv<11> > select_ln81_30_fu_1038_p3;
    sc_signal< sc_lv<11> > select_ln81_31_fu_1056_p3;
    sc_signal< sc_lv<11> > select_ln81_32_fu_1074_p3;
    sc_signal< sc_lv<11> > select_ln81_33_fu_1092_p3;
    sc_signal< sc_lv<11> > select_ln81_34_fu_1110_p3;
    sc_signal< sc_lv<11> > select_ln81_35_fu_1128_p3;
    sc_signal< sc_lv<11> > select_ln81_36_fu_1146_p3;
    sc_signal< sc_lv<11> > select_ln81_37_fu_1164_p3;
    sc_signal< sc_lv<11> > select_ln81_38_fu_1182_p3;
    sc_signal< sc_lv<11> > select_ln81_39_fu_1200_p3;
    sc_signal< sc_lv<11> > select_ln81_40_fu_1218_p3;
    sc_signal< sc_lv<11> > select_ln81_41_fu_1236_p3;
    sc_signal< sc_lv<11> > select_ln81_42_fu_1254_p3;
    sc_signal< sc_lv<11> > select_ln81_43_fu_1272_p3;
    sc_signal< sc_lv<11> > select_ln81_44_fu_1290_p3;
    sc_signal< sc_lv<11> > select_ln81_45_fu_1308_p3;
    sc_signal< sc_lv<11> > select_ln81_46_fu_1326_p3;
    sc_signal< sc_lv<11> > select_ln81_47_fu_1344_p3;
    sc_signal< sc_lv<11> > select_ln81_48_fu_1362_p3;
    sc_signal< sc_lv<11> > select_ln81_49_fu_1380_p3;
    sc_signal< sc_lv<11> > select_ln81_50_fu_1398_p3;
    sc_signal< sc_lv<11> > select_ln81_51_fu_1416_p3;
    sc_signal< sc_lv<11> > select_ln81_52_fu_1434_p3;
    sc_signal< sc_lv<11> > select_ln81_53_fu_1452_p3;
    sc_signal< sc_lv<11> > select_ln81_54_fu_1470_p3;
    sc_signal< sc_lv<11> > select_ln81_55_fu_1488_p3;
    sc_signal< sc_lv<11> > select_ln81_56_fu_1506_p3;
    sc_signal< sc_lv<11> > select_ln81_57_fu_1524_p3;
    sc_signal< sc_lv<11> > ap_return_0_preg;
    sc_signal< sc_lv<11> > ap_return_1_preg;
    sc_signal< sc_lv<11> > ap_return_2_preg;
    sc_signal< sc_lv<11> > ap_return_3_preg;
    sc_signal< sc_lv<11> > ap_return_4_preg;
    sc_signal< sc_lv<11> > ap_return_5_preg;
    sc_signal< sc_lv<11> > ap_return_6_preg;
    sc_signal< sc_lv<11> > ap_return_7_preg;
    sc_signal< sc_lv<11> > ap_return_8_preg;
    sc_signal< sc_lv<11> > ap_return_9_preg;
    sc_signal< sc_lv<11> > ap_return_10_preg;
    sc_signal< sc_lv<11> > ap_return_11_preg;
    sc_signal< sc_lv<11> > ap_return_12_preg;
    sc_signal< sc_lv<11> > ap_return_13_preg;
    sc_signal< sc_lv<11> > ap_return_14_preg;
    sc_signal< sc_lv<11> > ap_return_15_preg;
    sc_signal< sc_lv<11> > ap_return_16_preg;
    sc_signal< sc_lv<11> > ap_return_17_preg;
    sc_signal< sc_lv<11> > ap_return_18_preg;
    sc_signal< sc_lv<11> > ap_return_19_preg;
    sc_signal< sc_lv<11> > ap_return_20_preg;
    sc_signal< sc_lv<11> > ap_return_21_preg;
    sc_signal< sc_lv<11> > ap_return_22_preg;
    sc_signal< sc_lv<11> > ap_return_23_preg;
    sc_signal< sc_lv<11> > ap_return_24_preg;
    sc_signal< sc_lv<11> > ap_return_25_preg;
    sc_signal< sc_lv<11> > ap_return_26_preg;
    sc_signal< sc_lv<11> > ap_return_27_preg;
    sc_signal< sc_lv<11> > ap_return_28_preg;
    sc_signal< sc_lv<11> > ap_return_29_preg;
    sc_signal< sc_lv<11> > ap_return_30_preg;
    sc_signal< sc_lv<11> > ap_return_31_preg;
    sc_signal< sc_lv<11> > ap_return_32_preg;
    sc_signal< sc_lv<11> > ap_return_33_preg;
    sc_signal< sc_lv<11> > ap_return_34_preg;
    sc_signal< sc_lv<11> > ap_return_35_preg;
    sc_signal< sc_lv<11> > ap_return_36_preg;
    sc_signal< sc_lv<11> > ap_return_37_preg;
    sc_signal< sc_lv<11> > ap_return_38_preg;
    sc_signal< sc_lv<11> > ap_return_39_preg;
    sc_signal< sc_lv<11> > ap_return_40_preg;
    sc_signal< sc_lv<11> > ap_return_41_preg;
    sc_signal< sc_lv<11> > ap_return_42_preg;
    sc_signal< sc_lv<11> > ap_return_43_preg;
    sc_signal< sc_lv<11> > ap_return_44_preg;
    sc_signal< sc_lv<11> > ap_return_45_preg;
    sc_signal< sc_lv<11> > ap_return_46_preg;
    sc_signal< sc_lv<11> > ap_return_47_preg;
    sc_signal< sc_lv<11> > ap_return_48_preg;
    sc_signal< sc_lv<11> > ap_return_49_preg;
    sc_signal< sc_lv<11> > ap_return_50_preg;
    sc_signal< sc_lv<11> > ap_return_51_preg;
    sc_signal< sc_lv<11> > ap_return_52_preg;
    sc_signal< sc_lv<11> > ap_return_53_preg;
    sc_signal< sc_lv<11> > ap_return_54_preg;
    sc_signal< sc_lv<11> > ap_return_55_preg;
    sc_signal< sc_lv<11> > ap_return_56_preg;
    sc_signal< sc_lv<11> > ap_return_57_preg;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_16();
    void thread_ap_return_17();
    void thread_ap_return_18();
    void thread_ap_return_19();
    void thread_ap_return_2();
    void thread_ap_return_20();
    void thread_ap_return_21();
    void thread_ap_return_22();
    void thread_ap_return_23();
    void thread_ap_return_24();
    void thread_ap_return_25();
    void thread_ap_return_26();
    void thread_ap_return_27();
    void thread_ap_return_28();
    void thread_ap_return_29();
    void thread_ap_return_3();
    void thread_ap_return_30();
    void thread_ap_return_31();
    void thread_ap_return_32();
    void thread_ap_return_33();
    void thread_ap_return_34();
    void thread_ap_return_35();
    void thread_ap_return_36();
    void thread_ap_return_37();
    void thread_ap_return_38();
    void thread_ap_return_39();
    void thread_ap_return_4();
    void thread_ap_return_40();
    void thread_ap_return_41();
    void thread_ap_return_42();
    void thread_ap_return_43();
    void thread_ap_return_44();
    void thread_ap_return_45();
    void thread_ap_return_46();
    void thread_ap_return_47();
    void thread_ap_return_48();
    void thread_ap_return_49();
    void thread_ap_return_5();
    void thread_ap_return_50();
    void thread_ap_return_51();
    void thread_ap_return_52();
    void thread_ap_return_53();
    void thread_ap_return_54();
    void thread_ap_return_55();
    void thread_ap_return_56();
    void thread_ap_return_57();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_icmp_ln1494_10_fu_672_p2();
    void thread_icmp_ln1494_11_fu_690_p2();
    void thread_icmp_ln1494_12_fu_708_p2();
    void thread_icmp_ln1494_13_fu_726_p2();
    void thread_icmp_ln1494_14_fu_744_p2();
    void thread_icmp_ln1494_15_fu_762_p2();
    void thread_icmp_ln1494_16_fu_780_p2();
    void thread_icmp_ln1494_17_fu_798_p2();
    void thread_icmp_ln1494_18_fu_816_p2();
    void thread_icmp_ln1494_19_fu_834_p2();
    void thread_icmp_ln1494_1_fu_510_p2();
    void thread_icmp_ln1494_20_fu_852_p2();
    void thread_icmp_ln1494_21_fu_870_p2();
    void thread_icmp_ln1494_22_fu_888_p2();
    void thread_icmp_ln1494_23_fu_906_p2();
    void thread_icmp_ln1494_24_fu_924_p2();
    void thread_icmp_ln1494_25_fu_942_p2();
    void thread_icmp_ln1494_26_fu_960_p2();
    void thread_icmp_ln1494_27_fu_978_p2();
    void thread_icmp_ln1494_28_fu_996_p2();
    void thread_icmp_ln1494_29_fu_1014_p2();
    void thread_icmp_ln1494_2_fu_528_p2();
    void thread_icmp_ln1494_30_fu_1032_p2();
    void thread_icmp_ln1494_31_fu_1050_p2();
    void thread_icmp_ln1494_32_fu_1068_p2();
    void thread_icmp_ln1494_33_fu_1086_p2();
    void thread_icmp_ln1494_34_fu_1104_p2();
    void thread_icmp_ln1494_35_fu_1122_p2();
    void thread_icmp_ln1494_36_fu_1140_p2();
    void thread_icmp_ln1494_37_fu_1158_p2();
    void thread_icmp_ln1494_38_fu_1176_p2();
    void thread_icmp_ln1494_39_fu_1194_p2();
    void thread_icmp_ln1494_3_fu_546_p2();
    void thread_icmp_ln1494_40_fu_1212_p2();
    void thread_icmp_ln1494_41_fu_1230_p2();
    void thread_icmp_ln1494_42_fu_1248_p2();
    void thread_icmp_ln1494_43_fu_1266_p2();
    void thread_icmp_ln1494_44_fu_1284_p2();
    void thread_icmp_ln1494_45_fu_1302_p2();
    void thread_icmp_ln1494_46_fu_1320_p2();
    void thread_icmp_ln1494_47_fu_1338_p2();
    void thread_icmp_ln1494_48_fu_1356_p2();
    void thread_icmp_ln1494_49_fu_1374_p2();
    void thread_icmp_ln1494_4_fu_564_p2();
    void thread_icmp_ln1494_50_fu_1392_p2();
    void thread_icmp_ln1494_51_fu_1410_p2();
    void thread_icmp_ln1494_52_fu_1428_p2();
    void thread_icmp_ln1494_53_fu_1446_p2();
    void thread_icmp_ln1494_54_fu_1464_p2();
    void thread_icmp_ln1494_55_fu_1482_p2();
    void thread_icmp_ln1494_56_fu_1500_p2();
    void thread_icmp_ln1494_57_fu_1518_p2();
    void thread_icmp_ln1494_5_fu_582_p2();
    void thread_icmp_ln1494_6_fu_600_p2();
    void thread_icmp_ln1494_7_fu_618_p2();
    void thread_icmp_ln1494_8_fu_636_p2();
    void thread_icmp_ln1494_9_fu_654_p2();
    void thread_icmp_ln1494_fu_492_p2();
    void thread_select_ln81_10_fu_678_p3();
    void thread_select_ln81_11_fu_696_p3();
    void thread_select_ln81_12_fu_714_p3();
    void thread_select_ln81_13_fu_732_p3();
    void thread_select_ln81_14_fu_750_p3();
    void thread_select_ln81_15_fu_768_p3();
    void thread_select_ln81_16_fu_786_p3();
    void thread_select_ln81_17_fu_804_p3();
    void thread_select_ln81_18_fu_822_p3();
    void thread_select_ln81_19_fu_840_p3();
    void thread_select_ln81_1_fu_516_p3();
    void thread_select_ln81_20_fu_858_p3();
    void thread_select_ln81_21_fu_876_p3();
    void thread_select_ln81_22_fu_894_p3();
    void thread_select_ln81_23_fu_912_p3();
    void thread_select_ln81_24_fu_930_p3();
    void thread_select_ln81_25_fu_948_p3();
    void thread_select_ln81_26_fu_966_p3();
    void thread_select_ln81_27_fu_984_p3();
    void thread_select_ln81_28_fu_1002_p3();
    void thread_select_ln81_29_fu_1020_p3();
    void thread_select_ln81_2_fu_534_p3();
    void thread_select_ln81_30_fu_1038_p3();
    void thread_select_ln81_31_fu_1056_p3();
    void thread_select_ln81_32_fu_1074_p3();
    void thread_select_ln81_33_fu_1092_p3();
    void thread_select_ln81_34_fu_1110_p3();
    void thread_select_ln81_35_fu_1128_p3();
    void thread_select_ln81_36_fu_1146_p3();
    void thread_select_ln81_37_fu_1164_p3();
    void thread_select_ln81_38_fu_1182_p3();
    void thread_select_ln81_39_fu_1200_p3();
    void thread_select_ln81_3_fu_552_p3();
    void thread_select_ln81_40_fu_1218_p3();
    void thread_select_ln81_41_fu_1236_p3();
    void thread_select_ln81_42_fu_1254_p3();
    void thread_select_ln81_43_fu_1272_p3();
    void thread_select_ln81_44_fu_1290_p3();
    void thread_select_ln81_45_fu_1308_p3();
    void thread_select_ln81_46_fu_1326_p3();
    void thread_select_ln81_47_fu_1344_p3();
    void thread_select_ln81_48_fu_1362_p3();
    void thread_select_ln81_49_fu_1380_p3();
    void thread_select_ln81_4_fu_570_p3();
    void thread_select_ln81_50_fu_1398_p3();
    void thread_select_ln81_51_fu_1416_p3();
    void thread_select_ln81_52_fu_1434_p3();
    void thread_select_ln81_53_fu_1452_p3();
    void thread_select_ln81_54_fu_1470_p3();
    void thread_select_ln81_55_fu_1488_p3();
    void thread_select_ln81_56_fu_1506_p3();
    void thread_select_ln81_57_fu_1524_p3();
    void thread_select_ln81_5_fu_588_p3();
    void thread_select_ln81_6_fu_606_p3();
    void thread_select_ln81_7_fu_624_p3();
    void thread_select_ln81_8_fu_642_p3();
    void thread_select_ln81_9_fu_660_p3();
    void thread_select_ln81_fu_498_p3();
    void thread_trunc_ln1494_10_fu_668_p1();
    void thread_trunc_ln1494_11_fu_686_p1();
    void thread_trunc_ln1494_12_fu_704_p1();
    void thread_trunc_ln1494_13_fu_722_p1();
    void thread_trunc_ln1494_14_fu_740_p1();
    void thread_trunc_ln1494_15_fu_758_p1();
    void thread_trunc_ln1494_16_fu_776_p1();
    void thread_trunc_ln1494_17_fu_794_p1();
    void thread_trunc_ln1494_18_fu_812_p1();
    void thread_trunc_ln1494_19_fu_830_p1();
    void thread_trunc_ln1494_1_fu_506_p1();
    void thread_trunc_ln1494_20_fu_848_p1();
    void thread_trunc_ln1494_21_fu_866_p1();
    void thread_trunc_ln1494_22_fu_884_p1();
    void thread_trunc_ln1494_23_fu_902_p1();
    void thread_trunc_ln1494_24_fu_920_p1();
    void thread_trunc_ln1494_25_fu_938_p1();
    void thread_trunc_ln1494_26_fu_956_p1();
    void thread_trunc_ln1494_27_fu_974_p1();
    void thread_trunc_ln1494_28_fu_992_p1();
    void thread_trunc_ln1494_29_fu_1010_p1();
    void thread_trunc_ln1494_2_fu_524_p1();
    void thread_trunc_ln1494_30_fu_1028_p1();
    void thread_trunc_ln1494_31_fu_1046_p1();
    void thread_trunc_ln1494_32_fu_1064_p1();
    void thread_trunc_ln1494_33_fu_1082_p1();
    void thread_trunc_ln1494_34_fu_1100_p1();
    void thread_trunc_ln1494_35_fu_1118_p1();
    void thread_trunc_ln1494_36_fu_1136_p1();
    void thread_trunc_ln1494_37_fu_1154_p1();
    void thread_trunc_ln1494_38_fu_1172_p1();
    void thread_trunc_ln1494_39_fu_1190_p1();
    void thread_trunc_ln1494_3_fu_542_p1();
    void thread_trunc_ln1494_40_fu_1208_p1();
    void thread_trunc_ln1494_41_fu_1226_p1();
    void thread_trunc_ln1494_42_fu_1244_p1();
    void thread_trunc_ln1494_43_fu_1262_p1();
    void thread_trunc_ln1494_44_fu_1280_p1();
    void thread_trunc_ln1494_45_fu_1298_p1();
    void thread_trunc_ln1494_46_fu_1316_p1();
    void thread_trunc_ln1494_47_fu_1334_p1();
    void thread_trunc_ln1494_48_fu_1352_p1();
    void thread_trunc_ln1494_49_fu_1370_p1();
    void thread_trunc_ln1494_4_fu_560_p1();
    void thread_trunc_ln1494_50_fu_1388_p1();
    void thread_trunc_ln1494_51_fu_1406_p1();
    void thread_trunc_ln1494_52_fu_1424_p1();
    void thread_trunc_ln1494_53_fu_1442_p1();
    void thread_trunc_ln1494_54_fu_1460_p1();
    void thread_trunc_ln1494_55_fu_1478_p1();
    void thread_trunc_ln1494_56_fu_1496_p1();
    void thread_trunc_ln1494_57_fu_1514_p1();
    void thread_trunc_ln1494_5_fu_578_p1();
    void thread_trunc_ln1494_6_fu_596_p1();
    void thread_trunc_ln1494_7_fu_614_p1();
    void thread_trunc_ln1494_8_fu_632_p1();
    void thread_trunc_ln1494_9_fu_650_p1();
    void thread_trunc_ln1494_fu_488_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
