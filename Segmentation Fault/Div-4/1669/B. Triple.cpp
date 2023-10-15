// https://codeforces.com/contest/1669/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    map<int, int> mp;
    for(auto x : v) mp[x]++;

    ll ans = 0;
    bool ok = false;
    for(auto x : mp){
        if(x.second >= 3){
            ok = true;
            ans = x.first;
        }
    }

    cout << (ok ? ans : -1) << endl;
}

int main(){
    Maruf

    int t;
    cin >> t;

    while(t--) solve();
}