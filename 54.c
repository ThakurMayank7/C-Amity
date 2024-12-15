// Write a program to accept two matrices of some order. (Order must be given by user) find out the subtraction of these matrices and print the sum of matrices.

#include <stdio.h>
int main()
{
    int r, c, mat1[10][10], mat2[10][10], diff[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            diff[i][j] = mat1[i][j] - mat2[i][j];
    printf("Difference of matrices:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }
    return 0;
}
