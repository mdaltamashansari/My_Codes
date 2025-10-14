#include <stdio.h>
//WACP to check whether a no. is prime no. or not
int main()
{
    int i, n, isprime;           //isprime is used as flag variable
    printf("Enter any no. to check prime: ");
    scanf("%d", &n);
    isprime= 1;
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            isprime=0;
        }
    }
    if(isprime==1 && n>1){
        printf("%d is a prime no.", n);
    }
    else{
        printf("%d is not a prime no.", n);
    }
    return 0;
}