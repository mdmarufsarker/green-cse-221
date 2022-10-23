// Write a program to print the value of variables

#include <stdio.h> // standard input output library

int main() {

    printf("Hello Minha!\n");

    // int, float, double, char

    /* 
        int %d / %i: 4 bytes --> 32 bits --> 2^32 --> 4,294,967,296
        float %f: 4 bytes --> 32 bits --> 2^32 --> 4,294,967,296
        double %lf: 8 bytes --> 64 bits --> 2^64 --> 18,446,744,073,709,551,616
        char %c: 1 byte --> 8 bits --> 2^8 --> 256
    */

    // variable declaration
    int a = 10;
    float b = 10.5;
    double c = 10.5;
    char d = 'm';
    string name = "Minha";

    printf("%d\n", a);
    printf("%.2f\n", b);
    printf("%.2lf\n", c);
    printf("%c\n", d);
    printf("%s\n", name);

return 0;
}