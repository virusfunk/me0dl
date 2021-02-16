set moduleName get3DImageIndex
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {get3DImageIndex}
set C_modelType { int 16 }
set C_modelArgList {
	{ layer int 4 regular  }
	{ roll int 32 regular  }
	{ strip int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "layer", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "roll", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "strip", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 16} ]}
# RTL Port declarations: 
set portNum 5
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ layer sc_in sc_lv 4 signal 0 } 
	{ roll sc_in sc_lv 32 signal 1 } 
	{ strip sc_in sc_lv 32 signal 2 } 
	{ ap_return sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "layer", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "layer", "role": "default" }} , 
 	{ "name": "roll", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "roll", "role": "default" }} , 
 	{ "name": "strip", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "strip", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "get3DImageIndex",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "layer", "Type" : "None", "Direction" : "I"},
			{"Name" : "roll", "Type" : "None", "Direction" : "I"},
			{"Name" : "strip", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	get3DImageIndex {
		layer {Type I LastRead 0 FirstWrite -1}
		roll {Type I LastRead 0 FirstWrite -1}
		strip {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	layer { ap_none {  { layer in_data 0 4 } } }
	roll { ap_none {  { roll in_data 0 32 } } }
	strip { ap_none {  { strip in_data 0 32 } } }
}
set moduleName get3DImageIndex
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {get3DImageIndex}
set C_modelType { int 16 }
set C_modelArgList {
	{ layer int 4 regular  }
	{ roll int 11 regular  }
	{ strip int 11 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "layer", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "roll", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "strip", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 16} ]}
# RTL Port declarations: 
set portNum 5
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ layer sc_in sc_lv 4 signal 0 } 
	{ roll sc_in sc_lv 11 signal 1 } 
	{ strip sc_in sc_lv 11 signal 2 } 
	{ ap_return sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "layer", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "layer", "role": "default" }} , 
 	{ "name": "roll", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "roll", "role": "default" }} , 
 	{ "name": "strip", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "strip", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "get3DImageIndex",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "layer", "Type" : "None", "Direction" : "I"},
			{"Name" : "roll", "Type" : "None", "Direction" : "I"},
			{"Name" : "strip", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	get3DImageIndex {
		layer {Type I LastRead 0 FirstWrite -1}
		roll {Type I LastRead 0 FirstWrite -1}
		strip {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	layer { ap_none {  { layer in_data 0 4 } } }
	roll { ap_none {  { roll in_data 0 11 } } }
	strip { ap_none {  { strip in_data 0 11 } } }
}
