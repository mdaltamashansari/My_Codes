//WACP to to find the sum of two numbers using function.

#include<stdio.h>

int sum(int m, int n);

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int ans = sum(a,b);
    printf("The sum is %d\n", ans);
    return 0;
}

int sum(int m, int n)
{
    return m+n;
}