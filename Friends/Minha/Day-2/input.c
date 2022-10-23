// Write a program take input from user and print it
#include <stdio.h> // standard input output library
#include <string.h> // string library
int main() {
    // variable initialization
    int n1;
    float n2;
    double n3;
    char myName[10];

    // variable declaration
    // int num = 0;

    printf("Enter a integer number: ");
    scanf("%d", &n1);
    printf("Enter a float number: ");
    scanf("%f", &n2);
    printf("Enter a double number: ");
    scanf("%lf", &n3);
    printf("Enter a string: ");
    scanf("%s", myName);

    // output
    printf("%d is a integer number\n", n1);
    printf("%.2f is a float number\n", n2);
    printf("%.2lf is a double number\n", n3);
    printf("%s is a string\n", myName);
return 0;
}

&& --> Logical AND Operator
|| --> Logical OR Operator
 ! --> Logical NOT Operator