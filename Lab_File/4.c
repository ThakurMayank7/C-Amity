// Write a C program that accepts two item’s weight (floating points' values) and number of purchase (floating points' values) and calculate the average value of the items

// value=weight*number of purchases

#include <stdio.h>

int main()
{
    float w1, w2, n1, n2;
    printf("Enter the weight of item 1: ");
    scanf("%f", &w1);
    printf("Enter the weight of item 2: ");
    scanf("%f", &w2);
    printf("Enter the number of purchases for item 1: ");
    scanf("%f", &n1);
    printf("Enter the number of purchases for item 2: ");
    scanf("%f", &n2);
    printf("The average value of the items is : %f\n", ((w1 * n1) + (w2 * n2)) / 2);
    return 0;
}