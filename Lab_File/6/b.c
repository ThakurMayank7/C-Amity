// Write a C program to convert specified days into years, weeks, and days.
// Note: Ignore leap year.
// Test Data :
// Number of days : 1329-3 years,33 weeks and 3 days

#include <stdio.h>

int main(){
    int days;
    printf("Enter number of days to convert:\n");
    scanf("%d", &days);
    int years,weeks,remDays;
    years=days/365;
    weeks=(days%365)/7;
    remDays=(days%365)%7;
    printf("%d days = %d years, %d weeks, and %d days\n", days,years,weeks,remDays);
    return 0;
}