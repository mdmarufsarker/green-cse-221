// Write a C program that takes three numbers (a, b, c) as input and then prints the smallest number

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d\n", a < b ? (a < c ? a : c) : (b < c ? b : c));
    return 0;
}