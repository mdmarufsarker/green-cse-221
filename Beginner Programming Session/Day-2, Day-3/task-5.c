// Write a C program that takes two numbers (a, b) as input and then prints the smallest number

#include <stdio.h>

int main(){
    int n1, n2;
    printf("Enter two integer number: ");
    scanf("%d%d", &n1, &n2);

//    if(n1 < n2){
//        printf("The smallest number is = %d\n", n1);
//    }else{
//        printf("The smallest number is = %d\n", n2);
//    }

//    if(n1 < n2) printf("The smallest number is = %d\n", n1);
//    else printf("The smallest number is = %d\n", n2);

// using ternary operator
// (condition) ? true : false
// int smallest = (n1 < n2) ? n1 : n2;
    printf("The smallest number is = %d\n", (n1 < n2) ? n1 : n2);

    return 0;
}
