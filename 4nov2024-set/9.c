//  Write a program to find 2's complement of a binary number


/*

*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the binary number\n");
    scanf("%d", &n);
    

printf("%d\n",complement_1(n));


    return 0;
}

int complement_1(int n){
    int complement=0;

for(int i=n; i>0; i/=10){
    if(i%10==1)
    {
        complement=complement*10+0;
    }
    else{
        complement=complement*10+1;
    }
}
    return reverse(complement);
}


int reverse(int n){
    int reverse_number=0;
    for(int i=n; i>0; i/=10){
        reverse_number=reverse_number*10+i%10;
    }
    return reverse_number;
}