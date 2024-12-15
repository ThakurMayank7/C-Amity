// Write a program in C to print the following pattern:
// 3
// 3 2
// 3 2 1

#include <stdio.h>

int main()
{
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 3; j >= i; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}