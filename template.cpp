#include <bits/stdc++.h>
#include <debug.h>
using namespace std;

int main(){
    string s;
    vector<string> str(1000);
    int t = 180;
    str.clear();
    while(t--){
        getline(cin, s);
        str.push_back(s);
    }
    // dbg(str);
    for(auto i : str){
        cout << i << "," << endl;
    }
    cout << endl;
}