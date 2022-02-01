function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/input1 "] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<Root>/input1 "};
	this.rtwnameHashMap["<Root>/input2"] = {sid: "untitled:7"};
	this.sidHashMap["untitled:7"] = {rtwname: "<Root>/input2"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "untitled:6"};
	this.sidHashMap["untitled:6"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/out "] = {sid: "untitled:3"};
	this.sidHashMap["untitled:3"] = {rtwname: "<Root>/out "};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
