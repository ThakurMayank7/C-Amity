// Write a program to input basic salary of an emplyee and calculate its gross salary

#include <stdio.h>

int main()
{
    float da_percentage, hra_percentage, da, hra, basic_salary, gross_salary;

    printf("Enter Basic Salary of the Employee\n");

    scanf("%f", &basic_salary);

    if (basic_salary <= 10000)
    {
        hra_percentage = 20.0;
        da_percentage = 80.0;
    }
    else if (basic_salary <= 20000)
    {
        hra_percentage = 25.0;
        da_percentage = 90.0;
    }
    else
    {
        hra_percentage = 30.0;
        da_percentage = 95.0;
    }

    da = basic_salary * (da_percentage / 100.0);
    hra = basic_salary * (hra_percentage / 100.0);

    gross_salary = basic_salary + hra + da;

    printf("The Gross Salary of Employee is : %f\n", gross_salary);

    return 0;
}