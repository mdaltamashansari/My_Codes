#include<stdio.h>
//WACP to enter days and convert them into years, weeks, and days
int main(){
    int days, weeks, years;
    printf("Enter the value of days: ");
    scanf("%d", &days);
    years = days/365;
    weeks = (days- (years * 365))/7;
    days = days - ((years * 365 + (weeks * 7)));
    printf("%d years, %d weeks, %d days\n", years, weeks, days);
    return 0;
}