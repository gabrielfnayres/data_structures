#include "double_linked_list.h"

DoubleLinkedList* createDll(){

    DoubleLinkedList *dll;
    dll->head = NULL;
    dll->tail = NULL;
    dll->size = 0;

    return dll;
}

void printDLL(DoubleLinkedList* dll){

    Node* aux = dll->head;

    while(aux != dll->tail){
        printf("%d -> ", aux->content);
        aux = aux->next;
    }

    printf("%d\n", aux->next->content);

}

int empty(DoubleLinkedList* dll){

    if(dll->size == 0) return 1;
    return 0;
}

int full(DoubleLinkedList* dll){

    if(dll->size == MAXTAM) return 1;
    return 0;
}

int getPos(DoubleLinkedList* dll, int data){

    Node* aux = dll->head;
    
    int cont = 1;

    while(aux != NULL && aux->content != data){
        aux = aux->next;
        cont++;
    }

    return cont;
}

int push_back(DoubleLinkedList* dll, int data){

    Node* newNode;
    newNode->content = data;
    newNode->next = NULL;

    Node* aux = dll->head;

    while(aux != NULL){
        aux = aux->next;
    }

    aux->next = newNode;
    newNode->last = aux;

    dll->tail = newNode;
    dll->size++;

    return 1;

}

int push_front(DoubleLinkedList* dll, int data){

    Node* newNode;
    newNode->content = data;
    

    newNode->next = dll->head;
    dll->head = newNode;
    newNode->last = NULL;
    dll->size++;
    return 1;
}

int push_mid(DoubleLinkedList* dll, int pos, int data){

    Node* newNode;

    newNode->content = data;

    Node* aux = dll->head;
    
    int cont = 1;

    while(cont < (pos - 1) &&  aux != NULL){

        aux = aux->next;
        cont++;
    }

    aux->next = newNode;
    newNode->last = aux;
    newNode->next = aux->next->next;
    aux->next->last = newNode;
    dll->size++;
    return 1;
}


int remove_front(DoubleLinkedList* dll){

    dll->head->next = NULL;
    dll->head->last = NULL;
    dll->head->content = NULL;
    dll->size--;
    return 1;
}

int remove_back(DoubleLinkedList* dll){

    dll->tail->last = NULL;
    dll->tail->next = NULL;
    dll->tail->content = NULL;
    dll->size--;
    return 1;
}

int remove_mid(DoubleLinkedList* dll, int pos){

    Node* aux = dll->head;
    int cont = 1;

    while(cont  < (pos - 1) && aux != NULL){
        aux = aux->next;
        cont++;
    }

    if(aux->last != NULL){
        aux->last->next = aux->next;
    }

    if(aux->next != NULL){
        aux->next->last = aux->last;
    }
    
    return 1;
}

