set moduleName findMax_bool_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {findMax<bool>}
set C_modelType { void 0 }
set C_modelArgList {
	{ digi int 18432 regular {fifo 0}  }
	{ max_0 int 32 regular {pointer 1}  }
	{ max_1 int 9 regular {pointer 1}  }
	{ max_2 int 6 regular {pointer 1}  }
	{ digi_out int 18432 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "digi", "interface" : "fifo", "bitwidth" : 18432, "direction" : "READONLY"} , 
 	{ "Name" : "max_0", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "max_1", "interface" : "wire", "bitwidth" : 9, "direction" : "WRITEONLY"} , 
 	{ "Name" : "max_2", "interface" : "wire", "bitwidth" : 6, "direction" : "WRITEONLY"} , 
 	{ "Name" : "digi_out", "interface" : "fifo", "bitwidth" : 18432, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ digi_dout sc_in sc_lv 18432 signal 0 } 
	{ digi_empty_n sc_in sc_logic 1 signal 0 } 
	{ digi_read sc_out sc_logic 1 signal 0 } 
	{ max_0 sc_out sc_lv 32 signal 1 } 
	{ max_1 sc_out sc_lv 9 signal 2 } 
	{ max_2 sc_out sc_lv 6 signal 3 } 
	{ digi_out_din sc_out sc_lv 18432 signal 4 } 
	{ digi_out_full_n sc_in sc_logic 1 signal 4 } 
	{ digi_out_write sc_out sc_logic 1 signal 4 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ max_0_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ max_1_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ max_2_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
}
set NewPortList {[ 
	{ "name": "digi_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":18432, "type": "signal", "bundle":{"name": "digi", "role": "dout" }} , 
 	{ "name": "digi_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "digi", "role": "empty_n" }} , 
 	{ "name": "digi_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "digi", "role": "read" }} , 
 	{ "name": "max_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_0", "role": "default" }} , 
 	{ "name": "max_1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "max_1", "role": "default" }} , 
 	{ "name": "max_2", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "max_2", "role": "default" }} , 
 	{ "name": "digi_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":18432, "type": "signal", "bundle":{"name": "digi_out", "role": "din" }} , 
 	{ "name": "digi_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "digi_out", "role": "full_n" }} , 
 	{ "name": "digi_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "digi_out", "role": "write" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "max_0_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "max_0", "role": "ap_vld" }} , 
 	{ "name": "max_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "max_1", "role": "ap_vld" }} , 
 	{ "name": "max_2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "max_2", "role": "ap_vld" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "findMax_bool_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "79464", "EstimateLatencyMax" : "79464",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "findMax_Block_codeRe_U0"}],
		"OutputProcess" : [
			{"ID" : "1", "Name" : "findMax_Block_codeRe_U0"}],
		"Port" : [
			{"Name" : "digi", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "findMax_Block_codeRe_U0", "Port" : "scalar_digi"}]},
			{"Name" : "max_0", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "findMax_Block_codeRe_U0", "Port" : "max_0"}]},
			{"Name" : "max_1", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "findMax_Block_codeRe_U0", "Port" : "max_1"}]},
			{"Name" : "max_2", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "findMax_Block_codeRe_U0", "Port" : "max_2"}]},
			{"Name" : "digi_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "findMax_Block_codeRe_U0", "Port" : "digi_out"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.findMax_Block_codeRe_U0", "Parent" : "0",
		"CDFG" : "findMax_Block_codeRe",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "79464", "EstimateLatencyMax" : "79464",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "scalar_digi", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "scalar_digi_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "digi_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "digi_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "max_0", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "max_1", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "max_2", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	findMax_bool_s {
		digi {Type I LastRead 0 FirstWrite -1}
		max_0 {Type O LastRead -1 FirstWrite 2}
		max_1 {Type O LastRead -1 FirstWrite 2}
		max_2 {Type O LastRead -1 FirstWrite 2}
		digi_out {Type O LastRead -1 FirstWrite 0}}
	findMax_Block_codeRe {
		scalar_digi {Type I LastRead 0 FirstWrite -1}
		digi_out {Type O LastRead -1 FirstWrite 0}
		max_0 {Type O LastRead -1 FirstWrite 2}
		max_1 {Type O LastRead -1 FirstWrite 2}
		max_2 {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "79464", "Max" : "79464"}
	, {"Name" : "Interval", "Min" : "79465", "Max" : "79465"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	digi { ap_fifo {  { digi_dout fifo_data 0 18432 }  { digi_empty_n fifo_status 0 1 }  { digi_read fifo_update 1 1 } } }
	max_0 { ap_vld {  { max_0 out_data 1 32 }  { max_0_ap_vld out_vld 1 1 } } }
	max_1 { ap_vld {  { max_1 out_data 1 9 }  { max_1_ap_vld out_vld 1 1 } } }
	max_2 { ap_vld {  { max_2 out_data 1 6 }  { max_2_ap_vld out_vld 1 1 } } }
	digi_out { ap_fifo {  { digi_out_din fifo_data 1 18432 }  { digi_out_full_n fifo_status 0 1 }  { digi_out_write fifo_update 1 1 } } }
}
