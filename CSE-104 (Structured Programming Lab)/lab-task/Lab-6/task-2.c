#include<stdio.h>

int main(){
    int n, arr[100], i, sum = 0, count = 0;
    float avg = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int checkPrime(int num){
    if (num <= 1) return 0;
        // Check from 2 to half of arr[i]
        for (int j = 2; j <= num/2; j++){
        if (num % j == 0){
            return 0;
        }
        return 1;
        }
    }

    return 0;
}