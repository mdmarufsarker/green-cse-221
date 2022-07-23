// prime calculate

#include <stdio.h>

#define ll long long

bool cross[mx+5]; // storage baraiya nitesi
bool prime[mx+5];

void seive(){
    for(int i = 2; i <= mx; i++){
        if(cross[i] == true) continue;
        prime[i] = true;

        for(ll j = (ll) i * i; j <= mx; j += i){
            cross[i] = true;
        }
    }
}


int main(){
    seive();

    for(int i = 1; i <= 100; i++){
        printf("%d ", i);
    }

    return 0;
} 