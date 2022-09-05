// Written by: Md. Maruf Sarker
// Platform: hackerrank
// Problem: https://www.hackerrank.com/contests/primary-level-programming-contest-01-gucc/challenges/print-the-number-1
// Language: cpp / go / c / python
// Date: 2022-09-04
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);  cout.tie(NULL);

    int number;
    cin >> number;

    if(number > 9){
        cout << "GREATER THAN 9" << endl;
    }

    switch(number){
        case 0:
            cout << "ZERO\n";
            break;
        case 1:
            cout << "ONE\n";
            break;
        case 2:
            cout << "TWO\n";
            break;
        case 3:
            cout << "THREE\n";
            break;
        case 4:
            cout << "FOUR\n";
            break;
        case 5:
            cout << "FIVE\n";
            break;
        case 6:
            cout << "SIX\n";
            break;
        case 7:
            cout << "SEVEN\n";
            break;
        case 8:
            cout << "EIGHT\n";
            break;
        case 9:
            cout << "NINE\n";
    }

    if(number % 2 == 0) cout << "EVEN\n";
    else cout << "ODD\n";

return 0;
}