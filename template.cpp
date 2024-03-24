#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    for (auto r : v)
    {
        cout << r << " ";
    }
    cout << endl;
}