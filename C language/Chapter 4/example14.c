#include <stdio.h>
//WACP to find first and last digit of a number
int main()
{
    int n, lastDigit, firstDigit;
    printf("Enter your number: ");
    scanf("%d", &n);
    lastDigit = n%10;
    while(n>9){
        n= n/10;
    }
    firstDigit = n;
    printf("The first digit is %d\n", firstDigit);
    printf("The last digit is %d\n", lastDigit);
    return 0;
}