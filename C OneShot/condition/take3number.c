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
    if (a+b>c && b+c>a && c+a>b)
    {
        printf("Valid tringle");
    }
    else printf("invalid tringle");
    return 0;
}