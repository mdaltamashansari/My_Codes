#include<stdio.h>
//find area of triangle

int main(){
    float height,base;
    printf("Enter the value of base");
    scanf("%f", &base);
    printf("Enter the value of height");
    scanf("%f", &height);
    float area = 0.5*base*height;
    printf("The area of triangle is %.2f\n", area);
    return 0;
}