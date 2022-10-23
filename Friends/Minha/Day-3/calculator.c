// Calculator program

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &n1, &n2);
    // calculation
    // int sum = n1 + n2;
    // int sub = n1 - n2;
    // int prod = n1 * n2;
    // int div = n1 / n2;
    // int mod = n1 % n2;
    printf("Sum = %d + %d = %d\n", n1, n2, n1 + n2);
    printf("Sub = %d - %d = %d\n", n1, n2, n1 - n2);
    printf("Prod = %d * %d = %d\n", n1, n2, n1 * n2);
    printf("Div = %d / %d = %d\n", n1, n2, n1 / n2);
    printf("Mod = %d %% %d = %d\n", n1, n2, n1 % n2);
return 0;
}
// int --> 4 bytes --> 32 bits --> 2^32 --> 4,294,967,296
// float --> 4 bytes --> 32 bits --> 2^32 --> 4,294,967,296
// double --> 8 bytes --> 64 bits --> 2^64 --> 18,446,744,073,709,551,616
// char --> 1 byte --> 8 bits --> 2^8 --> 256