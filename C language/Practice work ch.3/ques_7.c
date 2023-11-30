#include<stdio.h>
//C program to check whether a character is alphabet or not
int main(){
     char ch;
     printf("Enter any character: ");
     scanf("%c",&ch);
     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("character is an alphabet\n");
     }
     else{
        printf("character is not an alphabet\n");
     }
     return 0;
     }