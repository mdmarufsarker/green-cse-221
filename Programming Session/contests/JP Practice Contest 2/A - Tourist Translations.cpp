#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t >> s;

    while(t--){
        string str;
        cin >> str;

        for(int i = 0; i < str.length(); i++){
            if(str[i] == '_') cout << " ";
            else if(str[i] >= 'A' && str[i] <= 'Z') cout << (char)(s[str[i] - 'A'] - 'a' + 'A');
            else if(str[i] >= 'a' && str[i] <= 'z') cout << s[str[i] - 'a'];
            else cout << str[i];
        }

        cout << endl;
    }
}