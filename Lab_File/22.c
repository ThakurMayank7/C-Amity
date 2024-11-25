//  Write a program in C to accept an integer number and to check a number is Armstrong or not

//  A number whose sum of square of digits is equal to the number is a Armstrong Number

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to check for Armstrong number\n");
    scanf("%d", &n);

    int check = 0;
    for (int i = n; i > 0; i /= 10)
    {
        int f = i % 10;
        check += f * f * f;
    }
    if (check == n)
    {
        printf("It is an Armstrong Number\n");
    }
    else
    {
        printf("It is not an Armstrong Number\n");
    }
    return 0;
}