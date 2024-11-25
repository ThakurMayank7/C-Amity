// Write a C program to find largest of three numbers

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first number : \n");
    scanf("%d", &a);
    printf("Enter second number : \n");
    scanf("%d", &b);
    printf("Enter third number : \n");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("%d is the largest number\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the largest number\n", b);
    }
    else
    {
        printf("%d is the largest number\n", c);
    }

    return 0;
}