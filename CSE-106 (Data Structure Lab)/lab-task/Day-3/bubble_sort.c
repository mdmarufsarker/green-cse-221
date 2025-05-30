// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int* xp, int* yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++)
		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(int arr[], int size){
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main(){
	int arrsz;
	printf("Enter the size of the array: ");
	scanf("%d", &arrsz);
	
	int arr[arrsz];
	for(int i = 0; i < arrsz; i++)
	    scanf("%d", &arr[i]);
	
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: ");
	printArray(arr, n);
	return 0;
}
