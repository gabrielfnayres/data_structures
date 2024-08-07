#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 10000

typedef struct Queue Queue;

struct Queue{
    int *data;
    int begin;
    int end;
    int size;
};

Queue* createQueue();

int empty(Queue* q);

int full(Queue* q);

void enqueue(Queue* q, int data);

void dequeue(Queue* q);

int getSize(Queue* q);

#endif