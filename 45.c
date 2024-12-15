// Write a program in C to print the following pattern:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <stdio.h>

int main()
{
    int a = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = a == 0 ? 1 : 0;
        }
        printf("\n");
        a = i % 2 != 0 ? 0 : 1;
    }
    return 0;
}