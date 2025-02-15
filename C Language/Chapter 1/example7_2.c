#include<stdio.h>
//Find the simple interest

int main(){
    float prin,rate,time;
    printf("Enter the value of principle, rate amd time: ");
    scanf("%f %f %f", &prin, &rate, &time);
    float SI = prin * rate * time/100;
    printf("SI: %.2f", SI);
    return 0;
}