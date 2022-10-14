// write a for loop to print the following 
// 1 -11 111 -1111 11111 -111111 1111111 -11111111

#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("1");
            }
        }
        printf(" ");
    }
    return 0;
}