#include "seqlist.h"

SeqList* createSeqList(){

    SeqList *s;
    s->currentSize = 0;
    s->maxSize = MAXTAM;
    s->data[MAXTAM];

    return s;
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

    if(emptycheck(s)){
        return -1;
    }

    return s->data[pos - 1];
}

int getPos(SeqList* s, int data){
    if(emptycheck(s)){
        return -1;
    }

    for(int i = 0; i < s->currentSize; i++){
        if(s->data[i] == data){
            return i + 1;
        }
    }

    return -1;
}


int insertElement(SeqList* s,int pos, int data){

    if(pos >= s->maxSize || pos < 0) return 0;

    for(int i = pos - 1; i >= 0; i--){

        s->data[i] = s->data[i - 1];
    }

    s->data[pos - 1] = s->data[pos];
    s->currentSize++;
    return 1;
}

int remove(SeqList* s, int pos){

    if(emptycheck(s) || pos < 0 || pos >= MAXTAM) return 0;


    for(int i = pos - 1; i >= 0; i++){

        s->data[i] = s->data[i + 1];
    }

    s->data[pos + 1] = s->data[pos];
    s->currentSize++;
    return 1;
}






