// https://codeforces.com/contest/1669/problem/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    bool ok = true;

    for (int i = 0; i < n; i++){
        if (i > 1){
            if(v[i] % 2 != v[i - 2] % 2){
                ok = false;
                break;
            }
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--) solve();
}