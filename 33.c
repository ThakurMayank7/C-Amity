// Write a program in C to print the following pattern: 
// 1 2 3 
// 1 2 3 
// 1 2 3 

#include <stdio.h>

int main(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }
    return 0;
}