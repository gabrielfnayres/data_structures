#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100000

typedef struct Node Node;

struct Node{

    int content;
    Node* next;
    
};

typedef struct{

    Node* head;
    int size;
    
}LinkedList;


Node* createNode();

void printLL(LinkedList* ll);

void setData(Node* node, int data);

LinkedList* createLinkedList();

int empty(LinkedList* ll);

int full(LinkedList* ll);

int getElement(LinkedList* ll, int pos);

int getPos(LinkedList *ll, int data);

int getSize(LinkedList* ll);

int change_element(LinkedList *ll, int pos, int data);

int insert(LinkedList* ll, int pos, int data);

int removeel(LinkedList* ll, int pos);

int push_back(LinkedList* ll, int data);

int push_mid(LinkedList *ll, int pos, int data);

int push_front(LinkedList* ll, int data);

#endif