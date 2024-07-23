#include "selection_sort.h"
#include <time.h>
#include <math.h>
#include <limits.h>


/*

    * This implementation is based on the pseudocode provided in the book "Introduction to Algorithms" 
        by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein.
        and "Data structures in C" by Aaron M. Tenenbaum
*/


void selection_sort(int *arr, int n){
   
    for(int i = n-1; i > 0; i--){ //  this loop iterates over the array 
    
        int localMin =  arr[0];

        int aux = 0;

        for(int k = 1; k <= i; k++){ 

            /*
                This part is dedicaded to verify if 
                the k-th element is bigger than the local min,
                if it is they are swapped
            */

            if(arr[k] > localMin){
                localMin = arr[k];
                aux = k; // this is most important part: here the auxiliary var and the k-index are swapped
            }

        }

        arr[aux] = arr[i];
        arr[i] = localMin;
    }
}



