#ifndef STACK_H

#include <stdio.h>
#include <stdlib.h>
#define STACK_H


typedef struct{

    int *data;
    int top;
    int max_tam;

}Stack;


Stack* createStack();

int empty(Stack* s);

int full(Stack* s);

int getTop(Stack *s);

int size(Stack* s);

int push(Stack* s, int data);

int pop(Stack* s);


#endif