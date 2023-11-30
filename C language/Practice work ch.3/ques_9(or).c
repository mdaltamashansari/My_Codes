#include<stdio.h>
//C program to input any character and check whether it is alphabet, digit or special character
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch>=97 && ch<=122) || (ch>=65 && ch<90)){
        printf("'%c' is alphabet\n", ch);
    }
    else if(ch>=48 && ch<=57){
        printf("'%c' is digit\n", ch);
    }
    else{
        printf("'%c' is special character\n", ch);
    }
    return 0;
    }