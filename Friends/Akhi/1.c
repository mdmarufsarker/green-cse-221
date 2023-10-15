// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P04?fbclid=IwAR2hgC8-5u0zYpQZ_xGwLY4Wv78PA_H1OrWfFtjAclpnYHnHP9MTp5jklnM

#include <stdio.h>
#include <string.h>

void solve(){
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    // convert s1, s2 to lower case
    for(int i = 0; i < strlen(s1); i++){
        if(s1[i] >= 'A' && s1[i] <= 'Z') s1[i] += 32;
        if(s2[i] >= 'A' && s2[i] <= 'Z') s2[i] += 32;
    }

    // comparing s1, s2
    if(strcmp(s1, s2) == 0) printf("0\n");
    else if(strcmp(s1, s2) < 0) printf("-1\n");
    else printf("1\n");
}

int main() {
    solve();
}