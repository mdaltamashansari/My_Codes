#include<stdio.h>
//find the 3rd angle

int main(){
    float x,y;
    printf("Enter the value of 1st angle:"),
    scanf("%f", &x);
    printf("Enter the value of 2nd angle:");
    scanf("%f", &y);
    float z = (180-(x+y));
    printf("The value of 3rd angle is %.2f\n", z);
    return 0;
} 