#include<stdio.h>
//C program to input any alphabet and check whether it is vowel or consonant
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("'%c' is vowel\n", ch);
    }
    else if((ch>= 'a' && ch<='z') || (ch>= 'A' && ch<= 'Z')){
        printf("'%c' is consonant\n", ch);
    }
    else{
        printf("'%c'is not an alphabet\n", ch);
    }
    return 0;
}