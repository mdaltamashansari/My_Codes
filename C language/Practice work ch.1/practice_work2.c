#include<stdio.h>
//convert cm into m & in Km
int main(){
    float cm;
    printf("Enter the value of centimeter: ");
    scanf("%f", &cm);
    float m = cm/100;
    float km = cm/1000;
    printf("%.2f meter\n",m);
    printf("%.2f kilometer\n",km);
    return 0;
}