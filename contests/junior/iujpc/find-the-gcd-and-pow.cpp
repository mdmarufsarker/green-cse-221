// Write a program

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
/*
Find the GCD and POW

The problem statement is too short and i think you like it.
You are given three number X,Y,Z. Find the GCD of (x^z + y^z) and (Y-X).
Here GCD(a,b) means greatest common divisors of a and b.

It is guaranteed that X < Y and (Y-X) <= 10^6

Input Format
The first line of the input conatain a single integer T, the number of testcase.

Each of next T line contain three integer X,Y,Z.

Constraints
1 <= T <= 100
1 <= X, Y, Z <= 10^9

Output Format
Print a single integer GCD of (x^z + y^z) and (Y-X).
*/

		long long x, y, z;
		cin >> x >> y >> z;
		
		long long ans = 1;
		for(int i = 2; i <= y-x; i++){
			if((x^z) % i == 0 && (y^z) % i == 0) ans = i;
		}
		cout << ans << endl;
	}

return 0;
}
