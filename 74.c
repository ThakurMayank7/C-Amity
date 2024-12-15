// Write a program which will store ten integers to one file and stores the odd and even numbers to respective files

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *numbersFile, *oddFile, *evenFile;
    char numbersFileName[100], oddFileName[100], evenFileName[100];
    int numbers[10];

    // Get file names
    printf("Enter the name of the file to store numbers: ");
    scanf("%s", numbersFileName);

    printf("Enter the name of the file to store odd numbers: ");
    scanf("%s", oddFileName);

    printf("Enter the name of the file to store even numbers: ");
    scanf("%s", evenFileName);

    // Open the files
    numbersFile = fopen(numbersFileName, "w");
    if (numbersFile == NULL)
    {
        printf("Error: Could not create file '%s'.\n", numbersFileName);
        exit(1);
    }

    oddFile = fopen(oddFileName, "w");
    if (oddFile == NULL)
    {
        fclose(numbersFile);
        printf("Error: Could not create file '%s'.\n", oddFileName);
        exit(1);
    }

    evenFile = fopen(evenFileName, "w");
    if (evenFile == NULL)
    {
        fclose(numbersFile);
        fclose(oddFile);
        printf("Error: Could not create file '%s'.\n", evenFileName);
        exit(1);
    }

    // Input 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Write all numbers to the first file and separate odd/even numbers
    for (int i = 0; i < 10; i++)
    {
        fprintf(numbersFile, "%d\n", numbers[i]);
        if (numbers[i] % 2 == 0)
        {
            fprintf(evenFile, "%d\n", numbers[i]);
        }
        else
        {
            fprintf(oddFile, "%d\n", numbers[i]);
        }
    }

    printf("Numbers have been written to '%s'.\n", numbersFileName);
    printf("Odd numbers have been written to '%s'.\n", oddFileName);
    printf("Even numbers have been written to '%s'.\n", evenFileName);

    // Close all files
    fclose(numbersFile);
    fclose(oddFile);
    fclose(evenFile);

    return 0;
}
