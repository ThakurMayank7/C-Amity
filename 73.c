// Write a program which will store ten integers to one file and squares of these numbers to another file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *numbersFile, *squaresFile;
    char numbersFileName[100], squaresFileName[100];
    int numbers[10];

    // Get file names
    printf("Enter the name of the file to store numbers: ");
    scanf("%s", numbersFileName);

    printf("Enter the name of the file to store squares: ");
    scanf("%s", squaresFileName);

    // Open the file to store numbers in write mode
    numbersFile = fopen(numbersFileName, "w");
    if (numbersFile == NULL)
    {
        printf("Error: Could not create file '%s'.\n", numbersFileName);
        exit(1);
    }

    // Open the file to store squares in write mode
    squaresFile = fopen(squaresFileName, "w");
    if (squaresFile == NULL)
    {
        fclose(numbersFile);
        printf("Error: Could not create file '%s'.\n", squaresFileName);
        exit(1);
    }

    // Input 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Write numbers and their squares to respective files
    for (int i = 0; i < 10; i++)
    {
        fprintf(numbersFile, "%d\n", numbers[i]);
        fprintf(squaresFile, "%d\n", numbers[i] * numbers[i]);
    }

    printf("Numbers and their squares have been written to '%s' and '%s'.\n",
           numbersFileName, squaresFileName);

    // Close the files
    fclose(numbersFile);
    fclose(squaresFile);

    return 0;
}
