// https://codeforces.com/contest/1692/problem/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }

        // ekta number rekhe baki koyta duplicate k bad dibo seta count krtesi
        int cnt = 0;
        for(auto it : mp){
            if(it.second > 1){
                cnt += it.second - 1;
            }
        }

        if(cnt & 1) cnt++;

        cout << n - cnt << endl;
    }
}