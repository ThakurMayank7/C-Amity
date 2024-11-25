// Write a C program to check whether a character is an alphabet, digit

#include <stdio.h>

int main()
{
    char character;
    printf("Enter the character to check whether it is a alphabet or a digit : \n");
    scanf("%c", &character);
    int a = (int)character;
    if (a >= 48 && a <= 57) // checking for a digit
    {
        printf("%c is a Digit\n", character);
    }
    else if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) // checking for a alphabet
    {
        printf("%c is a Alphabet\n", character);
    }
    else // not alphabet or digit
    {
        printf("%c is neither a digit nor a alphabet\n", character);
    }
    return 0;
}