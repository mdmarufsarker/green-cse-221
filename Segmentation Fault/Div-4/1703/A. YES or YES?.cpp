// https://codeforces.com/contest/1703/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        // convert it to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if(s.find("yes") != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}