// Write a C program a program to check whether an alphabet is a vowel or consonant

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a alphabet to check whether it is a vowel or a consonant\n");
    scanf("%c", &c);
    int a = (int)c;
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) // checking if input is a alphabet
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') // checking for vowel
        {
            printf("%c is a vowel\n", c);
        }
        else
        {

            printf("%c is a consonant\n", c);
        }
    }
    else
    {
        printf("Please enter a alphabet\n");
    }

    return 0;
}