#include<stdio.h>
//AKING USER INPUT IN FLOAT DATA TYPE
int main(){
float a,b;
printf("Enter 1st number: ");
scanf("%f", &a); //& --> ADDRESS OF OPERATOR
printf("Enter 2nd number: ");
scanf("%f", &b);
printf("The sum of %.2f and %.2f is %.2f", a,b,a+b);
//%.2f SHOWS 2 DIGITS AFTER DECIMAL POINT
//%.2f only works in printf() function
return 0;
} 