// Write a program to check a number whether it is prime number or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to check if it is Prime or not : \n");
    scanf("%d", &n);
    int checker = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) // checking divisibility
        {
            checker++;
        }
    }
    if (checker == 1)
    {
        printf("%d is a Prime Number\n", n);
    }
    else
    {
        printf("%d is not a Prime Number\n", n);
    }
    return 0;
}