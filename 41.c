// Write a program in C to print the following pattern: 
// 3   
// 2 2  
// 1 1 1 

#include <stdio.h>

int main(){
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 3; j >= i; j--)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}