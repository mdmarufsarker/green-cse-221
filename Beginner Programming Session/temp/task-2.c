// Write a C program to convert Fahrenheit to Celsius temperature.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("The temperature in Celsius is %.2f\n", celsius);
    return 0;
}