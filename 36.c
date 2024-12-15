// Write a program in C to print the following pattern:
// 3 3 3
// 2 2 2
// 1 1 1

#include <stdio.h>

int main()
{
    for (int i = 3; i > 0; i--)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}