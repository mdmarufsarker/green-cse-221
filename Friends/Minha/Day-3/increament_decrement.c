// Write a program 

#include <stdio.h>

int main() {
    int n = 5;

    // pre increment
    printf("n = %d\n", ++n); // 6
    // post increment
    printf("n = %d\n", n++); // 6
    printf("n = %d\n", n++); // 7

    // pre decrement
    printf("n = %d\n", --n); // 6
    // post decrement
    printf("n = %d\n", n--); // 6
    printf("n = %d\n", n--); // 5

return 0;
}

// n++ => n = n + 1
// ++n => n = n + 1
// --n => n = n - 1
// n-- => n = n - 1