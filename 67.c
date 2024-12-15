// Write a program which reads your name from the keyboard and outputs a list of ASCII codes, which represent your name.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("ASCII codes of '%s':\n", name);
    for (int i = 0; i < strlen(name); i++)
        printf("%c: %d\n", name[i], name[i]);

    return 0;
}
