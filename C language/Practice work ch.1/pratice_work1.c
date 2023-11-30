#include<stdio.h>
//perform all arithmetic operations
int main(){
    float a,b;
    printf("Enter the value of a and b");
    scanf("%f %f", &a,&b);
    printf("sum =%.2f\n", a+b);
    printf("difference =%.2f\n", a-b);
    printf("product =%.2f\n", a*b);
    printf("divide = %.2f\n", a/b);
    return 0;
}