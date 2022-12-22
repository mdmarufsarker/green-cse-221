// 3. Determine the currents for the electrical network shown in the following figure:

#include <bits/stdc++.h>
using namespace std;

int main(){
    // we have to find the value of I1, I2, I3
    int I1, I2, I3;

    int R1, R2, R3;
    cout << "Enter the value of R1: ";
    cin >> R1;
    cout << "Enter the value of R2: ";
    cin >> R2;
    cout << "Enter the value of R3: ";
    cin >> R3;

    int V1, V2;
    cout << "Enter the value of V1: ";
    cin >> V1;
    cout << "Enter the value of V2: ";
    cin >> V2;

    int i1, i2, i3;
    cout << "1) Type 1 if it is in" << endl;
    cout << "2) Type 0 if it is out" << endl;
    cout << "Enter three directions for A" << endl;
    cin >> i1 >> i2 >> i3;

    // i1 + i2 - i3 = 0;
    // => i3 = i1 + i2;
    if(i1 == 1 && i2 == 1 && i3 == 0) i3 = i1 + i2;
    else cout << "Wrong Input :(\n";

    // left loop
    // R1 * I1 + R2I3 = V1
    // R1 * I1 + R2 * (I1 + I2) = V1
    // R1 * I1 + R2 * I1 + R2 * I2 = V1
    // (R1 + R2) * I1 + R2 * I2 = V1;   ---------(1)

    // right loop
    // R3 * I2 + R2 * I3 = -V2;
    // R3 * I2 + R2 * (I1 + I2) = -V2;
    // R3 * I2 + R2 * I1 + R2 * I2 = -V2;
    // (R3 + R2) * I2 + R2 * I1 = -V2;  ---------(2)

    
    // multiplying (1) by 3 and (2) by 2
    // (R1 + R2) * 3 * I1 + R2 * 3 * I2 = 3 * V1;
    // (R3 + R2) * 2 * I2 + R2 * 2 * I1 = -2 * V2;

    // subtracting (2) from (1)
    int V = (V1 * 3) - (V2 * 2);
    int I = (R1 + R2) * 3 - (R3 + R2) * 2;

    I1 = V / I;
    I2 = (V1 - (R1 + R2) * I1) / R2;
    I3 = I1 + I2;
    cout << "I1 = " << I1 << endl;
    cout << "I2 = " << I2 << endl;
    cout << "I3 = " << I3 << endl;
}

