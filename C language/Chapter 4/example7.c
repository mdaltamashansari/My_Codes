#include <stdio.h>
//WAP to print the sum of 1 to n numbers
int main()
{
    int n, sum=0;
    printf("Enter your no.: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
    sum= sum + i;
}
    printf("sum is %d\n", sum);
    return 0;
}