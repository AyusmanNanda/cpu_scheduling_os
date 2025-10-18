#include <stdio.h>
#include <stdlib.h>
#include "fcfs.h"

int compareArrivalTime(const void *lhs, const void *rhs) {
    const struct proc *p1 = (const struct proc *)lhs;
    const struct proc *p2 = (const struct proc *)rhs;
    return (p1->a_time > p2->a_time) - (p1->a_time < p2->a_time);
}


int fcfs(int proc_count, struct proc process[]){	
    printf("Process before sorting: \n");
    for(int i = 0; i < proc_count; i++){
        printf("process no %d : process id [%d], arrival time [%d]\n", 
               i, process[i].proc_id, process[i].a_time); // print processes before sorting
    }

    // Using quick sort
    qsort(process, proc_count, sizeof(struct proc), compareArrivalTime);

    // Print after sorting
    printf("\nProcess after sorting by arrival time:\n");
    for(int i = 0; i < proc_count; i++){
        printf("process no %d : process id [%d], arrival time [%d]\n", 
               i, process[i].proc_id, process[i].a_time); // print processes after sorting
    }

    return 0;
}
