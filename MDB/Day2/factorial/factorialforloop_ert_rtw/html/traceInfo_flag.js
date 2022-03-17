function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["factorialforloop.c:41c29"]=1;
    this.traceFlag["factorialforloop.c:41c66"]=1;
    this.traceFlag["factorialforloop.c:46c42"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["factorialforloop.c:41"]=1;
    this.lineTraceFlag["factorialforloop.c:46"]=1;
    this.lineTraceFlag["factorialforloop.c:51"]=1;
    this.lineTraceFlag["factorialforloop.c:78"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
