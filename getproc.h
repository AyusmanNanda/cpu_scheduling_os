#ifndef GETPROC_H
#define GETPROC_H

struct proc {
    int proc_id;  // process id
    int a_time;   // arrival time
    int b_time;   // burst time
    int c_time;   // completion time
    int w_time;   // waiting time
    int ta_time;  // turnaround time
    int completed; // This is used for some alog like SJFS where we mark is the process is completed using 0 or 1
};

// Generate random processes
void getProc(struct proc *processes, int count);

#endif