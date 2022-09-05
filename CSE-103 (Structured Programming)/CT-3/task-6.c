// Write a program that will correctly decode a set of characters into a valid message. Your program should read a given file of a simple coded set of characters and print the exact message that the characters contain. The code key for this simple coding is a one for one character substitution based upon a single arithmetic manipulation of the printable portion of the ASCII character set.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *FP;
    char ch;

    FP = fopen("input.txt", "r");
    if(FP == NULL){
        printf("Error opening file\n");
        exit(1);
    }

    while((ch = fgetc(FP)) != EOF){
        if(ch == ' '){
            printf(" ");
        }
        else if(ch == '\n'){
            printf("\n");
        }
        else{
            printf("%c", ch - 1);
        }
    }

    fclose(FP);

    return 0;
}