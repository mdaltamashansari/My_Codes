#include <stdio.h>  
int main()
{
int a,b,sum,sub,mul,div;
printf("Enter first  number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
sum = a + b ;
sub = a - b ;
mul = a * b ;
div = a / b ;
printf("the addition of %d and %d is %d\n",a,b,sum);
printf("the subtract of %d and %d is %d\n",a,b,sub);
printf("the multiply of %d and %d is %d\n",a,b,mul);
printf("the division of %d and %d is %d\n",a,b,div);
return 0;
}       