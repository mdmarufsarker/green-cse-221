// Cyber Security is a key issue to protect our daily documents and applications stored and submitted in various platforms. Having a robust encryption system to our generated password is very essential in this perspective. Your task is to create a nice and smooth encrypted password generator. Follow the instructions carefully to build the password generator.

#include <stdio.h>

int Input_Number(int n){
    // length of the number
    int len = 0;
    int temp = n;
    while(temp != 0){
        temp /= 10;
        len++;
    }
    if(len != 5){
        printf("Wrong input\n");
        return 0;
    }else{
        return n;
    }
}

int main(){
    int n;
    printf("Enter a 5 digit number: ");
    scanf("%d", &n);
    Input_Number(n);
}