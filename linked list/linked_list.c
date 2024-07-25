#include "linked_list.h"



Node* createNode(){
    Node* node;
    node->next = NULL;
    return node;
}

void setData(Node *node, int data){
    node->content = data;
} 

LinkedList* createLinkedList(){

    LinkedList *ll;
    ll->head = NULL;
    ll->size = 0;
    return ll;

}

int empty(LinkedList *ll){
    if(ll->size == 0) return 1;
    return 0;
}

int full(LinkedList *ll){
    if(ll->size == MAXTAM) return 1;
    return 0;
}

int getSize(LinkedList *ll){
    return ll->size;
}

/*
int getSize(LinkedList *ll){

    int verif = empty(ll);
    if(verif == 1){
        return -1;
    }

    int cont = 0;

    Node* aux = ll->head;

    while(aux != NULL){
        aux = aux->next;
        cont++;
    }

    return cont;
} 
*/

int getElement(LinkedList *ll, int pos){

    Node* aux = ll->head;
    int cont = 1;
    int verif = empty(ll);

    if(verif == 1) return -1;

    if(pos < 1 || pos > ll->size) return -1;


    while(cont  < pos){
        aux = aux->next;
        cont++;
    }
    return aux->content;

}   

int getPos(LinkedList *ll, int data){

    Node *aux = ll->head;

    int pos = 1;

    while(aux != NULL){
        if(aux->content == data){
            return pos;
        }
        aux = aux->next;
        pos++;
    }
    return -1;
}

int change_element(LinkedList *ll, int pos, int data){

    int verif = empty(ll);
    if(verif == 1) return -1;

    if(pos < 1 || pos > ll->size) return -1;

    int cont = 1;
    Node *aux = ll->head;

    while(cont < pos){
        aux = aux->next;
        cont++;
    }
    aux->content = data;
    return 1;
}

int push_back(LinkedList* ll, int data){

    int cont = 1;
    Node* newNode;

    newNode->content = data;
    newNode->next = NULL;

    Node* aux = ll->head;


    while(aux != NULL){
        aux = aux->next;
    }

    aux->next = newNode;
    ll->size++;

    return 1;
}

int push_mid(LinkedList *ll, int pos, int data){

    Node* newNode;

    
    Node* aux;
    int cont = 1;

    while((cont < pos - 1) && (aux != NULL)){

        aux = aux->next;
        cont++;
    }

    if(aux == NULL) return 0;


    newNode->content = data;
    newNode->next = aux->next;
    aux->next = newNode;
    
    ll->size++;
    return 1;
}

int push_front(LinkedList* ll, int data){

    Node* newNode;

    newNode->content = data;
    newNode->next = ll->head;   

    ll->head = newNode;
    ll->size++;
    
    return 1;
    
}

int insert(LinkedList *ll, int pos, int data){

    if(empty(ll) && (pos != 1)) return 0;

    if(pos == ll->size + 1){
        return push_back(ll, data);
    } else if( pos == 1){
        return push_front(ll, data);
    } else {
        return push_mid(ll, pos, data);
    }

    return -1;
}

int remove(LinkedList *ll, int pos){
    int verif = empty(ll);
    int data = -1;

    if(verif == 1 && pos < 1) return 0;

    Node *aux = ll->head;
    Node *pre_aux = NULL;
    int cont = 1;


    while(cont  < pos  && aux != NULL){
        
        pre_aux = aux;
        aux = aux->next;
        cont++;
    }

    if(aux == NULL) return -1;

    data = aux->content;
    pre_aux->next = aux->next;
    ll->size--;

    aux = NULL;
    return data;
}



