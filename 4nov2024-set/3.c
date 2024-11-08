// Write a program to print first and last digit of a number

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int first;

    while (1)
    {
        printf("iterating%d\n", n);
        if (n % 10 < 0 || n % 10 == 0)  //checking when the first digit is reached and breakign
        {
            break;
        }

        first = n % 10; //storing the last digit of the current number (if condition is met it will be the first digit of the actual number)
        n /= 10;
    }
    printf("The first digit of the current number is %d\n", first);
    printf("The last digit of the current number is %d\n", n % 10);

    return 0;
}