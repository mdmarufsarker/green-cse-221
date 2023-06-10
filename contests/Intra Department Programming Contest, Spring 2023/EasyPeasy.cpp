// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.hackerrank.com/contests/intra-department-programming-contestgreen-university-of-bangladesh/challenges/total-odds-ii
// Language: C++
// Date: 2023-06-06
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define sp " "

// YES/NO - Yes/No - yes/no
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl

// Input
#define input(a) cin >> a
#define i2(a, b) cin >> a >> b
#define i3(a, b, c) cin >> a >> b >> c
#define i4(a, b, c, d) cin >> a >> b >> c >> d
// Output
#define print(a) cout << a << endl
#define p2(a, b) cout << a << sp << b << endl
#define p3(a, b, c) cout << a << sp << b << sp << c << endl
#define p4(a, b, c, d) cout << a << sp << b << sp << c << sp << d << endl

template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; mms(args); } while(0)
void mms(){cerr << endl;}
template<typename T>void mms(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void mms(T arg,const hello&...rest){cerr<<arg<<' ';mms(rest...);}

// STL - Standard Template Library
// vector
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()

// pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define ff first
#define ss second

// Utilities
#define pb push_back
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define mem(a,b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define cube(a) ((a) * (a) * (a))
// #define sort(x) sort(all(x))
// #define rsort(x) sort(rall(x))
#define rev(x) reverse(all(x))
#define sum(x) accumulate(all(x), 0)
// #define max(x) *max_element(all(x))
// #define min(x) *min_element(all(x))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
// bitset
#define bs bitset<1000000>

// constants
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

// Number Theory
bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++) if(n % i == 0) return false;
    return true;
}
vector<int> prime;
void sieve(int n){
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= n; i++) if(isPrime[i]) for(int j = i * i; j <= n; j += i) isPrime[j] = false;
    for(int i = 2; i <= n; i++) if(isPrime[i]) prime.pb(i);
}
int phi(int n){
    int res = n;
    for(int i = 2; i * i <= n; i++) if(n % i == 0) while(n % i == 0) n /= i, res -= res / i;
    if(n > 1) res -= res / n;
    return res;
}
int bigMod(int a, int b, int m){
    if(b == 0) return 1 % m;
    int x = bigMod(a, b / 2, m);
    x = (x * x) % m;
    if(b % 2 == 1) x = (x * a) % m;
    return x;
}
int modInverse(int a, int m){
    return bigMod(a, m - 2, m);
}
const int N = 1000005;
int fact[N];
void factorial(){
    fact[0] = 1;
    for(int i = 1; i < N; i++) fact[i] = (fact[i - 1] * i) % MOD;
}
int nCr(int n, int r){
    if(r > n) return 0;
    int res = fact[n];
    res = (res * modInverse(fact[r], MOD)) % MOD;
    res = (res * modInverse(fact[n - r], MOD)) % MOD;
    return res;
}
int nPr(int n, int r){
    if(r > n) return 0;
    int res = fact[n];
    res = (res * modInverse(fact[n - r], MOD)) % MOD;
    return res;
}

#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

ll countOdd(ll L, ll R){
 
    ll N = (R - L) / 2;
 
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}

void solve(){
    ll l, r;
    cin >> l >> r;

    ll odds = countOdd(l, r);
    cout << odds << endl;
}

int main() {
    Maruf
    clock_t z = clock();

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) 
        solve();

    cerr << "Run Time : " << (((double)(clock() - z)) / CLOCKS_PER_SEC) << endl;
}