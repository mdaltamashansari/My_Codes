//WACP to check whether a number is perfect or not using loop.

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    if(n==sum){
        printf("%d is a perfect no\n",n);
    }
    else{
        printf("%d is not a perfect no\n",n);
    }

    return 0;
}