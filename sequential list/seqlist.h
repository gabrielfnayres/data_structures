#ifndef SEQLIST_H
#define SEQLIST_H

#include <stdio.h>
#define MAXTAM 1000

typedef struct {
    int value;
}ItemType;

typedef struct{

    ItemType data[MAXTAM];
    int first, last;

}List;


List* createList(){
    List* newList = malloc(sizeof(List));
    return newList;
}





#endif