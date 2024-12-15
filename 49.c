// Write a program in C to display the index of smallest and largest element in 10 integers

#include <stdio.h>
int main()
{
    int arr[10], maxIndex = 0, minIndex = 0;
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }
    printf("Index of largest element: %d, Index of smallest element: %d\n", maxIndex, minIndex);
    return 0;
}
