
#include <stdio.h>
#include <stdlib.h>

#include "fcfs.h"

int compareByAT(const void *a, const void *b){
	const struct proc *p1 = (const struct proc *)a;
    const struct proc *p2 = (const struct proc *)b;
    if (p1->a_time < p2->a_time) return -1;
    else if (p1->a_time > p2->a_time) return 1;
    else return 0;


}

int fcfs(int proc_count, struct proc process[]){	
		printf("Process before sorting: \n");
		for(int i = 0; i < proc_count; i++){
				printf("process no %d : process id [%d], arival time [%d]\n", i, process[i].proc_id, process[i].a_time);
		}
		// Using quick sort
		qsort(process, proc_count, sizeof(struct proc), compareByAT);

		// Print after sorting
    	printf("\nProcess after sorting by arrival time:\n");
    	for(int i = 0; i < proc_count; i++){
        	printf("process no %d : process id [%d], arrival time [%d]\n", i, process[i].proc_id, process[i].a_time);
    	}

		return 0;

}
