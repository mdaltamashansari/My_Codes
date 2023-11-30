#include <stdio.h>
//WACP to calculate sum of digits of a number
int main()
{
    int n, lastdigit, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(n>0){
        lastdigit= n%10;
        //sum add
        sum =sum + lastdigit;
        //divide by 10
        n= n/10;

    }
    printf("The sum of digits are %d\n", sum);
    return 0;
}