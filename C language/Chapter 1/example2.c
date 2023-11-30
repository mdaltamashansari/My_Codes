#include<stdio.h>
//calculate the area of rectangle using user inputs
int main(){
    int length, breadth;
    printf("Enter the value of length and breadtsh: ");
    scanf("%d %d" , &length, &breadth);
    int area = length * breadth ;
    printf("The area of the rectangle is %d", area);
    return 0;
    }