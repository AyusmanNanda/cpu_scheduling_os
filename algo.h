#ifndef ALGO_H
#define ALGO_H

/* This file is here to help choose the scheduling also dynamically. 
   There are two methods 
   1. Either use #define <ALGO> eg. #define SJFS
   3. Or pass compiler flags while compiling -D<ALGO> eg. -DFCFS

*/

#if defined(FCFS)
    #include "fcfs.h"
    #define schedule fcfs
#elif defined(SJFSP)
    #include "sjfs.h"
    #define schedule sjfsP
#elif defined(SJFSNP)
    #include "sjfs.h"
    #define schedule sjfsNP
#else 
    //ERROR: DO NOTHING
#endif

#endif // ALGO_H
