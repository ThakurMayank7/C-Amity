//  Write a program to print hour glass with number pattern

/*
    1 2 3 4 5
     1 2 3 4
      1 2 3
       1 2
        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5
*/

#include <stdio.h>

int main(){

    int counter=9;
    int n=1;
    while (counter>=1)
    {
        for(int i=n; i>=1; i--){
            printf(" ");
        }
        for(int i=n;i>=1;i--)
        {
            printf("%d ",i);
        }

n--;
        

        
        counter--;
    }
    
    for (int i = 0; i < 9; i++)
    {
        for(int j=1;j<=5;j++){

        }
    }
    
    return 0;
}