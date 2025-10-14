//WACP to find prime number using loop.

#include<stdio.h>

int main(){
    int n, isPrime=1;
    printf("Enter your number: ");
    scanf("%d", &n);
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime==1)
        printf("%d is a prime no",n);
    else
        printf("%d is not a prime no",n);
    return 0;
}