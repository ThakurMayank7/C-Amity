//  Write a program to print Pascal's Triangle upto n rows

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows to print\n");
    scanf("%d", &n);
    int R=n,C=(2*n)+1;
    printf("%d%d\n",R,C);
    int a[20][41];  //not taking R*C as C doesn't allow to take variable as array declaration lengths
    for(int i=0;i<R;i++)
    {
        for (int j = 1; j < C-1; j++)
        {
            if(i==0)    //checking first row
            {
                if(j==((C)/2))  //checking middle element of first row
                {
                    a[i][j]=1;
                }
                else{
                    a[i][j]=0;
                }
                continue;
            }
            a[i][j]=a[i-1][j-1]+a[i-1][j+1];
        }
    }
    for(int i=0;i<R;i++)
    {
        for (int j = 0; j < C; j++)
        {
            if(a[i][j]==0)
            {
                printf(" ");
                continue;
            }
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}