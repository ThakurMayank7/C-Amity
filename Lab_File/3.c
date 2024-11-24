// Write a C program to print a block F using hash (#), where the F has a height of six characters and width of five and four characters

#include <stdio.h>

int main(){
    for(int i=0;i<6;i++){
        for (int j = 0; j < 5; j++)
        {
            if(i==0 || j==0 || (i==2 && j!=4))
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}