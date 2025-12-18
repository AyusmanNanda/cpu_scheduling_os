#include <stdio.h>
#include "getproc.h"


void getProc(struct proc *processes, int count){
    printf("Enter Values: ");
    for(int i = 0; i < count; i++){
        printf("Process[%d]: arrival_time burst_time\n",i);
        scanf("%d %d", &processes[i].a_time, &processes[i].b_time);
        // Logic to handle other values
        
    }
}

