#include<stdio.h>
int main(){
    float principal , rate , time , si ;

    printf("Enter the Principal:");
    scanf("%f",&principal);

    printf("Enter the rate:");
    scanf("%f",&rate);

    printf("Enter the time:");
    scanf("%f",&time);
    
    si= (principal*rate*time)/100;
    printf(" Your Simple Interest is : %f",si);

    return 0;
}