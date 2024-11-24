//  Write a C program to find area of circle

#include <stdio.h>

int main(){
    float pi=3.14;
    float radius;
    printf("Enter radius of circle to find its area :\n");
    scanf("%f", &radius);
    printf("The area of circle is : %f\n",pi*radius*radius);
    return 0;
}