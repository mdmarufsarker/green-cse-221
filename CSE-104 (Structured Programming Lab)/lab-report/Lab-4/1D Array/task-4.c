// Find the second maximum/second minimum element of an array.

#include <stdio.h>

int main() {
    int a[10], i, n, max, min, second_max, second_min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    second_max = a[0];
    second_min = a[0];

    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            second_max = max;
            max = a[i];
        }
        if (a[i] < min) {
            second_min = min;
            min = a[i];
        }
    }
    printf("Second maximum element is %d\n", second_max);
    printf("Second minimum element is %d\n", second_min);

return 0;
}