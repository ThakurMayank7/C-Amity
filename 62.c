// Write a C program to print all strong numbers between given interval using functions.

#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int isStrong(int num)
{
    int sum = 0, temp = num;
    while (temp != 0)
    {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}

void printStrongNumbersInRange(int start, int end)
{
    for (int i = start; i <= end; i++)
        if (isStrong(i))
            printf("%d ", i);
    printf("\n");
}

int main()
{
    int start, end;
    printf("Enter start and end of interval: ");
    scanf("%d %d", &start, &end);
    printf("Strong numbers between %d and %d: ", start, end);
    printStrongNumbersInRange(start, end);
    return 0;
}
