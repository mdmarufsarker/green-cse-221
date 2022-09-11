// Write a program that will correctly decode a set of characters into a valid message. Your program should read a given file of a simple coded set of characters and print the exact message that the characters contain. The code key for this simple coding is a one for one character substitution based upon a single arithmetic manipulation of the printable portion of the ASCII character set.

#include <stdio.h>

int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    // decode the message
    char str[100];
    scanf("%[^\n]s", str);

    int i = 0;
    while (str[i] != '\0') {
        str[i] = str[i] - 7;
        i++;
    }

    printf("%s\n", str);

    // int a[100];
    // FILE *fp;
    // fp = fopen("input.txt", "r");

    // int i = 0;
    // char ch[100];
    // while(!feof(fp)){
    //     fgets(ch, 100, fp);
    // }
    // fclose(fp);
    // for(i; ch[i] != '\0'; i++){
    //     a[i] = ch[i] - 7;
    //     printf("%c", a[i]);
    // }
    return 0;
}