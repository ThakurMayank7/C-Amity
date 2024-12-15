// Write a program in C that accepts N*N matrix as input and print transpose of this matrix

#include <stdio.h>
int main()
{
    int n, matrix[10][10], transpose[10][10];
    printf("Enter order of matrix (N): ");
    scanf("%d", &n);
    printf("Enter %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
    printf("Transpose of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
