//WAP to check if a no. is prime or not.

#include<stdio.h>
int checkPrime(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main()
{
    int n;
    printf("Enter your no: ");
    scanf("%d", &n);

    // for(int i=2;i<=n/2;i++){
    //     if(n%i==0){
    //         isPrime=0;
    //     }
    // }
    // if(isPrime==1){
    //     printf("%d is a prime no\n",n);
    // }
    // else{
    //     printf("%d is not a prime no\n",n);
    // }

    if(checkPrime(n)){
        printf("%d is a prime no",n);
    }
    else{
        printf("%d is not a prime no",n);
    }

    return 0;
}