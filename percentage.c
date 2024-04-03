#include<stdio.h>
int main(){
    int a;
    printf("Enter the number from 0 to 100:");
    scanf("%d",&a);

    if(91<a<100){
        printf("Excellent");
    }
        else if(81<a<90){
            printf("Very Good");
        }
            else if(71<a<80){
                printf("good");
            }
                else if(61<a<70){
                    printf("Can be better");
                }
                   else if(51<a<60){
                        printf("Average");
                   }
                        else if(41<a<50){
                            printf("below average");
                        }
                            else{
                                printf("Fail");
                            }
    return 0;
}