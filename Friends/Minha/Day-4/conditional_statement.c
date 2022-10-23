// Write a guessing game program in C.

#include <stdio.h>

int main() {
    int n, love = 7;

    printf("Guess a number between 1 and 10: ");
    scanf("%d", &n);

    if (n < love) {
        printf("You guessed it wrong! Try a larger number.\n");
    }else if(n > love){
        printf("You guessed it wrong! Try a smaller number.\n");
    }else{
        printf("You guessed it right!\n");
    }

return 0;
}

// = --> Assignment Operator
// == --> Equality Operator / Comparison Operator
// === --> Strict Equality Operator / Strict Comparison Operator