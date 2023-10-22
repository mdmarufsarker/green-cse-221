#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
 
    int n = s.size();
    if(n > 10) cout << s[0] << n - 2 << s[n - 1] << endl;
    else cout << s << endl;
}
int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) solve();
}