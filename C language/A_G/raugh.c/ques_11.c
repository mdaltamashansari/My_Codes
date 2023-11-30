#include <stdio.h>
#include <math.h>
int main()
{
    int num,Digits;
    printf("Enter your number: ");
    scanf("%d",&num);
    int lastDigit = num % 10;
    Digits = (int)log10(num);
    int firstDigit = (int)(num / pow(10,Digits));
    printf("The sum of First Digit amd last digt = %d + %d = %d\n",firstDigit,lastDigit,firstDigit+lastDigit);
    return 0;
}