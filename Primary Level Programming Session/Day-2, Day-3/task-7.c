//Write a C program that takes three numbers (a, b, c) as input and then prints the smallest number

#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf("Enter three integer number: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 < n2 && n1 < n3) printf("The smallest number is = %d\n", n1);
    else if(n2 < n1 && n2 < n3) printf("The smallest number is = %d\n", n2);
    else printf("The smallest number is = %d\n", n3);

    return 0;
}