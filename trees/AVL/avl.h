#include <stdio.h>


typedef struct{

    int data;
    Node* left;
    Node* right;
    int bal;

} Node;


typedef Node *AVL;


void right_rot(AVL* t);

void left_rot(AVL* t);
