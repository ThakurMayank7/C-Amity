// Write a program to find the sum of following series: 1 – 1/2 + 1/3 – 1/4 + 1/5 - …… up to n terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of Terms : N\n");
    scanf("%d", &n);
    float sum = 0.0;
    for (int i = 1.0; i <= n; i++)
    {
        if (i % 2 == 0) // even term
        {
            sum -= (1.0 / i);
        }
        else // odd term
        {
            sum += (1.0 / i);
        }
    }
    printf("The sum of N terms of the series is : %f\n", sum);
    return 0;
}