// Write a program in C to find and print all the roots of a quadratic equation

#include <stdio.h>

int main()
{
    printf("If ax^2+bx+c is the quadratic equation\nEnter the values of a,b and c:\n");
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    float root1 = ((-b) + ((b * b) - 4 * a * c)) / (2 * a);
    float root2 = ((-b) - ((b * b) - 4 * a * c)) / (2 * a);

    printf("The roots of equation are : %d and %d", root1, root2);

    return 0;
}