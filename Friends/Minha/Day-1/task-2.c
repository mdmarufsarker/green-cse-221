// summation between two numbers
/*
Algorithm
-----------
Step-1: Start
Step-2: Input a, b
Step-3: sum = a + b
Step-4: Print sum
Step-5: Stop
 */
#include <stdio.h>
int main(){
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b); // address of a, address of b
    sum = a + b;
    printf("SUM = %d\n", sum);
    return 0;
}