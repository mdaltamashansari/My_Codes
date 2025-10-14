#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Your first Number:");
    scanf("%d",&a);
    printf("Enter Your Second Number:");
    scanf("%d",&b);
    printf("Enter Your third Number:");
    scanf("%d",&c);
    if (a>=b && a>=c) printf("%d is greatest! ",a);
    if (b>=a && b>=c) printf("%d is greatest! ",b);
    if (c>=b && c>=a) printf("%d is greatest! ",c);
    return 0;
}