// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: 
// Date: 2024-02-17

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void bitStuffing(int n, string s){
    string ans = "";

    for(int i = 0; i < n; i++){
        if(s[i] == 'D' and s[i + 1] == 'L' and s[i + 2] == 'E') ans += "DLEDLE", i += 2;
        else ans += s[i];
    }

    cout << "DLESTX " << ans << " DLESTX" << endl;
}

void bitDestuffing(int n, string s){
    string ans = "";

    for(int i = 0; i < n; i++){
        if(s[i] == 'D' and s[i + 1] == 'L' and s[i + 2] == 'E' and s[i + 3] == 'D' and s[i + 4] == 'L' and s[i + 5] == 'E') ans += "DLE", i += 4;
        else ans += s[i];
    }

    cout << "DLESTX " << ans << " DLESTX" << endl;
}

void solve(int t){
    // cout << "Enter Data in UpperCase: ";
    string s = "UNITEDLEDSTATES";
    int n = s.size();
    cout << "1. Bit Stuffing\n";
    cout << "2. Bit Destuffing\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    if(choice == 1) bitStuffing(n, s);
    else if(choice == 2) bitDestuffing(n, s);
    else cout << "Wrong Input\n";
}

int main() {
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
}