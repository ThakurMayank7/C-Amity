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
    int n=5;
    while (counter>=1)
    {
        for(int i=n; i<=5; i++){
            printf(" ");
        }
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
        
        if(counter>5)
        {
            n--;
        }
        if(counter<=5)
        {
            n++;
        }  
        counter--;
    }    
    return 0;
}