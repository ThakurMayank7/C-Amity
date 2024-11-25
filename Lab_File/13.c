// Write a program to calculate the root of a Quadratic Equation

#include <stdio.h>
#include <math.h>

int main()
{
    printf("If ax^2+bx+c is the quadratic equation\nEnter the values of a,b and c:\n");
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float discriminant = (b * b) - (4.0 * a * c);
    if (discriminant >= 0)
    {
        float root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        float root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("The roots of the equation are real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else
    {
        printf("The roots are Imaginary\n");
    }
    return 0;
}