// Write a C program to convert a given integer (in seconds) to hours, minutes, and seconds

#include <stdio.h>

int main(){
    int seconds;
    printf("Enter number of seconds to convert:\n");
    scanf("%d", &seconds);
    int hours,minutes,remSeconds;
    hours =seconds /3600; //calculating hours
    minutes=(seconds%3600)/60; //dividing remaining seconds by 60
    remSeconds=(seconds%3600)%60; //calculating seconds
    printf("%d seconds = %d hours, %d minutes, and %d seconds\n", seconds, hours, minutes, remSeconds);
    return 0;
}