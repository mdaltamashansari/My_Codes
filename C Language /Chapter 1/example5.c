#include<stdio.h>
//Area and cirumference of a cylinder modified form a circle
int main(){
    float radius, height;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    printf("Enter the value of height: ");
    scanf("%f", &height);
    float area = 3.14*radius*radius*height;
    float perimeter = 4*radius + 2*height;
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}