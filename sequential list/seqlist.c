#include "seqlist.h"

SeqList* createSeqList(){

    SeqList *s = (SeqList*) malloc(sizeof(SeqList));
    if(s == NULL){
        return NULL;
    }
    
    s->data = (int*) malloc(MAXTAM*sizeof(int));

    if(s->data == NULL){
        free(s);
        return NULL;
    }

    s->currentSize = 0;
    s->maxSize = MAXTAM;
    return s;
}

void printSeqList(SeqList* s){

    if (emptycheck(s) == 1) {
        printf("List is empty.\n");
        return;
    }
    
    for (int i = 0; i < s->currentSize; i++) {
        printf("%d", s->data[i]);
        if (i < s->currentSize - 1) {
            printf(" -> ");
        }
    }
    printf("\n");
}

int emptycheck(SeqList* s){

    if(s->currentSize == 0) return 1;
    return 0;
}

int fullcheck(SeqList* s){
    if(s->currentSize == s->maxSize) return 1;
    return 0;
}

int size(SeqList *s){
    return s->currentSize;
}

int getElement(SeqList* s, int pos){
    int data;

    if((pos > s->currentSize) || pos <= 0) return -1;

    data = s->data[pos - 1];
    return data;
}

int getPos(SeqList* s, int data){
    

    for(int i = 0; i < s->currentSize; i++){
        if(s->data[i] == data){
            return i + 1;
        }
    }

    return -1;
}


int insertElement(SeqList* s,int pos, int data){
    int ful = fullcheck(s);
    if((ful == 1) || (pos > s->currentSize + 1) || pos < 1) return 0;

    for(int i = s->currentSize; i >= pos; i--){

        s->data[i] = s->data[i - 1];
    }

    s->data[pos - 1] =  data;
    s->currentSize++;
    return 1;
}

int removeData(SeqList* s, int pos){

    int data;
    if(pos > s->currentSize) return -1;

    data = s->data[pos - 1];
    for(int i = pos -1; i < s->currentSize - 1; i++){

        s->data[i] = s->data[i + 1];
    }
    s->currentSize--;
    return data;
}






