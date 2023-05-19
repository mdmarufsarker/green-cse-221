// 1. Determine the coefficients of the given polynomial p(x) = a0 + a1x + a2x2

// Whose graph passes through the points (1, 3), (2, Last digit of your ID), and (3,8). Also plot the function using MATLAB command (having a proper title, x and y axis notation).

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, k, order;
    float M[20][20], r, p[100000], sum = 0.0;

    cout << "Enter the order of matrix: ";
    cin >> order;
    cout << "Enter the augmented matrix: " << endl;
    for(i = 1; i <= order; i++)
        for(j = 1; j <= (order + 1); j++)
            cin >> M[i][j];
    cout << endl;
    
    cout << "Augmented Matrix: " << endl;
    for(i = 1; i <= order; i++){
        for(j = 1; j <= order + 1; j++)
            cout << M[i][j] << "\t";
        cout << endl;
    }

    for(j = 1; j <= order; j++)
        for(i = 1; i <= order; i++)
            if(i > j){
                r = M[i][j] / M[j][j];
                for(k = 1; k <= order + 1; k++)
                    M[i][k] = M[i][k] - r * M[j][k];
            }

    p[order] = M[order][order + 1] / M[order][order];
    for(i = order - 1; i >= 1; i--){
        sum=0.0;
        for(j = i + 1; j <= order; j++)
            sum = sum + M[i][j] * p[j];
        
        p[i] = (M[i][order + 1] - sum) / M[i][i];
    }
    
    cout << "\nSolution: " << endl;
    cout << "p = " << p[1] << endl;
    cout << "q = " << p[2] << endl;
    cout << "r = " << p[3] << endl;
}