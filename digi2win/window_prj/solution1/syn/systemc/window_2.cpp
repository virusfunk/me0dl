#include "window.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void window::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(Block_proc_U0_ap_ready.read(), ap_const_logic_0))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Block_proc_U0_ap_ready.read()))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_sync_Block_proc_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_0_V = ap_sync_channel_write_dense_1_input_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_100_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_100_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_100_V = ap_sync_channel_write_dense_1_input_100_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_101_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_101_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_101_V = ap_sync_channel_write_dense_1_input_101_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_102_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_102_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_102_V = ap_sync_channel_write_dense_1_input_102_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_103_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_103_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_103_V = ap_sync_channel_write_dense_1_input_103_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_104_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_104_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_104_V = ap_sync_channel_write_dense_1_input_104_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_105_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_105_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_105_V = ap_sync_channel_write_dense_1_input_105_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_106_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_106_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_106_V = ap_sync_channel_write_dense_1_input_106_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_107_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_107_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_107_V = ap_sync_channel_write_dense_1_input_107_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_108_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_108_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_108_V = ap_sync_channel_write_dense_1_input_108_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_109_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_109_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_109_V = ap_sync_channel_write_dense_1_input_109_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_10_V = ap_sync_channel_write_dense_1_input_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_110_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_110_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_110_V = ap_sync_channel_write_dense_1_input_110_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_111_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_111_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_111_V = ap_sync_channel_write_dense_1_input_111_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_112_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_112_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_112_V = ap_sync_channel_write_dense_1_input_112_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_113_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_113_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_113_V = ap_sync_channel_write_dense_1_input_113_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_114_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_114_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_114_V = ap_sync_channel_write_dense_1_input_114_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_115_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_115_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_115_V = ap_sync_channel_write_dense_1_input_115_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_116_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_116_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_116_V = ap_sync_channel_write_dense_1_input_116_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_117_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_117_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_117_V = ap_sync_channel_write_dense_1_input_117_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_118_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_118_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_118_V = ap_sync_channel_write_dense_1_input_118_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_119_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_119_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_119_V = ap_sync_channel_write_dense_1_input_119_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_11_V = ap_sync_channel_write_dense_1_input_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_120_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_120_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_120_V = ap_sync_channel_write_dense_1_input_120_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_121_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_121_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_121_V = ap_sync_channel_write_dense_1_input_121_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_122_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_122_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_122_V = ap_sync_channel_write_dense_1_input_122_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_123_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_123_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_123_V = ap_sync_channel_write_dense_1_input_123_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_124_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_124_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_124_V = ap_sync_channel_write_dense_1_input_124_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_125_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_125_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_125_V = ap_sync_channel_write_dense_1_input_125_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_126_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_126_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_126_V = ap_sync_channel_write_dense_1_input_126_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_127_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_127_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_127_V = ap_sync_channel_write_dense_1_input_127_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_128_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_128_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_128_V = ap_sync_channel_write_dense_1_input_128_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_129_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_129_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_129_V = ap_sync_channel_write_dense_1_input_129_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_12_V = ap_sync_channel_write_dense_1_input_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_130_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_130_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_130_V = ap_sync_channel_write_dense_1_input_130_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_131_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_131_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_131_V = ap_sync_channel_write_dense_1_input_131_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_132_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_132_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_132_V = ap_sync_channel_write_dense_1_input_132_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_133_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_133_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_133_V = ap_sync_channel_write_dense_1_input_133_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_134_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_134_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_134_V = ap_sync_channel_write_dense_1_input_134_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_135_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_135_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_135_V = ap_sync_channel_write_dense_1_input_135_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_136_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_136_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_136_V = ap_sync_channel_write_dense_1_input_136_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_137_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_137_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_137_V = ap_sync_channel_write_dense_1_input_137_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_138_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_138_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_138_V = ap_sync_channel_write_dense_1_input_138_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_139_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_139_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_139_V = ap_sync_channel_write_dense_1_input_139_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_13_V = ap_sync_channel_write_dense_1_input_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_140_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_140_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_140_V = ap_sync_channel_write_dense_1_input_140_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_141_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_141_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_141_V = ap_sync_channel_write_dense_1_input_141_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_142_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_142_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_142_V = ap_sync_channel_write_dense_1_input_142_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_143_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_143_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_143_V = ap_sync_channel_write_dense_1_input_143_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_144_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_144_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_144_V = ap_sync_channel_write_dense_1_input_144_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_145_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_145_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_145_V = ap_sync_channel_write_dense_1_input_145_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_146_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_146_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_146_V = ap_sync_channel_write_dense_1_input_146_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_147_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_147_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_147_V = ap_sync_channel_write_dense_1_input_147_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_148_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_148_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_148_V = ap_sync_channel_write_dense_1_input_148_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_149_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_149_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_149_V = ap_sync_channel_write_dense_1_input_149_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_14_V = ap_sync_channel_write_dense_1_input_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_150_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_150_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_150_V = ap_sync_channel_write_dense_1_input_150_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_151_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_151_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_151_V = ap_sync_channel_write_dense_1_input_151_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_152_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_152_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_152_V = ap_sync_channel_write_dense_1_input_152_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_153_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_153_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_153_V = ap_sync_channel_write_dense_1_input_153_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_154_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_154_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_154_V = ap_sync_channel_write_dense_1_input_154_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_155_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_155_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_155_V = ap_sync_channel_write_dense_1_input_155_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_156_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_156_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_156_V = ap_sync_channel_write_dense_1_input_156_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_157_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_157_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_157_V = ap_sync_channel_write_dense_1_input_157_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_158_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_158_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_158_V = ap_sync_channel_write_dense_1_input_158_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_159_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_159_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_159_V = ap_sync_channel_write_dense_1_input_159_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_15_V = ap_sync_channel_write_dense_1_input_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_160_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_160_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_160_V = ap_sync_channel_write_dense_1_input_160_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_161_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_161_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_161_V = ap_sync_channel_write_dense_1_input_161_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_162_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_162_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_162_V = ap_sync_channel_write_dense_1_input_162_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_163_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_163_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_163_V = ap_sync_channel_write_dense_1_input_163_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_164_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_164_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_164_V = ap_sync_channel_write_dense_1_input_164_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_165_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_165_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_165_V = ap_sync_channel_write_dense_1_input_165_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_166_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_166_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_166_V = ap_sync_channel_write_dense_1_input_166_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_167_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_167_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_167_V = ap_sync_channel_write_dense_1_input_167_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_168_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_168_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_168_V = ap_sync_channel_write_dense_1_input_168_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_169_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_169_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_169_V = ap_sync_channel_write_dense_1_input_169_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_16_V = ap_sync_channel_write_dense_1_input_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_170_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_170_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_170_V = ap_sync_channel_write_dense_1_input_170_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_171_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_171_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_171_V = ap_sync_channel_write_dense_1_input_171_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_172_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_172_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_172_V = ap_sync_channel_write_dense_1_input_172_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_173_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_173_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_173_V = ap_sync_channel_write_dense_1_input_173_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_174_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_174_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_174_V = ap_sync_channel_write_dense_1_input_174_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_175_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_175_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_175_V = ap_sync_channel_write_dense_1_input_175_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_176_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_176_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_176_V = ap_sync_channel_write_dense_1_input_176_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_177_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_177_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_177_V = ap_sync_channel_write_dense_1_input_177_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_178_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_178_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_178_V = ap_sync_channel_write_dense_1_input_178_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_179_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_179_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_179_V = ap_sync_channel_write_dense_1_input_179_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_17_V = ap_sync_channel_write_dense_1_input_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_18_V = ap_sync_channel_write_dense_1_input_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_19_V = ap_sync_channel_write_dense_1_input_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_1_V = ap_sync_channel_write_dense_1_input_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_20_V = ap_sync_channel_write_dense_1_input_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_21_V = ap_sync_channel_write_dense_1_input_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_22_V = ap_sync_channel_write_dense_1_input_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_23_V = ap_sync_channel_write_dense_1_input_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_24_V = ap_sync_channel_write_dense_1_input_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_25_V = ap_sync_channel_write_dense_1_input_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_26_V = ap_sync_channel_write_dense_1_input_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_27_V = ap_sync_channel_write_dense_1_input_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_28_V = ap_sync_channel_write_dense_1_input_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_29_V = ap_sync_channel_write_dense_1_input_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_2_V = ap_sync_channel_write_dense_1_input_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_30_V = ap_sync_channel_write_dense_1_input_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_31_V = ap_sync_channel_write_dense_1_input_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_32_V = ap_sync_channel_write_dense_1_input_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_33_V = ap_sync_channel_write_dense_1_input_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_34_V = ap_sync_channel_write_dense_1_input_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_35_V = ap_sync_channel_write_dense_1_input_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_36_V = ap_sync_channel_write_dense_1_input_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_37_V = ap_sync_channel_write_dense_1_input_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_38_V = ap_sync_channel_write_dense_1_input_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_39_V = ap_sync_channel_write_dense_1_input_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_3_V = ap_sync_channel_write_dense_1_input_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_40_V = ap_sync_channel_write_dense_1_input_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_41_V = ap_sync_channel_write_dense_1_input_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_42_V = ap_sync_channel_write_dense_1_input_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_43_V = ap_sync_channel_write_dense_1_input_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_44_V = ap_sync_channel_write_dense_1_input_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_45_V = ap_sync_channel_write_dense_1_input_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_46_V = ap_sync_channel_write_dense_1_input_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_47_V = ap_sync_channel_write_dense_1_input_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_48_V = ap_sync_channel_write_dense_1_input_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_49_V = ap_sync_channel_write_dense_1_input_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_4_V = ap_sync_channel_write_dense_1_input_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_50_V = ap_sync_channel_write_dense_1_input_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_51_V = ap_sync_channel_write_dense_1_input_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_52_V = ap_sync_channel_write_dense_1_input_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_53_V = ap_sync_channel_write_dense_1_input_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_54_V = ap_sync_channel_write_dense_1_input_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_55_V = ap_sync_channel_write_dense_1_input_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_56_V = ap_sync_channel_write_dense_1_input_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_57_V = ap_sync_channel_write_dense_1_input_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_58_V = ap_sync_channel_write_dense_1_input_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_59_V = ap_sync_channel_write_dense_1_input_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_5_V = ap_sync_channel_write_dense_1_input_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_60_V = ap_sync_channel_write_dense_1_input_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_61_V = ap_sync_channel_write_dense_1_input_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_62_V = ap_sync_channel_write_dense_1_input_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_63_V = ap_sync_channel_write_dense_1_input_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_64_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_64_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_64_V = ap_sync_channel_write_dense_1_input_64_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_65_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_65_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_65_V = ap_sync_channel_write_dense_1_input_65_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_66_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_66_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_66_V = ap_sync_channel_write_dense_1_input_66_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_67_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_67_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_67_V = ap_sync_channel_write_dense_1_input_67_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_68_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_68_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_68_V = ap_sync_channel_write_dense_1_input_68_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_69_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_69_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_69_V = ap_sync_channel_write_dense_1_input_69_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_6_V = ap_sync_channel_write_dense_1_input_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_70_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_70_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_70_V = ap_sync_channel_write_dense_1_input_70_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_71_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_71_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_71_V = ap_sync_channel_write_dense_1_input_71_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_72_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_72_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_72_V = ap_sync_channel_write_dense_1_input_72_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_73_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_73_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_73_V = ap_sync_channel_write_dense_1_input_73_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_74_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_74_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_74_V = ap_sync_channel_write_dense_1_input_74_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_75_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_75_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_75_V = ap_sync_channel_write_dense_1_input_75_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_76_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_76_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_76_V = ap_sync_channel_write_dense_1_input_76_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_77_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_77_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_77_V = ap_sync_channel_write_dense_1_input_77_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_78_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_78_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_78_V = ap_sync_channel_write_dense_1_input_78_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_79_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_79_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_79_V = ap_sync_channel_write_dense_1_input_79_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_7_V = ap_sync_channel_write_dense_1_input_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_80_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_80_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_80_V = ap_sync_channel_write_dense_1_input_80_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_81_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_81_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_81_V = ap_sync_channel_write_dense_1_input_81_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_82_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_82_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_82_V = ap_sync_channel_write_dense_1_input_82_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_83_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_83_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_83_V = ap_sync_channel_write_dense_1_input_83_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_84_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_84_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_84_V = ap_sync_channel_write_dense_1_input_84_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_85_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_85_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_85_V = ap_sync_channel_write_dense_1_input_85_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_86_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_86_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_86_V = ap_sync_channel_write_dense_1_input_86_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_87_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_87_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_87_V = ap_sync_channel_write_dense_1_input_87_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_88_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_88_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_88_V = ap_sync_channel_write_dense_1_input_88_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_89_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_89_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_89_V = ap_sync_channel_write_dense_1_input_89_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_8_V = ap_sync_channel_write_dense_1_input_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_90_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_90_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_90_V = ap_sync_channel_write_dense_1_input_90_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_91_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_91_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_91_V = ap_sync_channel_write_dense_1_input_91_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_92_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_92_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_92_V = ap_sync_channel_write_dense_1_input_92_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_93_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_93_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_93_V = ap_sync_channel_write_dense_1_input_93_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_94_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_94_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_94_V = ap_sync_channel_write_dense_1_input_94_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_95_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_95_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_95_V = ap_sync_channel_write_dense_1_input_95_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_96_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_96_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_96_V = ap_sync_channel_write_dense_1_input_96_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_97_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_97_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_97_V = ap_sync_channel_write_dense_1_input_97_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_98_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_98_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_98_V = ap_sync_channel_write_dense_1_input_98_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_99_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_99_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_99_V = ap_sync_channel_write_dense_1_input_99_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_1_input_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (digi2win_U0_ap_done.read() & 
             digi2win_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_1_input_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_1_input_9_V = ap_sync_channel_write_dense_1_input_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_0_V = ap_sync_channel_write_layer2_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_10_V = ap_sync_channel_write_layer2_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_11_V = ap_sync_channel_write_layer2_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_12_V = ap_sync_channel_write_layer2_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_13_V = ap_sync_channel_write_layer2_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_14_V = ap_sync_channel_write_layer2_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_15_V = ap_sync_channel_write_layer2_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_16_V = ap_sync_channel_write_layer2_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_17_V = ap_sync_channel_write_layer2_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_18_V = ap_sync_channel_write_layer2_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_19_V = ap_sync_channel_write_layer2_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_1_V = ap_sync_channel_write_layer2_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_20_V = ap_sync_channel_write_layer2_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_21_V = ap_sync_channel_write_layer2_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_22_V = ap_sync_channel_write_layer2_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_23_V = ap_sync_channel_write_layer2_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_24_V = ap_sync_channel_write_layer2_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_25_V = ap_sync_channel_write_layer2_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_26_V = ap_sync_channel_write_layer2_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_27_V = ap_sync_channel_write_layer2_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_28_V = ap_sync_channel_write_layer2_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_29_V = ap_sync_channel_write_layer2_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_2_V = ap_sync_channel_write_layer2_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_30_V = ap_sync_channel_write_layer2_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_31_V = ap_sync_channel_write_layer2_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_32_V = ap_sync_channel_write_layer2_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_33_V = ap_sync_channel_write_layer2_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_34_V = ap_sync_channel_write_layer2_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_35_V = ap_sync_channel_write_layer2_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_3_V = ap_sync_channel_write_layer2_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_4_V = ap_sync_channel_write_layer2_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_5_V = ap_sync_channel_write_layer2_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_6_V = ap_sync_channel_write_layer2_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_7_V = ap_sync_channel_write_layer2_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_8_V = ap_sync_channel_write_layer2_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_large_1_U0_ap_done.read() & 
             dense_large_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_9_V = ap_sync_channel_write_layer2_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_0_V = ap_sync_channel_write_layer4_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_10_V = ap_sync_channel_write_layer4_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_11_V = ap_sync_channel_write_layer4_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_12_V = ap_sync_channel_write_layer4_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_13_V = ap_sync_channel_write_layer4_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_14_V = ap_sync_channel_write_layer4_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_15_V = ap_sync_channel_write_layer4_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_16_V = ap_sync_channel_write_layer4_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_17_V = ap_sync_channel_write_layer4_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_18_V = ap_sync_channel_write_layer4_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_19_V = ap_sync_channel_write_layer4_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_1_V = ap_sync_channel_write_layer4_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_20_V = ap_sync_channel_write_layer4_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_21_V = ap_sync_channel_write_layer4_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_22_V = ap_sync_channel_write_layer4_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_23_V = ap_sync_channel_write_layer4_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_24_V = ap_sync_channel_write_layer4_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_25_V = ap_sync_channel_write_layer4_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_26_V = ap_sync_channel_write_layer4_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_27_V = ap_sync_channel_write_layer4_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_28_V = ap_sync_channel_write_layer4_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_29_V = ap_sync_channel_write_layer4_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_2_V = ap_sync_channel_write_layer4_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_30_V = ap_sync_channel_write_layer4_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_31_V = ap_sync_channel_write_layer4_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_32_V = ap_sync_channel_write_layer4_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_33_V = ap_sync_channel_write_layer4_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_34_V = ap_sync_channel_write_layer4_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_35_V = ap_sync_channel_write_layer4_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_3_V = ap_sync_channel_write_layer4_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_4_V = ap_sync_channel_write_layer4_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_5_V = ap_sync_channel_write_layer4_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_6_V = ap_sync_channel_write_layer4_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_7_V = ap_sync_channel_write_layer4_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_8_V = ap_sync_channel_write_layer4_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_U0_ap_done.read() & 
             relu_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_9_V = ap_sync_channel_write_layer4_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_window_entry3_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_window_entry3_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_window_entry3_U0_ap_ready = ap_sync_window_entry3_U0_ap_ready.read();
        }
    }
    if ((esl_seteq<1,1,1>(window_entry3_U0_ap_ready.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()))) {
        window_entry3_U0_ap_ready_count = (!window_entry3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(window_entry3_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, window_entry3_U0_ap_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()))) {
        window_entry3_U0_ap_ready_count = (!window_entry3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(window_entry3_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
}

}

