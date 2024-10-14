/*
A library charges a fine for every book returned late.
For first 5 days the fine is 50 paisa, for 6-10 days, fine is one rupee and above 10 days, fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return the book and display the fine or appropriate message.
*/
#include <stdio.h>

int main(){
    int late_days;
    printf("Enter the number of days member is late to return the book\n");
    scanf("%d", &late_days);

    float rate_fine,fine;

    if(late_days>30)
    {
        printf("Your membership is cancelled!\n");
        return 0;
    }

    if(late_days<=5)
    {
        rate_fine=0.5;
    }
    else if(late_days<=10)
    {
        rate_fine==1.0;
    }
    else if(late_days<=30)
    {
        rate_fine=5.0;
    }
    fine=rate_fine*late_days;
    printf("Your fine for %d late days is : Rs.%f\n", late_days, fine);
    return 0;
}