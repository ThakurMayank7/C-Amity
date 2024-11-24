// Write a C program to swap two variables using a third variable

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first variable:\n");
    scanf("%d", &a);
    printf("Enter second variable:\n");
    scanf("%d", &b);
    int c=a;
    a=b;
    b=c;
    printf("Swapped value of a is : %d\n", a);
    printf("Swapped value of b is : %d\n", b);
    
    
    
    return 0;
}