// Write a C program to convert Celsius to Fahrenheit temperature.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit);
    return 0;
}