#include <bits/stdc++.h>
using namespace std;

int main(){
    int key[2][2];
    cout << "Enter the key matrix: " << endl;
    for(int i = 0; i < 2; i++) for(int j = 0; j < 2; j++) cin >> key[i][j];

    string message;
    cout << "Enter the message: "; cin >> message;

    int encrypt_message[7][2] = {{1, 2},{2, 18},{5, 22},{9, 1},{20, 9},{15, 14},{19, 0}};

    int result[7][2];
    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 2; j++){
            result[i][j] = 0;
            for(int k = 0; k < 2; k++) result[i][j] += encrypt_message[i][k] * key[k][j];
            cout << result[i][j] << " ";
        }
    cout << endl;
}