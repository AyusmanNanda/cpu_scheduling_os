#include <stdlib.h>
#include <time.h>
#include "procgen.h"

/* This file is here to geneate process randomly .
   if user chooses to randomly generate process.
*/


void genProc(struct proc *processes, int count) {
    srand(time(NULL)); // seed RNG
    for (int i = 0; i < count; i++) {
        processes[i].proc_id = i + 1;
        processes[i].a_time = rand() % 101;      // arrival time 0-100
        processes[i].b_time = (rand() % 10) + 1; // burst time 0-10
        processes[i].c_time = 0;
        processes[i].w_time = 0;
        processes[i].ta_time = 0;
        
    }
}
