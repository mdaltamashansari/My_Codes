//WACP to check whether a no. is armstrong or not using loops.

#include<stdio.h>
#include<math.h>
int main()
{
    int n, digits,sum=0, lastDigit, temp;
    printf("Enter your number: ");
    scanf("%d", &n);
    if(n==0)
    {
        digits = 1;
    }
    else
    {
        digits = (int)log10(n) + 1;
    }
    temp = n;
    while(temp!=0){
        lastDigit = temp%10;
        sum = sum + pow(lastDigit,digits);
        temp/=10;
    }
    if(n==sum){
        printf("%d is an armstrong no", n);
    }
    else{
        printf("%d is not an armstrong no", n);
    }
    return 0;
}