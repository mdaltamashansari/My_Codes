//WACP to find the sum, difference, product and quotient of two numbers using function.

#include<stdio.h>

int sum(int x, int y);
int difference(int x, int y);
int product(int x, int y);
int quotient(int x, int y);

int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int ansSum = sum(a,b);
    printf("The sum is %d\n", ansSum);
    int ansDiff = difference(a,b);
    printf("The difference is %d\n", ansDiff);
    int ansProd = product(a,b);
    printf("The product is %d\n", ansProd);
    int ansQuot = quotient(a,b);
    printf("The quptient is %d\n", ansQuot);
    return 0;
}

int sum (int x, int y){
    return x+y;
}

int difference(int x, int y){
    return x-y;
}

int product (int x, int y){
    return x*y;
}

int quotient (int x, int y){
    return x/y;
}