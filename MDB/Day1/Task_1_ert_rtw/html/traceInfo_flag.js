function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Task_1.c:40c41"]=1;
    this.traceFlag["Task_1.c:47c41"]=1;
    this.traceFlag["Task_1.c:54c41"]=1;
    this.traceFlag["Task_1.c:60c27"]=1;
    this.traceFlag["Task_1.c:68c43"]=1;
    this.traceFlag["Task_1.c:85c47"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Task_1.c:40"]=1;
    this.lineTraceFlag["Task_1.c:47"]=1;
    this.lineTraceFlag["Task_1.c:54"]=1;
    this.lineTraceFlag["Task_1.c:60"]=1;
    this.lineTraceFlag["Task_1.c:68"]=1;
    this.lineTraceFlag["Task_1.c:75"]=1;
    this.lineTraceFlag["Task_1.c:85"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
