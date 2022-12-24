// gub-iujpc-2022

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159

int main() {
	int t;
	cin >> t;
	
	while(t--){
		float x, y;
		cin >> x >> y;
		
		float r1 = (x / 2), r2 = (y / 2);
		
		float p1 = PI * r1 * r1;
		float p2 = PI * r2 * r2;
		
		if(p1 < 2 * p2) cout << "YES\n";
		else cout << "NO\n";
	}

return 0;
}

/*
 *  2r = x
 * r = x / 2
 * 
 * 
 * 
*/
