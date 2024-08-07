#include "linked_list.h"



int main() {
    LinkedList* ll = createLinkedList();
    
    printf("Inserting elements into the linked list...\n");
    int pb1 = push_back(ll, 10);

    if(pb1 == 1) printf("pb1 done!\n");

    int pb2 = push_back(ll, 20);

    if(pb2 == 1) printf("pb2 done!\n");


    int pf = push_front(ll, 5);

    if(pf == 1) printf("pf done!\n");

    int  pm = push_mid(ll, 2, 15);

    if(pm == 1) printf("pm done!\n");

    printf("Linked List: ");
    printLL(ll);
    
    printf("Size of Linked List: %d\n", getSize(ll));
    
    printf("Element at position 3: %d\n", getElement(ll, 3));
    
    printf("Position of element with value 20: %d\n", getPos(ll, 20));
    
    printf("Changing element at position 2 to 25...\n");
    change_element(ll, 2, 25);
    
    printf("Linked List after change: ");
    printLL(ll);
    
    printf("Inserting element 30 at position 4...\n");
    int ins = insert(ll, 4, 30);
    if(ins == 1) printf("insert op done!\n");
    else printf("insert op failed!\n");
    printf("Linked List after insertion: ");
    printLL(ll);
    
    printf("Removing element at position 2...\n");
    int remo = removeel(ll, 2);
    printf("removed: %d", remo);
    
    printf("Linked List after removal: ");
    printLL(ll);
    
    free(ll);
    return 0;
}