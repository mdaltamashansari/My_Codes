#include<stdio.h>
//C program to find greatest of four no. entered by the user
int main(){
    int num1, num2, num3, num4;
    printf("Enter 1st num: ");
    scanf("%d", &num1);
    printf("Enter 2nd num: ");
    scanf("%d", &num2);
    printf("Enter 3rd num: ");
    scanf("%d", &num3);
    printf("Enter 4th num: ");
    scanf("%d", &num4);
    if (num1>num2 && num1>num3 && num1>num4)
    {
        printf("%d is maximum", num1);
    }
    else if(num2>num1 && num2>num3 && num2>num4)
    {
        printf(" %d is maximum", num2);
    }
    else if(num3>num1 && num3>num2 && num3>num4)
    {
        printf(" %d is maximum", num3);
    }
    else{
        printf("%d is maximum", num4);
    }
    return 0;
}