//  Write a program to print binary to hexadecimal of a given number

/*
    10111.10111
    0001  0111  .  1011  1000

    0101 --> 2^0  .  2^2  . 2^0  . 2^0
    and convert these to hexadecimals
*/
#include <stdio.h>
#include <string.h>

int main(){
    char n[100];
    printf("Enter the binary number\n");
    scanf("%s", &n);

    int is_decimal=0;
    if(strchr(n, '.')!=NULL)
    {
        printf("yes\n");
        
        is_decimal=1;
    }
    
    char a[100];  //store non decimal value here          --->TODO    provide reversed string here

    strcpy(a,n);


    int sets[100][4];

    for(int i=0; i<100; i++){
    for(int j=0; j<4;j++){
        sets[i][j] =-999;   //checking value if any value is assigned
    }
    }

    int no_of_sets=0;
    int f=0;
    for(int i=0; i<strlen(a); i++)
    {
        sets[no_of_sets][f]=(int)a[i]-48;
        f++;
        if(f==4 && i!=strlen(a)-1)
        {
            no_of_sets++;
            f=0;
        }
    }
    if(sets[0][0]!=-999)
    {
        no_of_sets++;
    }

    printf("%d\n",no_of_sets);
    
    for(int i=0; i<4; i++)
    {
        if(sets[no_of_sets-1][i]==-999){
            sets[no_of_sets-1][i]=0;
        }
    }


char hex[100];

int sum=0;
f=0;
for(int i=0; i<no_of_sets; i++){
    for(int j=0; j<4;j++){

        sum+=(int)pow(sets[i][j],j);


    }
    hex[f]=sum;
    sum=0;
}

for(int i=0; i<no_of_sets;i++){
    printf("%c\n",hex[i]);
    
}


// for(int i=0; i<no_of_sets; i++){
//     for(int j=0; j<4;j++){
//         printf("%d ",sets[i][j]);
        
//     }
//     printf("\n");}
    return 0;
}