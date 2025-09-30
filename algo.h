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
#endif
#ifdef SJFS
    #include "sjfs.h"
    #define schedule sjfs
#endif
#ifdef RR
    #include "rr.h"
    #define schedule rr
#endif
#ifdef PRIORITY
    #include "priority.h"
    #define schedule priority
#endif

#endif // ALGO_H
