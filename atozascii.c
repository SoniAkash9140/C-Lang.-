#include<stdio.h>
int main(){
   char ch;
   printf("ASCII values of characters from 'a' to 'z'\n");
   for(ch='A'; ch<='Z';++ch){
    printf("%c:%d\n",ch,ch);
   }
    return 0;
}