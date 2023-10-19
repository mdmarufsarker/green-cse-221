// https://codeforces.com/contest/1669/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int rating;
    cin >> rating;
    if(rating <= 1399) cout << "Division 4" << endl;
    else if(rating >= 1400 and rating <= 1599) cout << "Division 3" << endl;
    else if(rating >= 1600 and rating <= 1899) cout << "Division 2" << endl;
    else cout << "Division 1" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--) solve();
}