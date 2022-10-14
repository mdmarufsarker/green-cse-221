#include <stdio.h>
/*
Enter two numbers: 5 3
Summation = 5 + 3 = 8
Subtraction = 5 - 3 = 2
Multiplication = 5 * 3 = 15
Division = 5 / 3 = 1

Enter two numbers: 2.2 4.6
Summation = 2.20 + 4.60 = 6.80
Subtraction = 2.20 - 4.60 = -2.40
Multiplication = 2.20 * 4.60 = 10.12
Division = 2.20 / 4.60 = 0.48
 */

int main(){
    // variable initialization
    float num1, num2, sum, sub, prod, div;
    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);

//    sum = num1 + num2;
printf("Summation = %.2f + %.2f = %.2f\n",num1, num2, num1 + num2);

//    sub = num1 - num2;
printf("Subtraction = %.2f - %.2f = %.2f\n",num1, num2, num1 - num2);

//    prod = num1 * num2;
printf("Multiplication = %.2f * %.2f = %.2f\n",num1, num2, num1 * num2);

//    div = num1 / num2;
printf("Division = %.2f / %.2f = %.2f\n",num1, num2, num1 / num2);
  return 0;
}