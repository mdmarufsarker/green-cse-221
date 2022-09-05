// Write a program using recursive function that can convert a Decimal number to its equivalent Binary number.

#include <stdio.h>

int decToBinder(int n){
    if(n == 0){
        return 0;
    }
    else{
        return (n % 2) + 10 * decToBinder(n / 2);
    }
}

int main() {
    int n, i, rem, bin = 0;
    scanf("%d", &n);

    printf("%d\n", decToBinder(n));

    return 0;
}