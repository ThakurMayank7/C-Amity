// Write a program to print first and last digit of a number

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int first;
    while (1)
    {
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

//  another way of solving this question
int method2(int n)
{
    int last=n%10;
    int reverse=0;
    for (int i = n; i >0; i/=10)
    {
        reverse=reverse*10+i%10;
    }
    int last=reverse%10;
    return n;
}