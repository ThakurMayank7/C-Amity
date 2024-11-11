//  Write a program to calculate sum and average of maximum of 5 numbers and incorporate it

#include <stdio.h>

int main(){
    float sum = 0.0;
    float average; 
    int total;
    printf("Enter number of numbers to perform calculation on (maximum 5) : \n");
    scanf("%d", &total);
    printf("Enter %d numbers :\n",total);
    for(int i = 0; i < total; i++){
        float number;
        scanf("%f", &number);
        sum+=number;
    }
    printf("The sum of numers is : %f\n",sum);
    printf("The average of these numbers is : %f\n",sum/total);
    return 0;
}