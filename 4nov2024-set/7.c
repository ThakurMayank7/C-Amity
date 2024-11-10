//  Write a program to find HCF of two numbers

#include <stdio.h>

int main(){
    int n1,n2;
    printf("Enter Number 1 : \n");
    scanf("%d", &n1);
    printf("Enter Number 2 : \n");
    scanf("%d", &n2);
    int hcf=1;
    for(int i=1;i<=n1;i++){
        if(n1%i==0) //checking factors of number 1
        {
            for(int j=1;j<=n2;j++)
            {
                if(n2%j==0) //checking factor of number 2
                {
                    if(i==j)//checking if factors are same
                    {
                        hcf=i;//putting the common factor in hcf variable
                    }
                }
            }
        }
    }
    printf("The HCF of the two numbers is : %d\n", hcf);
    return 0;
}