#ifndef PROCGEN_H
#define PROCGEN_H

struct proc {
    int proc_id;  // process id
    int a_time;   // arrival time
    int b_time;   // burst time
    int c_time;   // completion time
    int w_time;   // waiting time
    int ta_time;  // turnaround time
};

// Generate random processes
void genProc(struct proc *processes, int count);

#endif
