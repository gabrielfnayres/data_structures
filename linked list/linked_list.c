#include "linked_list.h"



Node* createNode(){
    Node* node;
    node->next = NULL;
    return node;
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

