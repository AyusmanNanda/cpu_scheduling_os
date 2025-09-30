#include <stdio.h>

#define FCFS

#include "algo.h"
#include "procgen.h"


int main(void){
		printf("Enter the number of processes: ");
		int proc_count;
		scanf("%d", &proc_count);
		struct proc processes[proc_count];
		genProc(processes, proc_count);
		schedule(proc_count, processes);
}
