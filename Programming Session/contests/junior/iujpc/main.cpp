// Written by: Md. Maruf Sarker
// Platform: Hackerrank
// Problem: https://www.hackerrank.com/contests/reply-of-gub-intra-university-junior-programming-contest-dec-2022/challenges/clod-and-dopes-ludo
// Language: cpp / go / c / python
// Date: 2022-12-25
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define pi 3.141592653589793238462
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define nn int n; cin >> n
#define ixy int x, y; cin >> x >> y
#define ixyz int x, y, z; cin >> x >> y >> z
#define arr_input(n) int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i]
#define arr2_input(n, m) int arr[n][m]; for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> arr[i][j]
#define arr_output(n) for(int i = 0; i < n; i++) cout << arr[i] << endl
#define arr2_output(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cout << arr[i][j] << endl
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()

int read(){static int x; cin >> x; return x;}
ll readll(){static ll x; cin >> x; return x;}
double readd(){static double x; cin >> x; return x;}
ld readld(){static ld x; cin >> x; return x;}
string reads(){static string x; cin >> x; return x;}
char readc(){static char x; cin >> x; return x;}
#define mms ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.precision(2)

void solve(){
    int n;
	cin >> n;
		
	int a[n], b[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];

    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) {
        sum1 += a[i];
        if(a[i] == 6) break;
    }
    for(int i = 0; i < n; i++) {
        sum2 += b[i];
        if(b[i] == 6) break;
    }

    if(sum1 > sum2) cout << "Clod" << endl;
    else if(sum1 < sum2) cout << "Dope" << endl;
    else cout << "Draw" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}