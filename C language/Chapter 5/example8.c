//WACP using recursion to calculate nth element of fibonachy series(0 1 1 2 3 5 8 13).

#include <stdio.h>

int fib(int n);

#include <stdio.h>
int main()
{
    int n;
    printf("Enter your term: ");
    scanf("%d", &n);
    int ans = fib(n);
    printf("The %d term s %d\n", n, ans);
    return 0;
}

int fib(int n){
    if (n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}