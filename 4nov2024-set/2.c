// Write a program to print sum of all even numbers form 1 to 10

#include <stdio.h>

int main(){
    int sum = 0;
    for (int i = 1; i <=10; i++)
    {
        if(i%2==0)  //cheking even numbers
        {
            sum+=i;   //if even adding it to sum variable
        }
    }
    printf("The sum of even numbers from 1 to 10 is : %d\n",sum);
    return 0;
}