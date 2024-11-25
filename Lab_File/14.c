// WAP to to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter Coordinates of the point:\n");
    printf("X-coordinate:\n");
    scanf("%f", &x);
    printf("Y-coordinate:\n");
    scanf("%f", &y);
    if (x == 0 && y == 0)
    {
        printf("The point is at the Origin\n");
    }
    else if (x == 0)
    {
        printf("The point lies on the Y-axis\n");
    }
    else if (y == 0)
    {
        printf("The point lies on the X-axis\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("The point is in 1st Quadrant\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("The point is in 2nd Quadrant\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("The point is in 3rd Quadrant\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("The point is in 4th Quadrant\n");
    }
    return 0;
}