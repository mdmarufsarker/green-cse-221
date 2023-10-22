#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> vn(n);
    for(auto &x : vn) cin >> x;
    vector<int> vm(m);
    for(auto &x : vm) cin >> x;
    
    
    sort(vn.begin(), vn.end(), greater<int>()); 
    for(int i = 1; i < n; i++) vn[i] += vn[i - 1];
    
    for(int i = 0; i < m; i++){
        ll l = 0, r = n-1;
        int res = 0;
        while (l <= r){
            int mid = (l + r) / 2;
            if (vn[mid] >= vm[i]){
                res = mid + 1;
                r = mid - 1;
            }else l = mid + 1;
        }
        cout << (res ? res : -1) << endl;
    }
}
 
int main() {
    // maruf();
    int t;
    cin >> t;
    
    while(t--) solve();
    return 0;
}