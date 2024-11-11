//  Write a program to print 9 with a star pattern

/*
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
            *
            *
            *
    * * * * *
*/

#include <stdio.h>

int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==9 || i==5 || j==5 || (j==1 && i<5))
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}