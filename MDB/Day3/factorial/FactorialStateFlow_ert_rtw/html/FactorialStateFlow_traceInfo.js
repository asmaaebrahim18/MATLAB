function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "FactorialStateFlow"};
	this.sidHashMap["FactorialStateFlow"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "FactorialStateFlow:1"};
	this.sidHashMap["FactorialStateFlow:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "FactorialStateFlow:2"};
	this.sidHashMap["FactorialStateFlow:2"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "FactorialStateFlow:1"};
	this.sidHashMap["FactorialStateFlow:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "FactorialStateFlow:4"};
	this.sidHashMap["FactorialStateFlow:4"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "FactorialStateFlow:5"};
	this.sidHashMap["FactorialStateFlow:5"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "FactorialStateFlow:3"};
	this.sidHashMap["FactorialStateFlow:3"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "FactorialStateFlow:1:4"};
	this.sidHashMap["FactorialStateFlow:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "FactorialStateFlow:1:5"};
	this.sidHashMap["FactorialStateFlow:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "FactorialStateFlow:1:6"};
	this.sidHashMap["FactorialStateFlow:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "FactorialStateFlow:1:7"};
	this.sidHashMap["FactorialStateFlow:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "FactorialStateFlow:1:8"};
	this.sidHashMap["FactorialStateFlow:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "FactorialStateFlow:1:9"};
	this.sidHashMap["FactorialStateFlow:1:9"] = {rtwname: "<S1>:9"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
