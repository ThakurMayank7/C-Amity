//  Write a C program to check whether a number is even or odd

#include <stdio.h>

int main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("%d is a even number\n",a);
    }
    else{
        printf("%d is an odd number\n",a);
    }
    return 0;
}