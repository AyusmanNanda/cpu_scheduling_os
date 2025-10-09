#include <stdio.h>
#include <stdlib.h>

#include "sjfs.h"

int compareBurstTime(const void *lhs, const void *rhs) {
    const struct proc *p1 = (const struct proc *)lhs;
    const struct proc *p2 = (const struct proc *)rhs;
    return (p1->b_time > p2->b_time) - (p1->b_time < p2->b_time);
}

int sjfsNP(int proc_count, struct proc process[]){	
		// create an array for process id to list in 
		int procList[proc_count];
		int a_timeList[proc_count];


		
		for(int i = 0; i < proc_count; i++){
				a_timeList[i] = process[i].a_time;
		}

		
		for(int i = 0; i < proc_count; i++){
				printf("%d \n", a_timeList[i]);
		}
		for(int i = 0; i < proc_count; i++){
				procList[i] = 0;
		}
		int firstBT = process[0].b_time;


		for(int i = 0; i < proc_count; i++){
				printf("%d", procList[i]);
		}
		
		printf("Process before sorting: \n");
    for(int i = 0; i < proc_count; i++){
        printf("process no %d : process id [%d], arrival time [%d], burst time [%d]\n", 
               i, process[i].proc_id, process[i].a_time, process[i].b_time);
    }

    // Using quick sort
    qsort(process, proc_count, sizeof(struct proc), compareBurstTime);

    // Print after sorting
    printf("\nProcess after sorting by burst time:\n");
    for(int i = 0; i < proc_count; i++){
        printf("process no %d : process id [%d], arrival time [%d], burst time [%d]\n", 
               i, process[i].proc_id, process[i].a_time, process[i].b_time);
    }

    return 0;
}

int sjfsP(int proc_count, struct proc process[]);	
