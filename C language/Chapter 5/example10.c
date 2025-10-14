//WACP to find cube of any number using function.(OR previous quest.)

#include<stdio.h>

int cube(int n)
{
    return n*n*n;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ans = cube(n);
    printf("The cube of %d is %d\n",n, ans);
    return 0;
}