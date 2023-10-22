// https://codeforces.com/contest/1703/problem/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        map<char, int> mp;
        for(auto c : s) mp[c]++;

        // for(auto c : mp) cout << c.first << " " << c.second << endl;

        int ans = 0;
        for(auto c : mp){
            if(c.second == 1) ans += 2;
            else if(c.second > 1) ans += c.second + 1;
        }

        cout << ans << endl;
    }
}