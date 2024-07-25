#ifndef DOUBLE_LINKED_LIST

#include <stdio.h>
#define MAXTAM 100000
#define DOUBLE_LINKED_LIST


typedef struct{

    int content;
    Node* next;
    Node* last;


}Node;


typedef struct{

    Node* head;
    Node* tail;
    int size;

}DoubleLinkedList;


DoubleLinkedList* createDll();

int empty(DoubleLinkedList* dll);

int full(DoubleLinkedList* dll);

int getPos(DoubleLinkedList* dll, int data);

int push_back(DoubleLinkedList* dll, int data);

int push_mid(DoubleLinkedList *dll, int pos, int data);

int push_front(DoubleLinkedList* dll, int data);

int remove_front(DoubleLinkedList* dll);

int remove_back(DoubleLinkedList* dll);

int remove_mid(DoubleLinkedList* dll, int pos)

#endif