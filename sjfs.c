#include <stdio.h>
#include <stdlib.h>

#include "sjfs.h"

int compareBurstTime(const void *lhs, const void *rhs) {
    const struct proc *p1 = (const struct proc *)lhs;
    const struct proc *p2 = (const struct proc *)rhs;
    return (p1->b_time > p2->b_time) - (p1->b_time < p2->b_time);
}

int sjfsNP(int proc_count, struct proc process[]){	
		
}

int sjfsP(int proc_count, struct proc process[]);	
