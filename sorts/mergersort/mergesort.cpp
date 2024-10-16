#include "mergesort.h"


void merge(int *arr, int l, int m, int r) {
    int n1 = m - l + 1;   // primeiro elemento do primeiro subarray
    int n2 = r - m;       // primeiro elemento do segundo subarray

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];        // preenche o primeiro subarray
    for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];    // preenche o segundo subarray

    int i = 0, j = 0;
    int k = l;

    while (k <= r) {

        // nesses laços é onde acontece a ordenação dos elementos

        while ((i < n1 && j < n2 && L[i] <= R[j]) || (i < n1 && j == n2)) {

            // se o elemento do primeiro subarray for menor ou igual ao do segundo subarray, então o elemento é colocado no array principal

            arr[k] = L[i];
            i++;
            k++;
        }
        while ((j < n2 && i < n1 && R[j] < L[i]) || (j < n2 && i == n1)) {
            
            // se o elemento do segundo subarray for menor que o do primeiro subarray, então o elemento é colocado no array principal

            arr[k] = R[j];
            j++;
            k++;
        }
    }
}

/*

    Complexidade:
    Pior caso: O(nlogn) ordenado reverso
    Melhor caso: O(nlogn)  ordenado
    Caso Médio: O(nlogn)  

    é estável

*/

void mergesort(int *arr, int l, int r) {
    if (l >= r) return;

    int m = l + (r - l) / 2;
    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);
    merge(arr, l, m, r);
}