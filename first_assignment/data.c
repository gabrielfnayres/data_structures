#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>

#define MAX_numbers1 100000

#include "insertion_sort/insertion_sort.h"
#include "selection_sort/selection_sort.h"


void printArray(int *arr, int n){
    for(int i = 0; i < n -1; i++){
        printf("%d -> ", arr[i]);
    }
    printf("%d\n", arr[n - 1]);
}

int main(int argc, char* argv[]){

    FILE *file;

    clock_t start1, end1;
    clock_t start2, end2;

    int *numbers1 = (int*)malloc(MAX_numbers1 * sizeof(int));
    

    int count = 0;

    
    file = fopen(argv[1], "r");
    
    if (file == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }

    
    while (count <  MAX_numbers1 && fscanf(file, "%d", &numbers1[count]) == 1) {

      count++;
    }
        
    fclose(file);
    int *numbers2 =  (int*)malloc(count * sizeof(int));

    for(int i = 0; i < count; i++){
        numbers2[i] = numbers1[i];
    }

    start1 = clock();
    selection_sort(numbers1, count);
    end1 = clock();

    printf("SELECTION SORT: \n");
    printArray(numbers1, count);

    start2 = clock();
    insertion_sort(numbers2, count);
    end2 = clock();

    printf("INSERTION SORT: \n");
    printArray(numbers2, count);

    double resp1 = (double)(end1 - start1)/CLOCKS_PER_SEC;
    double resp2 = (double)(end2 - start2)/CLOCKS_PER_SEC;

    printf("\n================TIME==================\n");

    printf("selection time: %f\n", resp1);
    printf("insertion time: %f\n", resp2);

    free(numbers1);
    free(numbers2);
    return 0;
}   
