// Write a C program to swap two variables without using a third variable

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first variable:\n");
    scanf("%d", &a);
    printf("Enter second variable:\n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped value of a is : %d\n", a);
    printf("Swapped value of b is : %d\n", b);
    return 0;
}