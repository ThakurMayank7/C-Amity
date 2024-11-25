// Write a program to find the sum of following series: 1! + 2! + 3! + 4! + ….. + n!

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter number of terms N\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += factorial(i);
    }
    printf("The sum of series is : %d\n", sum);

    return 0;
}