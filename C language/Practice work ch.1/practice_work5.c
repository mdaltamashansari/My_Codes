#include<stdio.h>
//calculate total,average & percentage

int main (){
    float sub1, sub2, sub3, sub4, sub5;
    printf("Enter the marks of sub1 ");
    scanf("%f", &sub1);
    printf("Enter the marks of sub2 ");
    scanf("%f", &sub2);
    printf("Enter the marks of sub3 ");
    scanf("%f", &sub3);
    printf("Enter the marks of sub4 ");
    scanf("%f", &sub4);
    printf("Enter the marks of sub5 ");
    scanf("%f", &sub5);
    float total_marks = (sub1+sub2+sub3+sub4+sub5);
    float average_marks = (sub1+sub2+sub3+sub4+sub5)/5;
    float percentage= total_marks/500*100;
    printf("The total_marks is %.2f\n", total_marks);
    printf("The average_marks is %.2f\n", average_marks);
    printf("The percentage is %.2f\n", percentage);
    return 0;
}