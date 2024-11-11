//  Write a program to print a rhombus in a star pattern

/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */

#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("  ");
        }
        for (int k = 1; k <= 5; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}