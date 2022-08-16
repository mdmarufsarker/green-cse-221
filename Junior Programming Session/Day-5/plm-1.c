// https://vjudge.net/contest/509062#problem/A
// A - GCD LCM

#include<iostream>
using namespace std;

int main(){
    int x, y, t;

    cin >> t;

    while(t--){
        cin >> x >> y;
        if(y % x == 0) cout << x << " " << y << "\n";
        else cout << "-1\n";
    }

    return 0;
}