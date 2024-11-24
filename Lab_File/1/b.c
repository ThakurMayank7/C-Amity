// Write a C program to add three numbers

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers to add :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("The sum of numbers is : %d\n",a+b+c);
    return 0;
}