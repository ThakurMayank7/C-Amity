// Write a program in C to accept an integer number and find sum of digits.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to find it's sum of digits\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = n; i > 0; i /= 10)
    {
        sum += i % 10;
    }
    printf("The sum of digits of %d is %d\n", n, sum);

    return 0;
}