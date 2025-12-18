#ifndef SJFS_H
#define SJFS_H

#include "proc.h" // Defined to be able to use the procgen logic.

int sjfsP(int proc_count, struct proc process[]);   // Definition for preemptive
int sjfsNP(int proc_count, struct proc process[]); // definition for non-preemptive

#endif // SJFS_H