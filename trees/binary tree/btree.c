#include "btree.h"


void create(Btree* t){
    *t = NULL;
}

int empty(Btree t){
    if(t == NULL) return 1;
    return 0;
}

Btree search(Btree t, int data){
    Btree found;
    int check= empty(t);
    if(check == 1){
        return -1;
    }

    if(t->content == data) return t;

    if(t->content > data){
        found = search(t->left, data);
    } else {
        found = search(t->right, data);
    }
    return found;
}

void show(Btree t){

    if(t != NULL){
        show(t->left);
        printf("%d", t->content);
        show(t->right);
    }
}

int insert(Btree *t, int data){

    Node* newNode, *current, *father;
    newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL) return 0;

    newNode->content = data;
    newNode->left = NULL;
    newNode->right = NULL;

    if(*t == NULL){
        *t = newNode;
        return 1;
    }

    current = (*t);

    while(current != NULL){

        father = current;
        if(father->content > data){
            father = father->left;
        } else {
            father = father->right;
        }
    }
    
    if(father->content > data){
        father->left = newNode;
    } else {
        father->right = newNode;
    }

    return 1;
}

