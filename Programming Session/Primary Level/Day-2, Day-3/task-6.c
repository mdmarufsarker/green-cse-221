//Write a C program that takes three numbers (a, b, c) as input and then prints the largest number

#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf("Enter three integer number: ");
    scanf("%d%d%d", &n1, &n2, &n3);

//    if(n1 > n2){
//        if(n1 > n3){
//            printf("The largest number is = %d\n", n1);
//        }else{
//            printf("The largest number is = %d\n", n3);
//        }
//    }else if(n2 > n3){
//        if(n2 > n1){
//            printf("The largest number is = %d\n", n2);
//        }else{
//            printf("The largest number is = %d\n", n1);
//        }
//    }else{
//        printf("The largest number is = %d\n", n3);
//    }

//    && -> AND
//    || -> OR

//    if(n1 > n2 && n1 > n3) printf("The largest number is = %d\n", n1);
//    else if(n2 > n1 && n2 > n3) printf("The largest number is = %d\n", n2);
//    else printf("The largest number is = %d\n", n3);


// using ternary operator
// (condition) ? true : false

//    int largest = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
//    printf("The largest number is = %d\n", largest);

    printf("The largest number is = %d\n", ((n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3)));

    return 0;
}