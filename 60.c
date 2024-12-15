// Write a C program to check whether a number is Prime, Armstrong or perfect number using functions.

#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int isArmstrong(int num)
{
    int sum = 0, temp = num, digits = 0;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == num;
}

int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
        if (num % i == 0)
            sum += i;
    return sum == num;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    if (isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    if (!isPrime(num) && !isArmstrong(num) && !isPerfect(num))
        printf("%d is none of the above.\n", num);
    return 0;
}
