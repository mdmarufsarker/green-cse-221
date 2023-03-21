// 3. Determine the currents for the electrical network shown in the following figure:

#include <bits/stdc++.h>
using namespace std;
#define SIZE 20

int main(){
    float a[SIZE][SIZE], x[SIZE], ratio;
    int i, j, k, n;
    cout << "Enter number of Matrix: ";
    cin >> n;
    for(i = 1;i <= n; i++)
        for(j = 1;j <= n + 1; j++)
            cin >> a[i][j];

    for(i = 1; i <= n - 1; i++){
        if(a[i][i] == 0.0) cout << "Mathematical Error!";
    
        for(j = i + 1;j <= n; j++){
            ratio = a[j][i] / a[i][i];
            for(k = 1;k <= n + 1; k++)
                a[j][k] = a[j][k] - ratio * a[i][k];
        }
    }

    x[n] = a[n][n + 1] / a[n][n];
    for(i = n - 1; i >= 1; i--){
        x[i] = a[i][n + 1];
        for(j = i + 1; j <= n; j++)
            x[i] = x[i] - a[i][j] * x[j];
    
        x[i] = x[i] / a[i][i];
    }

    cout << "Solution: " << endl;
    for(i = 1; i <= n; i++)
        cout << "I[" << i << "] = " << x[i] << endl;
    return 0;
}