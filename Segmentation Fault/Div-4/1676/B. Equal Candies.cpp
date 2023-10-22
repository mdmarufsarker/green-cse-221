// https://codeforces.com/contest/1676/problem/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(auto &x : v) cin >> x;

        int min = *min_element(v.begin(), v.end());
        vector<int> difference;
        for(auto x : v) difference.push_back(x - min);

        long long ans = 0;
        for(auto x : difference) ans += x;

        cout << ans << "\n";
    }
}