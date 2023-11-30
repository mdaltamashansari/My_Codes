#include <stdio.h>
int main()
{
    float num1;
    float num2;
    char  op;
    float result;
    printf("Enter the first number: ");
    scanf("%f",&num1);

    printf("Enter the opertion: ");
    scanf(" %c",&op);

    printf("Enter the Second number: ");
    scanf("%f",&num2);

    switch (op)
    {
    case '-':
    result = num1-num2;
    printf("%f\n",result);
        break;
    
    case '+':
    result = num1+num2;
    printf("%.2f\n",result);
        break;

    case '*':
    result = num1*num2;
    printf("%f\n",result);
        break;

    case '/':
    result = num1/num2;
    printf("%f\n",result);
        break;
    
    default:
    printf("the operator is not valid");
        break;
    }
}