// Written by: Md. Maruf Sarker
// Platform: hackerrank
// Problem: https://www.hackerrank.com/contests/primary-level-programming-contest-01-gucc/challenges/calculator-
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

    double num1, num2;
    cin >> num1 >> num2;
    
    printf("%.2f\n", num1 + num2);
    printf("%.2f\n", num1 - num2);
    printf("%.2f\n", num1 * num2);
    printf("%.2f\n", num1 / num2);

return 0;
}