#include<stdio.h>
//number is divisible by 97 or not
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    int ans = num % 97;
    printf("If the answer is 0 it is divisible else it is not divisible\n");
    printf("The answer is %d\n", ans);
    return 0;
}