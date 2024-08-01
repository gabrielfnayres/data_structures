#ifndef STACK_H

#include <stdio.h>
#include <stdlib.h>

#define STACK_H

typedef struct{

    int value;
    Node* next;

}Node;

typedef struct{

    Node* top;
    int size;
    
}Stack;

Node* createNode();

Stack* createStack();

int empty(Stack* s);

int full(Stack* s);

int size(Stack* s);

int getTop(Stack* s);

int push(Stack* s, int data);

int pop(Stack* s);

#endif