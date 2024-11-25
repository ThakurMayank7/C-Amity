/*
    Write a program to find gross salary of employee if DA is 40% of basic Salary and HRA is 20% of basic salary.
    Basic salary will be entered as input by keyboard.
*/

#include <stdio.h>

int main(){
    float basic_salary;
    printf("Enter basic salary of employee : \n");
    scanf("%f", &basic_salary);
    float rate_DA=40.0,rate_HRA=20.0;
    float gross_salary=basic_salary+basic_salary*(rate_DA/100.0)+basic_salary*(rate_HRA/100.0);
    printf("Gross salary of employee is : %f\n", gross_salary);
    return 0;
}