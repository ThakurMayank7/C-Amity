// Write a program to print all natural numbers in reverse order from n to 1 using while loop

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    printf("The numbers from n to 1 in reverse order are : \n");
    while (n > 0)
    {
        printf("%d\n",n);
        n--;
    }
    
    return 0;
}