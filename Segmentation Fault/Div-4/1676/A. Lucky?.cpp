// https://codeforces.com/contest/1676/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        long long s1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        long long s2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');

        cout << (s1 == s2 ? "YES\n" : "NO\n");
    }
}