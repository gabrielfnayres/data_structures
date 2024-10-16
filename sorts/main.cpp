#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>

#define MAX_NUMBERS 100000

#include "mergersort/mergesort.h"
#include "quicksort/quicksort.h"

int isSorted(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        printf("%d -> ", arr[i]);
    }
    printf("%d\n", arr[n - 1]);
}

int main(int argv, char* argc[]) {
    int n = 0;
    int arr[MAX_NUMBERS];
    char* sort = argc[1];
    char* file = argc[2];
    FILE* f = fopen(file, "r");
    while (fscanf(f, "%d", &arr[n]) != EOF) {
        n++;
    }
    fclose(f);
    
    int count = n;

    int* numbers2 = (int*) malloc(sizeof(int)*count);
    for (int i = 0; i < count; i++){
        numbers2[i] = arr[i];
    }

    clock_t start1 = clock();
    mergesort(arr, 0, count);
    clock_t end1 = clock();

    //printf("MERGE SORT RESULTADO: \n");
    //printArray(arr, count);

    clock_t start2 = clock();
    quicksort(numbers2, 0, count);
    clock_t end2 = clock();

    //printf("QUICK SORT RESULTADO: \n");
    //printArray(numbers2, count);

    double resp1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
    double resp2 = (double)(end2 - start2) / CLOCKS_PER_SEC;

    printf("\n================ TIME ==================\n");
    printf("Tempo de MERGESORT: %f segundos\n", resp1);
    printf("Tempo de QUICKSORT: %f segundos\n", resp2);
    printf("merge Sorted: %d\n", isSorted(arr, count));
    printf("quick Sorted: %d\n", isSorted(numbers2, count));
    

    free(numbers2);
    return 0;
}