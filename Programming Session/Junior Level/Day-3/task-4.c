// prime factorial

#include <stdio.h>
#include <stdbool.h>

// #define ll long long
#define mx 1000000
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
        // printf("%d ", prime[i]);
    }

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= idx; i++){
        if(prime[i] * prime[i] > n) break;
        if(n % prime[i] == 0){
            int cnt = 0;

            while(n % prime[i] == 0){
                cnt++;
                n /= prime[i];
            }
            printf("%d^%d ", prime[i], cnt);
        }
    }
    if(n != 1){
        printf("%d^1\n", n);
    }

    return 0;
}
