// Write a program to find the sum of following series: S = 1/1! + 2/2! + 3/3! + ………….. 7 terms

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
    float sum = 0.0;
    for (int i = 1; i <= 7; i++)
    {
        sum += ((float)i / (float)factorial(i));
    }
    printf("The sum of series upto 7 terms is : %f\n", sum);
    return 0;
}