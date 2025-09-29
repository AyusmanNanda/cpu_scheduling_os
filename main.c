#include <stdio.h>
#include "algo.h"

#define FCFS

int main(void){
		printf("Enter the number of processes: ");
		int proc_count;
		scanf("%d", &proc_count);
		fcfs(proc_count);
}
