// Write a program in C to accept an integer numbers and to check a number is Perfect or not

/*
    A perfect number is a positive integer that is equal to the sum of its proper divisors, or divisors excluding the number itself
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to check whether it is a perfect number or not\n");
    scanf("%d", &n);
    int checker = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) // checking for divisibility
        {
            checker += i;
        }
    }
    if (checker == n)
    {
        printf("The Number is a Perfect Number\n");
    }
    else
    {
        printf("The Number is not a Perfect Number\n");
    }
    return 0;
}