//WACP to find prime number using function.

#include<stdio.h>

int checkPrime(int n){
    for(int i=2; i<=n/2; i++){
    if(n%i==0){
        return 0;
    }
}
    return 1;
}

int main(){
    int n;
    printf("Enter your no: ");
    scanf("%d", &n);

    if(checkPrime(n)){
        printf("%d is a prime no",n);
    }
    else{
        printf("%d is not a prime no",n);
    }
    return 0;
}