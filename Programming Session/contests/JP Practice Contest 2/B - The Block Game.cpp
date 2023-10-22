#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        string tmp = s;
        reverse(tmp.begin(), tmp.end());

        if(s == tmp) cout << "wins" << endl;
        else cout << "loses" << endl;
    }
}