// https://codeforces.com/contest/1676/problem/C

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n, m;
        cin >> n >> m;
        
        vector<string> v;
        for (int i = 0; i < n; i++){
            string tmp;
            cin >> tmp;
            v.push_back(tmp);
        }

        int result = INT_MAX;
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                int cnt = 0;
                for (int k = 0; k < m; k++){
                    cnt += (abs)(v[i][k] - v[j][k]);
                }
                result = min(result, cnt);
            }
        }

        cout << result << endl;
    }
}
