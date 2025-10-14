#include<stdio.h>
//area and circumference of a circle
int main(){
    float radius;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    float area = 3.14*radius*radius;
    float circum = 2*3.14*radius;
    printf("Area: %.2f\n", area);
    printf("circumference: %.2f", circum);
    return 0;
}