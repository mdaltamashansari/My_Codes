//WACP to find factorial of a number using recursion.

#include <stdio.h>

int fact(int x);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ans = fact(n);
    printf("The fact of %d is %d\n", n, ans);
    return 0;
}

int fact(int x){
    if(x==1 || x==0)
    return 1;
    return fact(x-1) * x;
}