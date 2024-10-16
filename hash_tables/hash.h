#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 100000

typedef struct{
  
  char* key;
  char* value;
  Node* next;

}Node;

typedef struct{
  Node* list[HASH_SIZE];
}Hash;
