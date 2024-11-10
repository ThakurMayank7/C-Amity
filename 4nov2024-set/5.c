//  Write a program to print all the ASCII characters with their values

#include <stdio.h>

int main(){
    
    //  ASCII contains 128 characters from 0 to 127
    //  Number of Printable characters is 95
    //  Number is Non-Printing control codes is 33
    printf("The ASCII characters with their values are : \n");
    
    for (int i = 0; i < 128; i++)
    {
        printf("The value of ASCII character %d is %c\n", i,i);
    }
    return 0;
}