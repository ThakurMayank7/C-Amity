// Write a program in ‘C’ that compares two given dates. To store a date, use a struct that contains three members namely day, month, and year. If the dates are equal, then display message as “equal” otherwise “Unequal”.

#include <stdio.h>

struct Date
{
    int day, month, year;
};

int compareDates(struct Date d1, struct Date d2)
{
    if (d1.year != d2.year)
        return d1.year - d2.year;
    if (d1.month != d2.month)
        return d1.month - d2.month;
    return d1.day - d2.day;
}

int main()
{
    struct Date date1, date2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if (compareDates(date1, date2) == 0)
        printf("Dates are equal.\n");
    else
        printf("Dates are unequal.\n");

    return 0;
}
