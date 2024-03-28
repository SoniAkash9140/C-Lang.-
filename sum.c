#include<stdio.h>
int main(){
    float p,q,r,sum ;

    printf("Enter the value of p:");
    scanf("%f",&p);

    printf("Enter the value of q:");
    scanf("%f",&q);

    printf("Enter the value of r:");
    scanf("%f",&r);

    sum=p+q+r;
    printf("The sum of numbers is : %f",sum);
    return 0;
}