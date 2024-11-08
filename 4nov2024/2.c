// Write a program to input mark of five

#include <stdio.h>

void main()
{

    char subjects[5][12] = {"Physics", "Chemistry", "Biology", "Mathematics", "Computer"};
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of %s\n", subjects[i]);
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    float percentage = sum / 5.0;
    char grade;
    if (percentage >= 90.0)
    {
        grade = 'A';
    }
    else if (percentage >= 80.0)
    {
        grade = 'B';
    }
    else if (percentage >= 50.0)
    {
        grade = 'C';
    }
    else if (percentage >= 60.0)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("Percentage : %f\n", percentage);
    printf("Grade : %c\n", grade);
}