#ifndef ALGO_H
#define ALGO_H

/* This file is here to help choose the scheduling also dynamically. 
   There are two methods 
   1. Either use #define <ALGO> eg. #define SJFS
   3. Or pass compiler flags while compiling -D<ALGO> eg. -DFCFS

*/

#ifdef FCFS
    #include "fcfs.h"
    #define schedule fcfs

#elif defined(SJFS)
    #include "sjfs.h"
    #define schedule sjfs

#elif defined(RR)
    #include "rr.h"
    #define schedule rr

#elif defined(PRIORITY)
    #include "priority.h"
    #define schedule priority

#else
    #error "No scheduling algorithm defined. Use -DFCFS, -DSJFS, -DRR, etc."
#endif

#endif // ALGO_H
