// prime calculate using vector

#include <stdio.h>

// #define ll long long

bool cross[mx+5]; // storage baraiya nitesi
int prime[mx+5];
int idx = 1; 

void seive(){
    for(int i = 2; i <= mx; i++){
        if(cross[i] == true) continue;
        prime[idx++] = i;

        for(long long j = (long long) i * i; j <= mx; j += i){
            cross[j] = true;
        }
    }
}

int main(){
    seive();

    for(int i = 1; i <= 100; i++){
        printf("%d ", prime[i]);
    }

    return 0;
}