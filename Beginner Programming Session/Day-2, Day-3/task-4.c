// Write a C program that takes a fixed 3 digit number as input, then prints the sum of the digits

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

//    int n1 = n / 100;
//    int n2 = (n / 10) % 10;
//    int n3 = n % 10;

//    printf("Sum = %d\n", n1 + n2 + n3);

    printf("Sum = %d\n", (n / 100) + ((n / 10) % 10) + (n % 10));

    return 0;
}