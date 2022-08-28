// Write a C program that takes a fixed 3 digit number as input, then prints the sum of the digits

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("%d\n", number / 100 + (number / 10) % 10 + number % 10);
    return 0;
}