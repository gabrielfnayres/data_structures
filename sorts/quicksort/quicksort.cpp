#include "quicksort.h"

void swap(int *arr, int i, int j) {
    int aux =arr[i];
    arr[i] = arr[j];
    arr[j] = aux;
}

int partition(int *arr, int l, int r) {
    int pivot = arr[r]; // escolha do ultimo elemento como pivot
    int sorted = l - 1;

    for (int i = l; i < r; i++) { 
        if (arr[i] < pivot) {  // verifica o valor de acordo com o pivot, assim iterando o sorted
            sorted++;   
            swap(arr, i, sorted);
        }
    } 
    
    swap(arr, sorted + 1, r); //troca final 
    return sorted + 1;
}

/*
    Complexidade:
    Pior caso: O(n^2)  Causado por sucessivas más escolhas do pivot quando o array está ordenado
    Melhor caso: O(nlogn)  ordenado
    Caso Médio: O(nlogn)  

    não é estável

    é possível melhorar o particionamento escolhendo o pivot aleatoriamente ou escolhendo pela mediana do de [l, q, r]
*/

void quicksort(int *arr, int l, int r) {
    if (l >= r) return;

    int q = partition(arr, l, r);
    quicksort(arr, l, q - 1);
    quicksort(arr, q + 1, r);
}