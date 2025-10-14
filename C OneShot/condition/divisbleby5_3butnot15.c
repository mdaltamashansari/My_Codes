#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    if ((num%3==0 && num%15!=0) || (num%5==0 && num%15!=0))
    {
        printf("%d is divsible 5 and 3 ",num);
    }
    else printf("%d is divisble by 15",num);
    return 0;
}