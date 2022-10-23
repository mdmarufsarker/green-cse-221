// subtraction between two numbers
/*
Algorithm
-----------
Step-1: Start
Step-2: Input a, b
Step-3: sub = a - b
Step-4: Print sub
Step-5: Stop
*/
#include <stdio.h>
int main(){
  int a, b, sub;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b); // address of a, address of b
  sub = a - b;
  printf("SUB = %d\n", sub);
  return 0;
}