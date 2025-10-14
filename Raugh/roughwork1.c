#include<stdio.h>
//convert celsius into fahenheit
int main(){
    float celsius;
    printf("Enter the value of celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 1.8 + 32;
    printf("The degree in fahrenheit is %.2f", fahrenheit);
    return 0;
}