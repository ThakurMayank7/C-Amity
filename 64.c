// Declare a structure name student containing members name, roll_no, marks. Create an array of 30 such students. Write a program to read and display the contents of array.

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student students[30];
    int n;
    printf("Enter number of students (<=30): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("Details of Students:\n");
    for (int i = 0; i < n; i++)
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    return 0;
}
