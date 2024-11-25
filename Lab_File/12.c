// Write a program in C to implement Simple Calculator.

#include <stdio.h>

int main()
{
    int type;
    printf("Enter type of calculation to be performed:\n");
    printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n");
    scanf("%d", &type);
    float a, b;
    printf("Enter first number\n");
    scanf("%f", &a);
    printf("Enter second number\n");
    scanf("%f", &b);
    switch (type)
    {
    case 1:
        printf("The addition of %f and %f is : %f\n", a, b, a + b);
        break;
    case 2:
        printf("The subtraction of %f and %f is : %f\n", a, b, a - b);
        break;
    case 3:
        printf("The multiplication of %f and %f is : %f\n", a, b, a * b);
        break;
    case 4:
        if (b == 0)
        {
            printf("Cannot divide by zero\n");
        }
        else
        {
            printf("The division of %f and %f is : %f\n", a, b, a / b);
        }
        break;
    default:
        printf("Wrong input!");
        break;
    }
    return 0;
}