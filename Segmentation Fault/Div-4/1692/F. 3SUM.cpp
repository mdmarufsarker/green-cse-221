// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/1692/problem/F
// Date: 2023-10-21

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define sp " "
#define setprecision(x) cout << fixed << setprecision(x)

template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; mms(args); } while(0)
void mms(){cerr << endl;}
template<typename T>void mms(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void mms(T arg,const hello&...rest){cerr<<arg<<' ';mms(rest...);}

// Utilities
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define mem(a,b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define cube(a) ((a) * (a) * (a))
#define rev(x) reverse(all(x))
#define sum(x) accumulate(all(x), 0)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

// constants
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

//-----------------------------------------------------------------------//
/*/TO GET SOMETHING YOU NEVER HAD YOU HAVE TO DO SOMETHING YOU NEVER DID/*/
//-----------------------------------------------------------------------//

bool checkSumEndsWith3(vector<int> arr, int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum % 10 == 3) {
                    return true;
                }
            }
        }
    }
    return false;
}

void solve(){
    int n;
    cin >> n;

    // storing the last digits
    vector<int> cnt(10);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x % 10]++;
	}

    // remove those elements which appears more then 3 times
    vector<int> v;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < min(3, cnt[i]); j++) {
            v.push_back(i);
        }
    }

    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            for(int k = j + 1; k < v.size(); k++){
                int sum = v[i] + v[j] + v[k];
                if(sum % 10 == 3){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }

    cout << "NO" << endl;
}

int main() {
    Maruf
    int t;
    cin >> t;

    while(t--) solve();
}