// Write a C program that takes a fixed 3 digit number as input, then prints each digit separately

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d\n", n / 100);
    printf("%d\n", (n / 10) % 10);
    printf("%d\n", n % 10);

    return 0;
}