#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        string s1, s2;
        cin >> s1 >> s2;

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        ll n1 = stoll(s1);
        ll n2 = stoll(s2);

        ll sum = n1 + n2;
        string s = to_string(sum);
        reverse(s.begin(), s.end());

        cout << stoll(s) << endl;
    }
}