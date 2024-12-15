// Write a program in C to print the following pattern:
// 3 2 1
// 3 2 1
// 3 2 1

#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j > 0; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}