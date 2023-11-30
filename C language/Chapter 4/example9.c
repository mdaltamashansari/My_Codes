#include <stdio.h>
//WAP to print the sum of all odd no. till n
int main()
{
    int n, sum=0;
    int i=1;
    printf("Enter your no.: ");
    scanf("%d", &n);
    do{
        sum= sum+i;
        i=i+2;
    }while(i<=n);
    printf("The value of sum is %d\n", sum);
    return 0;
}