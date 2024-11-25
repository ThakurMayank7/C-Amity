// Write a program to find the sum of following series: S = 2+4+6+8+……………N terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number of Terms : \n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 2; i <= n * 2; i += 2)
    {
        sum += i;
    }
    printf("The sum of N terms of the series is : %d\n", sum);

    return 0;
}