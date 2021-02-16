//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "window.h"
#include "parameters.h"

void window(
    bool digi[N_INPUT_0],//6*8*384=18432=layer*ieta*strip
    layer5_t layer5_out[N_LAYER_5],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=digi complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=digi,layer5_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_0;
    const_size_out_1 = N_LAYER_5;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 6480>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 36>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 6480>(w5, "w5.txt");
        nnet::load_weights_from_txt<model_default_t, 180>(b5, "b5.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers
    
    /*********digi2win*********/
    input_t dense_1_input[N_INPUT_1_1];
    #pragma HLS ARRAY_PARTITION variable=dense_1_input complete dim=0
    int* max_coor = nnet::findMax(digi);
    nnet::digi2win(digi, dense_1_input, max_coor);
    /**************************/

    layer2_t layer2_out[N_LAYER_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::dense_large<input_t, layer2_t, config2>(dense_1_input, layer2_out, w2, b2);

    layer4_t layer4_out[N_LAYER_2];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::relu<layer2_t, layer4_t, relu_config4>(layer2_out, layer4_out);

    nnet::dense_large<layer4_t, layer5_t, config5>(layer4_out, layer5_out, w5, b5);

}

