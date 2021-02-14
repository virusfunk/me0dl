#ifndef NNET_DIGI2WIN_H_
#define NNET_DIGI2WIN_H_

#include "nnet_common.h"
#include <math.h>
#include <cstdlib>

namespace nnet {
int get3DImageIndex(int layer, int roll, int strip) {
  // return (8 * 384) * (layer - 1) + 384 * (roll - 1) + (strip - 1);
  // L: layer, R: roll, S: strip
  // index = (8 * 384)*(L - 1) + 384*(R - 1) + (S - 1)
  //       = 3072*L + 384*R + S - (3072 + 384 +1)
  //       = 3072*L + 384*R + S - 3457
  return 3072 * layer + 384 * roll + strip - 3457;
}

int get3DImageIndexWindow(int layer, int roll, int strip) {
  // return 3*10*(layer-1) + 10 * (roll - 1) + (strip - 1) = 30*layer+10*roll+strip-41
  return 30 * layer + 10 * roll + strip - 41;
}

void digi2win(
    bool digi[N_INPUT_0],
    input_t layer_1_out[N_INPUT_1_1]
) {
    int max_ieta = 0;
    int max_nstrip = 0;
    int max_hits = 0;
    for (int ieta = 1; ieta <= 8; ++ieta) {
    #pragma HLS PIPELINE II=1 rewind
        for (int nstrip = 2; nstrip <= 383; ++nstrip) {
        #pragma HLS UNROLL
            int current_nhits=0;
            for (int win_nstrip = -1; win_nstrip < 2; ++win_nstrip) {
            #pragma HLS UNROLL
                for (int nlayer = 1; nlayer <= 6; ++nlayer) {
                #pragma HLS UNROLL
                    int index = get3DImageIndex(nlayer, ieta, nstrip+win_nstrip);
                    if (digi[index]) current_nhits++;
                }
            }
            if (current_nhits > max_hits){
                max_hits = current_nhits;
                max_nstrip = nstrip;
                max_ieta = ieta;
            }
        } // strip
    } // eta partition

    if (max_hits > 0) {

    for (int win_ieta = 1; win_ieta < 4; ++win_ieta) {
        #pragma HLS UNROLL
        #pragma HLS PIPELINE
        for (int win_nstrip = 1; win_nstrip < 11; ++win_nstrip) {
            for (int win_nlayer = 1; win_nlayer < 7; ++win_nlayer) {
                int test_ieta = win_ieta -1;
                int test_nstrip = win_nstrip - 5;
                int index_win = get3DImageIndexWindow(win_nlayer, win_ieta, win_nstrip);
                bool has_hit = false;
                if ((test_ieta > 0 and test_ieta < 9) and
                    (test_nstrip > 0 and test_nstrip < 385) ) {
                    int index = get3DImageIndex(win_nlayer, test_ieta, test_nstrip);
                    has_hit = digi[index];
                    }
                layer_1_out[index_win] = has_hit;
                }
            }
        }
    int position[2] = {max_ieta, max_nstrip};
    }
}
}
#endif
