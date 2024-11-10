//  Write a program to check all the Armstron numbers between 1 to n

#include <stdio.h>
#include <math.h>

void main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    //  A number whose sum of square of digits is equal to the number is a Armstrong Number
    
    int check = 0;
    for(int i=n; i>0; i/=10)
    {
        int f=i%10;
        check+=f*f*f;
    }
    if(check==n)
    {
        printf("It is an Armstrong Number\n");   
    }
    else{
        printf("It is not an Armstrong Number\n");
    }
}