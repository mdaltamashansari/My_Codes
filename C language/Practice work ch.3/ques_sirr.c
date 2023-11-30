#include<stdio.h>
//C program to enter two numbers and perform all bsic arithmatic operation on them and show them on screen
int main(){
    int num1, num2;
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);
    printf("sum is %d\n", num1+num2);
    printf("difference is %d\n", num1-num2);
    printf("product is %d\n", num1*num2);
    printf("division is %d\n", num1/num2);
    printf("remainder is %d\n", num1%num2);
    return 0;
}