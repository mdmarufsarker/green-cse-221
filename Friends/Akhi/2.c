// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02?fbclid=IwAR1XbdmywBJV9xItCTYpKS6Au0sySy8F8cnsfLWxBoQXujBFxjux16_JpXk

#include <stdio.h>
#include <string.h>

void solve(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int a, b, sum = 0;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) sum += arr[i];

    printf("%d\n", sum);
}

int main() {
    solve();
}