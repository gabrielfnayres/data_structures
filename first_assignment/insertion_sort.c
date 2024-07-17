#include <stdio.h>

void insertion_sort(int *arr, size_t n){

	for(int i = 1; i < n; i++){
		
		int key = arr[i];

		int j = i - 1;

		while(j > 0 && arr[j] > key){
			
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


int main(){

	int arr[] = {1, 3, 10, 4, 20, 5, 6, 2, 7, 8, 90, 9};

	size_t n = sizeof(arr)/sizeof(int);

	insertion_sort(arr, n);

	for(int i = 0; i < n; i++){
		
		printf("%d\n", arr[i]);
	}

}
