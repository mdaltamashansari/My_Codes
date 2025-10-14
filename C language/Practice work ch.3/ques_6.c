#include<stdio.h>
//C program to check whether a year is leap year or not
int main(){
    int year;
    printf("Enter your year");
    scanf("%d",&year);
    if((year%4==0) && (year%100!=0) || (year%400==0)){
        printf("year ia leap year\n");
    }
    else{
        printf("year ia not leap year\n");
    }
    return 0;
    }