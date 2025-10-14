#include <stdio.h>
int main()
{
    // profit and loss
    int cp,sp;
    printf("Enter the cost price: ");
    scanf("%d",&cp);
    printf("Enter the sell price: ");
    scanf("%d",&sp);
    if (cp>sp) printf("You are in loss: %d",cp-sp);
    if (sp>cp) printf("You are in profit:%d",sp-cp);
    if (cp==sp) printf("no profit no loss");
    return 0;
}