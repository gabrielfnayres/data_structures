#include <stdio.h>


typedef struct{

    int content;
    Node* left;
    Node* right;

} Node;



typedef Node *Tree;

void create(Tree* t);

int emptyTree(Tree t);

Tree search(Tree t, int data);

int insertRoot(Tree *t, int data);

int insertRight(Tree t, int father, int son);

int insertLeft(Tree t, int father, int son);

void showPreOrder(Tree t);

void showInOrder(Tree t);

void showPostOrder(Tree t);
