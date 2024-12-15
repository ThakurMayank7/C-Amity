// Write a program to print all prime numbers <= a given number.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number upto which prime numbers are to be printed:\n");
    scanf("%d", &n);
    printf("The Prime Numbers upto given number are:\n");
    for (int i = 1; i <= n; i++)
    {
        int checker = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                checker++;
            }
        }
        if (checker == 2)
        {
            printf("%d,", i);
        }
    }
    return 0;
}