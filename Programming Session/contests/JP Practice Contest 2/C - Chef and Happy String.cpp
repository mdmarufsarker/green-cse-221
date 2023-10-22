#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        bool ok = false;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i]) and isVowel(s[i + 1]) and isVowel(s[i + 2])){
                ok = true;
                break;
            }
        }

        cout << (ok ? "Happy" : "Sad") << endl;
    }
}