// Write a C program to calculate simple interest

#include <stdio.h>

int main(){
    float principle,rate,time;
    printf("Enter the principle amount:\n");
    scanf("%f", &principle);
    printf("Enter the rate of interest:\n");
    scanf("%f", &rate);
    printf("Enter the time in years:\n");
    scanf("%f", &time);
    printf("The simple interest is : %f\n",(principle*rate*time)/100);
    return 0;
}