#ifndef SEQLIST_H
#define SEQLIST_H

#include <stdio.h>
#define MAXTAM 100000


typedef struct{

  int *data;
  int currentSize;
  int maxSize;
  

}SeqList;

SeqList* createSeqList();

int emptycheck(SeqList *s);

int fulcheck(SeqList *s);

int size(SeqList *s);

int getElement(SeqList *s,int pos);

int getPos(SeqList *s, int data);

int insertElement(SeqList* s,int pos, int data);

int remove(SeqList* s,int pos);





#endif
