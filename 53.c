// Write a program to find out the product/Multiplication of two matrices and print the product matrix. (order of matrices must be given by user)

#include <stdio.h>
int main()
{
    int r1, c1, r2, c2, mat1[10][10], mat2[10][10], product[10][10] = {0};
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                product[i][j] += mat1[i][k] * mat2[k][j];
    printf("Product matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}
