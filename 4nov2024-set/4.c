//   Write a program to check whether the number is palindrome or not

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int reverse=0;
    for(int i=n;i>0;i/=10)
    {
        reverse=reverse*10+i%10;
    }
    if(n==reverse){
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not palindrome\n");
    }
    return 0;
}