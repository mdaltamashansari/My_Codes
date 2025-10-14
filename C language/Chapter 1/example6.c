#include<stdio.h>
//convert  celcius into fahrenheit
int main(){
    float celsius;
    printf("Enter the degree in celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 1.8 + 32;
    printf("The degree in fahrenheit is %.2f", fahrenheit);
    return 0;
}