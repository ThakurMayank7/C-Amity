// Write a program to find product, sum, average, max and min from a list of n numbers.

#include <stdio.h>
int main()
{
    int n, num, sum = 0, product = 1, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
        product *= num;
        if (i == 0)
        {
            max = min = num;
        }
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("Sum: %d, Product: %d, Average: %.2f, Max: %d, Min: %d\n", sum, product, (float)sum / n, max, min);
    return 0;
}
