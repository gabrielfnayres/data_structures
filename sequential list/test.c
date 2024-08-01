
#include "seqlist.h"

int main() {
    
    SeqList* list = createSeqList();
    if (list == NULL) {
        printf("Failed to create sequence list.\n");
        return 1;
    }

    
    printf("Inserting elements...\n");
    int test;
    for (int i = 1; i <= 10; i++) {
        test = insertElement(list, i, i * 10);
        if (test == 1) {
            printf("Inserted %d at position %d\n", i * 10, i);
        } else {
            printf("Failed to insert %d at position %d\n", i * 10, i);
        }
    }

    
    printf("Current list:\n");
    printSeqList(list);

    int el = getElement(list, 5);
    printf("Element at position 5: %d\n", el);

    int pos = getPos(list, 50);
    printf("Position of element 50: %d\n", pos);

    
    printf("Size of the list: %d\n", size(list));

    int full = fullcheck(list);
    int empty = emptycheck(list);
    printf("Is list full? %d\n", full);
    printf("Is list empty? %d\n",empty);

    
    printf("Removing element at position 5...\n");
    int remo = removeData(list, 5);
    if(remo != NULL){
        printf("Removed element at position 5.\n");
    } else {
        printf("Failed to remove element at position 5.\n");
    }

    
    printf("Current list after removal:\n");
    printSeqList(list);

    
    printf("Inserting element 99 at position 5...\n");
    int ins = insertElement(list, 5, 99);
    if (ins == 1) {
        printf("Inserted 99 at position 5.\n");
    } else {
        printf("Failed to insert 99 at position 5.\n");
    }

    
    printf("Final list:\n");
    printSeqList(list);

    
    free(list->data);
    free(list);

    return 0;
}
