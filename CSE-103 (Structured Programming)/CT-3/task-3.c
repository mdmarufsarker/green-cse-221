// Suppose you have some words and you want to right justify them, that is, align them to the right. Create a program that reads some words and print it all right justified, in the same order as they appear in the input

#include <stdio.h>

int result(int n) {
    
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        char str1[50], str2[50], str3[50];
        scanf("%s", str1);
        scanf("%s", str2);
        scanf("%s", str3);

        int i = 0, j = 0, k = 0;
        while (str1[i] != '\0') {
            i++;
        }
        i--;
        while(str2[j] != '\0') {
            j++;
        }
        j--;
        while(str3[k] != '\0') {
            k++;
        }
        k--;
        if(i > j && i > k){
            result(i);
        }else if(j > i && j > k){
            result(j);
        }else{
            result(k);
        }
    }

return 0;
}