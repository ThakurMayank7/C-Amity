// Write a program in C to print the following pattern:
// * * *
// * * *
// * * *

#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}