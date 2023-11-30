#include <stdio.h>
//C program to count number of digits in a number
int main()
{
    int n, count=0;
    printf("Enter your no.: ");
    scanf("%d", &n);
    while(n!=0){
        n=n/10;                         //-->n=1234(1234/10)-->(123)
        count++;
    }
    printf("There are %d digits\n", count);
    printf("The value of n after looping is %d\n", n);

                  
    // int digit = (int) (log10(n));           //-->TYPECASTING
    // printf("Digits= %d\n", digit+1);
    return 0;
}