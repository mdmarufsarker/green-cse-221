// Write a program

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		int a[n], b[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		int temp1, temp2;
		
		int dis1 = 0, dis2 = 0, sum1 = 0, sum2 = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6){
				dis1 = 1;
				sum1 = 0;
			}else{
				if(a[i] == 6) temp1 = i;
				for(temp1; temp1 < n + 1; temp1++) sum1 += a[i];
			}
		}
		for(int i = 0; i < n; i++){
			if(b[i] == 6 && b[i + 1] == 6 && b[i + 2] == 6){
				dis2 = 1;
				sum2 = 0;
			}else{
				if(b[i] == 6) temp2 = i;
				for(temp2; temp2 < n; temp2++) sum2 += b[i];
			}
		}
		if(sum1 > sum2) cout << "Clod\n";
		else if(sum1 < sum2) cout << "Dope\n";
		else cout << "Draw\n";
	}

return 0;
}
