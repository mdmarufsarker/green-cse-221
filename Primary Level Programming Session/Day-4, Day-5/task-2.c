// write a c program declare an int array with 10 cells, take user input from index 0 to 9 and print all elements of the array.

#include <stdio.h>

int main() {
    int arr[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}