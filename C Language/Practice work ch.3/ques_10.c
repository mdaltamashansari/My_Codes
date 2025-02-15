#include<stdio.h>
//C program to check whether a character is uppercase or lowercase alphabet
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch>= 'A' && ch<= 'Z'){
        printf("'%C' is uppercase alphabet\n", ch);
    }
    else if(ch>= 'a' && ch<= 'z'){
        printf("'%c' is lowercase alphabet\n", ch);
    }
    else{
        printf("'%c' is not an alphabet\n", ch);
    }
    return 0;
}