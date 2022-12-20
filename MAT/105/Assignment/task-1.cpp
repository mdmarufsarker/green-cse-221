// 1. Determine the coefficients of the given polynomial p(x) = a0 + a1x + a2x2

// Whose graph passes through the points (1, 3), (2, Last digit of your ID), and (3,8). Also plot the function using MATLAB command (having a proper title, x and y axis notation).

#include <bits/stdc++.h>
using namespace std;

int main(){
    // taking the points from the user
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the first point: ";
    cin >> x1 >> y1;
    cout << "Enter the second point: ";
    cin >> x2 >> y2;
    cout << "Enter the third point: ";
    cin >> x3 >> y3;

    // calculating the coefficients of the polynomial
    int a0 = y1;
    int a1 = (y2 - y1) / (x2 - x1);
    int a2 = ((y3 - y1) / (x3 - x1)) - a1;

    // printing the coefficients of the polynomial
    cout << "The coefficients of the polynomial are: " << a0 << " " << a1 << " " << a2 << endl;

    // plotting the graph of the polynomial
    int x = x1;
    while(x <= x3){
        int y = a0 + a1 * x + a2 * x * x;
        cout << "(" << x << ", " << y << ")" << endl;
        x++;
    }

    return 0;
}