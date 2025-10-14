#include <stdio.h>

int sum(int x,int y){
    return x+y;
}

void fakeswap(int a, int b){
    int temp;

    temp=a;
    a=b;
    b=temp;
}

void realswap(int *a, int *b){
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=11, b=48;

    printf("The value of a and b before swap is %d and %d\n",a,b);

    realswap(&a, &b);

    printf("The value of a and b after swap is %d and %d\n",a,b);

    return 0;
}