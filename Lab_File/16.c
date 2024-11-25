
/*
    Write a program in C to calculate and print the Electricity bill of a given customer.
    The customer id and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer..

    upto 199--------1.20
    200-500---------1.80
    Above 500-------2.00

    If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
*/
#include <stdio.h>

int main(){
    int customer_id,unit_consumed;
    printf("Enter Customer ID : \n");
    scanf("%d", &customer_id);
    printf("Enter units consumed : \n");
    scanf("%d", &unit_consumed);
    float rate,bill;
    if(unit_consumed<200)
    {
        rate=1.2;
    }
    else if(unit_consumed<=500)
    {
        rate=1.8;
    }
    else{
        rate=2.0;
    }
    bill=unit_consumed*rate;
    if(bill<100)
    {
        printf("Your bill was less than 100\n");
    }
    if(bill>400)
    {
        float extra=bill*(15.0/100.0);
        printf("The bill was surcharged with 15 percent i.e. %f as it exceeded 400\n",extra);
        bill=bill+extra;
    }
    printf("The bill is : %f\n",bill);
    return 0;
}