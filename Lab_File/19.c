//  Write a program to print fibonacci series upto n terms

#include <stdio.h>

int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("1,");
    }
    if (n >= 2)
    {
        printf("1,");
    }
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++)
    {
        int c = a + b;
        if (i == n) // to avoid the ending comma
        {
            printf("%d", c);
            break;
        }
        printf("%d,", c);
        a = b;
        b = c;
    }
    return 0;
}