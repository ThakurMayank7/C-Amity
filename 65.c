// Write a simple database program in C which stores personal details of 100 persons such as Name, Date of Birth, Address, Phone number etc.

#include <stdio.h>

struct Person
{
    char name[50];
    char dob[15];
    char address[100];
    char phone[15];
};

int main()
{
    struct Person persons[100];
    int n;
    printf("Enter number of persons (<=100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for person %d\n", i + 1);
        printf("Name: ");
        scanf("%s", persons[i].name);
        printf("Date of Birth: ");
        scanf("%s", persons[i].dob);
        printf("Address: ");
        scanf(" %[^\n]s", persons[i].address); // Space ensures it reads multi-word input
        printf("Phone: ");
        scanf("%s", persons[i].phone);
    }
    printf("Details of Persons:\n");
    for (int i = 0; i < n; i++)
        printf("Name: %s, DOB: %s, Address: %s, Phone: %s\n", persons[i].name, persons[i].dob, persons[i].address, persons[i].phone);
    return 0;
}
