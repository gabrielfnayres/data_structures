#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>

#include "selection_sort/selection_sort.h"
#include "insertion_sort/insertion_sort.h"


#define MAX_NUMBERS 1000

void printArray(int *arr, size_t n){
    for(int i = 0; i < n - 2; i++){
        printf("%d -> ", arr[i]);
    }
    printf("%d\n", arr[n - 1]);
}

int main(int argc, char* argv[]){

    FILE *file;
    int numbers[MAX_NUMBERS];
    int count = 0;

    

    file = fopen(argv[2], "r");

    if (file == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }

   
    while (count < MAX_NUMBERS && fscanf(file, "%d", &numbers[count]) == 1) {
        count++;
    }
    int count2 = 0;
    int arr[count];

    while(count2 < count){
        arr[count2] = numbers[count2];
        count2++;
    }
    
    fclose(file);

    if(strcmp(argv[1], "selection") == 0){
        selection_sort(arr, count);

        printArray(arr, count);
    } else if(strcmp(argv[1], "insertion") == 0){
        insertion_sort(arr, count);

        printArray(arr, count);
    } else {
        fprintf(stderr, "Algoritmo de ordenação inválido.\n");
        return 1;
    }

    return 0;
}   