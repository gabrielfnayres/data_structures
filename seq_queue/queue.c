#include "queue.h"


Queue* createQueue(){

    Queue *q;
    q->size = 0;
    q->begin = 0;
    q->end = 0;

    return q;
}

int empty(Queue* q){

    if(q->size == 0){
        return 1;
    }

    return 0;
}

int full(Queue *q){

    if(q->size == MAXTAM) return 1;
    return 0;

}

int getSize(Queue *q){
    return q->size;
}

void enqueue(Queue* q, int data){
    int check = full(q);
    if(check == 1) return 0;

    q->end = (q->end + 1) % MAXTAM; 

    q->data[q->end] = data;

    q->size++;
}

void dequeue(Queue *q){

    int check = empty(q);
    if(check == 1) return -1;

    int res = q->begin;
    q->begin = (q->begin + 1) % MAXTAM;
    q->size--;
    

}