// Write a program in C to display the index of smallest and largest element in 3 X 4 matrix of integers.

#include <stdio.h>
int main()
{
    int matrix[3][4], maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;
    printf("Enter 3x4 matrix elements:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] > matrix[maxRow][maxCol])
            {
                maxRow = i;
                maxCol = j;
            }
            if (matrix[i][j] < matrix[minRow][minCol])
            {
                minRow = i;
                minCol = j;
            }
        }
    printf("Largest element at [%d][%d], Smallest element at [%d][%d]\n", maxRow, maxCol, minRow, minCol);
    return 0;
}
