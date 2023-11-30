#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two number below- \n");
    printf("enter 1st Number: ");
    scanf("%d",&num1);
    printf("enter 2nd Number: ");
    scanf("%d",&num2);
    if (num1 > num2)
    {
        printf("%d is maximum",num1);
    }
        if(num2 > num1)
        {
            printf("%d is maximum",num2);
        }
        else
    {
        printf("both numbers are equal");
    }
    return 0;
}               