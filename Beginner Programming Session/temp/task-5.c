// Write a C program that takes two numbers (a, b) as input and then prints the smallest number

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("%d\n", a < b ? a : b);
    return 0;
}