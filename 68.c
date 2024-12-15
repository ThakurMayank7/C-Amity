// Write a program which will read a text and count all occurrences of all characters which are part of text.

#include <stdio.h>
#include <string.h>

void countOccurrences(char *text)
{
    int count[256] = {0};

    for (int i = 0; text[i] != '\0'; i++)
        count[(unsigned char)text[i]]++;

    printf("Character occurrences:\n");
    for (int i = 0; i < 256; i++)
        if (count[i] > 0)
            printf("%c: %d\n", i, count[i]);
}

int main()
{
    char text[1000];
    printf("Enter a text: ");
    scanf(" %[^\n]s", text);

    countOccurrences(text);

    return 0;
}
