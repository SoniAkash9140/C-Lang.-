#include<stdio.h>
int main(){
    int a;
    printf("Enter the divident a:");
    scanf("%d",&a);

    int b;
    printf("Enter the divisor b:");
    scanf("%d",&b);

    int q=a/b; //divisor*quotient+remainder=divident
    int r=a-b*q; //here we cam also use (a % b) where a>b 
    printf("The remainder is : %d",r);
    return 0;
}