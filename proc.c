#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "proc.h"


void getProc(struct proc *processes, int count){
    printf("Enter Values: ");
    for(int i = 0; i < count; i++){
        printf("Process[%d]: arrival_time burst_time\n",i);
        scanf("%d %d", &processes[i].a_time, &processes[i].b_time);
        // Logic to handle other values
        
    }
}

void genProc(struct proc *processes, int count) {
    srand(time(NULL)); // seed RNG
    for (int i = 0; i < count; i++) {
        processes[i].proc_id = i + 1;
        processes[i].a_time = rand() % 101;      // arrival time 0-100
        processes[i].b_time = (rand() % 10) + 1; // burst time 0-10
        processes[i].c_time = 0;
        processes[i].w_time = 0;
        processes[i].ta_time = 0;
		processes[i].completed = 0; // Assign to 0 cause by default the process will be unsorted and we will mark 1 if the process is sorted
        
    }
}