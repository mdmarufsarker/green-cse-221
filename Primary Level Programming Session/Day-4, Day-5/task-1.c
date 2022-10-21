// Write a C program with 7 cells and initialize with values 12, 23, 34, 45, 22, -45, -2 Print all the elements of the array.

#include <stdio.h>

int main() {
    int arr[7] = {12, 23, 34, 45, 22, -45, -2};
    int i;
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}