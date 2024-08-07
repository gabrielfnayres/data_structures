#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 100000

typedef struct Queue Queue;

struct Queue{

    int *data;
    int begin;
    int end;

};




#endif