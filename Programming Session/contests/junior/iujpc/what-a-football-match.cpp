#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int x, y;
        cin >> x >> y;
        
        int c;
        if(x == 1){
            c = 96 + y;
            cout << "Unmarried-" << (char) c << endl;
        }
        if(x == 2){
            c = 64 + y;
            cout << "Married-" << (char) c << endl;
        }
    }

return 0;
}
