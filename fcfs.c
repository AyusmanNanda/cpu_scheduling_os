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


int fcfs(int proc_count){
		srand(time(NULL));	
		struct proc process[proc_count];
		for(int i = 0; i < proc_count ; i++){
				process[i].proc_id = i + 1;
				process[i].a_time = rand() % 101;
		}
		for(int i = 0; i < proc_count; i++){
				printf("process no %d : process id [%d], arival time [%d]\n", i, process[i].proc_id, process[i].a_time);
		}
		return 0;

}
