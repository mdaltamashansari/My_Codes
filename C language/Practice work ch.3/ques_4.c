#include<stdio.h>
//C program to check whether a no. is divisible by 5 and 11 or not
int main(){
    int num;
    printf("Enter your num: ");
    scanf("%d", &num);
    if(num%5==0 && num%11==0){
        printf("num is divisible by both 5 and 11\n");
    }
    else{
        printf("num is not divisible\n");
    }
    return 0;
}