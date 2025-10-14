//WACP to check whether a no. is armstrong or not using functions.

#include<stdio.h>
#include<math.h>

int checkArmstrong(int n){
    int digits = (int)log10(n)+1;
    int lastdigit,sum=0,temp;
    temp = n;
    while (temp!=0){
        lastdigit = temp % 10;
        sum = sum + pow(lastdigit,digits);
        temp/=10;
    }
    if(n==sum){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter your no: ");
    scanf("%d", &n);
    if(checkArmstrong(n)){
        printf("%d is an armstrong no",n);
    }
    else{
        printf("%d is not an armstrong no",n);
    }
    return 0;
}