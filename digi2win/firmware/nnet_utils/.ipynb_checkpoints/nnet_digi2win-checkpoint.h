#ifndef NNET_DIGI2WIN_H_
#define NNET_DIGI2WIN_H_

#include "nnet_common.h"
#include "nnet_helpers.h"
#include <math.h>

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
  return 30 * layer + 10 * roll + strip - 41;
}
template<class data_T>
int* findMax(data_T digi[N_INPUT_0]) {
    //#pragma HLS PIPELINE II=1 rewind
    #pragma HLS DATAFLOW
    int max_coor[3] = {0, 0, 0};
    for (int ieta = 1; ieta <= 8; ++ieta) {
    #pragma HLS UNROLL
        for (int nstrip = 2; nstrip <= 383; ++nstrip) {
            int current_nhits=0;
            for (int win_nstrip = -1; win_nstrip < 2; ++win_nstrip) {
            #pragma HLS UNROLL
                for (int nlayer = 1; nlayer <= 6; ++nlayer) { 
                #pragma HLS UNROLL
                    int index = get3DImageIndex(nlayer, ieta, nstrip+win_nstrip);
                    if (digi[index]) current_nhits++;
                }
            }
            if (current_nhits > max_coor[0]){
                max_coor[0] = current_nhits;
                max_coor[1] = nstrip;
                max_coor[2] = ieta;
            }
        } // strip
    } // eta partition
    return max_coor;
}
    
    
template<class data_T, class res_T>
void digi2win(
    data_T digi[N_INPUT_0],
    res_T layer_1_out[N_INPUT_1_1],
    int max_coor[3]// [ieta, strip]
) {
    //#pragma HLS PIPELINE II=1 rewind
    #pragma HLS ARRAY_PARTITION variable=layer_1_out complete
    #pragma HLS DATAFLOW
    if (max_coor[0] > 0) {
        // found max strip window center
   
        for (int win_ieta = 1; win_ieta < 4; ++win_ieta) {
            #pragma HLS UNROLL
            for (int win_nstrip = 1; win_nstrip < 11; ++win_nstrip) {
                #pragma HLS UNROLL
                for (int win_nlayer = 1; win_nlayer < 7; ++win_nlayer) {
                    #pragma HLS UNROLL
                    int test_ieta = max_coor[2] + win_ieta -1;
                    int test_nstrip = max_coor[1] + win_nstrip - 5;
                    int index_win = get3DImageIndexWindow(win_nlayer, win_ieta, win_nstrip);
                    bool has_hit = false;
                    if ((test_ieta > 0 and test_ieta < 9) and
                        (test_nstrip > 0 and test_nstrip < 385) ) {
                        int index = get3DImageIndex(win_nlayer, test_ieta, test_nstrip);
                        has_hit = digi[index];
                    }
                    layer_1_out[index_win] = float(has_hit);
                    }
                }
            }
        }
    }
}

#endif
