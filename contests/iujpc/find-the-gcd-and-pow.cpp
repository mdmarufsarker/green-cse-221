// Write a program

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
		long long x, y, z;
		cin >> x >> y >> z;
		
		// y = y - z;
		cout << __gcd(x ^ z + y ^ z, y - x) << endl;
	}

return 0;
}
