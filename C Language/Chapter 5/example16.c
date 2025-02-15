//WACP to check whether a number is perfect or not using function.

#include<stdio.h>

int checkPerfect(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum = sum + i;
        }
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
    scanf("%d", &n);

    if(checkPerfect(n)){
        printf("%d is a perfect no\n", n);
    }
    else{
        printf("%d is not a perfect no\n", n);
    }

    return 0;

}