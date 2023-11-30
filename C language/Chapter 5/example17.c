//WACP to check whether a number is strong or not using function.

#include<stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact =fact * i;
    }
    return fact;
}

int checkStrong(int n){
    int sum,lastdigit,temp,fact;
    sum = 0;
    temp= n;
    while(temp!=0){
        lastdigit = temp % 10;

        sum = sum + factorial(lastdigit);

        temp = temp/10;
    }
    if(n==sum){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(checkStrong(n)){
        printf("%d is a strong no\n",n);
    }
    else{
        printf("%d is not a strong no\n",n);
    }
    return 0;
}