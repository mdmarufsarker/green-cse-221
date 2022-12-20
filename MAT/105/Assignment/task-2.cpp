// Using suitable command encode the message “ABBREVIATIONS” by using matrix A given below:

#include <bits/stdc++.h>
using namespace std;

int main(){
    // taking the key from the user assuming that the matrix is a 2 x 2 square matrix
    int key[2][2];
    cout << "Enter the key matrix: " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> key[i][j];
        }
    }

    // taking the message from the user
    string message;
    cout << "Enter the message: ";
    cin >> message;

    // converting the message to uppercase
    transform(message.begin(), message.end(), message.begin(), ::toupper);

    int encrypt_message[7][2] = {
        {1, 2},
        {2, 18},
        {5, 22},
        {9, 1},
        {20, 9},
        {15, 14},
        {19, 0}
    };

    // multiplying the 2 x 1 key matrix with the 2 x 2 encrypt_message matrix
    int result[7][2];
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 2; j++){
            result[i][j] = 0;
            for(int k = 0; k < 2; k++){
                result[i][j] += encrypt_message[i][k] * key[k][j];
            }
            cout << result[i][j] << " ";
        }
    }
    cout << endl;
}