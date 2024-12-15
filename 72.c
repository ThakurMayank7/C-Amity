#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sourceFile[100], targetFile[100];
    FILE *source, *target;
    char ch;

    // Get the source file name
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);

    // Open the source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL)
    {
        printf("Error: Could not open source file '%s'.\n", sourceFile);
        exit(1);
    }

    // Get the target file name
    printf("Enter the name of the target file: ");
    scanf("%s", targetFile);

    // Open the target file in write mode
    target = fopen(targetFile, "w");
    if (target == NULL)
    {
        fclose(source);
        printf("Error: Could not create target file '%s'.\n", targetFile);
        exit(1);
    }

    // Copy the contents from source file to target file
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceFile, targetFile);

    // Close both files
    fclose(source);
    fclose(target);

    return 0;
}
