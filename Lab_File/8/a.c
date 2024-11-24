// Write a C program to check whether a triangle is Equilateral, scalene, or isosceles

#include <stdio.h>

int main()
{
    float s1, s2, s3;
    printf("Enter sides of the triangle to check it's type:\n");
    printf("Enter side 1 of the triangle:\n");
    scanf("%f", &s1);
    printf("Enter side 2 of the triangle:\n");
    scanf("%f", &s2);
    printf("Enter side 3 of the triangle:\n");
    scanf("%f", &s3);
    if (s1 == s2 && s1 == s3)
    {
        printf("This is an Equilateral Triangle\n");
    }
    else if (s1 == s2 || s1 == s3 || s2 == s3)
    {
        printf("This is an Isosceles Triangle\n");
    }
    else
    {
        printf("This is a Scalene Triangle\n");
    }
    return 0;
}