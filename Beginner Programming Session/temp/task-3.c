// Write a C program that takes a fixed 3 digit number as input, then prints each digit separately

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("%d\n", number / 100);
    printf("%d\n", (number / 10) % 10);
    printf("%d\n", number % 10);
    return 0;
}