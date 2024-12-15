// 61.Write a C program to find all prime numbers between given interval using functions.

#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

void printPrimesInRange(int start, int end)
{
    for (int i = start; i <= end; i++)
        if (isPrime(i))
            printf("%d ", i);
    printf("\n");
}

int main()
{
    int start, end;
    printf("Enter start and end of interval: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d: ", start, end);
    printPrimesInRange(start, end);
    return 0;
}
