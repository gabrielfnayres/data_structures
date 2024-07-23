#ifndef LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100000
#define LINKED_LIST_H

typedef struct{

    int content;
    Node* next;
    
} Node;

typedef struct{

    Node* head;
    int size;
    
}LinkedList;


Node* createNode();

LinkedList* createLinkedList();

int empty(LinkedList* ll);

int full(LinkedList* ll);


int getSize(LinkedList* ll);

int change_element(LinkedList *ll, int pos, int data);

int insert(LinkedList* ll, int pos, int data);

int remove(LinkedList* ll, int pos);




#endif