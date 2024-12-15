// Write a program in C to print the following pattern:
// 1
// 2 2
// 3 3 3

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}