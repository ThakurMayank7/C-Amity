// Write a C program to check whether a triangle is right angles, obtuse, acute triangle

#include <stdio.h>

int main()
{
    float a1, a2, a3;
    printf("Enter angles of triangle to check type of triangle\n");
    printf("Enter first angle of triangle\n");
    scanf("%f", &a1);
    printf("Enter second angle of triangle\n");
    scanf("%f", &a2);
    printf("Enter third angle of triangle\n");
    scanf("%f", &a3);
    if (a1 + a2 + a3 == 180.0 && a1 > 0 && a2 > 0 && a3 > 0)
    {
        if (a1 == 90.0 || a2 == 90.0 || a3 == 90.0)
        {
            printf("This is a Right Angled Triangle.\n");
        }
        else if (a1 > 90.0 || a2 > 90.0 || a3 > 90.0)
        {
            printf("This is a Obtuse Angled Triangle.\n");
        }
        else
        {
            printf("This is a Acute Angled Triangle.\n");
        }
    }
    else
    {
        printf("Please Enter a Valid Triangle!\n");
    }
    return 0;
}