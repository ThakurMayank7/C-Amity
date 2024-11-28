// 31. Write a program to find the sum of following series:  S = 14 + 34 + 54 + 74 + …………….. 100 terms

#include <stdio.h>

int main(){
    int sum=0;
    for(int i=0;i<100;i++)
    {
        sum+=i*20+14;
    }
    printf("The sum of 100 terms of this series is : %d\n",sum);
    
    return 0;
}