// subtraction between two numbers
/*
Algorithm
-----------
Step-1: Start
Step-2: Input a, b
Step-3: prod = a * b
Step-4: Print prod
Step-5: Stop
*/
#include <stdio.h>
int main(){
    int a, b, prod;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b); // address of a, address of b
    prod = a * b;
    printf("Product = %d\n", prod);
return 0;
}