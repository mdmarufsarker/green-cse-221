// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/1973/problem/0
// Date: 2024-05-17

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    
};

/*
Three friends gathered to play a few games of chess together.

In every game, two of them play against each other. The winner gets 2
points while the loser gets 0, and in case of a draw, both players get 1

point each. Note that the same pair of players could have played any non-negative number of times (possibly zero). It is also possible that no games were played at all.

You've been told that their scores after all the games were played were p1, p2 and p3. Additionally, it is guaranteed that p1≤p2≤p3 holds.

Find the maximum number of draws that could have happened and print it. If there isn't any way to obtain p1
, p2 and p3 as a result of a non-negative number of games between the three players, print −1 instead.
*/

void maruf(int t){
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    if(p1 + p2 + p3 % 2 == 1){
        cout << -1 << endl;
        return;
    }

    int max_draw = (p1 + p2 + p3) / 2 - max({p1, p2, p3});
    if(p1 + p2 < p3 || p1 + p3 < p2 || p2 + p3 < p1){
        cout << -1 << endl;
        return;
    }
    cout << max_draw << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}