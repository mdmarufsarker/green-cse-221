// find total number of alphabets, digits or special character in a string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int x = 0;
    for(x; str[0] != '\0'; x++);

    int alphabets = 0, digits = 0, special_cha = 0;

    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        }
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            alphabets++;
        }
    }

    printf("Number of characters: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);

    return 0;
}