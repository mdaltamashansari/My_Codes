//WACP to check whether a number is strong or not using loop.

#include<stdio.h>

int main()
{
    int n,sum,temp,fact,lastdigit;
    sum = 0;
    printf("Enter your number: ");
    scanf("%d",&n);
    temp=n;
    while (temp!=0){
        lastdigit = temp % 10;
        fact = 1;
        for(int i=1;i<=lastdigit;i++){
            fact = fact*i;
        }
        sum =sum+ fact;
        temp= temp/10;
    }

    if(n==sum)
        printf("%d is a strong no\n",n);
    else
        printf("%d is not a strong no\n",n);

    return 0;  
}