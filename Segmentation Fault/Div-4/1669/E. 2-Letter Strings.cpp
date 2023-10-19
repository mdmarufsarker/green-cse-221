// https://codeforces.com/contest/1669/problem/E

#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename F, typename S>ostream&operator<<(ostream&os, const pair<F, S>&p) {return os << "(" << p.first << ", " << p.second << ")";}
template<typename T>ostream&operator<<(ostream&os, const vector<T>&v) {os << "{"; for (auto it = v.begin(); it != v.end(); ++it) {if (it != v.begin())os << ", "; os << *it;} return os << "}";}
template<typename T>ostream&operator<<(ostream&os, const set<T>&v) {os << "["; for (auto it = v.begin(); it != v.end(); ++it) {if (it != v.begin())os << ","; os << *it;} return os << "]";}
template<typename T>ostream&operator<<(ostream&os, const multiset<T>&v) {os << "["; for (auto it = v.begin(); it != v.end(); ++it) {if (it != v.begin())os << ", "; os << *it;} return os << "]";}
template<typename F, typename S>ostream&operator<<(ostream&os, const map<F, S>&v) {os << "["; for (auto it = v.begin(); it != v.end(); ++it) {if (it != v.begin())os << ", "; os << it->first << " = " << it->second;} return os << "]";}
#define dbg(args...) do {cerr << #args << " : "; mms(args); } while(0)
void mms() {cerr << endl;}
template<typename T>void mms(T a[], int n) {for (int i = 0; i < n; ++i)cerr << a[i] << ' '; cerr << endl;}
template<typename T, typename...hello>void mms(T arg, const hello&...rest) {cerr << arg << ' '; mms(rest...);}

void solve() {
    ll n, i, j, m, k, l, r, mid;
    cin >> n;
    vector<string>v(n);
    map<char, ll>first, second;
    map<string , ll>mp;
    for (i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
        first[v[i][0]]++; 
        second[v[i][1]]++;
    }

    // dbg(first, second, mp);
    ll ans = 0;
    for (i = 0; i < n; i++) {
        ans += first[v[i][0]] - mp[v[i]]; 
        // dbg(ans, first[v[i][0]], mp[v[i]]);
        first[v[i][0]]--; 
        // dbg(first[v[i][0]]);
        ans += second[v[i][1]] - mp[v[i]]; 
        // dbg(ans, second[v[i][1]], mp[v[i]]);
        second[v[i][1]]--; 
        // dbg(second[v[i][1]]);
        // dbg(mp[v[i]]);
        mp[v[i]]--;
        // dbg(mp[v[i]]);
    }

    // dbg(first, second, mp);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}