#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 180
#define N_LAYER_2 58
#define N_LAYER_5 180

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<12,8> model_default_t;
typedef ap_fixed<12,8> input_t;
typedef ap_fixed<12,8> layer2_t;
typedef ap_fixed<12,8> layer4_t;
typedef ap_fixed<12,8> layer5_t;

#endif
