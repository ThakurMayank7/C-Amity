//  Write  a program to find the maximum of 10 numbers

#include <stdio.h>

int main()
{
    printf("Enter 10 numbers to find maximum of 10 numbers : \n");
    int number, max=0;
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &number);
        if (number > max)
        {
            max = number;
        }
    }
        printf("The maximum of these 10 numbers is %d", max);
    return 0;
}