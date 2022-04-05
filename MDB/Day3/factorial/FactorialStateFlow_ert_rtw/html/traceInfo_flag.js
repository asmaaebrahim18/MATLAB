function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["FactorialStateFlow.c:91c52"]=1;
    this.traceFlag["FactorialStateFlow.c:91c64"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["FactorialStateFlow.c:90"]=1;
    this.lineTraceFlag["FactorialStateFlow.c:91"]=1;
    this.lineTraceFlag["FactorialStateFlow.c:94"]=1;
    this.lineTraceFlag["FactorialStateFlow.c:103"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
