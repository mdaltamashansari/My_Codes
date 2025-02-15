#include<stdio.h>
//C program to find maximum b/w three no.
int main(){
    int num1, num2, num3;
    printf("Enter 1st num: ");
    scanf("%d", &num1);
    printf("Enter 2nd num: ");
    scanf("%d", &num2);
    printf("Enter 3rd num: ");
    scanf("%d", &num3);
    if (num1>num2 && num1>num3)
    {
        printf("%d is maximum", num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf(" %d is maximum", num2);
    }
    else{
        printf("%d is maximum", num3);
    }
    return 0;
}