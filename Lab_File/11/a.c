// Write a C program to find smallest of two numbers

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number : \n");
    scanf("%d", &a);
    printf("Enter second number : \n");
    scanf("%d", &b);
    if (a < b)
    {
        printf("%d is smaller than %d\n", a, b);
    }
    else if (a > b)
    {
        printf("%d is smaller than %d\n", b, a);
    }
    else
    {
        printf("%d and %d are equal\n", a, b);
    }
    return 0;
}