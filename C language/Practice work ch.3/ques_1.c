#include<stdio.h>
//C program to find maximum b/w two no.
int main(){
    int num1, num2;
    printf("Enter 1st num: ");
    scanf("%d", &num1);
    printf("Enter 2nd num: ");
    scanf("%d", &num2);
    if (num1>num2)
    {
        printf("%d is maximum", num1);
    }
    else
    {
        printf(" %d is maximum", num2);
    }
    return 0;
}