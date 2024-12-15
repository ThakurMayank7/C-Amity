//  Write a program which will read a text and count all occurrences of a particular word.

#include <stdio.h>
#include <string.h>

int countWordOccurrences(char *text, char *word)
{
    int count = 0;
    char *ptr = strstr(text, word);

    while (ptr != NULL)
    {
        count++;
        ptr = strstr(ptr + strlen(word), word);
    }

    return count;
}

int main()
{
    char text[1000], word[50];

    printf("Enter the text: ");
    scanf(" %[^\n]s", text);

    printf("Enter the word to search: ");
    scanf("%s", word);

    int count = countWordOccurrences(text, word);
    printf("The word '%s' occurs %d times in the given text.\n", word, count);

    return 0;
}
