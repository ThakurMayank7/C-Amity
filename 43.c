// Write a program in C to print the following pattern:
//    1
//   1 2 1
//  1 2 3 2 1
// 1 2 3 4 3 2 1

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" \t");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}