#include <stdio.h>
int main()
{
    float x,y;
    char ch;
    printf("Enter initial Amount\n");
    scanf("%.2f",&x);
    printf("Enter\n c for credit\n d for debit\n b for balance\n");
    scanf("\n%c",&ch);
    switch (ch)
    {
        case 'c':
        printf("Enter Credit amount\n");
        scanf("%.2f",&y);
        x=x+y;
        printf("New Amount+%.2f",x);
         scanf("%.2f",&x);
        break;
        case 'd':
        printf("Enter Debit amount\n");
        scanf("%.2f",&y);
        if(x>=y)
        {
        x=x-y;
        printf("New Amount+%.2f",x);
        }
        else 
        {
            printf("Insuffient Amount in your account");
        }
        break;
        case 'b':
        {
        printf("Amount in your account=%.2f",x);
        }
        break;
        default:
        printf("choose correct option for oppertion");
    } 
return 0;
}