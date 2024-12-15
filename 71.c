//  Write macro definition with arguments for calculation of simple interest and amount. Store these macro definitions in a file called ‘Interest.h”. Include this file in your program and use the macro definition for calculating simple interest and amount.

#include <stdio.h>
#include "Interest.h"

int main()
{
    float principal, rate, time;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest and Total Amount using macros
    float si = SIMPLE_INTEREST(principal, rate, time);
    float amount = AMOUNT(principal, rate, time);

    printf("Simple Interest: %.2f\n", si);
    printf("Total Amount: %.2f\n", amount);

    return 0;
}
