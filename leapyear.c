// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n ; 
    printf("Enter the year");
    scanf("%d",&n);
    
    if(n%400==0){
        printf("Leap Year");}
        else if(n%100==0){
            printf("Not a leap year");}
            else if(n%4==0){
                printf("Leap Year");}
                else{
                    printf("Not a leap year");
    }

    return 0;
}
