// Write a program 

#include <stdio.h>

int main() {
    double radius, height;

    // input
    printf("Enter radius and height: ");
    scanf("%lf %lf", &radius, &height);

    // calculation
    double volume = 3.1416 * radius * radius * height; // volume = pi * r^2 * h

    // output
    printf("Volume = %.2lf\n", volume);

return 0;
}