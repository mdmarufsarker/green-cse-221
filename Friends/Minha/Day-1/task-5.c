// subtraction between two numbers
/*
Algorithm
-----------
Step-1: Start
Step-2: Input a, b
Step-3: div = a / b
Step-4: Print div
Step-5: Stop
*/
#include <stdio.h>
int main(){
int a, b, div;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b); // address of a, address of b
    div = a / b;
    printf("Division = %d\n", div);
    return 0;
}