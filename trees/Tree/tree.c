#include "tree.h"

void create(Tree* t){
    t = NULL;
}

int emptyTree(Tree t){

    if(t == NULL) return 1;

    return 0;
}

Tree search(Tree t, int data){

    Tree found;
    if(t == NULL){
        return NULL;
    }

    if(t->content == data){
        return t;
    }
    found = search(t->left, data);
    if(found == NULL){
        found = search(t->right, data);
    }

    return found;
}

int insertRoot(Tree* t, int data){

    Node* newNode;
    int check = emptyTree(t);
    if(check == 1){
        return 0;
    }
    newNode = (Node*) malloc(sizeof(Node));

    if(newNode == NULL) return 0;
    
    newNode->content = data;
    newNode->left = NULL;
    newNode->right = NULL;

    *t = newNode;
    return 1;
}

int insertRight(Tree t, int father, int son){
    
    Node *f, *s, *newNode;

    s = search(t, son);
    if(s != NULL) return 0;

    f = search(t, father);
    if(f == NULL ) return 0;

    if(f->right != NULL) return 0;

    newNode = (Node*) malloc(sizeof(Node));

    if(newNode == NULL ) return 0;

    newNode->content = son;
    newNode->left = NULL;
    newNode->right = NULL;
    
    f->right = newNode;

    return 1;
}   

int insertLeft(Tree t, int father, int son){
    Node *newNode, *f, *s;

    s = search(t, son);
    if(s != NULL ) return 0;

    f = search(t, father);
    if(f == NULL) return 0;

    if(f->left == NULL) return 0;

    newNode->content = son;
    newNode->left = NULL;;
    newNode->right = NULL;

    f->left = newNode;

    return 1;
}

void showPreOrder(Tree t){

    if(t == NULL){
        return 0;
    }

    printf("%d", t->content);

    if(t->left != NULL){
        showPreOrder(t->left);
    }

    if(t->right != NULL){
        showPreOrder(t->right);
    }
}

void showInOrder(Tree t){

    if(t == NULL) return -1;

    if(t->left != NULL){
        showInOrder(t->left);
    }
    printf("%d", t->content);

    if(t->right != NULL){
        showInOrder(t->right);
    }
}   

void showPostOrder(Tree t){

    if(t == NULL ) return -1;

    if(t->left != NULL ) showPostOrder(t->left);

    if(t->right != NULL) showPostOrder(t->right);

    printf("%d", t->content);
}   


