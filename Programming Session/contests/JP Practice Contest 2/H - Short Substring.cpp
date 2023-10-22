#include <bits/stdc++.h>
using namespace std;

#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    string s;
    cin >> s;
 
    string res = "";
    res += s[0];
 
    for(int i = 1; i < s.size(); i += 2){
        res += s[i];
    }
 
    cout << res << endl;
}
 
int main() {
    Maruf
    int t;
    cin >> t;
    while(t--) solve();
}