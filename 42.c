// Write a program in C to print the following pattern:
//    *
//   * * *
//  * * * * *
// * * * * * * *

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" \t");
        }

        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}