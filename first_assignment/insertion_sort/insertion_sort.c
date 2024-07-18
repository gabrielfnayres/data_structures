#include "insertion_sort.h"
#include <time.h>
/*

	* This implementation is based on the pseudocode provided in the book "Introduction to Algorithms" 
		by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein.
	* I already considered the array instance of intergers, so I didn't use the generic type.

*/


void insertion_sort(int *arr, size_t n){
	
	int j;
	int key;
	int i;

	for(i = 1; i < n; i++){ // first loop starts at 1 because we presume that the first element is already sorted
		key = arr[i];

		j = i - 1;

		while(j >= 0 && arr[j] > key){  // this loop verify if the j-th element is greater than the key, if it is, we move the j-th element to the right
			
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


