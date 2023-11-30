#include <stdio.h>
//WACP to print Fibonacci series upto n terms
int main()
{
    int a, b, c, i, terms;
    printf("Enter no.of terms: ");
    scanf("%d", &terms);
    a=0;
    a=1;
    a=0;
    printf("Fibonacci terms: \n");
    for(i=1; i<=terms; i++){
        printf("%d\n", c);
        a=b;
        b=c;
        c=a+b;
    }

    return 0;
}