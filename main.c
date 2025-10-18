#include <stdio.h>
#include <stdlib.h>

#define ALGO  // Define the algorithim in capital eg. FCFS SJFS etc.

/*Information about the native library algo.h and procgen.h 

algo.h : This is a file use to make the main.c dynamic and compatable with all
		 Algorithims so all the algorithims can be compiled with a single main.c file


procgen.h: This header provides separated logic for randomly generating process 
		   Which reduces the need to repeteadely write same logic in all files .

		   TODO: User input will be added in future . so that use can choose the properties of the processes.

NOTE : There are two ways we can define a thing in c . 
1. use #define 
2. pass -D<> as a compiler flag;


*/
#include "algo.h" // Determines additional imports
#include "procgen.h" // Generates random process 

int main(void){
		struct proc *processes = NULL;
		printf("Enter the number of processes: ");
		int proc_count;
		scanf("%d", &proc_count);
		processes = malloc(proc_count * sizeof(struct proc)); // create an array of struct with the desired no. proc_count
		genProc(processes, proc_count); // fill the structs with proc gen logic

		#ifdef schedule
    		schedule(proc_count, processes); // pass the data to the scheduling algorithim if schedule is define . so there is no error about implicit declation of function. 
		#else
    		#error "No scheduling algorithm defined. Use -D<ALGO> or #define in main.c"
		#endif 
		free(processes);
		return 0;

}
