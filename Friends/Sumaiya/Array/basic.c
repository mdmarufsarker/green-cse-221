// Write a problem 

#include <stdio.h>
// #include <string.h>

int main() {
    // char name1[] = "maruf sarker";
    // char name2[] = "sumaiya khan nishat";
    // char name3[] = "wasif wahab";
    // char name4[] = "emon";

    // printf("%s\n", name1);
    // printf("%s\n", name2);
    // printf("%s\n", name3);
    // printf("%s\n", name4);

    int arr[] = {1, 2, 3, 4, 5};

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    // printf("%d\n", arr[2]);
    // printf("%d\n", arr[3]);
    // printf("%d\n", arr[4]);

    // int n = sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n", n);

    // for(int i = 0; i < n; i++){
    //     printf("%d\n", arr[i]);
    // }

    int myNumbers[4];

    myNumbers[0] = 25;
    myNumbers[1] = 50;
    myNumbers[2] = 75;
    myNumbers[3] = 100;

    // for(int i = 0; i < 4; i++){
    //     printf("%d\n", myNumbers[i]);
    // }


    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int nishat[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &nishat[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", nishat[i]);
    }


return 0;
}