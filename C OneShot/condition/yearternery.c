#include <stdio.h>
int main()
{
    // condition ? true : false;
    int num;
    printf("Enter your year to check it leap year or not: ");
    scanf("%d",&num);
    ((num%4==0 && num/100!=0) || num%400==0)? 
    printf("Yes! %d is leap year",num):
    printf("No! %d is not leap year",num);
    return 0;
}