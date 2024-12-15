// Write a program which reads a string from the keyboard and determines whether the string is a palindrome (Ignore Capitalization)

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str)
{
    int left = 0, right = strlen(str) - 1;

    while (left < right)
    {
        while (!isalnum(str[left]) && left < right)
            left++;
        while (!isalnum(str[right]) && left < right)
            right--;

        if (tolower(str[left]) != tolower(str[right]))
            return 0;

        left++;
        right--;
    }
    return 1;
}

int main()
{
    char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
