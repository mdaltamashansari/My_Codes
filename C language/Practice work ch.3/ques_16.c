#include<stdio.h>
//C program to check whether the triangle is equilateral, isosceles or scalene triangle
int main(){
    int s1, s2,s3;
    printf("Enter the 1st side: ");
    scanf("%d", &s1);
    printf("Enter the 2nd side: ");
    scanf("%d", &s2);
    printf("Enter the 3rd side: ");
    scanf("%d", &s3);
 if((s1==s2) && (s2==s3)){
    printf("This is a equilateral triangle\n ");
 }
  else if ((s1==s2) || (s2==s3) ||(s3==s1)){ 
    printf("This is an isosceles triangle\n ");
 }
 else{
    printf("This is a scalene triangle\n ");
 }
 return 0;
}