// Write a program to convert binary number to decimal number.

#include <stdio.h>
#include <math.h>
int main(){
    int binary;
    printf("Enter a binary number to convert to decimal number\n");
    scanf("%d", &binary);
    int count=0,decimal = 0;
    for(int i=binary; i>0;i/=10)
    {
        decimal+=(i%10)*pow(2,count);
        count++;
    }
    printf("The number in decimal is : %d\n",decimal);
    return 0;
}