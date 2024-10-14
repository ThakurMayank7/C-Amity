#include <stdio.h>

int main(){
    float a,b,c;
    printf("If ax^2+bx+c is the quadratic equation,\n");
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("Enter the value of c\n");
    scanf("%f",&c);
float discriminant=(b*b)-(4*a*c);
if (discriminant < 0)
{
    printf("The roots of this equation is imaginary.\n");
}
else{
    float root1=((-b)+discriminant)/(2*a);
    float root2=((-b)-discriminant)/(2*a);
    printf("The roots of this equation are %f and %f.\n", root1, root2);
}
    return 0;
}