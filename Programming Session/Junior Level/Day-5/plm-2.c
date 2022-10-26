// study on prime factorization

// https://vjudge.net/contest/509062#problem/B
// B - Trailing Zeroes (I)

#include<bits/stdc++.h>
using namespace std;

#define N 1000105
bool Mark[N + 5];
vector<int>prime;
int tc = 1;

void seive(){
    for(int i = 2; i <= N; i++){
        if(Mark[i]) continue;
        prime.push_back(i);
        for(long long j = 1LL * i * i; j <= N; j += i) Mark[j] = 1;
    }
}

int main(){
    seive();
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        int total_divisors = 1;

        for(int p:prime){
            if(n < 1LL * p *p) break;
            if(n % p == 0){
                int cnt = 0;
                while(n % p == 0){
                    n /= p;
                    cnt++;
                }
                total_divisors *= (cnt + 1);
            }
        }
        if(n > 1){
            total_divisors *= 2;
        }
        cout << "Case " << tc++ << ": " << total_divisors - 1 << "\n";
    }

    return 0;
}