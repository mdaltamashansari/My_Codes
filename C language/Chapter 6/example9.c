//WAP using a function which calculate the sum and average of two numbers.Use pointer.

#include <stdio.h>

void sumAvg(int x, int y, int *difference,int *multiply, float *divide, int *sum, float *avg){
    *sum= x+y;
    *difference= x-y;
    *multiply= x*y;
    *divide= x/y;
    *avg= (float)(*sum)/2; //typecasting is a method to convert a data type into a different datatype
}

int main()
{
    int a=5, b=8, sum, sub, mul;
    float div;
    float avg;
    sumAvg(a,b, &sub, &mul, &div,&sum, &avg);
    printf("The sum is %d\n", sum);
    printf("The difference is %d\n",sub);
    printf("The multiplication is %d", mul);
    printf("The divide is %.2f\n",div);
    printf("the average is %.2f\n",avg);
    
    return 0;
}