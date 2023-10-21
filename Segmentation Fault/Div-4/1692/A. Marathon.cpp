// https://codeforces.com/contest/1692/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<int> v(4);
        int cnt = 0;
        for(int i = 0; i < 4; i++){
            cin >> v[i];
            int timur = v[0];
            if(v[i] > timur) cnt++;
        }

        cout << cnt << endl;
    }
}