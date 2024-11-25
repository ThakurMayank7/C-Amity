// Write a program to find the factorial of any number`

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number to find it's factorial : \n");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d\n", n, factorial);

    return 0;
}