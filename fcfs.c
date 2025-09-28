
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "fcfs.h"

struct proc{
		int proc_id;
		int a_time;
		int b_time;
		int c_time;
		int w_time;
		int ta_time;
};

int compareByAT(const void *a, const void *b){
	const struct proc *p1 = (const struct proc *)a;
    const struct proc *p2 = (const struct proc *)b;
    if (p1->a_time < p2->a_time) return -1;
    else if (p1->a_time > p2->a_time) return 1;
    else return 0;


}

int fcfs(int proc_count){
		srand(time(NULL)); //seed 	
		
		// create a bunch of process
		struct proc process[proc_count];
		for(int i = 0; i < proc_count ; i++){
				process[i].proc_id = i + 1;
				process[i].a_time = rand() % 101;
		}
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
