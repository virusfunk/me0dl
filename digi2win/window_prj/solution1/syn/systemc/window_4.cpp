#include "window.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void window::thread_Block_proc_U0_ap_continue() {
    Block_proc_U0_ap_continue = ap_sync_done.read();
}

void window::thread_Block_proc_U0_ap_start() {
    Block_proc_U0_ap_start = (ap_start.read() & (ap_sync_reg_Block_proc_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

void window::thread_Block_proc_U0_start_full_n() {
    Block_proc_U0_start_full_n = ap_const_logic_1;
}

void window::thread_Block_proc_U0_start_write() {
    Block_proc_U0_start_write = ap_const_logic_0;
}

void window::thread_Loop_memset_max_coor_U0_ap_continue() {
    Loop_memset_max_coor_U0_ap_continue = max_coor_i_full_n.read();
}

void window::thread_Loop_memset_max_coor_U0_ap_start() {
    Loop_memset_max_coor_U0_ap_start = ap_const_logic_1;
}

void window::thread_Loop_memset_max_coor_U0_max_coor_full_n() {
    Loop_memset_max_coor_U0_max_coor_full_n = max_coor_i_full_n.read();
}

void window::thread_Loop_memset_max_coor_U0_start_full_n() {
    Loop_memset_max_coor_U0_start_full_n = ap_const_logic_1;
}

void window::thread_Loop_memset_max_coor_U0_start_write() {
    Loop_memset_max_coor_U0_start_write = ap_const_logic_0;
}

void window::thread_ap_channel_done_dense_1_input_0_V() {
    ap_channel_done_dense_1_input_0_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_0_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_100_V() {
    ap_channel_done_dense_1_input_100_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_100_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_101_V() {
    ap_channel_done_dense_1_input_101_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_101_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_102_V() {
    ap_channel_done_dense_1_input_102_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_102_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_103_V() {
    ap_channel_done_dense_1_input_103_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_103_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_104_V() {
    ap_channel_done_dense_1_input_104_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_104_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_105_V() {
    ap_channel_done_dense_1_input_105_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_105_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_106_V() {
    ap_channel_done_dense_1_input_106_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_106_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_107_V() {
    ap_channel_done_dense_1_input_107_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_107_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_108_V() {
    ap_channel_done_dense_1_input_108_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_108_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_109_V() {
    ap_channel_done_dense_1_input_109_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_109_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_10_V() {
    ap_channel_done_dense_1_input_10_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_10_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_110_V() {
    ap_channel_done_dense_1_input_110_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_110_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_111_V() {
    ap_channel_done_dense_1_input_111_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_111_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_112_V() {
    ap_channel_done_dense_1_input_112_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_112_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_113_V() {
    ap_channel_done_dense_1_input_113_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_113_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_114_V() {
    ap_channel_done_dense_1_input_114_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_114_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_115_V() {
    ap_channel_done_dense_1_input_115_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_115_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_116_V() {
    ap_channel_done_dense_1_input_116_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_116_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_117_V() {
    ap_channel_done_dense_1_input_117_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_117_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_118_V() {
    ap_channel_done_dense_1_input_118_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_118_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_119_V() {
    ap_channel_done_dense_1_input_119_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_119_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_11_V() {
    ap_channel_done_dense_1_input_11_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_11_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_120_V() {
    ap_channel_done_dense_1_input_120_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_120_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_121_V() {
    ap_channel_done_dense_1_input_121_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_121_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_122_V() {
    ap_channel_done_dense_1_input_122_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_122_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_123_V() {
    ap_channel_done_dense_1_input_123_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_123_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_124_V() {
    ap_channel_done_dense_1_input_124_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_124_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_125_V() {
    ap_channel_done_dense_1_input_125_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_125_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_126_V() {
    ap_channel_done_dense_1_input_126_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_126_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_127_V() {
    ap_channel_done_dense_1_input_127_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_127_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_128_V() {
    ap_channel_done_dense_1_input_128_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_128_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_129_V() {
    ap_channel_done_dense_1_input_129_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_129_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_12_V() {
    ap_channel_done_dense_1_input_12_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_12_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_130_V() {
    ap_channel_done_dense_1_input_130_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_130_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_131_V() {
    ap_channel_done_dense_1_input_131_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_131_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_132_V() {
    ap_channel_done_dense_1_input_132_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_132_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_133_V() {
    ap_channel_done_dense_1_input_133_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_133_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_134_V() {
    ap_channel_done_dense_1_input_134_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_134_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_135_V() {
    ap_channel_done_dense_1_input_135_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_135_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_136_V() {
    ap_channel_done_dense_1_input_136_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_136_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_137_V() {
    ap_channel_done_dense_1_input_137_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_137_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_138_V() {
    ap_channel_done_dense_1_input_138_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_138_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_139_V() {
    ap_channel_done_dense_1_input_139_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_139_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_13_V() {
    ap_channel_done_dense_1_input_13_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_13_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_140_V() {
    ap_channel_done_dense_1_input_140_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_140_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_141_V() {
    ap_channel_done_dense_1_input_141_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_141_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_142_V() {
    ap_channel_done_dense_1_input_142_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_142_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_143_V() {
    ap_channel_done_dense_1_input_143_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_143_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_144_V() {
    ap_channel_done_dense_1_input_144_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_144_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_145_V() {
    ap_channel_done_dense_1_input_145_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_145_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_146_V() {
    ap_channel_done_dense_1_input_146_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_146_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_147_V() {
    ap_channel_done_dense_1_input_147_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_147_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_148_V() {
    ap_channel_done_dense_1_input_148_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_148_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_149_V() {
    ap_channel_done_dense_1_input_149_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_149_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_14_V() {
    ap_channel_done_dense_1_input_14_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_14_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_150_V() {
    ap_channel_done_dense_1_input_150_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_150_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_151_V() {
    ap_channel_done_dense_1_input_151_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_151_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_152_V() {
    ap_channel_done_dense_1_input_152_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_152_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_153_V() {
    ap_channel_done_dense_1_input_153_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_153_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_154_V() {
    ap_channel_done_dense_1_input_154_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_154_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_155_V() {
    ap_channel_done_dense_1_input_155_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_155_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_156_V() {
    ap_channel_done_dense_1_input_156_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_156_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_157_V() {
    ap_channel_done_dense_1_input_157_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_157_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_158_V() {
    ap_channel_done_dense_1_input_158_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_158_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_159_V() {
    ap_channel_done_dense_1_input_159_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_159_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_15_V() {
    ap_channel_done_dense_1_input_15_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_15_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_160_V() {
    ap_channel_done_dense_1_input_160_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_160_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_161_V() {
    ap_channel_done_dense_1_input_161_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_161_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_162_V() {
    ap_channel_done_dense_1_input_162_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_162_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_163_V() {
    ap_channel_done_dense_1_input_163_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_163_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_164_V() {
    ap_channel_done_dense_1_input_164_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_164_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_165_V() {
    ap_channel_done_dense_1_input_165_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_165_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_166_V() {
    ap_channel_done_dense_1_input_166_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_166_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_167_V() {
    ap_channel_done_dense_1_input_167_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_167_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_168_V() {
    ap_channel_done_dense_1_input_168_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_168_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_169_V() {
    ap_channel_done_dense_1_input_169_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_169_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_16_V() {
    ap_channel_done_dense_1_input_16_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_16_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_170_V() {
    ap_channel_done_dense_1_input_170_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_170_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_171_V() {
    ap_channel_done_dense_1_input_171_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_171_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_172_V() {
    ap_channel_done_dense_1_input_172_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_172_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_173_V() {
    ap_channel_done_dense_1_input_173_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_173_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_174_V() {
    ap_channel_done_dense_1_input_174_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_174_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_175_V() {
    ap_channel_done_dense_1_input_175_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_175_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_176_V() {
    ap_channel_done_dense_1_input_176_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_176_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_177_V() {
    ap_channel_done_dense_1_input_177_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_177_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_178_V() {
    ap_channel_done_dense_1_input_178_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_178_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_179_V() {
    ap_channel_done_dense_1_input_179_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_179_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_17_V() {
    ap_channel_done_dense_1_input_17_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_17_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_18_V() {
    ap_channel_done_dense_1_input_18_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_18_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_19_V() {
    ap_channel_done_dense_1_input_19_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_19_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_1_V() {
    ap_channel_done_dense_1_input_1_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_1_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_20_V() {
    ap_channel_done_dense_1_input_20_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_20_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_21_V() {
    ap_channel_done_dense_1_input_21_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_21_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_22_V() {
    ap_channel_done_dense_1_input_22_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_22_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_23_V() {
    ap_channel_done_dense_1_input_23_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_23_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_24_V() {
    ap_channel_done_dense_1_input_24_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_24_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_25_V() {
    ap_channel_done_dense_1_input_25_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_25_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_26_V() {
    ap_channel_done_dense_1_input_26_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_26_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_27_V() {
    ap_channel_done_dense_1_input_27_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_27_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_28_V() {
    ap_channel_done_dense_1_input_28_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_28_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_29_V() {
    ap_channel_done_dense_1_input_29_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_29_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_2_V() {
    ap_channel_done_dense_1_input_2_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_2_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_30_V() {
    ap_channel_done_dense_1_input_30_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_30_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_31_V() {
    ap_channel_done_dense_1_input_31_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_31_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_32_V() {
    ap_channel_done_dense_1_input_32_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_32_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_33_V() {
    ap_channel_done_dense_1_input_33_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_33_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_34_V() {
    ap_channel_done_dense_1_input_34_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_34_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_35_V() {
    ap_channel_done_dense_1_input_35_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_35_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_36_V() {
    ap_channel_done_dense_1_input_36_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_36_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_37_V() {
    ap_channel_done_dense_1_input_37_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_37_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_38_V() {
    ap_channel_done_dense_1_input_38_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_38_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_39_V() {
    ap_channel_done_dense_1_input_39_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_39_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_3_V() {
    ap_channel_done_dense_1_input_3_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_3_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_40_V() {
    ap_channel_done_dense_1_input_40_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_40_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_41_V() {
    ap_channel_done_dense_1_input_41_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_41_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_42_V() {
    ap_channel_done_dense_1_input_42_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_42_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_43_V() {
    ap_channel_done_dense_1_input_43_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_43_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_44_V() {
    ap_channel_done_dense_1_input_44_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_44_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_45_V() {
    ap_channel_done_dense_1_input_45_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_45_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_46_V() {
    ap_channel_done_dense_1_input_46_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_46_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_47_V() {
    ap_channel_done_dense_1_input_47_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_47_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_48_V() {
    ap_channel_done_dense_1_input_48_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_48_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_49_V() {
    ap_channel_done_dense_1_input_49_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_49_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_4_V() {
    ap_channel_done_dense_1_input_4_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_4_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_50_V() {
    ap_channel_done_dense_1_input_50_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_50_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_51_V() {
    ap_channel_done_dense_1_input_51_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_51_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_52_V() {
    ap_channel_done_dense_1_input_52_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_52_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_53_V() {
    ap_channel_done_dense_1_input_53_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_53_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_54_V() {
    ap_channel_done_dense_1_input_54_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_54_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_55_V() {
    ap_channel_done_dense_1_input_55_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_55_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_56_V() {
    ap_channel_done_dense_1_input_56_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_56_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_57_V() {
    ap_channel_done_dense_1_input_57_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_57_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_58_V() {
    ap_channel_done_dense_1_input_58_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_58_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_59_V() {
    ap_channel_done_dense_1_input_59_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_59_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_5_V() {
    ap_channel_done_dense_1_input_5_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_5_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_60_V() {
    ap_channel_done_dense_1_input_60_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_60_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_61_V() {
    ap_channel_done_dense_1_input_61_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_61_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_62_V() {
    ap_channel_done_dense_1_input_62_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_62_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_63_V() {
    ap_channel_done_dense_1_input_63_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_63_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_64_V() {
    ap_channel_done_dense_1_input_64_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_64_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_65_V() {
    ap_channel_done_dense_1_input_65_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_65_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_66_V() {
    ap_channel_done_dense_1_input_66_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_66_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_67_V() {
    ap_channel_done_dense_1_input_67_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_67_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_68_V() {
    ap_channel_done_dense_1_input_68_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_68_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_69_V() {
    ap_channel_done_dense_1_input_69_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_69_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_6_V() {
    ap_channel_done_dense_1_input_6_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_6_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_70_V() {
    ap_channel_done_dense_1_input_70_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_70_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_71_V() {
    ap_channel_done_dense_1_input_71_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_71_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_72_V() {
    ap_channel_done_dense_1_input_72_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_72_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_73_V() {
    ap_channel_done_dense_1_input_73_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_73_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_74_V() {
    ap_channel_done_dense_1_input_74_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_74_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_75_V() {
    ap_channel_done_dense_1_input_75_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_75_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_76_V() {
    ap_channel_done_dense_1_input_76_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_76_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_77_V() {
    ap_channel_done_dense_1_input_77_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_77_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_78_V() {
    ap_channel_done_dense_1_input_78_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_78_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_79_V() {
    ap_channel_done_dense_1_input_79_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_79_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_7_V() {
    ap_channel_done_dense_1_input_7_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_7_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_80_V() {
    ap_channel_done_dense_1_input_80_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_80_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_81_V() {
    ap_channel_done_dense_1_input_81_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_81_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_82_V() {
    ap_channel_done_dense_1_input_82_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_82_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_83_V() {
    ap_channel_done_dense_1_input_83_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_83_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_84_V() {
    ap_channel_done_dense_1_input_84_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_84_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_85_V() {
    ap_channel_done_dense_1_input_85_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_85_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_86_V() {
    ap_channel_done_dense_1_input_86_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_86_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_87_V() {
    ap_channel_done_dense_1_input_87_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_87_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_88_V() {
    ap_channel_done_dense_1_input_88_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_88_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_89_V() {
    ap_channel_done_dense_1_input_89_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_89_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_8_V() {
    ap_channel_done_dense_1_input_8_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_8_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_90_V() {
    ap_channel_done_dense_1_input_90_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_90_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_91_V() {
    ap_channel_done_dense_1_input_91_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_91_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_92_V() {
    ap_channel_done_dense_1_input_92_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_92_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_93_V() {
    ap_channel_done_dense_1_input_93_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_93_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_94_V() {
    ap_channel_done_dense_1_input_94_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_94_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_95_V() {
    ap_channel_done_dense_1_input_95_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_95_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_96_V() {
    ap_channel_done_dense_1_input_96_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_96_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_97_V() {
    ap_channel_done_dense_1_input_97_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_97_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_98_V() {
    ap_channel_done_dense_1_input_98_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_98_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_99_V() {
    ap_channel_done_dense_1_input_99_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_99_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_dense_1_input_9_V() {
    ap_channel_done_dense_1_input_9_V = (digi2win_U0_ap_done.read() & (ap_sync_reg_channel_write_dense_1_input_9_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_0_V() {
    ap_channel_done_layer2_out_0_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_0_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_10_V() {
    ap_channel_done_layer2_out_10_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_10_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_11_V() {
    ap_channel_done_layer2_out_11_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_11_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_12_V() {
    ap_channel_done_layer2_out_12_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_12_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_13_V() {
    ap_channel_done_layer2_out_13_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_13_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_14_V() {
    ap_channel_done_layer2_out_14_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_14_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_15_V() {
    ap_channel_done_layer2_out_15_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_15_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_16_V() {
    ap_channel_done_layer2_out_16_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_16_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_17_V() {
    ap_channel_done_layer2_out_17_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_17_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_18_V() {
    ap_channel_done_layer2_out_18_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_18_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_19_V() {
    ap_channel_done_layer2_out_19_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_19_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_1_V() {
    ap_channel_done_layer2_out_1_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_1_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_20_V() {
    ap_channel_done_layer2_out_20_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_20_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_21_V() {
    ap_channel_done_layer2_out_21_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_21_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_22_V() {
    ap_channel_done_layer2_out_22_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_22_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_23_V() {
    ap_channel_done_layer2_out_23_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_23_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_24_V() {
    ap_channel_done_layer2_out_24_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_24_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_25_V() {
    ap_channel_done_layer2_out_25_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_25_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_26_V() {
    ap_channel_done_layer2_out_26_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_26_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_27_V() {
    ap_channel_done_layer2_out_27_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_27_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_28_V() {
    ap_channel_done_layer2_out_28_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_28_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_29_V() {
    ap_channel_done_layer2_out_29_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_29_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_2_V() {
    ap_channel_done_layer2_out_2_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_2_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_30_V() {
    ap_channel_done_layer2_out_30_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_30_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_31_V() {
    ap_channel_done_layer2_out_31_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_31_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_32_V() {
    ap_channel_done_layer2_out_32_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_32_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_33_V() {
    ap_channel_done_layer2_out_33_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_33_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_34_V() {
    ap_channel_done_layer2_out_34_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_34_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_35_V() {
    ap_channel_done_layer2_out_35_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_35_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_3_V() {
    ap_channel_done_layer2_out_3_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_3_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_4_V() {
    ap_channel_done_layer2_out_4_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_4_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_5_V() {
    ap_channel_done_layer2_out_5_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_5_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_6_V() {
    ap_channel_done_layer2_out_6_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_6_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_7_V() {
    ap_channel_done_layer2_out_7_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_7_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_8_V() {
    ap_channel_done_layer2_out_8_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_8_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer2_out_9_V() {
    ap_channel_done_layer2_out_9_V = (dense_large_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_9_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_0_V() {
    ap_channel_done_layer4_out_0_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_0_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_10_V() {
    ap_channel_done_layer4_out_10_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_10_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_11_V() {
    ap_channel_done_layer4_out_11_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_11_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_12_V() {
    ap_channel_done_layer4_out_12_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_12_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_13_V() {
    ap_channel_done_layer4_out_13_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_13_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_14_V() {
    ap_channel_done_layer4_out_14_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_14_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_15_V() {
    ap_channel_done_layer4_out_15_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_15_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_16_V() {
    ap_channel_done_layer4_out_16_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_16_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_17_V() {
    ap_channel_done_layer4_out_17_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_17_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_18_V() {
    ap_channel_done_layer4_out_18_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_18_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_19_V() {
    ap_channel_done_layer4_out_19_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_19_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_1_V() {
    ap_channel_done_layer4_out_1_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_1_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_20_V() {
    ap_channel_done_layer4_out_20_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_20_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_21_V() {
    ap_channel_done_layer4_out_21_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_21_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_22_V() {
    ap_channel_done_layer4_out_22_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_22_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_23_V() {
    ap_channel_done_layer4_out_23_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_23_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_24_V() {
    ap_channel_done_layer4_out_24_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_24_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_25_V() {
    ap_channel_done_layer4_out_25_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_25_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_26_V() {
    ap_channel_done_layer4_out_26_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_26_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_27_V() {
    ap_channel_done_layer4_out_27_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_27_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_28_V() {
    ap_channel_done_layer4_out_28_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_28_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_29_V() {
    ap_channel_done_layer4_out_29_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_29_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_2_V() {
    ap_channel_done_layer4_out_2_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_2_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_30_V() {
    ap_channel_done_layer4_out_30_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_30_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_31_V() {
    ap_channel_done_layer4_out_31_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_31_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_32_V() {
    ap_channel_done_layer4_out_32_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_32_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_33_V() {
    ap_channel_done_layer4_out_33_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_33_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_34_V() {
    ap_channel_done_layer4_out_34_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_34_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_35_V() {
    ap_channel_done_layer4_out_35_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_35_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_3_V() {
    ap_channel_done_layer4_out_3_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_3_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_4_V() {
    ap_channel_done_layer4_out_4_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_4_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_5_V() {
    ap_channel_done_layer4_out_5_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_5_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_6_V() {
    ap_channel_done_layer4_out_6_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_6_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_7_V() {
    ap_channel_done_layer4_out_7_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_7_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_8_V() {
    ap_channel_done_layer4_out_8_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_8_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_layer4_out_9_V() {
    ap_channel_done_layer4_out_9_V = (relu_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_9_V.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_channel_done_max_coor() {
    ap_channel_done_max_coor = Loop_memset_max_coor_U0_ap_done.read();
}

void window::thread_ap_done() {
    ap_done = ap_sync_done.read();
}

void window::thread_ap_idle() {
    ap_idle = (window_entry3_U0_ap_idle.read() & window_entry163_U0_ap_idle.read() & Block_proc_U0_ap_idle.read() & Loop_memset_max_coor_U0_ap_idle.read() & digi2win_U0_ap_idle.read() & dense_large_1_U0_ap_idle.read() & relu_U0_ap_idle.read() & dense_large_U0_ap_idle.read() & (max_coor_t_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_35_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_36_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_37_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_38_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_39_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_40_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_41_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_42_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_43_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_44_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_45_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_46_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_47_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_48_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_49_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_50_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_51_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_52_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_53_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_54_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_55_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_56_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_57_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_58_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_59_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_60_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_61_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_62_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_63_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_64_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_65_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_66_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_67_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_68_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_69_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_70_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_71_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_72_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_73_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_74_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_75_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_76_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_77_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_78_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_79_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_80_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_81_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_82_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_83_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_84_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_85_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_86_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_87_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_88_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_89_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_90_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_91_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_92_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_93_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_94_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_95_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_96_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_97_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_98_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_99_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_100_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_101_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_102_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_103_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_104_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_105_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_106_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_107_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_108_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_109_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_110_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_111_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_112_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_113_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_114_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_115_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_116_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_117_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_118_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_119_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_120_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_121_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_122_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_123_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_124_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_125_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_126_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_127_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_128_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_129_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_130_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_131_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_132_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_133_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_134_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_135_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_136_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_137_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_138_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_139_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_140_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_141_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_142_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_143_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_144_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_145_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_146_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_147_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_148_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_149_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_150_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_151_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_152_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_153_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_154_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_155_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_156_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_157_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_158_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_159_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_160_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_161_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_162_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_163_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_164_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_165_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_166_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_167_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_168_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_169_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_170_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_171_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_172_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_173_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_174_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_175_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_176_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_177_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_178_V_empty_n.read() ^ 
  ap_const_logic_1) & (dense_1_input_179_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_35_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_35_V_empty_n.read() ^ 
  ap_const_logic_1));
}

void window::thread_ap_ready() {
    ap_ready = ap_sync_ready.read();
}

void window::thread_ap_sync_Block_proc_U0_ap_ready() {
    ap_sync_Block_proc_U0_ap_ready = (Block_proc_U0_ap_ready.read() | ap_sync_reg_Block_proc_U0_ap_ready.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_0_V() {
    ap_sync_channel_write_dense_1_input_0_V = ((ap_channel_done_dense_1_input_0_V.read() & 
  dense_1_input_0_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_0_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_100_V() {
    ap_sync_channel_write_dense_1_input_100_V = ((ap_channel_done_dense_1_input_100_V.read() & 
  dense_1_input_100_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_100_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_101_V() {
    ap_sync_channel_write_dense_1_input_101_V = ((ap_channel_done_dense_1_input_101_V.read() & 
  dense_1_input_101_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_101_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_102_V() {
    ap_sync_channel_write_dense_1_input_102_V = ((ap_channel_done_dense_1_input_102_V.read() & 
  dense_1_input_102_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_102_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_103_V() {
    ap_sync_channel_write_dense_1_input_103_V = ((ap_channel_done_dense_1_input_103_V.read() & 
  dense_1_input_103_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_103_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_104_V() {
    ap_sync_channel_write_dense_1_input_104_V = ((ap_channel_done_dense_1_input_104_V.read() & 
  dense_1_input_104_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_104_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_105_V() {
    ap_sync_channel_write_dense_1_input_105_V = ((ap_channel_done_dense_1_input_105_V.read() & 
  dense_1_input_105_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_105_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_106_V() {
    ap_sync_channel_write_dense_1_input_106_V = ((ap_channel_done_dense_1_input_106_V.read() & 
  dense_1_input_106_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_106_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_107_V() {
    ap_sync_channel_write_dense_1_input_107_V = ((ap_channel_done_dense_1_input_107_V.read() & 
  dense_1_input_107_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_107_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_108_V() {
    ap_sync_channel_write_dense_1_input_108_V = ((ap_channel_done_dense_1_input_108_V.read() & 
  dense_1_input_108_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_108_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_109_V() {
    ap_sync_channel_write_dense_1_input_109_V = ((ap_channel_done_dense_1_input_109_V.read() & 
  dense_1_input_109_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_109_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_10_V() {
    ap_sync_channel_write_dense_1_input_10_V = ((ap_channel_done_dense_1_input_10_V.read() & 
  dense_1_input_10_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_10_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_110_V() {
    ap_sync_channel_write_dense_1_input_110_V = ((ap_channel_done_dense_1_input_110_V.read() & 
  dense_1_input_110_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_110_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_111_V() {
    ap_sync_channel_write_dense_1_input_111_V = ((ap_channel_done_dense_1_input_111_V.read() & 
  dense_1_input_111_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_111_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_112_V() {
    ap_sync_channel_write_dense_1_input_112_V = ((ap_channel_done_dense_1_input_112_V.read() & 
  dense_1_input_112_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_112_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_113_V() {
    ap_sync_channel_write_dense_1_input_113_V = ((ap_channel_done_dense_1_input_113_V.read() & 
  dense_1_input_113_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_113_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_114_V() {
    ap_sync_channel_write_dense_1_input_114_V = ((ap_channel_done_dense_1_input_114_V.read() & 
  dense_1_input_114_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_114_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_115_V() {
    ap_sync_channel_write_dense_1_input_115_V = ((ap_channel_done_dense_1_input_115_V.read() & 
  dense_1_input_115_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_115_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_116_V() {
    ap_sync_channel_write_dense_1_input_116_V = ((ap_channel_done_dense_1_input_116_V.read() & 
  dense_1_input_116_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_116_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_117_V() {
    ap_sync_channel_write_dense_1_input_117_V = ((ap_channel_done_dense_1_input_117_V.read() & 
  dense_1_input_117_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_117_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_118_V() {
    ap_sync_channel_write_dense_1_input_118_V = ((ap_channel_done_dense_1_input_118_V.read() & 
  dense_1_input_118_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_118_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_119_V() {
    ap_sync_channel_write_dense_1_input_119_V = ((ap_channel_done_dense_1_input_119_V.read() & 
  dense_1_input_119_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_119_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_11_V() {
    ap_sync_channel_write_dense_1_input_11_V = ((ap_channel_done_dense_1_input_11_V.read() & 
  dense_1_input_11_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_11_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_120_V() {
    ap_sync_channel_write_dense_1_input_120_V = ((ap_channel_done_dense_1_input_120_V.read() & 
  dense_1_input_120_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_120_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_121_V() {
    ap_sync_channel_write_dense_1_input_121_V = ((ap_channel_done_dense_1_input_121_V.read() & 
  dense_1_input_121_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_121_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_122_V() {
    ap_sync_channel_write_dense_1_input_122_V = ((ap_channel_done_dense_1_input_122_V.read() & 
  dense_1_input_122_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_122_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_123_V() {
    ap_sync_channel_write_dense_1_input_123_V = ((ap_channel_done_dense_1_input_123_V.read() & 
  dense_1_input_123_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_123_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_124_V() {
    ap_sync_channel_write_dense_1_input_124_V = ((ap_channel_done_dense_1_input_124_V.read() & 
  dense_1_input_124_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_124_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_125_V() {
    ap_sync_channel_write_dense_1_input_125_V = ((ap_channel_done_dense_1_input_125_V.read() & 
  dense_1_input_125_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_125_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_126_V() {
    ap_sync_channel_write_dense_1_input_126_V = ((ap_channel_done_dense_1_input_126_V.read() & 
  dense_1_input_126_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_126_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_127_V() {
    ap_sync_channel_write_dense_1_input_127_V = ((ap_channel_done_dense_1_input_127_V.read() & 
  dense_1_input_127_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_127_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_128_V() {
    ap_sync_channel_write_dense_1_input_128_V = ((ap_channel_done_dense_1_input_128_V.read() & 
  dense_1_input_128_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_128_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_129_V() {
    ap_sync_channel_write_dense_1_input_129_V = ((ap_channel_done_dense_1_input_129_V.read() & 
  dense_1_input_129_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_129_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_12_V() {
    ap_sync_channel_write_dense_1_input_12_V = ((ap_channel_done_dense_1_input_12_V.read() & 
  dense_1_input_12_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_12_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_130_V() {
    ap_sync_channel_write_dense_1_input_130_V = ((ap_channel_done_dense_1_input_130_V.read() & 
  dense_1_input_130_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_130_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_131_V() {
    ap_sync_channel_write_dense_1_input_131_V = ((ap_channel_done_dense_1_input_131_V.read() & 
  dense_1_input_131_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_131_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_132_V() {
    ap_sync_channel_write_dense_1_input_132_V = ((ap_channel_done_dense_1_input_132_V.read() & 
  dense_1_input_132_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_132_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_133_V() {
    ap_sync_channel_write_dense_1_input_133_V = ((ap_channel_done_dense_1_input_133_V.read() & 
  dense_1_input_133_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_133_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_134_V() {
    ap_sync_channel_write_dense_1_input_134_V = ((ap_channel_done_dense_1_input_134_V.read() & 
  dense_1_input_134_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_134_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_135_V() {
    ap_sync_channel_write_dense_1_input_135_V = ((ap_channel_done_dense_1_input_135_V.read() & 
  dense_1_input_135_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_135_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_136_V() {
    ap_sync_channel_write_dense_1_input_136_V = ((ap_channel_done_dense_1_input_136_V.read() & 
  dense_1_input_136_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_136_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_137_V() {
    ap_sync_channel_write_dense_1_input_137_V = ((ap_channel_done_dense_1_input_137_V.read() & 
  dense_1_input_137_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_137_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_138_V() {
    ap_sync_channel_write_dense_1_input_138_V = ((ap_channel_done_dense_1_input_138_V.read() & 
  dense_1_input_138_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_138_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_139_V() {
    ap_sync_channel_write_dense_1_input_139_V = ((ap_channel_done_dense_1_input_139_V.read() & 
  dense_1_input_139_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_139_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_13_V() {
    ap_sync_channel_write_dense_1_input_13_V = ((ap_channel_done_dense_1_input_13_V.read() & 
  dense_1_input_13_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_13_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_140_V() {
    ap_sync_channel_write_dense_1_input_140_V = ((ap_channel_done_dense_1_input_140_V.read() & 
  dense_1_input_140_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_140_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_141_V() {
    ap_sync_channel_write_dense_1_input_141_V = ((ap_channel_done_dense_1_input_141_V.read() & 
  dense_1_input_141_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_141_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_142_V() {
    ap_sync_channel_write_dense_1_input_142_V = ((ap_channel_done_dense_1_input_142_V.read() & 
  dense_1_input_142_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_142_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_143_V() {
    ap_sync_channel_write_dense_1_input_143_V = ((ap_channel_done_dense_1_input_143_V.read() & 
  dense_1_input_143_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_143_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_144_V() {
    ap_sync_channel_write_dense_1_input_144_V = ((ap_channel_done_dense_1_input_144_V.read() & 
  dense_1_input_144_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_144_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_145_V() {
    ap_sync_channel_write_dense_1_input_145_V = ((ap_channel_done_dense_1_input_145_V.read() & 
  dense_1_input_145_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_145_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_146_V() {
    ap_sync_channel_write_dense_1_input_146_V = ((ap_channel_done_dense_1_input_146_V.read() & 
  dense_1_input_146_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_146_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_147_V() {
    ap_sync_channel_write_dense_1_input_147_V = ((ap_channel_done_dense_1_input_147_V.read() & 
  dense_1_input_147_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_147_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_148_V() {
    ap_sync_channel_write_dense_1_input_148_V = ((ap_channel_done_dense_1_input_148_V.read() & 
  dense_1_input_148_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_148_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_149_V() {
    ap_sync_channel_write_dense_1_input_149_V = ((ap_channel_done_dense_1_input_149_V.read() & 
  dense_1_input_149_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_149_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_14_V() {
    ap_sync_channel_write_dense_1_input_14_V = ((ap_channel_done_dense_1_input_14_V.read() & 
  dense_1_input_14_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_14_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_150_V() {
    ap_sync_channel_write_dense_1_input_150_V = ((ap_channel_done_dense_1_input_150_V.read() & 
  dense_1_input_150_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_150_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_151_V() {
    ap_sync_channel_write_dense_1_input_151_V = ((ap_channel_done_dense_1_input_151_V.read() & 
  dense_1_input_151_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_151_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_152_V() {
    ap_sync_channel_write_dense_1_input_152_V = ((ap_channel_done_dense_1_input_152_V.read() & 
  dense_1_input_152_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_152_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_153_V() {
    ap_sync_channel_write_dense_1_input_153_V = ((ap_channel_done_dense_1_input_153_V.read() & 
  dense_1_input_153_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_153_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_154_V() {
    ap_sync_channel_write_dense_1_input_154_V = ((ap_channel_done_dense_1_input_154_V.read() & 
  dense_1_input_154_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_154_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_155_V() {
    ap_sync_channel_write_dense_1_input_155_V = ((ap_channel_done_dense_1_input_155_V.read() & 
  dense_1_input_155_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_155_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_156_V() {
    ap_sync_channel_write_dense_1_input_156_V = ((ap_channel_done_dense_1_input_156_V.read() & 
  dense_1_input_156_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_156_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_157_V() {
    ap_sync_channel_write_dense_1_input_157_V = ((ap_channel_done_dense_1_input_157_V.read() & 
  dense_1_input_157_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_157_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_158_V() {
    ap_sync_channel_write_dense_1_input_158_V = ((ap_channel_done_dense_1_input_158_V.read() & 
  dense_1_input_158_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_158_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_159_V() {
    ap_sync_channel_write_dense_1_input_159_V = ((ap_channel_done_dense_1_input_159_V.read() & 
  dense_1_input_159_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_159_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_15_V() {
    ap_sync_channel_write_dense_1_input_15_V = ((ap_channel_done_dense_1_input_15_V.read() & 
  dense_1_input_15_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_15_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_160_V() {
    ap_sync_channel_write_dense_1_input_160_V = ((ap_channel_done_dense_1_input_160_V.read() & 
  dense_1_input_160_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_160_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_161_V() {
    ap_sync_channel_write_dense_1_input_161_V = ((ap_channel_done_dense_1_input_161_V.read() & 
  dense_1_input_161_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_161_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_162_V() {
    ap_sync_channel_write_dense_1_input_162_V = ((ap_channel_done_dense_1_input_162_V.read() & 
  dense_1_input_162_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_162_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_163_V() {
    ap_sync_channel_write_dense_1_input_163_V = ((ap_channel_done_dense_1_input_163_V.read() & 
  dense_1_input_163_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_163_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_164_V() {
    ap_sync_channel_write_dense_1_input_164_V = ((ap_channel_done_dense_1_input_164_V.read() & 
  dense_1_input_164_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_164_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_165_V() {
    ap_sync_channel_write_dense_1_input_165_V = ((ap_channel_done_dense_1_input_165_V.read() & 
  dense_1_input_165_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_165_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_166_V() {
    ap_sync_channel_write_dense_1_input_166_V = ((ap_channel_done_dense_1_input_166_V.read() & 
  dense_1_input_166_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_166_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_167_V() {
    ap_sync_channel_write_dense_1_input_167_V = ((ap_channel_done_dense_1_input_167_V.read() & 
  dense_1_input_167_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_167_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_168_V() {
    ap_sync_channel_write_dense_1_input_168_V = ((ap_channel_done_dense_1_input_168_V.read() & 
  dense_1_input_168_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_168_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_169_V() {
    ap_sync_channel_write_dense_1_input_169_V = ((ap_channel_done_dense_1_input_169_V.read() & 
  dense_1_input_169_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_169_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_16_V() {
    ap_sync_channel_write_dense_1_input_16_V = ((ap_channel_done_dense_1_input_16_V.read() & 
  dense_1_input_16_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_16_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_170_V() {
    ap_sync_channel_write_dense_1_input_170_V = ((ap_channel_done_dense_1_input_170_V.read() & 
  dense_1_input_170_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_170_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_171_V() {
    ap_sync_channel_write_dense_1_input_171_V = ((ap_channel_done_dense_1_input_171_V.read() & 
  dense_1_input_171_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_171_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_172_V() {
    ap_sync_channel_write_dense_1_input_172_V = ((ap_channel_done_dense_1_input_172_V.read() & 
  dense_1_input_172_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_172_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_173_V() {
    ap_sync_channel_write_dense_1_input_173_V = ((ap_channel_done_dense_1_input_173_V.read() & 
  dense_1_input_173_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_173_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_174_V() {
    ap_sync_channel_write_dense_1_input_174_V = ((ap_channel_done_dense_1_input_174_V.read() & 
  dense_1_input_174_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_174_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_175_V() {
    ap_sync_channel_write_dense_1_input_175_V = ((ap_channel_done_dense_1_input_175_V.read() & 
  dense_1_input_175_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_175_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_176_V() {
    ap_sync_channel_write_dense_1_input_176_V = ((ap_channel_done_dense_1_input_176_V.read() & 
  dense_1_input_176_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_176_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_177_V() {
    ap_sync_channel_write_dense_1_input_177_V = ((ap_channel_done_dense_1_input_177_V.read() & 
  dense_1_input_177_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_177_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_178_V() {
    ap_sync_channel_write_dense_1_input_178_V = ((ap_channel_done_dense_1_input_178_V.read() & 
  dense_1_input_178_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_178_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_179_V() {
    ap_sync_channel_write_dense_1_input_179_V = ((ap_channel_done_dense_1_input_179_V.read() & 
  dense_1_input_179_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_179_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_17_V() {
    ap_sync_channel_write_dense_1_input_17_V = ((ap_channel_done_dense_1_input_17_V.read() & 
  dense_1_input_17_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_17_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_18_V() {
    ap_sync_channel_write_dense_1_input_18_V = ((ap_channel_done_dense_1_input_18_V.read() & 
  dense_1_input_18_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_18_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_19_V() {
    ap_sync_channel_write_dense_1_input_19_V = ((ap_channel_done_dense_1_input_19_V.read() & 
  dense_1_input_19_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_19_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_1_V() {
    ap_sync_channel_write_dense_1_input_1_V = ((ap_channel_done_dense_1_input_1_V.read() & 
  dense_1_input_1_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_1_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_20_V() {
    ap_sync_channel_write_dense_1_input_20_V = ((ap_channel_done_dense_1_input_20_V.read() & 
  dense_1_input_20_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_20_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_21_V() {
    ap_sync_channel_write_dense_1_input_21_V = ((ap_channel_done_dense_1_input_21_V.read() & 
  dense_1_input_21_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_21_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_22_V() {
    ap_sync_channel_write_dense_1_input_22_V = ((ap_channel_done_dense_1_input_22_V.read() & 
  dense_1_input_22_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_22_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_23_V() {
    ap_sync_channel_write_dense_1_input_23_V = ((ap_channel_done_dense_1_input_23_V.read() & 
  dense_1_input_23_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_23_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_24_V() {
    ap_sync_channel_write_dense_1_input_24_V = ((ap_channel_done_dense_1_input_24_V.read() & 
  dense_1_input_24_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_24_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_25_V() {
    ap_sync_channel_write_dense_1_input_25_V = ((ap_channel_done_dense_1_input_25_V.read() & 
  dense_1_input_25_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_25_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_26_V() {
    ap_sync_channel_write_dense_1_input_26_V = ((ap_channel_done_dense_1_input_26_V.read() & 
  dense_1_input_26_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_26_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_27_V() {
    ap_sync_channel_write_dense_1_input_27_V = ((ap_channel_done_dense_1_input_27_V.read() & 
  dense_1_input_27_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_27_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_28_V() {
    ap_sync_channel_write_dense_1_input_28_V = ((ap_channel_done_dense_1_input_28_V.read() & 
  dense_1_input_28_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_28_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_29_V() {
    ap_sync_channel_write_dense_1_input_29_V = ((ap_channel_done_dense_1_input_29_V.read() & 
  dense_1_input_29_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_29_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_2_V() {
    ap_sync_channel_write_dense_1_input_2_V = ((ap_channel_done_dense_1_input_2_V.read() & 
  dense_1_input_2_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_2_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_30_V() {
    ap_sync_channel_write_dense_1_input_30_V = ((ap_channel_done_dense_1_input_30_V.read() & 
  dense_1_input_30_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_30_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_31_V() {
    ap_sync_channel_write_dense_1_input_31_V = ((ap_channel_done_dense_1_input_31_V.read() & 
  dense_1_input_31_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_31_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_32_V() {
    ap_sync_channel_write_dense_1_input_32_V = ((ap_channel_done_dense_1_input_32_V.read() & 
  dense_1_input_32_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_32_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_33_V() {
    ap_sync_channel_write_dense_1_input_33_V = ((ap_channel_done_dense_1_input_33_V.read() & 
  dense_1_input_33_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_33_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_34_V() {
    ap_sync_channel_write_dense_1_input_34_V = ((ap_channel_done_dense_1_input_34_V.read() & 
  dense_1_input_34_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_34_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_35_V() {
    ap_sync_channel_write_dense_1_input_35_V = ((ap_channel_done_dense_1_input_35_V.read() & 
  dense_1_input_35_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_35_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_36_V() {
    ap_sync_channel_write_dense_1_input_36_V = ((ap_channel_done_dense_1_input_36_V.read() & 
  dense_1_input_36_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_36_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_37_V() {
    ap_sync_channel_write_dense_1_input_37_V = ((ap_channel_done_dense_1_input_37_V.read() & 
  dense_1_input_37_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_37_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_38_V() {
    ap_sync_channel_write_dense_1_input_38_V = ((ap_channel_done_dense_1_input_38_V.read() & 
  dense_1_input_38_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_38_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_39_V() {
    ap_sync_channel_write_dense_1_input_39_V = ((ap_channel_done_dense_1_input_39_V.read() & 
  dense_1_input_39_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_39_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_3_V() {
    ap_sync_channel_write_dense_1_input_3_V = ((ap_channel_done_dense_1_input_3_V.read() & 
  dense_1_input_3_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_3_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_40_V() {
    ap_sync_channel_write_dense_1_input_40_V = ((ap_channel_done_dense_1_input_40_V.read() & 
  dense_1_input_40_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_40_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_41_V() {
    ap_sync_channel_write_dense_1_input_41_V = ((ap_channel_done_dense_1_input_41_V.read() & 
  dense_1_input_41_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_41_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_42_V() {
    ap_sync_channel_write_dense_1_input_42_V = ((ap_channel_done_dense_1_input_42_V.read() & 
  dense_1_input_42_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_42_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_43_V() {
    ap_sync_channel_write_dense_1_input_43_V = ((ap_channel_done_dense_1_input_43_V.read() & 
  dense_1_input_43_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_43_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_44_V() {
    ap_sync_channel_write_dense_1_input_44_V = ((ap_channel_done_dense_1_input_44_V.read() & 
  dense_1_input_44_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_44_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_45_V() {
    ap_sync_channel_write_dense_1_input_45_V = ((ap_channel_done_dense_1_input_45_V.read() & 
  dense_1_input_45_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_45_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_46_V() {
    ap_sync_channel_write_dense_1_input_46_V = ((ap_channel_done_dense_1_input_46_V.read() & 
  dense_1_input_46_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_46_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_47_V() {
    ap_sync_channel_write_dense_1_input_47_V = ((ap_channel_done_dense_1_input_47_V.read() & 
  dense_1_input_47_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_47_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_48_V() {
    ap_sync_channel_write_dense_1_input_48_V = ((ap_channel_done_dense_1_input_48_V.read() & 
  dense_1_input_48_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_48_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_49_V() {
    ap_sync_channel_write_dense_1_input_49_V = ((ap_channel_done_dense_1_input_49_V.read() & 
  dense_1_input_49_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_49_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_4_V() {
    ap_sync_channel_write_dense_1_input_4_V = ((ap_channel_done_dense_1_input_4_V.read() & 
  dense_1_input_4_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_4_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_50_V() {
    ap_sync_channel_write_dense_1_input_50_V = ((ap_channel_done_dense_1_input_50_V.read() & 
  dense_1_input_50_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_50_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_51_V() {
    ap_sync_channel_write_dense_1_input_51_V = ((ap_channel_done_dense_1_input_51_V.read() & 
  dense_1_input_51_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_51_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_52_V() {
    ap_sync_channel_write_dense_1_input_52_V = ((ap_channel_done_dense_1_input_52_V.read() & 
  dense_1_input_52_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_52_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_53_V() {
    ap_sync_channel_write_dense_1_input_53_V = ((ap_channel_done_dense_1_input_53_V.read() & 
  dense_1_input_53_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_53_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_54_V() {
    ap_sync_channel_write_dense_1_input_54_V = ((ap_channel_done_dense_1_input_54_V.read() & 
  dense_1_input_54_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_54_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_55_V() {
    ap_sync_channel_write_dense_1_input_55_V = ((ap_channel_done_dense_1_input_55_V.read() & 
  dense_1_input_55_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_55_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_56_V() {
    ap_sync_channel_write_dense_1_input_56_V = ((ap_channel_done_dense_1_input_56_V.read() & 
  dense_1_input_56_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_56_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_57_V() {
    ap_sync_channel_write_dense_1_input_57_V = ((ap_channel_done_dense_1_input_57_V.read() & 
  dense_1_input_57_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_57_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_58_V() {
    ap_sync_channel_write_dense_1_input_58_V = ((ap_channel_done_dense_1_input_58_V.read() & 
  dense_1_input_58_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_58_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_59_V() {
    ap_sync_channel_write_dense_1_input_59_V = ((ap_channel_done_dense_1_input_59_V.read() & 
  dense_1_input_59_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_59_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_5_V() {
    ap_sync_channel_write_dense_1_input_5_V = ((ap_channel_done_dense_1_input_5_V.read() & 
  dense_1_input_5_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_5_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_60_V() {
    ap_sync_channel_write_dense_1_input_60_V = ((ap_channel_done_dense_1_input_60_V.read() & 
  dense_1_input_60_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_60_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_61_V() {
    ap_sync_channel_write_dense_1_input_61_V = ((ap_channel_done_dense_1_input_61_V.read() & 
  dense_1_input_61_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_61_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_62_V() {
    ap_sync_channel_write_dense_1_input_62_V = ((ap_channel_done_dense_1_input_62_V.read() & 
  dense_1_input_62_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_62_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_63_V() {
    ap_sync_channel_write_dense_1_input_63_V = ((ap_channel_done_dense_1_input_63_V.read() & 
  dense_1_input_63_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_63_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_64_V() {
    ap_sync_channel_write_dense_1_input_64_V = ((ap_channel_done_dense_1_input_64_V.read() & 
  dense_1_input_64_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_64_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_65_V() {
    ap_sync_channel_write_dense_1_input_65_V = ((ap_channel_done_dense_1_input_65_V.read() & 
  dense_1_input_65_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_65_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_66_V() {
    ap_sync_channel_write_dense_1_input_66_V = ((ap_channel_done_dense_1_input_66_V.read() & 
  dense_1_input_66_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_66_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_67_V() {
    ap_sync_channel_write_dense_1_input_67_V = ((ap_channel_done_dense_1_input_67_V.read() & 
  dense_1_input_67_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_67_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_68_V() {
    ap_sync_channel_write_dense_1_input_68_V = ((ap_channel_done_dense_1_input_68_V.read() & 
  dense_1_input_68_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_68_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_69_V() {
    ap_sync_channel_write_dense_1_input_69_V = ((ap_channel_done_dense_1_input_69_V.read() & 
  dense_1_input_69_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_69_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_6_V() {
    ap_sync_channel_write_dense_1_input_6_V = ((ap_channel_done_dense_1_input_6_V.read() & 
  dense_1_input_6_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_6_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_70_V() {
    ap_sync_channel_write_dense_1_input_70_V = ((ap_channel_done_dense_1_input_70_V.read() & 
  dense_1_input_70_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_70_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_71_V() {
    ap_sync_channel_write_dense_1_input_71_V = ((ap_channel_done_dense_1_input_71_V.read() & 
  dense_1_input_71_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_71_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_72_V() {
    ap_sync_channel_write_dense_1_input_72_V = ((ap_channel_done_dense_1_input_72_V.read() & 
  dense_1_input_72_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_72_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_73_V() {
    ap_sync_channel_write_dense_1_input_73_V = ((ap_channel_done_dense_1_input_73_V.read() & 
  dense_1_input_73_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_73_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_74_V() {
    ap_sync_channel_write_dense_1_input_74_V = ((ap_channel_done_dense_1_input_74_V.read() & 
  dense_1_input_74_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_74_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_75_V() {
    ap_sync_channel_write_dense_1_input_75_V = ((ap_channel_done_dense_1_input_75_V.read() & 
  dense_1_input_75_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_75_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_76_V() {
    ap_sync_channel_write_dense_1_input_76_V = ((ap_channel_done_dense_1_input_76_V.read() & 
  dense_1_input_76_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_76_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_77_V() {
    ap_sync_channel_write_dense_1_input_77_V = ((ap_channel_done_dense_1_input_77_V.read() & 
  dense_1_input_77_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_77_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_78_V() {
    ap_sync_channel_write_dense_1_input_78_V = ((ap_channel_done_dense_1_input_78_V.read() & 
  dense_1_input_78_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_78_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_79_V() {
    ap_sync_channel_write_dense_1_input_79_V = ((ap_channel_done_dense_1_input_79_V.read() & 
  dense_1_input_79_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_79_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_7_V() {
    ap_sync_channel_write_dense_1_input_7_V = ((ap_channel_done_dense_1_input_7_V.read() & 
  dense_1_input_7_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_7_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_80_V() {
    ap_sync_channel_write_dense_1_input_80_V = ((ap_channel_done_dense_1_input_80_V.read() & 
  dense_1_input_80_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_80_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_81_V() {
    ap_sync_channel_write_dense_1_input_81_V = ((ap_channel_done_dense_1_input_81_V.read() & 
  dense_1_input_81_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_81_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_82_V() {
    ap_sync_channel_write_dense_1_input_82_V = ((ap_channel_done_dense_1_input_82_V.read() & 
  dense_1_input_82_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_82_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_83_V() {
    ap_sync_channel_write_dense_1_input_83_V = ((ap_channel_done_dense_1_input_83_V.read() & 
  dense_1_input_83_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_83_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_84_V() {
    ap_sync_channel_write_dense_1_input_84_V = ((ap_channel_done_dense_1_input_84_V.read() & 
  dense_1_input_84_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_84_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_85_V() {
    ap_sync_channel_write_dense_1_input_85_V = ((ap_channel_done_dense_1_input_85_V.read() & 
  dense_1_input_85_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_85_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_86_V() {
    ap_sync_channel_write_dense_1_input_86_V = ((ap_channel_done_dense_1_input_86_V.read() & 
  dense_1_input_86_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_86_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_87_V() {
    ap_sync_channel_write_dense_1_input_87_V = ((ap_channel_done_dense_1_input_87_V.read() & 
  dense_1_input_87_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_87_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_88_V() {
    ap_sync_channel_write_dense_1_input_88_V = ((ap_channel_done_dense_1_input_88_V.read() & 
  dense_1_input_88_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_88_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_89_V() {
    ap_sync_channel_write_dense_1_input_89_V = ((ap_channel_done_dense_1_input_89_V.read() & 
  dense_1_input_89_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_89_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_8_V() {
    ap_sync_channel_write_dense_1_input_8_V = ((ap_channel_done_dense_1_input_8_V.read() & 
  dense_1_input_8_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_8_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_90_V() {
    ap_sync_channel_write_dense_1_input_90_V = ((ap_channel_done_dense_1_input_90_V.read() & 
  dense_1_input_90_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_90_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_91_V() {
    ap_sync_channel_write_dense_1_input_91_V = ((ap_channel_done_dense_1_input_91_V.read() & 
  dense_1_input_91_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_91_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_92_V() {
    ap_sync_channel_write_dense_1_input_92_V = ((ap_channel_done_dense_1_input_92_V.read() & 
  dense_1_input_92_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_92_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_93_V() {
    ap_sync_channel_write_dense_1_input_93_V = ((ap_channel_done_dense_1_input_93_V.read() & 
  dense_1_input_93_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_93_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_94_V() {
    ap_sync_channel_write_dense_1_input_94_V = ((ap_channel_done_dense_1_input_94_V.read() & 
  dense_1_input_94_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_94_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_95_V() {
    ap_sync_channel_write_dense_1_input_95_V = ((ap_channel_done_dense_1_input_95_V.read() & 
  dense_1_input_95_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_95_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_96_V() {
    ap_sync_channel_write_dense_1_input_96_V = ((ap_channel_done_dense_1_input_96_V.read() & 
  dense_1_input_96_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_96_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_97_V() {
    ap_sync_channel_write_dense_1_input_97_V = ((ap_channel_done_dense_1_input_97_V.read() & 
  dense_1_input_97_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_97_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_98_V() {
    ap_sync_channel_write_dense_1_input_98_V = ((ap_channel_done_dense_1_input_98_V.read() & 
  dense_1_input_98_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_98_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_99_V() {
    ap_sync_channel_write_dense_1_input_99_V = ((ap_channel_done_dense_1_input_99_V.read() & 
  dense_1_input_99_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_99_V.read());
}

void window::thread_ap_sync_channel_write_dense_1_input_9_V() {
    ap_sync_channel_write_dense_1_input_9_V = ((ap_channel_done_dense_1_input_9_V.read() & 
  dense_1_input_9_V_full_n.read()) | ap_sync_reg_channel_write_dense_1_input_9_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_0_V() {
    ap_sync_channel_write_layer2_out_0_V = ((ap_channel_done_layer2_out_0_V.read() & 
  layer2_out_0_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_0_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_10_V() {
    ap_sync_channel_write_layer2_out_10_V = ((ap_channel_done_layer2_out_10_V.read() & 
  layer2_out_10_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_10_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_11_V() {
    ap_sync_channel_write_layer2_out_11_V = ((ap_channel_done_layer2_out_11_V.read() & 
  layer2_out_11_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_11_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_12_V() {
    ap_sync_channel_write_layer2_out_12_V = ((ap_channel_done_layer2_out_12_V.read() & 
  layer2_out_12_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_12_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_13_V() {
    ap_sync_channel_write_layer2_out_13_V = ((ap_channel_done_layer2_out_13_V.read() & 
  layer2_out_13_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_13_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_14_V() {
    ap_sync_channel_write_layer2_out_14_V = ((ap_channel_done_layer2_out_14_V.read() & 
  layer2_out_14_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_14_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_15_V() {
    ap_sync_channel_write_layer2_out_15_V = ((ap_channel_done_layer2_out_15_V.read() & 
  layer2_out_15_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_15_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_16_V() {
    ap_sync_channel_write_layer2_out_16_V = ((ap_channel_done_layer2_out_16_V.read() & 
  layer2_out_16_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_16_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_17_V() {
    ap_sync_channel_write_layer2_out_17_V = ((ap_channel_done_layer2_out_17_V.read() & 
  layer2_out_17_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_17_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_18_V() {
    ap_sync_channel_write_layer2_out_18_V = ((ap_channel_done_layer2_out_18_V.read() & 
  layer2_out_18_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_18_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_19_V() {
    ap_sync_channel_write_layer2_out_19_V = ((ap_channel_done_layer2_out_19_V.read() & 
  layer2_out_19_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_19_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_1_V() {
    ap_sync_channel_write_layer2_out_1_V = ((ap_channel_done_layer2_out_1_V.read() & 
  layer2_out_1_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_1_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_20_V() {
    ap_sync_channel_write_layer2_out_20_V = ((ap_channel_done_layer2_out_20_V.read() & 
  layer2_out_20_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_20_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_21_V() {
    ap_sync_channel_write_layer2_out_21_V = ((ap_channel_done_layer2_out_21_V.read() & 
  layer2_out_21_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_21_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_22_V() {
    ap_sync_channel_write_layer2_out_22_V = ((ap_channel_done_layer2_out_22_V.read() & 
  layer2_out_22_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_22_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_23_V() {
    ap_sync_channel_write_layer2_out_23_V = ((ap_channel_done_layer2_out_23_V.read() & 
  layer2_out_23_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_23_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_24_V() {
    ap_sync_channel_write_layer2_out_24_V = ((ap_channel_done_layer2_out_24_V.read() & 
  layer2_out_24_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_24_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_25_V() {
    ap_sync_channel_write_layer2_out_25_V = ((ap_channel_done_layer2_out_25_V.read() & 
  layer2_out_25_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_25_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_26_V() {
    ap_sync_channel_write_layer2_out_26_V = ((ap_channel_done_layer2_out_26_V.read() & 
  layer2_out_26_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_26_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_27_V() {
    ap_sync_channel_write_layer2_out_27_V = ((ap_channel_done_layer2_out_27_V.read() & 
  layer2_out_27_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_27_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_28_V() {
    ap_sync_channel_write_layer2_out_28_V = ((ap_channel_done_layer2_out_28_V.read() & 
  layer2_out_28_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_28_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_29_V() {
    ap_sync_channel_write_layer2_out_29_V = ((ap_channel_done_layer2_out_29_V.read() & 
  layer2_out_29_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_29_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_2_V() {
    ap_sync_channel_write_layer2_out_2_V = ((ap_channel_done_layer2_out_2_V.read() & 
  layer2_out_2_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_2_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_30_V() {
    ap_sync_channel_write_layer2_out_30_V = ((ap_channel_done_layer2_out_30_V.read() & 
  layer2_out_30_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_30_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_31_V() {
    ap_sync_channel_write_layer2_out_31_V = ((ap_channel_done_layer2_out_31_V.read() & 
  layer2_out_31_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_31_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_32_V() {
    ap_sync_channel_write_layer2_out_32_V = ((ap_channel_done_layer2_out_32_V.read() & 
  layer2_out_32_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_32_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_33_V() {
    ap_sync_channel_write_layer2_out_33_V = ((ap_channel_done_layer2_out_33_V.read() & 
  layer2_out_33_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_33_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_34_V() {
    ap_sync_channel_write_layer2_out_34_V = ((ap_channel_done_layer2_out_34_V.read() & 
  layer2_out_34_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_34_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_35_V() {
    ap_sync_channel_write_layer2_out_35_V = ((ap_channel_done_layer2_out_35_V.read() & 
  layer2_out_35_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_35_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_3_V() {
    ap_sync_channel_write_layer2_out_3_V = ((ap_channel_done_layer2_out_3_V.read() & 
  layer2_out_3_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_3_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_4_V() {
    ap_sync_channel_write_layer2_out_4_V = ((ap_channel_done_layer2_out_4_V.read() & 
  layer2_out_4_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_4_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_5_V() {
    ap_sync_channel_write_layer2_out_5_V = ((ap_channel_done_layer2_out_5_V.read() & 
  layer2_out_5_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_5_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_6_V() {
    ap_sync_channel_write_layer2_out_6_V = ((ap_channel_done_layer2_out_6_V.read() & 
  layer2_out_6_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_6_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_7_V() {
    ap_sync_channel_write_layer2_out_7_V = ((ap_channel_done_layer2_out_7_V.read() & 
  layer2_out_7_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_7_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_8_V() {
    ap_sync_channel_write_layer2_out_8_V = ((ap_channel_done_layer2_out_8_V.read() & 
  layer2_out_8_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_8_V.read());
}

void window::thread_ap_sync_channel_write_layer2_out_9_V() {
    ap_sync_channel_write_layer2_out_9_V = ((ap_channel_done_layer2_out_9_V.read() & 
  layer2_out_9_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_9_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_0_V() {
    ap_sync_channel_write_layer4_out_0_V = ((ap_channel_done_layer4_out_0_V.read() & 
  layer4_out_0_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_0_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_10_V() {
    ap_sync_channel_write_layer4_out_10_V = ((ap_channel_done_layer4_out_10_V.read() & 
  layer4_out_10_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_10_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_11_V() {
    ap_sync_channel_write_layer4_out_11_V = ((ap_channel_done_layer4_out_11_V.read() & 
  layer4_out_11_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_11_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_12_V() {
    ap_sync_channel_write_layer4_out_12_V = ((ap_channel_done_layer4_out_12_V.read() & 
  layer4_out_12_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_12_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_13_V() {
    ap_sync_channel_write_layer4_out_13_V = ((ap_channel_done_layer4_out_13_V.read() & 
  layer4_out_13_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_13_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_14_V() {
    ap_sync_channel_write_layer4_out_14_V = ((ap_channel_done_layer4_out_14_V.read() & 
  layer4_out_14_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_14_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_15_V() {
    ap_sync_channel_write_layer4_out_15_V = ((ap_channel_done_layer4_out_15_V.read() & 
  layer4_out_15_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_15_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_16_V() {
    ap_sync_channel_write_layer4_out_16_V = ((ap_channel_done_layer4_out_16_V.read() & 
  layer4_out_16_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_16_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_17_V() {
    ap_sync_channel_write_layer4_out_17_V = ((ap_channel_done_layer4_out_17_V.read() & 
  layer4_out_17_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_17_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_18_V() {
    ap_sync_channel_write_layer4_out_18_V = ((ap_channel_done_layer4_out_18_V.read() & 
  layer4_out_18_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_18_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_19_V() {
    ap_sync_channel_write_layer4_out_19_V = ((ap_channel_done_layer4_out_19_V.read() & 
  layer4_out_19_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_19_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_1_V() {
    ap_sync_channel_write_layer4_out_1_V = ((ap_channel_done_layer4_out_1_V.read() & 
  layer4_out_1_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_1_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_20_V() {
    ap_sync_channel_write_layer4_out_20_V = ((ap_channel_done_layer4_out_20_V.read() & 
  layer4_out_20_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_20_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_21_V() {
    ap_sync_channel_write_layer4_out_21_V = ((ap_channel_done_layer4_out_21_V.read() & 
  layer4_out_21_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_21_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_22_V() {
    ap_sync_channel_write_layer4_out_22_V = ((ap_channel_done_layer4_out_22_V.read() & 
  layer4_out_22_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_22_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_23_V() {
    ap_sync_channel_write_layer4_out_23_V = ((ap_channel_done_layer4_out_23_V.read() & 
  layer4_out_23_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_23_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_24_V() {
    ap_sync_channel_write_layer4_out_24_V = ((ap_channel_done_layer4_out_24_V.read() & 
  layer4_out_24_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_24_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_25_V() {
    ap_sync_channel_write_layer4_out_25_V = ((ap_channel_done_layer4_out_25_V.read() & 
  layer4_out_25_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_25_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_26_V() {
    ap_sync_channel_write_layer4_out_26_V = ((ap_channel_done_layer4_out_26_V.read() & 
  layer4_out_26_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_26_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_27_V() {
    ap_sync_channel_write_layer4_out_27_V = ((ap_channel_done_layer4_out_27_V.read() & 
  layer4_out_27_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_27_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_28_V() {
    ap_sync_channel_write_layer4_out_28_V = ((ap_channel_done_layer4_out_28_V.read() & 
  layer4_out_28_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_28_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_29_V() {
    ap_sync_channel_write_layer4_out_29_V = ((ap_channel_done_layer4_out_29_V.read() & 
  layer4_out_29_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_29_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_2_V() {
    ap_sync_channel_write_layer4_out_2_V = ((ap_channel_done_layer4_out_2_V.read() & 
  layer4_out_2_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_2_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_30_V() {
    ap_sync_channel_write_layer4_out_30_V = ((ap_channel_done_layer4_out_30_V.read() & 
  layer4_out_30_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_30_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_31_V() {
    ap_sync_channel_write_layer4_out_31_V = ((ap_channel_done_layer4_out_31_V.read() & 
  layer4_out_31_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_31_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_32_V() {
    ap_sync_channel_write_layer4_out_32_V = ((ap_channel_done_layer4_out_32_V.read() & 
  layer4_out_32_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_32_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_33_V() {
    ap_sync_channel_write_layer4_out_33_V = ((ap_channel_done_layer4_out_33_V.read() & 
  layer4_out_33_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_33_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_34_V() {
    ap_sync_channel_write_layer4_out_34_V = ((ap_channel_done_layer4_out_34_V.read() & 
  layer4_out_34_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_34_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_35_V() {
    ap_sync_channel_write_layer4_out_35_V = ((ap_channel_done_layer4_out_35_V.read() & 
  layer4_out_35_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_35_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_3_V() {
    ap_sync_channel_write_layer4_out_3_V = ((ap_channel_done_layer4_out_3_V.read() & 
  layer4_out_3_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_3_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_4_V() {
    ap_sync_channel_write_layer4_out_4_V = ((ap_channel_done_layer4_out_4_V.read() & 
  layer4_out_4_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_4_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_5_V() {
    ap_sync_channel_write_layer4_out_5_V = ((ap_channel_done_layer4_out_5_V.read() & 
  layer4_out_5_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_5_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_6_V() {
    ap_sync_channel_write_layer4_out_6_V = ((ap_channel_done_layer4_out_6_V.read() & 
  layer4_out_6_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_6_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_7_V() {
    ap_sync_channel_write_layer4_out_7_V = ((ap_channel_done_layer4_out_7_V.read() & 
  layer4_out_7_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_7_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_8_V() {
    ap_sync_channel_write_layer4_out_8_V = ((ap_channel_done_layer4_out_8_V.read() & 
  layer4_out_8_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_8_V.read());
}

void window::thread_ap_sync_channel_write_layer4_out_9_V() {
    ap_sync_channel_write_layer4_out_9_V = ((ap_channel_done_layer4_out_9_V.read() & 
  layer4_out_9_V_full_n.read()) | ap_sync_reg_channel_write_layer4_out_9_V.read());
}

void window::thread_ap_sync_continue() {
    ap_sync_continue = ap_sync_done.read();
}

void window::thread_ap_sync_done() {
    ap_sync_done = (Block_proc_U0_ap_done.read() & dense_large_U0_ap_done.read());
}

void window::thread_ap_sync_ready() {
    ap_sync_ready = (ap_sync_window_entry3_U0_ap_ready.read() & ap_sync_Block_proc_U0_ap_ready.read());
}

void window::thread_ap_sync_window_entry3_U0_ap_ready() {
    ap_sync_window_entry3_U0_ap_ready = (window_entry3_U0_ap_ready.read() | ap_sync_reg_window_entry3_U0_ap_ready.read());
}

void window::thread_const_size_in_1() {
    const_size_in_1 = Block_proc_U0_const_size_in_1.read();
}

void window::thread_const_size_in_1_ap_vld() {
    const_size_in_1_ap_vld = Block_proc_U0_const_size_in_1_ap_vld.read();
}

void window::thread_const_size_out_1() {
    const_size_out_1 = Block_proc_U0_const_size_out_1.read();
}

void window::thread_const_size_out_1_ap_vld() {
    const_size_out_1_ap_vld = Block_proc_U0_const_size_out_1_ap_vld.read();
}

void window::thread_dense_large_1_U0_ap_continue() {
    dense_large_1_U0_ap_continue = (ap_sync_channel_write_layer2_out_35_V.read() & ap_sync_channel_write_layer2_out_34_V.read() & ap_sync_channel_write_layer2_out_33_V.read() & ap_sync_channel_write_layer2_out_32_V.read() & ap_sync_channel_write_layer2_out_31_V.read() & ap_sync_channel_write_layer2_out_30_V.read() & ap_sync_channel_write_layer2_out_29_V.read() & ap_sync_channel_write_layer2_out_28_V.read() & ap_sync_channel_write_layer2_out_27_V.read() & ap_sync_channel_write_layer2_out_26_V.read() & ap_sync_channel_write_layer2_out_25_V.read() & ap_sync_channel_write_layer2_out_24_V.read() & ap_sync_channel_write_layer2_out_23_V.read() & ap_sync_channel_write_layer2_out_22_V.read() & ap_sync_channel_write_layer2_out_21_V.read() & ap_sync_channel_write_layer2_out_20_V.read() & ap_sync_channel_write_layer2_out_19_V.read() & ap_sync_channel_write_layer2_out_18_V.read() & ap_sync_channel_write_layer2_out_17_V.read() & ap_sync_channel_write_layer2_out_16_V.read() & ap_sync_channel_write_layer2_out_15_V.read() & ap_sync_channel_write_layer2_out_14_V.read() & ap_sync_channel_write_layer2_out_13_V.read() & ap_sync_channel_write_layer2_out_12_V.read() & ap_sync_channel_write_layer2_out_11_V.read() & ap_sync_channel_write_layer2_out_10_V.read() & ap_sync_channel_write_layer2_out_9_V.read() & ap_sync_channel_write_layer2_out_8_V.read() & ap_sync_channel_write_layer2_out_7_V.read() & ap_sync_channel_write_layer2_out_6_V.read() & ap_sync_channel_write_layer2_out_5_V.read() & ap_sync_channel_write_layer2_out_4_V.read() & ap_sync_channel_write_layer2_out_3_V.read() & ap_sync_channel_write_layer2_out_2_V.read() & ap_sync_channel_write_layer2_out_1_V.read() & ap_sync_channel_write_layer2_out_0_V.read());
}

void window::thread_dense_large_1_U0_ap_start() {
    dense_large_1_U0_ap_start = (dense_1_input_0_V_empty_n.read() & dense_1_input_1_V_empty_n.read() & dense_1_input_2_V_empty_n.read() & dense_1_input_3_V_empty_n.read() & dense_1_input_4_V_empty_n.read() & dense_1_input_5_V_empty_n.read() & dense_1_input_6_V_empty_n.read() & dense_1_input_7_V_empty_n.read() & dense_1_input_8_V_empty_n.read() & dense_1_input_9_V_empty_n.read() & dense_1_input_10_V_empty_n.read() & dense_1_input_11_V_empty_n.read() & dense_1_input_12_V_empty_n.read() & dense_1_input_13_V_empty_n.read() & dense_1_input_14_V_empty_n.read() & dense_1_input_15_V_empty_n.read() & dense_1_input_16_V_empty_n.read() & dense_1_input_17_V_empty_n.read() & dense_1_input_18_V_empty_n.read() & dense_1_input_19_V_empty_n.read() & dense_1_input_20_V_empty_n.read() & dense_1_input_21_V_empty_n.read() & dense_1_input_22_V_empty_n.read() & dense_1_input_23_V_empty_n.read() & dense_1_input_24_V_empty_n.read() & dense_1_input_25_V_empty_n.read() & dense_1_input_26_V_empty_n.read() & dense_1_input_27_V_empty_n.read() & dense_1_input_28_V_empty_n.read() & dense_1_input_29_V_empty_n.read() & dense_1_input_30_V_empty_n.read() & dense_1_input_31_V_empty_n.read() & dense_1_input_32_V_empty_n.read() & dense_1_input_33_V_empty_n.read() & dense_1_input_34_V_empty_n.read() & dense_1_input_35_V_empty_n.read() & dense_1_input_36_V_empty_n.read() & dense_1_input_37_V_empty_n.read() & dense_1_input_38_V_empty_n.read() & dense_1_input_39_V_empty_n.read() & dense_1_input_40_V_empty_n.read() & dense_1_input_41_V_empty_n.read() & dense_1_input_42_V_empty_n.read() & dense_1_input_43_V_empty_n.read() & dense_1_input_44_V_empty_n.read() & dense_1_input_45_V_empty_n.read() & dense_1_input_46_V_empty_n.read() & dense_1_input_47_V_empty_n.read() & dense_1_input_48_V_empty_n.read() & dense_1_input_49_V_empty_n.read() & dense_1_input_50_V_empty_n.read() & dense_1_input_51_V_empty_n.read() & dense_1_input_52_V_empty_n.read() & dense_1_input_53_V_empty_n.read() & dense_1_input_54_V_empty_n.read() & dense_1_input_55_V_empty_n.read() & dense_1_input_56_V_empty_n.read() & dense_1_input_57_V_empty_n.read() & dense_1_input_58_V_empty_n.read() & dense_1_input_59_V_empty_n.read() & dense_1_input_60_V_empty_n.read() & dense_1_input_61_V_empty_n.read() & dense_1_input_62_V_empty_n.read() & dense_1_input_63_V_empty_n.read() & dense_1_input_64_V_empty_n.read() & dense_1_input_65_V_empty_n.read() & dense_1_input_66_V_empty_n.read() & dense_1_input_67_V_empty_n.read() & dense_1_input_68_V_empty_n.read() & dense_1_input_69_V_empty_n.read() & dense_1_input_70_V_empty_n.read() & dense_1_input_71_V_empty_n.read() & dense_1_input_72_V_empty_n.read() & dense_1_input_73_V_empty_n.read() & dense_1_input_74_V_empty_n.read() & dense_1_input_75_V_empty_n.read() & dense_1_input_76_V_empty_n.read() & dense_1_input_77_V_empty_n.read() & dense_1_input_78_V_empty_n.read() & dense_1_input_79_V_empty_n.read() & dense_1_input_80_V_empty_n.read() & dense_1_input_81_V_empty_n.read() & dense_1_input_82_V_empty_n.read() & dense_1_input_83_V_empty_n.read() & dense_1_input_84_V_empty_n.read() & dense_1_input_85_V_empty_n.read() & dense_1_input_86_V_empty_n.read() & dense_1_input_87_V_empty_n.read() & dense_1_input_88_V_empty_n.read() & dense_1_input_89_V_empty_n.read() & dense_1_input_90_V_empty_n.read() & dense_1_input_91_V_empty_n.read() & dense_1_input_92_V_empty_n.read() & dense_1_input_93_V_empty_n.read() & dense_1_input_94_V_empty_n.read() & dense_1_input_95_V_empty_n.read() & dense_1_input_96_V_empty_n.read() & dense_1_input_97_V_empty_n.read() & dense_1_input_98_V_empty_n.read() & dense_1_input_99_V_empty_n.read() & dense_1_input_100_V_empty_n.read() & dense_1_input_101_V_empty_n.read() & dense_1_input_102_V_empty_n.read() & dense_1_input_103_V_empty_n.read() & dense_1_input_104_V_empty_n.read() & dense_1_input_105_V_empty_n.read() & dense_1_input_106_V_empty_n.read() & dense_1_input_107_V_empty_n.read() & dense_1_input_108_V_empty_n.read() & dense_1_input_109_V_empty_n.read() & dense_1_input_110_V_empty_n.read() & dense_1_input_111_V_empty_n.read() & dense_1_input_112_V_empty_n.read() & dense_1_input_113_V_empty_n.read() & dense_1_input_114_V_empty_n.read() & dense_1_input_115_V_empty_n.read() & dense_1_input_116_V_empty_n.read() & dense_1_input_117_V_empty_n.read() & dense_1_input_118_V_empty_n.read() & dense_1_input_119_V_empty_n.read() & dense_1_input_120_V_empty_n.read() & dense_1_input_121_V_empty_n.read() & dense_1_input_122_V_empty_n.read() & dense_1_input_123_V_empty_n.read() & dense_1_input_124_V_empty_n.read() & dense_1_input_125_V_empty_n.read() & dense_1_input_126_V_empty_n.read() & dense_1_input_127_V_empty_n.read() & dense_1_input_128_V_empty_n.read() & dense_1_input_129_V_empty_n.read() & dense_1_input_130_V_empty_n.read() & dense_1_input_131_V_empty_n.read() & dense_1_input_132_V_empty_n.read() & dense_1_input_133_V_empty_n.read() & dense_1_input_134_V_empty_n.read() & dense_1_input_135_V_empty_n.read() & dense_1_input_136_V_empty_n.read() & dense_1_input_137_V_empty_n.read() & dense_1_input_138_V_empty_n.read() & dense_1_input_139_V_empty_n.read() & dense_1_input_140_V_empty_n.read() & dense_1_input_141_V_empty_n.read() & dense_1_input_142_V_empty_n.read() & dense_1_input_143_V_empty_n.read() & dense_1_input_144_V_empty_n.read() & dense_1_input_145_V_empty_n.read() & dense_1_input_146_V_empty_n.read() & dense_1_input_147_V_empty_n.read() & dense_1_input_148_V_empty_n.read() & dense_1_input_149_V_empty_n.read() & dense_1_input_150_V_empty_n.read() & dense_1_input_151_V_empty_n.read() & dense_1_input_152_V_empty_n.read() & dense_1_input_153_V_empty_n.read() & dense_1_input_154_V_empty_n.read() & dense_1_input_155_V_empty_n.read() & dense_1_input_156_V_empty_n.read() & dense_1_input_157_V_empty_n.read() & dense_1_input_158_V_empty_n.read() & dense_1_input_159_V_empty_n.read() & dense_1_input_160_V_empty_n.read() & dense_1_input_161_V_empty_n.read() & dense_1_input_162_V_empty_n.read() & dense_1_input_163_V_empty_n.read() & dense_1_input_164_V_empty_n.read() & dense_1_input_165_V_empty_n.read() & dense_1_input_166_V_empty_n.read() & dense_1_input_167_V_empty_n.read() & dense_1_input_168_V_empty_n.read() & dense_1_input_169_V_empty_n.read() & dense_1_input_170_V_empty_n.read() & dense_1_input_171_V_empty_n.read() & dense_1_input_172_V_empty_n.read() & dense_1_input_173_V_empty_n.read() & dense_1_input_174_V_empty_n.read() & dense_1_input_175_V_empty_n.read() & dense_1_input_176_V_empty_n.read() & dense_1_input_177_V_empty_n.read() & dense_1_input_178_V_empty_n.read() & dense_1_input_179_V_empty_n.read());
}

void window::thread_dense_large_1_U0_start_full_n() {
    dense_large_1_U0_start_full_n = ap_const_logic_1;
}

void window::thread_dense_large_1_U0_start_write() {
    dense_large_1_U0_start_write = ap_const_logic_0;
}

void window::thread_dense_large_U0_ap_continue() {
    dense_large_U0_ap_continue = ap_sync_done.read();
}

void window::thread_dense_large_U0_ap_start() {
    dense_large_U0_ap_start = (layer4_out_0_V_empty_n.read() & layer4_out_1_V_empty_n.read() & layer4_out_2_V_empty_n.read() & layer4_out_3_V_empty_n.read() & layer4_out_4_V_empty_n.read() & layer4_out_5_V_empty_n.read() & layer4_out_6_V_empty_n.read() & layer4_out_7_V_empty_n.read() & layer4_out_8_V_empty_n.read() & layer4_out_9_V_empty_n.read() & layer4_out_10_V_empty_n.read() & layer4_out_11_V_empty_n.read() & layer4_out_12_V_empty_n.read() & layer4_out_13_V_empty_n.read() & layer4_out_14_V_empty_n.read() & layer4_out_15_V_empty_n.read() & layer4_out_16_V_empty_n.read() & layer4_out_17_V_empty_n.read() & layer4_out_18_V_empty_n.read() & layer4_out_19_V_empty_n.read() & layer4_out_20_V_empty_n.read() & layer4_out_21_V_empty_n.read() & layer4_out_22_V_empty_n.read() & layer4_out_23_V_empty_n.read() & layer4_out_24_V_empty_n.read() & layer4_out_25_V_empty_n.read() & layer4_out_26_V_empty_n.read() & layer4_out_27_V_empty_n.read() & layer4_out_28_V_empty_n.read() & layer4_out_29_V_empty_n.read() & layer4_out_30_V_empty_n.read() & layer4_out_31_V_empty_n.read() & layer4_out_32_V_empty_n.read() & layer4_out_33_V_empty_n.read() & layer4_out_34_V_empty_n.read() & layer4_out_35_V_empty_n.read());
}

void window::thread_dense_large_U0_start_full_n() {
    dense_large_U0_start_full_n = ap_const_logic_1;
}

void window::thread_dense_large_U0_start_write() {
    dense_large_U0_start_write = ap_const_logic_0;
}

void window::thread_digi2win_U0_ap_continue() {
    digi2win_U0_ap_continue = (ap_sync_channel_write_dense_1_input_179_V.read() & ap_sync_channel_write_dense_1_input_178_V.read() & ap_sync_channel_write_dense_1_input_177_V.read() & ap_sync_channel_write_dense_1_input_176_V.read() & ap_sync_channel_write_dense_1_input_175_V.read() & ap_sync_channel_write_dense_1_input_174_V.read() & ap_sync_channel_write_dense_1_input_173_V.read() & ap_sync_channel_write_dense_1_input_172_V.read() & ap_sync_channel_write_dense_1_input_171_V.read() & ap_sync_channel_write_dense_1_input_170_V.read() & ap_sync_channel_write_dense_1_input_169_V.read() & ap_sync_channel_write_dense_1_input_168_V.read() & ap_sync_channel_write_dense_1_input_167_V.read() & ap_sync_channel_write_dense_1_input_166_V.read() & ap_sync_channel_write_dense_1_input_165_V.read() & ap_sync_channel_write_dense_1_input_164_V.read() & ap_sync_channel_write_dense_1_input_163_V.read() & ap_sync_channel_write_dense_1_input_162_V.read() & ap_sync_channel_write_dense_1_input_161_V.read() & ap_sync_channel_write_dense_1_input_160_V.read() & ap_sync_channel_write_dense_1_input_159_V.read() & ap_sync_channel_write_dense_1_input_158_V.read() & ap_sync_channel_write_dense_1_input_157_V.read() & ap_sync_channel_write_dense_1_input_156_V.read() & ap_sync_channel_write_dense_1_input_155_V.read() & ap_sync_channel_write_dense_1_input_154_V.read() & ap_sync_channel_write_dense_1_input_153_V.read() & ap_sync_channel_write_dense_1_input_152_V.read() & ap_sync_channel_write_dense_1_input_151_V.read() & ap_sync_channel_write_dense_1_input_150_V.read() & ap_sync_channel_write_dense_1_input_149_V.read() & ap_sync_channel_write_dense_1_input_148_V.read() & ap_sync_channel_write_dense_1_input_147_V.read() & ap_sync_channel_write_dense_1_input_146_V.read() & ap_sync_channel_write_dense_1_input_145_V.read() & ap_sync_channel_write_dense_1_input_144_V.read() & ap_sync_channel_write_dense_1_input_143_V.read() & ap_sync_channel_write_dense_1_input_142_V.read() & ap_sync_channel_write_dense_1_input_141_V.read() & ap_sync_channel_write_dense_1_input_140_V.read() & ap_sync_channel_write_dense_1_input_139_V.read() & ap_sync_channel_write_dense_1_input_138_V.read() & ap_sync_channel_write_dense_1_input_137_V.read() & ap_sync_channel_write_dense_1_input_136_V.read() & ap_sync_channel_write_dense_1_input_135_V.read() & ap_sync_channel_write_dense_1_input_134_V.read() & ap_sync_channel_write_dense_1_input_133_V.read() & ap_sync_channel_write_dense_1_input_132_V.read() & ap_sync_channel_write_dense_1_input_131_V.read() & ap_sync_channel_write_dense_1_input_130_V.read() & ap_sync_channel_write_dense_1_input_129_V.read() & ap_sync_channel_write_dense_1_input_128_V.read() & ap_sync_channel_write_dense_1_input_127_V.read() & ap_sync_channel_write_dense_1_input_126_V.read() & ap_sync_channel_write_dense_1_input_125_V.read() & ap_sync_channel_write_dense_1_input_124_V.read() & ap_sync_channel_write_dense_1_input_123_V.read() & ap_sync_channel_write_dense_1_input_122_V.read() & ap_sync_channel_write_dense_1_input_121_V.read() & ap_sync_channel_write_dense_1_input_120_V.read() & ap_sync_channel_write_dense_1_input_119_V.read() & ap_sync_channel_write_dense_1_input_118_V.read() & ap_sync_channel_write_dense_1_input_117_V.read() & ap_sync_channel_write_dense_1_input_116_V.read() & ap_sync_channel_write_dense_1_input_115_V.read() & ap_sync_channel_write_dense_1_input_114_V.read() & ap_sync_channel_write_dense_1_input_113_V.read() & ap_sync_channel_write_dense_1_input_112_V.read() & ap_sync_channel_write_dense_1_input_111_V.read() & ap_sync_channel_write_dense_1_input_110_V.read() & ap_sync_channel_write_dense_1_input_109_V.read() & ap_sync_channel_write_dense_1_input_108_V.read() & ap_sync_channel_write_dense_1_input_107_V.read() & ap_sync_channel_write_dense_1_input_106_V.read() & ap_sync_channel_write_dense_1_input_105_V.read() & ap_sync_channel_write_dense_1_input_104_V.read() & ap_sync_channel_write_dense_1_input_103_V.read() & ap_sync_channel_write_dense_1_input_102_V.read() & ap_sync_channel_write_dense_1_input_101_V.read() & ap_sync_channel_write_dense_1_input_100_V.read() & ap_sync_channel_write_dense_1_input_99_V.read() & ap_sync_channel_write_dense_1_input_98_V.read() & ap_sync_channel_write_dense_1_input_97_V.read() & ap_sync_channel_write_dense_1_input_96_V.read() & ap_sync_channel_write_dense_1_input_95_V.read() & ap_sync_channel_write_dense_1_input_94_V.read() & ap_sync_channel_write_dense_1_input_93_V.read() & ap_sync_channel_write_dense_1_input_92_V.read() & ap_sync_channel_write_dense_1_input_91_V.read() & ap_sync_channel_write_dense_1_input_90_V.read() & ap_sync_channel_write_dense_1_input_89_V.read() & ap_sync_channel_write_dense_1_input_88_V.read() & ap_sync_channel_write_dense_1_input_87_V.read() & ap_sync_channel_write_dense_1_input_86_V.read() & ap_sync_channel_write_dense_1_input_85_V.read() & ap_sync_channel_write_dense_1_input_84_V.read() & ap_sync_channel_write_dense_1_input_83_V.read() & ap_sync_channel_write_dense_1_input_82_V.read() & ap_sync_channel_write_dense_1_input_81_V.read() & ap_sync_channel_write_dense_1_input_80_V.read() & ap_sync_channel_write_dense_1_input_79_V.read() & ap_sync_channel_write_dense_1_input_78_V.read() & ap_sync_channel_write_dense_1_input_77_V.read() & ap_sync_channel_write_dense_1_input_76_V.read() & ap_sync_channel_write_dense_1_input_75_V.read() & ap_sync_channel_write_dense_1_input_74_V.read() & ap_sync_channel_write_dense_1_input_73_V.read() & ap_sync_channel_write_dense_1_input_72_V.read() & ap_sync_channel_write_dense_1_input_71_V.read() & ap_sync_channel_write_dense_1_input_70_V.read() & ap_sync_channel_write_dense_1_input_69_V.read() & ap_sync_channel_write_dense_1_input_68_V.read() & ap_sync_channel_write_dense_1_input_67_V.read() & ap_sync_channel_write_dense_1_input_66_V.read() & ap_sync_channel_write_dense_1_input_65_V.read() & ap_sync_channel_write_dense_1_input_64_V.read() & ap_sync_channel_write_dense_1_input_63_V.read() & ap_sync_channel_write_dense_1_input_62_V.read() & ap_sync_channel_write_dense_1_input_61_V.read() & ap_sync_channel_write_dense_1_input_60_V.read() & ap_sync_channel_write_dense_1_input_59_V.read() & ap_sync_channel_write_dense_1_input_58_V.read() & ap_sync_channel_write_dense_1_input_57_V.read() & ap_sync_channel_write_dense_1_input_56_V.read() & ap_sync_channel_write_dense_1_input_55_V.read() & ap_sync_channel_write_dense_1_input_54_V.read() & ap_sync_channel_write_dense_1_input_53_V.read() & ap_sync_channel_write_dense_1_input_52_V.read() & ap_sync_channel_write_dense_1_input_51_V.read() & ap_sync_channel_write_dense_1_input_50_V.read() & ap_sync_channel_write_dense_1_input_49_V.read() & ap_sync_channel_write_dense_1_input_48_V.read() & ap_sync_channel_write_dense_1_input_47_V.read() & ap_sync_channel_write_dense_1_input_46_V.read() & ap_sync_channel_write_dense_1_input_45_V.read() & ap_sync_channel_write_dense_1_input_44_V.read() & ap_sync_channel_write_dense_1_input_43_V.read() & ap_sync_channel_write_dense_1_input_42_V.read() & ap_sync_channel_write_dense_1_input_41_V.read() & ap_sync_channel_write_dense_1_input_40_V.read() & ap_sync_channel_write_dense_1_input_39_V.read() & ap_sync_channel_write_dense_1_input_38_V.read() & ap_sync_channel_write_dense_1_input_37_V.read() & ap_sync_channel_write_dense_1_input_36_V.read() & ap_sync_channel_write_dense_1_input_35_V.read() & ap_sync_channel_write_dense_1_input_34_V.read() & ap_sync_channel_write_dense_1_input_33_V.read() & ap_sync_channel_write_dense_1_input_32_V.read() & ap_sync_channel_write_dense_1_input_31_V.read() & ap_sync_channel_write_dense_1_input_30_V.read() & ap_sync_channel_write_dense_1_input_29_V.read() & ap_sync_channel_write_dense_1_input_28_V.read() & ap_sync_channel_write_dense_1_input_27_V.read() & ap_sync_channel_write_dense_1_input_26_V.read() & ap_sync_channel_write_dense_1_input_25_V.read() & ap_sync_channel_write_dense_1_input_24_V.read() & ap_sync_channel_write_dense_1_input_23_V.read() & ap_sync_channel_write_dense_1_input_22_V.read() & ap_sync_channel_write_dense_1_input_21_V.read() & ap_sync_channel_write_dense_1_input_20_V.read() & ap_sync_channel_write_dense_1_input_19_V.read() & ap_sync_channel_write_dense_1_input_18_V.read() & ap_sync_channel_write_dense_1_input_17_V.read() & ap_sync_channel_write_dense_1_input_16_V.read() & ap_sync_channel_write_dense_1_input_15_V.read() & ap_sync_channel_write_dense_1_input_14_V.read() & ap_sync_channel_write_dense_1_input_13_V.read() & ap_sync_channel_write_dense_1_input_12_V.read() & ap_sync_channel_write_dense_1_input_11_V.read() & ap_sync_channel_write_dense_1_input_10_V.read() & ap_sync_channel_write_dense_1_input_9_V.read() & ap_sync_channel_write_dense_1_input_8_V.read() & ap_sync_channel_write_dense_1_input_7_V.read() & ap_sync_channel_write_dense_1_input_6_V.read() & ap_sync_channel_write_dense_1_input_5_V.read() & ap_sync_channel_write_dense_1_input_4_V.read() & ap_sync_channel_write_dense_1_input_3_V.read() & ap_sync_channel_write_dense_1_input_2_V.read() & ap_sync_channel_write_dense_1_input_1_V.read() & ap_sync_channel_write_dense_1_input_0_V.read());
}

void window::thread_digi2win_U0_ap_start() {
    digi2win_U0_ap_start = max_coor_t_empty_n.read();
}

void window::thread_digi2win_U0_start_full_n() {
    digi2win_U0_start_full_n = ap_const_logic_1;
}

void window::thread_digi2win_U0_start_write() {
    digi2win_U0_start_write = ap_const_logic_0;
}

void window::thread_layer5_out_0_V() {
    layer5_out_0_V = dense_large_U0_res_0_V.read();
}

void window::thread_layer5_out_0_V_ap_vld() {
    layer5_out_0_V_ap_vld = dense_large_U0_res_0_V_ap_vld.read();
}

void window::thread_layer5_out_100_V() {
    layer5_out_100_V = dense_large_U0_res_100_V.read();
}

void window::thread_layer5_out_100_V_ap_vld() {
    layer5_out_100_V_ap_vld = dense_large_U0_res_100_V_ap_vld.read();
}

void window::thread_layer5_out_101_V() {
    layer5_out_101_V = dense_large_U0_res_101_V.read();
}

void window::thread_layer5_out_101_V_ap_vld() {
    layer5_out_101_V_ap_vld = dense_large_U0_res_101_V_ap_vld.read();
}

void window::thread_layer5_out_102_V() {
    layer5_out_102_V = dense_large_U0_res_102_V.read();
}

void window::thread_layer5_out_102_V_ap_vld() {
    layer5_out_102_V_ap_vld = dense_large_U0_res_102_V_ap_vld.read();
}

void window::thread_layer5_out_103_V() {
    layer5_out_103_V = dense_large_U0_res_103_V.read();
}

void window::thread_layer5_out_103_V_ap_vld() {
    layer5_out_103_V_ap_vld = dense_large_U0_res_103_V_ap_vld.read();
}

void window::thread_layer5_out_104_V() {
    layer5_out_104_V = dense_large_U0_res_104_V.read();
}

void window::thread_layer5_out_104_V_ap_vld() {
    layer5_out_104_V_ap_vld = dense_large_U0_res_104_V_ap_vld.read();
}

void window::thread_layer5_out_105_V() {
    layer5_out_105_V = dense_large_U0_res_105_V.read();
}

void window::thread_layer5_out_105_V_ap_vld() {
    layer5_out_105_V_ap_vld = dense_large_U0_res_105_V_ap_vld.read();
}

void window::thread_layer5_out_106_V() {
    layer5_out_106_V = dense_large_U0_res_106_V.read();
}

void window::thread_layer5_out_106_V_ap_vld() {
    layer5_out_106_V_ap_vld = dense_large_U0_res_106_V_ap_vld.read();
}

void window::thread_layer5_out_107_V() {
    layer5_out_107_V = dense_large_U0_res_107_V.read();
}

void window::thread_layer5_out_107_V_ap_vld() {
    layer5_out_107_V_ap_vld = dense_large_U0_res_107_V_ap_vld.read();
}

void window::thread_layer5_out_108_V() {
    layer5_out_108_V = dense_large_U0_res_108_V.read();
}

void window::thread_layer5_out_108_V_ap_vld() {
    layer5_out_108_V_ap_vld = dense_large_U0_res_108_V_ap_vld.read();
}

void window::thread_layer5_out_109_V() {
    layer5_out_109_V = dense_large_U0_res_109_V.read();
}

void window::thread_layer5_out_109_V_ap_vld() {
    layer5_out_109_V_ap_vld = dense_large_U0_res_109_V_ap_vld.read();
}

void window::thread_layer5_out_10_V() {
    layer5_out_10_V = dense_large_U0_res_10_V.read();
}

void window::thread_layer5_out_10_V_ap_vld() {
    layer5_out_10_V_ap_vld = dense_large_U0_res_10_V_ap_vld.read();
}

void window::thread_layer5_out_110_V() {
    layer5_out_110_V = dense_large_U0_res_110_V.read();
}

void window::thread_layer5_out_110_V_ap_vld() {
    layer5_out_110_V_ap_vld = dense_large_U0_res_110_V_ap_vld.read();
}

void window::thread_layer5_out_111_V() {
    layer5_out_111_V = dense_large_U0_res_111_V.read();
}

void window::thread_layer5_out_111_V_ap_vld() {
    layer5_out_111_V_ap_vld = dense_large_U0_res_111_V_ap_vld.read();
}

void window::thread_layer5_out_112_V() {
    layer5_out_112_V = dense_large_U0_res_112_V.read();
}

void window::thread_layer5_out_112_V_ap_vld() {
    layer5_out_112_V_ap_vld = dense_large_U0_res_112_V_ap_vld.read();
}

void window::thread_layer5_out_113_V() {
    layer5_out_113_V = dense_large_U0_res_113_V.read();
}

void window::thread_layer5_out_113_V_ap_vld() {
    layer5_out_113_V_ap_vld = dense_large_U0_res_113_V_ap_vld.read();
}

void window::thread_layer5_out_114_V() {
    layer5_out_114_V = dense_large_U0_res_114_V.read();
}

void window::thread_layer5_out_114_V_ap_vld() {
    layer5_out_114_V_ap_vld = dense_large_U0_res_114_V_ap_vld.read();
}

void window::thread_layer5_out_115_V() {
    layer5_out_115_V = dense_large_U0_res_115_V.read();
}

void window::thread_layer5_out_115_V_ap_vld() {
    layer5_out_115_V_ap_vld = dense_large_U0_res_115_V_ap_vld.read();
}

void window::thread_layer5_out_116_V() {
    layer5_out_116_V = dense_large_U0_res_116_V.read();
}

void window::thread_layer5_out_116_V_ap_vld() {
    layer5_out_116_V_ap_vld = dense_large_U0_res_116_V_ap_vld.read();
}

void window::thread_layer5_out_117_V() {
    layer5_out_117_V = dense_large_U0_res_117_V.read();
}

void window::thread_layer5_out_117_V_ap_vld() {
    layer5_out_117_V_ap_vld = dense_large_U0_res_117_V_ap_vld.read();
}

void window::thread_layer5_out_118_V() {
    layer5_out_118_V = dense_large_U0_res_118_V.read();
}

void window::thread_layer5_out_118_V_ap_vld() {
    layer5_out_118_V_ap_vld = dense_large_U0_res_118_V_ap_vld.read();
}

void window::thread_layer5_out_119_V() {
    layer5_out_119_V = dense_large_U0_res_119_V.read();
}

void window::thread_layer5_out_119_V_ap_vld() {
    layer5_out_119_V_ap_vld = dense_large_U0_res_119_V_ap_vld.read();
}

void window::thread_layer5_out_11_V() {
    layer5_out_11_V = dense_large_U0_res_11_V.read();
}

void window::thread_layer5_out_11_V_ap_vld() {
    layer5_out_11_V_ap_vld = dense_large_U0_res_11_V_ap_vld.read();
}

void window::thread_layer5_out_120_V() {
    layer5_out_120_V = dense_large_U0_res_120_V.read();
}

void window::thread_layer5_out_120_V_ap_vld() {
    layer5_out_120_V_ap_vld = dense_large_U0_res_120_V_ap_vld.read();
}

void window::thread_layer5_out_121_V() {
    layer5_out_121_V = dense_large_U0_res_121_V.read();
}

void window::thread_layer5_out_121_V_ap_vld() {
    layer5_out_121_V_ap_vld = dense_large_U0_res_121_V_ap_vld.read();
}

void window::thread_layer5_out_122_V() {
    layer5_out_122_V = dense_large_U0_res_122_V.read();
}

void window::thread_layer5_out_122_V_ap_vld() {
    layer5_out_122_V_ap_vld = dense_large_U0_res_122_V_ap_vld.read();
}

void window::thread_layer5_out_123_V() {
    layer5_out_123_V = dense_large_U0_res_123_V.read();
}

void window::thread_layer5_out_123_V_ap_vld() {
    layer5_out_123_V_ap_vld = dense_large_U0_res_123_V_ap_vld.read();
}

void window::thread_layer5_out_124_V() {
    layer5_out_124_V = dense_large_U0_res_124_V.read();
}

void window::thread_layer5_out_124_V_ap_vld() {
    layer5_out_124_V_ap_vld = dense_large_U0_res_124_V_ap_vld.read();
}

void window::thread_layer5_out_125_V() {
    layer5_out_125_V = dense_large_U0_res_125_V.read();
}

void window::thread_layer5_out_125_V_ap_vld() {
    layer5_out_125_V_ap_vld = dense_large_U0_res_125_V_ap_vld.read();
}

void window::thread_layer5_out_126_V() {
    layer5_out_126_V = dense_large_U0_res_126_V.read();
}

void window::thread_layer5_out_126_V_ap_vld() {
    layer5_out_126_V_ap_vld = dense_large_U0_res_126_V_ap_vld.read();
}

void window::thread_layer5_out_127_V() {
    layer5_out_127_V = dense_large_U0_res_127_V.read();
}

void window::thread_layer5_out_127_V_ap_vld() {
    layer5_out_127_V_ap_vld = dense_large_U0_res_127_V_ap_vld.read();
}

void window::thread_layer5_out_128_V() {
    layer5_out_128_V = dense_large_U0_res_128_V.read();
}

void window::thread_layer5_out_128_V_ap_vld() {
    layer5_out_128_V_ap_vld = dense_large_U0_res_128_V_ap_vld.read();
}

void window::thread_layer5_out_129_V() {
    layer5_out_129_V = dense_large_U0_res_129_V.read();
}

void window::thread_layer5_out_129_V_ap_vld() {
    layer5_out_129_V_ap_vld = dense_large_U0_res_129_V_ap_vld.read();
}

void window::thread_layer5_out_12_V() {
    layer5_out_12_V = dense_large_U0_res_12_V.read();
}

void window::thread_layer5_out_12_V_ap_vld() {
    layer5_out_12_V_ap_vld = dense_large_U0_res_12_V_ap_vld.read();
}

void window::thread_layer5_out_130_V() {
    layer5_out_130_V = dense_large_U0_res_130_V.read();
}

void window::thread_layer5_out_130_V_ap_vld() {
    layer5_out_130_V_ap_vld = dense_large_U0_res_130_V_ap_vld.read();
}

void window::thread_layer5_out_131_V() {
    layer5_out_131_V = dense_large_U0_res_131_V.read();
}

void window::thread_layer5_out_131_V_ap_vld() {
    layer5_out_131_V_ap_vld = dense_large_U0_res_131_V_ap_vld.read();
}

void window::thread_layer5_out_132_V() {
    layer5_out_132_V = dense_large_U0_res_132_V.read();
}

void window::thread_layer5_out_132_V_ap_vld() {
    layer5_out_132_V_ap_vld = dense_large_U0_res_132_V_ap_vld.read();
}

void window::thread_layer5_out_133_V() {
    layer5_out_133_V = dense_large_U0_res_133_V.read();
}

void window::thread_layer5_out_133_V_ap_vld() {
    layer5_out_133_V_ap_vld = dense_large_U0_res_133_V_ap_vld.read();
}

void window::thread_layer5_out_134_V() {
    layer5_out_134_V = dense_large_U0_res_134_V.read();
}

void window::thread_layer5_out_134_V_ap_vld() {
    layer5_out_134_V_ap_vld = dense_large_U0_res_134_V_ap_vld.read();
}

void window::thread_layer5_out_135_V() {
    layer5_out_135_V = dense_large_U0_res_135_V.read();
}

void window::thread_layer5_out_135_V_ap_vld() {
    layer5_out_135_V_ap_vld = dense_large_U0_res_135_V_ap_vld.read();
}

void window::thread_layer5_out_136_V() {
    layer5_out_136_V = dense_large_U0_res_136_V.read();
}

void window::thread_layer5_out_136_V_ap_vld() {
    layer5_out_136_V_ap_vld = dense_large_U0_res_136_V_ap_vld.read();
}

void window::thread_layer5_out_137_V() {
    layer5_out_137_V = dense_large_U0_res_137_V.read();
}

void window::thread_layer5_out_137_V_ap_vld() {
    layer5_out_137_V_ap_vld = dense_large_U0_res_137_V_ap_vld.read();
}

void window::thread_layer5_out_138_V() {
    layer5_out_138_V = dense_large_U0_res_138_V.read();
}

void window::thread_layer5_out_138_V_ap_vld() {
    layer5_out_138_V_ap_vld = dense_large_U0_res_138_V_ap_vld.read();
}

void window::thread_layer5_out_139_V() {
    layer5_out_139_V = dense_large_U0_res_139_V.read();
}

void window::thread_layer5_out_139_V_ap_vld() {
    layer5_out_139_V_ap_vld = dense_large_U0_res_139_V_ap_vld.read();
}

void window::thread_layer5_out_13_V() {
    layer5_out_13_V = dense_large_U0_res_13_V.read();
}

void window::thread_layer5_out_13_V_ap_vld() {
    layer5_out_13_V_ap_vld = dense_large_U0_res_13_V_ap_vld.read();
}

void window::thread_layer5_out_140_V() {
    layer5_out_140_V = dense_large_U0_res_140_V.read();
}

void window::thread_layer5_out_140_V_ap_vld() {
    layer5_out_140_V_ap_vld = dense_large_U0_res_140_V_ap_vld.read();
}

void window::thread_layer5_out_141_V() {
    layer5_out_141_V = dense_large_U0_res_141_V.read();
}

void window::thread_layer5_out_141_V_ap_vld() {
    layer5_out_141_V_ap_vld = dense_large_U0_res_141_V_ap_vld.read();
}

void window::thread_layer5_out_142_V() {
    layer5_out_142_V = dense_large_U0_res_142_V.read();
}

void window::thread_layer5_out_142_V_ap_vld() {
    layer5_out_142_V_ap_vld = dense_large_U0_res_142_V_ap_vld.read();
}

void window::thread_layer5_out_143_V() {
    layer5_out_143_V = dense_large_U0_res_143_V.read();
}

void window::thread_layer5_out_143_V_ap_vld() {
    layer5_out_143_V_ap_vld = dense_large_U0_res_143_V_ap_vld.read();
}

void window::thread_layer5_out_144_V() {
    layer5_out_144_V = dense_large_U0_res_144_V.read();
}

void window::thread_layer5_out_144_V_ap_vld() {
    layer5_out_144_V_ap_vld = dense_large_U0_res_144_V_ap_vld.read();
}

void window::thread_layer5_out_145_V() {
    layer5_out_145_V = dense_large_U0_res_145_V.read();
}

void window::thread_layer5_out_145_V_ap_vld() {
    layer5_out_145_V_ap_vld = dense_large_U0_res_145_V_ap_vld.read();
}

void window::thread_layer5_out_146_V() {
    layer5_out_146_V = dense_large_U0_res_146_V.read();
}

void window::thread_layer5_out_146_V_ap_vld() {
    layer5_out_146_V_ap_vld = dense_large_U0_res_146_V_ap_vld.read();
}

void window::thread_layer5_out_147_V() {
    layer5_out_147_V = dense_large_U0_res_147_V.read();
}

void window::thread_layer5_out_147_V_ap_vld() {
    layer5_out_147_V_ap_vld = dense_large_U0_res_147_V_ap_vld.read();
}

void window::thread_layer5_out_148_V() {
    layer5_out_148_V = dense_large_U0_res_148_V.read();
}

void window::thread_layer5_out_148_V_ap_vld() {
    layer5_out_148_V_ap_vld = dense_large_U0_res_148_V_ap_vld.read();
}

void window::thread_layer5_out_149_V() {
    layer5_out_149_V = dense_large_U0_res_149_V.read();
}

void window::thread_layer5_out_149_V_ap_vld() {
    layer5_out_149_V_ap_vld = dense_large_U0_res_149_V_ap_vld.read();
}

void window::thread_layer5_out_14_V() {
    layer5_out_14_V = dense_large_U0_res_14_V.read();
}

void window::thread_layer5_out_14_V_ap_vld() {
    layer5_out_14_V_ap_vld = dense_large_U0_res_14_V_ap_vld.read();
}

void window::thread_layer5_out_150_V() {
    layer5_out_150_V = dense_large_U0_res_150_V.read();
}

void window::thread_layer5_out_150_V_ap_vld() {
    layer5_out_150_V_ap_vld = dense_large_U0_res_150_V_ap_vld.read();
}

void window::thread_layer5_out_151_V() {
    layer5_out_151_V = dense_large_U0_res_151_V.read();
}

void window::thread_layer5_out_151_V_ap_vld() {
    layer5_out_151_V_ap_vld = dense_large_U0_res_151_V_ap_vld.read();
}

void window::thread_layer5_out_152_V() {
    layer5_out_152_V = dense_large_U0_res_152_V.read();
}

void window::thread_layer5_out_152_V_ap_vld() {
    layer5_out_152_V_ap_vld = dense_large_U0_res_152_V_ap_vld.read();
}

void window::thread_layer5_out_153_V() {
    layer5_out_153_V = dense_large_U0_res_153_V.read();
}

void window::thread_layer5_out_153_V_ap_vld() {
    layer5_out_153_V_ap_vld = dense_large_U0_res_153_V_ap_vld.read();
}

void window::thread_layer5_out_154_V() {
    layer5_out_154_V = dense_large_U0_res_154_V.read();
}

void window::thread_layer5_out_154_V_ap_vld() {
    layer5_out_154_V_ap_vld = dense_large_U0_res_154_V_ap_vld.read();
}

void window::thread_layer5_out_155_V() {
    layer5_out_155_V = dense_large_U0_res_155_V.read();
}

void window::thread_layer5_out_155_V_ap_vld() {
    layer5_out_155_V_ap_vld = dense_large_U0_res_155_V_ap_vld.read();
}

void window::thread_layer5_out_156_V() {
    layer5_out_156_V = dense_large_U0_res_156_V.read();
}

void window::thread_layer5_out_156_V_ap_vld() {
    layer5_out_156_V_ap_vld = dense_large_U0_res_156_V_ap_vld.read();
}

void window::thread_layer5_out_157_V() {
    layer5_out_157_V = dense_large_U0_res_157_V.read();
}

void window::thread_layer5_out_157_V_ap_vld() {
    layer5_out_157_V_ap_vld = dense_large_U0_res_157_V_ap_vld.read();
}

void window::thread_layer5_out_158_V() {
    layer5_out_158_V = dense_large_U0_res_158_V.read();
}

void window::thread_layer5_out_158_V_ap_vld() {
    layer5_out_158_V_ap_vld = dense_large_U0_res_158_V_ap_vld.read();
}

void window::thread_layer5_out_159_V() {
    layer5_out_159_V = dense_large_U0_res_159_V.read();
}

void window::thread_layer5_out_159_V_ap_vld() {
    layer5_out_159_V_ap_vld = dense_large_U0_res_159_V_ap_vld.read();
}

void window::thread_layer5_out_15_V() {
    layer5_out_15_V = dense_large_U0_res_15_V.read();
}

void window::thread_layer5_out_15_V_ap_vld() {
    layer5_out_15_V_ap_vld = dense_large_U0_res_15_V_ap_vld.read();
}

void window::thread_layer5_out_160_V() {
    layer5_out_160_V = dense_large_U0_res_160_V.read();
}

void window::thread_layer5_out_160_V_ap_vld() {
    layer5_out_160_V_ap_vld = dense_large_U0_res_160_V_ap_vld.read();
}

void window::thread_layer5_out_161_V() {
    layer5_out_161_V = dense_large_U0_res_161_V.read();
}

void window::thread_layer5_out_161_V_ap_vld() {
    layer5_out_161_V_ap_vld = dense_large_U0_res_161_V_ap_vld.read();
}

void window::thread_layer5_out_162_V() {
    layer5_out_162_V = dense_large_U0_res_162_V.read();
}

void window::thread_layer5_out_162_V_ap_vld() {
    layer5_out_162_V_ap_vld = dense_large_U0_res_162_V_ap_vld.read();
}

void window::thread_layer5_out_163_V() {
    layer5_out_163_V = dense_large_U0_res_163_V.read();
}

void window::thread_layer5_out_163_V_ap_vld() {
    layer5_out_163_V_ap_vld = dense_large_U0_res_163_V_ap_vld.read();
}

void window::thread_layer5_out_164_V() {
    layer5_out_164_V = dense_large_U0_res_164_V.read();
}

void window::thread_layer5_out_164_V_ap_vld() {
    layer5_out_164_V_ap_vld = dense_large_U0_res_164_V_ap_vld.read();
}

void window::thread_layer5_out_165_V() {
    layer5_out_165_V = dense_large_U0_res_165_V.read();
}

void window::thread_layer5_out_165_V_ap_vld() {
    layer5_out_165_V_ap_vld = dense_large_U0_res_165_V_ap_vld.read();
}

void window::thread_layer5_out_166_V() {
    layer5_out_166_V = dense_large_U0_res_166_V.read();
}

void window::thread_layer5_out_166_V_ap_vld() {
    layer5_out_166_V_ap_vld = dense_large_U0_res_166_V_ap_vld.read();
}

void window::thread_layer5_out_167_V() {
    layer5_out_167_V = dense_large_U0_res_167_V.read();
}

void window::thread_layer5_out_167_V_ap_vld() {
    layer5_out_167_V_ap_vld = dense_large_U0_res_167_V_ap_vld.read();
}

void window::thread_layer5_out_168_V() {
    layer5_out_168_V = dense_large_U0_res_168_V.read();
}

void window::thread_layer5_out_168_V_ap_vld() {
    layer5_out_168_V_ap_vld = dense_large_U0_res_168_V_ap_vld.read();
}

void window::thread_layer5_out_169_V() {
    layer5_out_169_V = dense_large_U0_res_169_V.read();
}

void window::thread_layer5_out_169_V_ap_vld() {
    layer5_out_169_V_ap_vld = dense_large_U0_res_169_V_ap_vld.read();
}

void window::thread_layer5_out_16_V() {
    layer5_out_16_V = dense_large_U0_res_16_V.read();
}

void window::thread_layer5_out_16_V_ap_vld() {
    layer5_out_16_V_ap_vld = dense_large_U0_res_16_V_ap_vld.read();
}

void window::thread_layer5_out_170_V() {
    layer5_out_170_V = dense_large_U0_res_170_V.read();
}

void window::thread_layer5_out_170_V_ap_vld() {
    layer5_out_170_V_ap_vld = dense_large_U0_res_170_V_ap_vld.read();
}

void window::thread_layer5_out_171_V() {
    layer5_out_171_V = dense_large_U0_res_171_V.read();
}

void window::thread_layer5_out_171_V_ap_vld() {
    layer5_out_171_V_ap_vld = dense_large_U0_res_171_V_ap_vld.read();
}

void window::thread_layer5_out_172_V() {
    layer5_out_172_V = dense_large_U0_res_172_V.read();
}

void window::thread_layer5_out_172_V_ap_vld() {
    layer5_out_172_V_ap_vld = dense_large_U0_res_172_V_ap_vld.read();
}

void window::thread_layer5_out_173_V() {
    layer5_out_173_V = dense_large_U0_res_173_V.read();
}

void window::thread_layer5_out_173_V_ap_vld() {
    layer5_out_173_V_ap_vld = dense_large_U0_res_173_V_ap_vld.read();
}

void window::thread_layer5_out_174_V() {
    layer5_out_174_V = dense_large_U0_res_174_V.read();
}

void window::thread_layer5_out_174_V_ap_vld() {
    layer5_out_174_V_ap_vld = dense_large_U0_res_174_V_ap_vld.read();
}

void window::thread_layer5_out_175_V() {
    layer5_out_175_V = dense_large_U0_res_175_V.read();
}

void window::thread_layer5_out_175_V_ap_vld() {
    layer5_out_175_V_ap_vld = dense_large_U0_res_175_V_ap_vld.read();
}

void window::thread_layer5_out_176_V() {
    layer5_out_176_V = dense_large_U0_res_176_V.read();
}

void window::thread_layer5_out_176_V_ap_vld() {
    layer5_out_176_V_ap_vld = dense_large_U0_res_176_V_ap_vld.read();
}

void window::thread_layer5_out_177_V() {
    layer5_out_177_V = dense_large_U0_res_177_V.read();
}

void window::thread_layer5_out_177_V_ap_vld() {
    layer5_out_177_V_ap_vld = dense_large_U0_res_177_V_ap_vld.read();
}

void window::thread_layer5_out_178_V() {
    layer5_out_178_V = dense_large_U0_res_178_V.read();
}

void window::thread_layer5_out_178_V_ap_vld() {
    layer5_out_178_V_ap_vld = dense_large_U0_res_178_V_ap_vld.read();
}

void window::thread_layer5_out_179_V() {
    layer5_out_179_V = dense_large_U0_res_179_V.read();
}

void window::thread_layer5_out_179_V_ap_vld() {
    layer5_out_179_V_ap_vld = dense_large_U0_res_179_V_ap_vld.read();
}

void window::thread_layer5_out_17_V() {
    layer5_out_17_V = dense_large_U0_res_17_V.read();
}

void window::thread_layer5_out_17_V_ap_vld() {
    layer5_out_17_V_ap_vld = dense_large_U0_res_17_V_ap_vld.read();
}

void window::thread_layer5_out_18_V() {
    layer5_out_18_V = dense_large_U0_res_18_V.read();
}

void window::thread_layer5_out_18_V_ap_vld() {
    layer5_out_18_V_ap_vld = dense_large_U0_res_18_V_ap_vld.read();
}

void window::thread_layer5_out_19_V() {
    layer5_out_19_V = dense_large_U0_res_19_V.read();
}

void window::thread_layer5_out_19_V_ap_vld() {
    layer5_out_19_V_ap_vld = dense_large_U0_res_19_V_ap_vld.read();
}

void window::thread_layer5_out_1_V() {
    layer5_out_1_V = dense_large_U0_res_1_V.read();
}

void window::thread_layer5_out_1_V_ap_vld() {
    layer5_out_1_V_ap_vld = dense_large_U0_res_1_V_ap_vld.read();
}

void window::thread_layer5_out_20_V() {
    layer5_out_20_V = dense_large_U0_res_20_V.read();
}

void window::thread_layer5_out_20_V_ap_vld() {
    layer5_out_20_V_ap_vld = dense_large_U0_res_20_V_ap_vld.read();
}

void window::thread_layer5_out_21_V() {
    layer5_out_21_V = dense_large_U0_res_21_V.read();
}

void window::thread_layer5_out_21_V_ap_vld() {
    layer5_out_21_V_ap_vld = dense_large_U0_res_21_V_ap_vld.read();
}

void window::thread_layer5_out_22_V() {
    layer5_out_22_V = dense_large_U0_res_22_V.read();
}

void window::thread_layer5_out_22_V_ap_vld() {
    layer5_out_22_V_ap_vld = dense_large_U0_res_22_V_ap_vld.read();
}

void window::thread_layer5_out_23_V() {
    layer5_out_23_V = dense_large_U0_res_23_V.read();
}

void window::thread_layer5_out_23_V_ap_vld() {
    layer5_out_23_V_ap_vld = dense_large_U0_res_23_V_ap_vld.read();
}

void window::thread_layer5_out_24_V() {
    layer5_out_24_V = dense_large_U0_res_24_V.read();
}

void window::thread_layer5_out_24_V_ap_vld() {
    layer5_out_24_V_ap_vld = dense_large_U0_res_24_V_ap_vld.read();
}

void window::thread_layer5_out_25_V() {
    layer5_out_25_V = dense_large_U0_res_25_V.read();
}

void window::thread_layer5_out_25_V_ap_vld() {
    layer5_out_25_V_ap_vld = dense_large_U0_res_25_V_ap_vld.read();
}

void window::thread_layer5_out_26_V() {
    layer5_out_26_V = dense_large_U0_res_26_V.read();
}

void window::thread_layer5_out_26_V_ap_vld() {
    layer5_out_26_V_ap_vld = dense_large_U0_res_26_V_ap_vld.read();
}

void window::thread_layer5_out_27_V() {
    layer5_out_27_V = dense_large_U0_res_27_V.read();
}

void window::thread_layer5_out_27_V_ap_vld() {
    layer5_out_27_V_ap_vld = dense_large_U0_res_27_V_ap_vld.read();
}

void window::thread_layer5_out_28_V() {
    layer5_out_28_V = dense_large_U0_res_28_V.read();
}

void window::thread_layer5_out_28_V_ap_vld() {
    layer5_out_28_V_ap_vld = dense_large_U0_res_28_V_ap_vld.read();
}

void window::thread_layer5_out_29_V() {
    layer5_out_29_V = dense_large_U0_res_29_V.read();
}

void window::thread_layer5_out_29_V_ap_vld() {
    layer5_out_29_V_ap_vld = dense_large_U0_res_29_V_ap_vld.read();
}

void window::thread_layer5_out_2_V() {
    layer5_out_2_V = dense_large_U0_res_2_V.read();
}

void window::thread_layer5_out_2_V_ap_vld() {
    layer5_out_2_V_ap_vld = dense_large_U0_res_2_V_ap_vld.read();
}

void window::thread_layer5_out_30_V() {
    layer5_out_30_V = dense_large_U0_res_30_V.read();
}

void window::thread_layer5_out_30_V_ap_vld() {
    layer5_out_30_V_ap_vld = dense_large_U0_res_30_V_ap_vld.read();
}

void window::thread_layer5_out_31_V() {
    layer5_out_31_V = dense_large_U0_res_31_V.read();
}

void window::thread_layer5_out_31_V_ap_vld() {
    layer5_out_31_V_ap_vld = dense_large_U0_res_31_V_ap_vld.read();
}

void window::thread_layer5_out_32_V() {
    layer5_out_32_V = dense_large_U0_res_32_V.read();
}

void window::thread_layer5_out_32_V_ap_vld() {
    layer5_out_32_V_ap_vld = dense_large_U0_res_32_V_ap_vld.read();
}

void window::thread_layer5_out_33_V() {
    layer5_out_33_V = dense_large_U0_res_33_V.read();
}

void window::thread_layer5_out_33_V_ap_vld() {
    layer5_out_33_V_ap_vld = dense_large_U0_res_33_V_ap_vld.read();
}

void window::thread_layer5_out_34_V() {
    layer5_out_34_V = dense_large_U0_res_34_V.read();
}

void window::thread_layer5_out_34_V_ap_vld() {
    layer5_out_34_V_ap_vld = dense_large_U0_res_34_V_ap_vld.read();
}

void window::thread_layer5_out_35_V() {
    layer5_out_35_V = dense_large_U0_res_35_V.read();
}

void window::thread_layer5_out_35_V_ap_vld() {
    layer5_out_35_V_ap_vld = dense_large_U0_res_35_V_ap_vld.read();
}

void window::thread_layer5_out_36_V() {
    layer5_out_36_V = dense_large_U0_res_36_V.read();
}

void window::thread_layer5_out_36_V_ap_vld() {
    layer5_out_36_V_ap_vld = dense_large_U0_res_36_V_ap_vld.read();
}

void window::thread_layer5_out_37_V() {
    layer5_out_37_V = dense_large_U0_res_37_V.read();
}

void window::thread_layer5_out_37_V_ap_vld() {
    layer5_out_37_V_ap_vld = dense_large_U0_res_37_V_ap_vld.read();
}

void window::thread_layer5_out_38_V() {
    layer5_out_38_V = dense_large_U0_res_38_V.read();
}

void window::thread_layer5_out_38_V_ap_vld() {
    layer5_out_38_V_ap_vld = dense_large_U0_res_38_V_ap_vld.read();
}

void window::thread_layer5_out_39_V() {
    layer5_out_39_V = dense_large_U0_res_39_V.read();
}

void window::thread_layer5_out_39_V_ap_vld() {
    layer5_out_39_V_ap_vld = dense_large_U0_res_39_V_ap_vld.read();
}

void window::thread_layer5_out_3_V() {
    layer5_out_3_V = dense_large_U0_res_3_V.read();
}

void window::thread_layer5_out_3_V_ap_vld() {
    layer5_out_3_V_ap_vld = dense_large_U0_res_3_V_ap_vld.read();
}

void window::thread_layer5_out_40_V() {
    layer5_out_40_V = dense_large_U0_res_40_V.read();
}

void window::thread_layer5_out_40_V_ap_vld() {
    layer5_out_40_V_ap_vld = dense_large_U0_res_40_V_ap_vld.read();
}

void window::thread_layer5_out_41_V() {
    layer5_out_41_V = dense_large_U0_res_41_V.read();
}

void window::thread_layer5_out_41_V_ap_vld() {
    layer5_out_41_V_ap_vld = dense_large_U0_res_41_V_ap_vld.read();
}

void window::thread_layer5_out_42_V() {
    layer5_out_42_V = dense_large_U0_res_42_V.read();
}

void window::thread_layer5_out_42_V_ap_vld() {
    layer5_out_42_V_ap_vld = dense_large_U0_res_42_V_ap_vld.read();
}

void window::thread_layer5_out_43_V() {
    layer5_out_43_V = dense_large_U0_res_43_V.read();
}

void window::thread_layer5_out_43_V_ap_vld() {
    layer5_out_43_V_ap_vld = dense_large_U0_res_43_V_ap_vld.read();
}

void window::thread_layer5_out_44_V() {
    layer5_out_44_V = dense_large_U0_res_44_V.read();
}

void window::thread_layer5_out_44_V_ap_vld() {
    layer5_out_44_V_ap_vld = dense_large_U0_res_44_V_ap_vld.read();
}

void window::thread_layer5_out_45_V() {
    layer5_out_45_V = dense_large_U0_res_45_V.read();
}

void window::thread_layer5_out_45_V_ap_vld() {
    layer5_out_45_V_ap_vld = dense_large_U0_res_45_V_ap_vld.read();
}

void window::thread_layer5_out_46_V() {
    layer5_out_46_V = dense_large_U0_res_46_V.read();
}

void window::thread_layer5_out_46_V_ap_vld() {
    layer5_out_46_V_ap_vld = dense_large_U0_res_46_V_ap_vld.read();
}

void window::thread_layer5_out_47_V() {
    layer5_out_47_V = dense_large_U0_res_47_V.read();
}

void window::thread_layer5_out_47_V_ap_vld() {
    layer5_out_47_V_ap_vld = dense_large_U0_res_47_V_ap_vld.read();
}

void window::thread_layer5_out_48_V() {
    layer5_out_48_V = dense_large_U0_res_48_V.read();
}

void window::thread_layer5_out_48_V_ap_vld() {
    layer5_out_48_V_ap_vld = dense_large_U0_res_48_V_ap_vld.read();
}

void window::thread_layer5_out_49_V() {
    layer5_out_49_V = dense_large_U0_res_49_V.read();
}

void window::thread_layer5_out_49_V_ap_vld() {
    layer5_out_49_V_ap_vld = dense_large_U0_res_49_V_ap_vld.read();
}

void window::thread_layer5_out_4_V() {
    layer5_out_4_V = dense_large_U0_res_4_V.read();
}

void window::thread_layer5_out_4_V_ap_vld() {
    layer5_out_4_V_ap_vld = dense_large_U0_res_4_V_ap_vld.read();
}

void window::thread_layer5_out_50_V() {
    layer5_out_50_V = dense_large_U0_res_50_V.read();
}

void window::thread_layer5_out_50_V_ap_vld() {
    layer5_out_50_V_ap_vld = dense_large_U0_res_50_V_ap_vld.read();
}

void window::thread_layer5_out_51_V() {
    layer5_out_51_V = dense_large_U0_res_51_V.read();
}

void window::thread_layer5_out_51_V_ap_vld() {
    layer5_out_51_V_ap_vld = dense_large_U0_res_51_V_ap_vld.read();
}

void window::thread_layer5_out_52_V() {
    layer5_out_52_V = dense_large_U0_res_52_V.read();
}

void window::thread_layer5_out_52_V_ap_vld() {
    layer5_out_52_V_ap_vld = dense_large_U0_res_52_V_ap_vld.read();
}

void window::thread_layer5_out_53_V() {
    layer5_out_53_V = dense_large_U0_res_53_V.read();
}

void window::thread_layer5_out_53_V_ap_vld() {
    layer5_out_53_V_ap_vld = dense_large_U0_res_53_V_ap_vld.read();
}

void window::thread_layer5_out_54_V() {
    layer5_out_54_V = dense_large_U0_res_54_V.read();
}

void window::thread_layer5_out_54_V_ap_vld() {
    layer5_out_54_V_ap_vld = dense_large_U0_res_54_V_ap_vld.read();
}

void window::thread_layer5_out_55_V() {
    layer5_out_55_V = dense_large_U0_res_55_V.read();
}

void window::thread_layer5_out_55_V_ap_vld() {
    layer5_out_55_V_ap_vld = dense_large_U0_res_55_V_ap_vld.read();
}

void window::thread_layer5_out_56_V() {
    layer5_out_56_V = dense_large_U0_res_56_V.read();
}

void window::thread_layer5_out_56_V_ap_vld() {
    layer5_out_56_V_ap_vld = dense_large_U0_res_56_V_ap_vld.read();
}

void window::thread_layer5_out_57_V() {
    layer5_out_57_V = dense_large_U0_res_57_V.read();
}

void window::thread_layer5_out_57_V_ap_vld() {
    layer5_out_57_V_ap_vld = dense_large_U0_res_57_V_ap_vld.read();
}

void window::thread_layer5_out_58_V() {
    layer5_out_58_V = dense_large_U0_res_58_V.read();
}

void window::thread_layer5_out_58_V_ap_vld() {
    layer5_out_58_V_ap_vld = dense_large_U0_res_58_V_ap_vld.read();
}

void window::thread_layer5_out_59_V() {
    layer5_out_59_V = dense_large_U0_res_59_V.read();
}

void window::thread_layer5_out_59_V_ap_vld() {
    layer5_out_59_V_ap_vld = dense_large_U0_res_59_V_ap_vld.read();
}

void window::thread_layer5_out_5_V() {
    layer5_out_5_V = dense_large_U0_res_5_V.read();
}

void window::thread_layer5_out_5_V_ap_vld() {
    layer5_out_5_V_ap_vld = dense_large_U0_res_5_V_ap_vld.read();
}

void window::thread_layer5_out_60_V() {
    layer5_out_60_V = dense_large_U0_res_60_V.read();
}

void window::thread_layer5_out_60_V_ap_vld() {
    layer5_out_60_V_ap_vld = dense_large_U0_res_60_V_ap_vld.read();
}

void window::thread_layer5_out_61_V() {
    layer5_out_61_V = dense_large_U0_res_61_V.read();
}

void window::thread_layer5_out_61_V_ap_vld() {
    layer5_out_61_V_ap_vld = dense_large_U0_res_61_V_ap_vld.read();
}

void window::thread_layer5_out_62_V() {
    layer5_out_62_V = dense_large_U0_res_62_V.read();
}

void window::thread_layer5_out_62_V_ap_vld() {
    layer5_out_62_V_ap_vld = dense_large_U0_res_62_V_ap_vld.read();
}

void window::thread_layer5_out_63_V() {
    layer5_out_63_V = dense_large_U0_res_63_V.read();
}

void window::thread_layer5_out_63_V_ap_vld() {
    layer5_out_63_V_ap_vld = dense_large_U0_res_63_V_ap_vld.read();
}

void window::thread_layer5_out_64_V() {
    layer5_out_64_V = dense_large_U0_res_64_V.read();
}

void window::thread_layer5_out_64_V_ap_vld() {
    layer5_out_64_V_ap_vld = dense_large_U0_res_64_V_ap_vld.read();
}

void window::thread_layer5_out_65_V() {
    layer5_out_65_V = dense_large_U0_res_65_V.read();
}

void window::thread_layer5_out_65_V_ap_vld() {
    layer5_out_65_V_ap_vld = dense_large_U0_res_65_V_ap_vld.read();
}

void window::thread_layer5_out_66_V() {
    layer5_out_66_V = dense_large_U0_res_66_V.read();
}

void window::thread_layer5_out_66_V_ap_vld() {
    layer5_out_66_V_ap_vld = dense_large_U0_res_66_V_ap_vld.read();
}

void window::thread_layer5_out_67_V() {
    layer5_out_67_V = dense_large_U0_res_67_V.read();
}

void window::thread_layer5_out_67_V_ap_vld() {
    layer5_out_67_V_ap_vld = dense_large_U0_res_67_V_ap_vld.read();
}

void window::thread_layer5_out_68_V() {
    layer5_out_68_V = dense_large_U0_res_68_V.read();
}

void window::thread_layer5_out_68_V_ap_vld() {
    layer5_out_68_V_ap_vld = dense_large_U0_res_68_V_ap_vld.read();
}

void window::thread_layer5_out_69_V() {
    layer5_out_69_V = dense_large_U0_res_69_V.read();
}

void window::thread_layer5_out_69_V_ap_vld() {
    layer5_out_69_V_ap_vld = dense_large_U0_res_69_V_ap_vld.read();
}

void window::thread_layer5_out_6_V() {
    layer5_out_6_V = dense_large_U0_res_6_V.read();
}

void window::thread_layer5_out_6_V_ap_vld() {
    layer5_out_6_V_ap_vld = dense_large_U0_res_6_V_ap_vld.read();
}

void window::thread_layer5_out_70_V() {
    layer5_out_70_V = dense_large_U0_res_70_V.read();
}

void window::thread_layer5_out_70_V_ap_vld() {
    layer5_out_70_V_ap_vld = dense_large_U0_res_70_V_ap_vld.read();
}

void window::thread_layer5_out_71_V() {
    layer5_out_71_V = dense_large_U0_res_71_V.read();
}

void window::thread_layer5_out_71_V_ap_vld() {
    layer5_out_71_V_ap_vld = dense_large_U0_res_71_V_ap_vld.read();
}

void window::thread_layer5_out_72_V() {
    layer5_out_72_V = dense_large_U0_res_72_V.read();
}

void window::thread_layer5_out_72_V_ap_vld() {
    layer5_out_72_V_ap_vld = dense_large_U0_res_72_V_ap_vld.read();
}

void window::thread_layer5_out_73_V() {
    layer5_out_73_V = dense_large_U0_res_73_V.read();
}

void window::thread_layer5_out_73_V_ap_vld() {
    layer5_out_73_V_ap_vld = dense_large_U0_res_73_V_ap_vld.read();
}

void window::thread_layer5_out_74_V() {
    layer5_out_74_V = dense_large_U0_res_74_V.read();
}

void window::thread_layer5_out_74_V_ap_vld() {
    layer5_out_74_V_ap_vld = dense_large_U0_res_74_V_ap_vld.read();
}

void window::thread_layer5_out_75_V() {
    layer5_out_75_V = dense_large_U0_res_75_V.read();
}

void window::thread_layer5_out_75_V_ap_vld() {
    layer5_out_75_V_ap_vld = dense_large_U0_res_75_V_ap_vld.read();
}

void window::thread_layer5_out_76_V() {
    layer5_out_76_V = dense_large_U0_res_76_V.read();
}

void window::thread_layer5_out_76_V_ap_vld() {
    layer5_out_76_V_ap_vld = dense_large_U0_res_76_V_ap_vld.read();
}

void window::thread_layer5_out_77_V() {
    layer5_out_77_V = dense_large_U0_res_77_V.read();
}

void window::thread_layer5_out_77_V_ap_vld() {
    layer5_out_77_V_ap_vld = dense_large_U0_res_77_V_ap_vld.read();
}

void window::thread_layer5_out_78_V() {
    layer5_out_78_V = dense_large_U0_res_78_V.read();
}

void window::thread_layer5_out_78_V_ap_vld() {
    layer5_out_78_V_ap_vld = dense_large_U0_res_78_V_ap_vld.read();
}

void window::thread_layer5_out_79_V() {
    layer5_out_79_V = dense_large_U0_res_79_V.read();
}

void window::thread_layer5_out_79_V_ap_vld() {
    layer5_out_79_V_ap_vld = dense_large_U0_res_79_V_ap_vld.read();
}

void window::thread_layer5_out_7_V() {
    layer5_out_7_V = dense_large_U0_res_7_V.read();
}

void window::thread_layer5_out_7_V_ap_vld() {
    layer5_out_7_V_ap_vld = dense_large_U0_res_7_V_ap_vld.read();
}

void window::thread_layer5_out_80_V() {
    layer5_out_80_V = dense_large_U0_res_80_V.read();
}

void window::thread_layer5_out_80_V_ap_vld() {
    layer5_out_80_V_ap_vld = dense_large_U0_res_80_V_ap_vld.read();
}

void window::thread_layer5_out_81_V() {
    layer5_out_81_V = dense_large_U0_res_81_V.read();
}

void window::thread_layer5_out_81_V_ap_vld() {
    layer5_out_81_V_ap_vld = dense_large_U0_res_81_V_ap_vld.read();
}

void window::thread_layer5_out_82_V() {
    layer5_out_82_V = dense_large_U0_res_82_V.read();
}

void window::thread_layer5_out_82_V_ap_vld() {
    layer5_out_82_V_ap_vld = dense_large_U0_res_82_V_ap_vld.read();
}

void window::thread_layer5_out_83_V() {
    layer5_out_83_V = dense_large_U0_res_83_V.read();
}

void window::thread_layer5_out_83_V_ap_vld() {
    layer5_out_83_V_ap_vld = dense_large_U0_res_83_V_ap_vld.read();
}

void window::thread_layer5_out_84_V() {
    layer5_out_84_V = dense_large_U0_res_84_V.read();
}

void window::thread_layer5_out_84_V_ap_vld() {
    layer5_out_84_V_ap_vld = dense_large_U0_res_84_V_ap_vld.read();
}

void window::thread_layer5_out_85_V() {
    layer5_out_85_V = dense_large_U0_res_85_V.read();
}

void window::thread_layer5_out_85_V_ap_vld() {
    layer5_out_85_V_ap_vld = dense_large_U0_res_85_V_ap_vld.read();
}

void window::thread_layer5_out_86_V() {
    layer5_out_86_V = dense_large_U0_res_86_V.read();
}

void window::thread_layer5_out_86_V_ap_vld() {
    layer5_out_86_V_ap_vld = dense_large_U0_res_86_V_ap_vld.read();
}

void window::thread_layer5_out_87_V() {
    layer5_out_87_V = dense_large_U0_res_87_V.read();
}

void window::thread_layer5_out_87_V_ap_vld() {
    layer5_out_87_V_ap_vld = dense_large_U0_res_87_V_ap_vld.read();
}

void window::thread_layer5_out_88_V() {
    layer5_out_88_V = dense_large_U0_res_88_V.read();
}

void window::thread_layer5_out_88_V_ap_vld() {
    layer5_out_88_V_ap_vld = dense_large_U0_res_88_V_ap_vld.read();
}

void window::thread_layer5_out_89_V() {
    layer5_out_89_V = dense_large_U0_res_89_V.read();
}

void window::thread_layer5_out_89_V_ap_vld() {
    layer5_out_89_V_ap_vld = dense_large_U0_res_89_V_ap_vld.read();
}

void window::thread_layer5_out_8_V() {
    layer5_out_8_V = dense_large_U0_res_8_V.read();
}

void window::thread_layer5_out_8_V_ap_vld() {
    layer5_out_8_V_ap_vld = dense_large_U0_res_8_V_ap_vld.read();
}

void window::thread_layer5_out_90_V() {
    layer5_out_90_V = dense_large_U0_res_90_V.read();
}

void window::thread_layer5_out_90_V_ap_vld() {
    layer5_out_90_V_ap_vld = dense_large_U0_res_90_V_ap_vld.read();
}

void window::thread_layer5_out_91_V() {
    layer5_out_91_V = dense_large_U0_res_91_V.read();
}

void window::thread_layer5_out_91_V_ap_vld() {
    layer5_out_91_V_ap_vld = dense_large_U0_res_91_V_ap_vld.read();
}

void window::thread_layer5_out_92_V() {
    layer5_out_92_V = dense_large_U0_res_92_V.read();
}

void window::thread_layer5_out_92_V_ap_vld() {
    layer5_out_92_V_ap_vld = dense_large_U0_res_92_V_ap_vld.read();
}

void window::thread_layer5_out_93_V() {
    layer5_out_93_V = dense_large_U0_res_93_V.read();
}

void window::thread_layer5_out_93_V_ap_vld() {
    layer5_out_93_V_ap_vld = dense_large_U0_res_93_V_ap_vld.read();
}

void window::thread_layer5_out_94_V() {
    layer5_out_94_V = dense_large_U0_res_94_V.read();
}

void window::thread_layer5_out_94_V_ap_vld() {
    layer5_out_94_V_ap_vld = dense_large_U0_res_94_V_ap_vld.read();
}

void window::thread_layer5_out_95_V() {
    layer5_out_95_V = dense_large_U0_res_95_V.read();
}

void window::thread_layer5_out_95_V_ap_vld() {
    layer5_out_95_V_ap_vld = dense_large_U0_res_95_V_ap_vld.read();
}

void window::thread_layer5_out_96_V() {
    layer5_out_96_V = dense_large_U0_res_96_V.read();
}

void window::thread_layer5_out_96_V_ap_vld() {
    layer5_out_96_V_ap_vld = dense_large_U0_res_96_V_ap_vld.read();
}

void window::thread_layer5_out_97_V() {
    layer5_out_97_V = dense_large_U0_res_97_V.read();
}

void window::thread_layer5_out_97_V_ap_vld() {
    layer5_out_97_V_ap_vld = dense_large_U0_res_97_V_ap_vld.read();
}

void window::thread_layer5_out_98_V() {
    layer5_out_98_V = dense_large_U0_res_98_V.read();
}

void window::thread_layer5_out_98_V_ap_vld() {
    layer5_out_98_V_ap_vld = dense_large_U0_res_98_V_ap_vld.read();
}

void window::thread_layer5_out_99_V() {
    layer5_out_99_V = dense_large_U0_res_99_V.read();
}

void window::thread_layer5_out_99_V_ap_vld() {
    layer5_out_99_V_ap_vld = dense_large_U0_res_99_V_ap_vld.read();
}

void window::thread_layer5_out_9_V() {
    layer5_out_9_V = dense_large_U0_res_9_V.read();
}

void window::thread_layer5_out_9_V_ap_vld() {
    layer5_out_9_V_ap_vld = dense_large_U0_res_9_V_ap_vld.read();
}

void window::thread_relu_U0_ap_continue() {
    relu_U0_ap_continue = (ap_sync_channel_write_layer4_out_35_V.read() & ap_sync_channel_write_layer4_out_34_V.read() & ap_sync_channel_write_layer4_out_33_V.read() & ap_sync_channel_write_layer4_out_32_V.read() & ap_sync_channel_write_layer4_out_31_V.read() & ap_sync_channel_write_layer4_out_30_V.read() & ap_sync_channel_write_layer4_out_29_V.read() & ap_sync_channel_write_layer4_out_28_V.read() & ap_sync_channel_write_layer4_out_27_V.read() & ap_sync_channel_write_layer4_out_26_V.read() & ap_sync_channel_write_layer4_out_25_V.read() & ap_sync_channel_write_layer4_out_24_V.read() & ap_sync_channel_write_layer4_out_23_V.read() & ap_sync_channel_write_layer4_out_22_V.read() & ap_sync_channel_write_layer4_out_21_V.read() & ap_sync_channel_write_layer4_out_20_V.read() & ap_sync_channel_write_layer4_out_19_V.read() & ap_sync_channel_write_layer4_out_18_V.read() & ap_sync_channel_write_layer4_out_17_V.read() & ap_sync_channel_write_layer4_out_16_V.read() & ap_sync_channel_write_layer4_out_15_V.read() & ap_sync_channel_write_layer4_out_14_V.read() & ap_sync_channel_write_layer4_out_13_V.read() & ap_sync_channel_write_layer4_out_12_V.read() & ap_sync_channel_write_layer4_out_11_V.read() & ap_sync_channel_write_layer4_out_10_V.read() & ap_sync_channel_write_layer4_out_9_V.read() & ap_sync_channel_write_layer4_out_8_V.read() & ap_sync_channel_write_layer4_out_7_V.read() & ap_sync_channel_write_layer4_out_6_V.read() & ap_sync_channel_write_layer4_out_5_V.read() & ap_sync_channel_write_layer4_out_4_V.read() & ap_sync_channel_write_layer4_out_3_V.read() & ap_sync_channel_write_layer4_out_2_V.read() & ap_sync_channel_write_layer4_out_1_V.read() & ap_sync_channel_write_layer4_out_0_V.read());
}

void window::thread_relu_U0_ap_start() {
    relu_U0_ap_start = (layer2_out_0_V_empty_n.read() & layer2_out_1_V_empty_n.read() & layer2_out_2_V_empty_n.read() & layer2_out_3_V_empty_n.read() & layer2_out_4_V_empty_n.read() & layer2_out_5_V_empty_n.read() & layer2_out_6_V_empty_n.read() & layer2_out_7_V_empty_n.read() & layer2_out_8_V_empty_n.read() & layer2_out_9_V_empty_n.read() & layer2_out_10_V_empty_n.read() & layer2_out_11_V_empty_n.read() & layer2_out_12_V_empty_n.read() & layer2_out_13_V_empty_n.read() & layer2_out_14_V_empty_n.read() & layer2_out_15_V_empty_n.read() & layer2_out_16_V_empty_n.read() & layer2_out_17_V_empty_n.read() & layer2_out_18_V_empty_n.read() & layer2_out_19_V_empty_n.read() & layer2_out_20_V_empty_n.read() & layer2_out_21_V_empty_n.read() & layer2_out_22_V_empty_n.read() & layer2_out_23_V_empty_n.read() & layer2_out_24_V_empty_n.read() & layer2_out_25_V_empty_n.read() & layer2_out_26_V_empty_n.read() & layer2_out_27_V_empty_n.read() & layer2_out_28_V_empty_n.read() & layer2_out_29_V_empty_n.read() & layer2_out_30_V_empty_n.read() & layer2_out_31_V_empty_n.read() & layer2_out_32_V_empty_n.read() & layer2_out_33_V_empty_n.read() & layer2_out_34_V_empty_n.read() & layer2_out_35_V_empty_n.read());
}

void window::thread_relu_U0_start_full_n() {
    relu_U0_start_full_n = ap_const_logic_1;
}

void window::thread_relu_U0_start_write() {
    relu_U0_start_write = ap_const_logic_0;
}

void window::thread_start_for_window_entry163_U0_din() {
    start_for_window_entry163_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void window::thread_window_entry163_U0_ap_continue() {
    window_entry163_U0_ap_continue = ap_const_logic_1;
}

void window::thread_window_entry163_U0_ap_start() {
    window_entry163_U0_ap_start = start_for_window_entry163_U0_empty_n.read();
}

void window::thread_window_entry163_U0_start_full_n() {
    window_entry163_U0_start_full_n = ap_const_logic_1;
}

void window::thread_window_entry163_U0_start_write() {
    window_entry163_U0_start_write = ap_const_logic_0;
}

void window::thread_window_entry3_U0_ap_continue() {
    window_entry3_U0_ap_continue = ap_const_logic_1;
}

void window::thread_window_entry3_U0_ap_start() {
    window_entry3_U0_ap_start = (ap_start.read() & (ap_sync_reg_window_entry3_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

}

