#include "avl.h"

void right_rot(AVL* t){
    AVL u;
    u = (*t)->left;
    (*t)->left = u->right;
    u->right = *t;
    *t = u;
}

void left_rot(AVL* t){
    AVL u;
    u = (*t)->right;
    (*t)->right = u->left;
    u->left = *t;
    *t = u;
}