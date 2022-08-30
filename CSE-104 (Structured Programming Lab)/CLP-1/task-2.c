// Take an integer number (2 <=x <= 10000) from user. Find the followings:
    // sum of digits of the number
    // Next prime number after the given number

#include<stdio.h>
int main(){
    int n;

    printf("Enter a number in the given range (2 <=x <= 10000): ");
    scanf("%d", &n);

    int temp = n;

    int rem, sum = 0, left;
    if(temp >= 2 && temp <= 10000){
        while(temp != 0){
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        printf("Sum of digits of the number: %d\n", sum);
    }else{
        printf("Your input is out of range\n");
    }




    return 0;
}
