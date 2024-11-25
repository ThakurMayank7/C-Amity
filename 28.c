// Write a program to find the sum of following series: S = -1 ^3 + 3^3 - 5 ^3 + 7^3 – 9 ^3 + 11^3 - ……..N terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms N\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = 2 * i - 1;
        if (i % 2 == 0) // even terms
        {
            sum += (x * x * x);
        }
        else
        {
            sum -= x;
        }
    }
    printf("The sum of n terms of series is : %d\n", sum);

    return 0;
}