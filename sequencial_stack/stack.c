#include "stack.h"


Stack* createStack(){

    Stack* s;
    s->max_tam = 10000;
    s->data = (int*) malloc(s->max_tam*sizeof(int));
    s->top = -1;
}

int empty(Stack* s){

    if(s->top == -1) return 1;
    return 0;
}

int full(Stack* s){
    if(s->top == s->max_tam - 1) return 1;
    return 0;
}

int getTop(Stack* s){

    if(empty(s) == 0){
        return -1;
    }

    return s->data[s->top];
}

int size(Stack* s){

    if (empty(s) == 0) return -1;

    return s->top;

}


int push(Stack* s, int data){

    s->data = (int*) realloc(s->data, sizeof(s->data) + sizeof(int));
    s->top++;
    s->data[s->top] = data;
    return 1;

}

int pop(Stack* s){

    int value = s->data[s->top];
    s->data = (int*) realloc(s->data, sizeof(s->data) - sizeof(int));
    s->top--;
    return value;
}