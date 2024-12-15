// Write a program in C to print the following pattern:
//     5
//    5 4 5
//   5 4 3 4 5
//  5 4 3 2 3 4 5
// 5 4 3 2 1 2 3 2 1

#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" \t");
        }

        for (int j = 5; j >= i; j--)
        {
            printf("%d\t", j);
        }
        for (int j = i + 1; j <= 5; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}