// Write a program in C to accept an integer numbers and find reverse of this number and check this number for palindrome

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to find reverse and check for palindrome\n");
    scanf("%d", &n);

    int reverse = 0;
    for (int i = n; i > 0; i /= 10)
    {
        reverse = (reverse * 10) + i % 10;
    }
    printf("The Reverse of %d is %d\n", n, reverse);
    if (n == reverse)
    {
        printf("The number is Palindrome Number\n");
    }

    return 0;
}