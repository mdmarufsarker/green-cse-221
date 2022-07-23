#include <stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    int i;

    // i = i + 2

    for(i = 1; i <= n; i++){
        if(i % 2 == 0) printf("%d = even number\n", i);
        else printf("%d = odd number\n", i);
    }

    return 0;
}