#include <stdio.h>

typedef struct  
{
    int content;
    Node* left;
    Node* right;
}Node;

typedef Node *Btree;

void create(Btree* t);

int empty(Btree t);

Btree search(Btree t, int data);
