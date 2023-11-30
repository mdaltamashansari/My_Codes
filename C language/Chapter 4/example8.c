#include <stdio.h>
//WAP to print the sum of all even numbers till n
int main()
{
    int n, i=0, sum=0;
    printf("Enter your no.: ");
    scanf("%d", &n);
    while(i<=n){
        sum = sum + i;
        i=i+2;

    }
    printf("sum is %d\n", sum);
    return 0;
}