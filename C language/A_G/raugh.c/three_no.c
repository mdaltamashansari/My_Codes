#include<stdio.h>
int main()
{
    int num1,num2,num3;
    int same
    printf("Enter three numbers Below-  \n");
    printf("print 1st Number: ");
    scanf("%d",&num1);
    printf("print 2nd Number: ");
    scanf("%d",&num2);
    printf("print 3rd Number: ");
    scanf("%d",&num3);
    if(num1>=num2 && num1>=num3)
    {
        printf("1st Number is maximum: %d\n",num1);
    }
    if(num2>=num1 && num1>=num3)
    {
        printf("2nd Number is maximum: %d\n",num2);
    }
    if(num3>=num1 && num3>=num2)
    {
        printf("3rd Number is maximum: %d\n",num3);
    }
    if(same && num1+num2+num3)
    {
        printf("All number are equal %d",same);
    }
    return 0;
}