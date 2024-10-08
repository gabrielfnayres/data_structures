#ifndef SEQLIST_H
#define SEQLIST_H

#include <stdio.h>
#define MAXTAM 10000


typedef struct{

  int *data;
  int currentSize;
  int maxSize;
  

}SeqList;

SeqList* createSeqList();

void printSeqList(SeqList* s);

int emptycheck(SeqList *s);

int fullcheck(SeqList *s);

int size(SeqList *s);

int getElement(SeqList *s,int pos);

int getPos(SeqList *s, int data);

int insertElement(SeqList* s,int pos, int data);

int removeData(SeqList* s,int pos);

#endif
