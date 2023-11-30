#include<stdio.h>
//Find the simple interest

int main(){
    float pri,rate,time;
    printf("Enter the value of prin: ");
    scanf("%f", &pri);
    printf("Enter the value of rate: ");
    scanf("%f", &rate);
    printf("Enter the value of time: ");
    scanf("%f", &time);
    float SI = pri*rate*time/100;
    printf("SI:%.2f\n", SI);
    return 0;
} 