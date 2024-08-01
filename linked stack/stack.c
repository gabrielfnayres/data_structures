#include "stack.h"


Node* createNode(){

    Node* node;
    node->value = 0;
    node->next = NULL;
    return node;
}

Stack* createStack(){

    Stack* s;
    s->size = 0; 
    s->top = NULL;

    return s;
}

int empty(Stack* s){

    if(s->size == 0) return 1;
    return 0;

}

int full(Stack* s){

    if(s->size - 1 == s->top) return 1;
    return 0;

}


int size(Stack* s){

    return s->size;
}

int getTop(Stack* s){
    return s->top->value;
}


int push(Stack* s, int data){

    Node* newNode;
    newNode->value = data;
    newNode->next = NULL;
    s->top = newNode;
    s->size++;

    return 1;

}

int pop(Stack* s){


    s->top = NULL;
    s->size--;
    return 1;

}