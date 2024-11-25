//  Write a C program to covert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit (User must provide the choice of type of temperature)

#include <stdio.h>

int main()
{
    int choice;
    printf("Enter 1 to convert from Celsius to Fahrenheit\nEnter 2 to convert from Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    float temperature;

    if (choice == 1 || choice == 2)
    {
        printf("Enter temperature\n");
        scanf("%f", &temperature);

        if (choice == 1)
        {
            printf("The temperature in Fahrenheit is : %f\n", (temperature * (9.0 / 5.0)) + 32.0);
        }
        else if (choice == 2)
        {
            printf("The temperature in Celcius is : %f\n", (temperature - 32.0) * (5.0 / 9.0));
        }
        else
        {
            printf("Please Enter a valid choice\n");
        }
    }
    return 0;
}