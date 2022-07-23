#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll fact[1000005];

ll factorial(int num)
{
    ll f = 1;
    for (int i = 1; i <= num; i++)
        f = (f*i) % mod;
    return f;
}
void factCalc(){
    fact[0] = 1;
    for(int i = 1; i <= 1000000; i++){
        fact[i] = (fact[i - 1] * i) % mod;
    }
}
int main(){
    ll num;
    cout << "Enter a number: ";
    cin >> num;
    ll ans = factorial(num);
    cout << ans << "\n";

    factCalc();
    cout << fact[5] << "\n";
	
    return 0;
}
