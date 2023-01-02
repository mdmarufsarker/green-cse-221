// Write a program

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		
/*
In a parallel universe, the Football Universe Cup (FUC) is running. Unlike earth, N teams are participating instead of 32 teams in the tournament. The summation of a team's player's age is equal to their strength. The ith team has strength a[i] where 1 <= i <= N.
Boltu is working there as an organizer. He has an evil mind and wants to make the tournament as unfair as possible. So, he wants to organize the teams in such a way that maximizes the summation of differences between the adjacent teams' strengths and apply it into the whole tournament. That means, abs(a[i] - a[i+1]) + …. + abs(a[N-1] + a[N]) should be the maximum possible.
Since Boltu is as lazy as this problem setter, he wants the best programmer to do this task for him. That’s why he asked you to do this. Can you help him out?
**Note: a[1] and a[N] are considered as adjacent teams. **
*/

		sort(arr, arr+n);
		int ans = 0;
		for(int i = 0; i < n-1; i++) ans += abs(arr[i] - arr[i+1]);
		ans += abs(arr[0] - arr[n-1]);
		cout << ans << endl;
	}

return 0;
}
