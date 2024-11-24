// Write a C program to check whether a given year is Leap year or not

// A year is a leap year if it satisfies the following rules:

// Divisible by 4: The year must be divisible by 4.
// Not divisible by 100, unless divisible by 400: If the year is divisible by 100, it must also be divisible by 400 to be a leap year.

#include <stdio.h>

int main(){
    int years;
    printf("Enter the year:\n");
    scanf("%d", &years);
    if((years%4==0 && years%100!=0) || years%400==0)
    {
        printf("%d is a Leap Year.\n",years);
    }
    else{
        printf("%d is not a Leap Year.\n",years);
    }
    return 0;
}