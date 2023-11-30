//Q.9 Write a structure capable of storing date.Write a function to compare those dates.
//Q.10 Solve prblm 9 for time using typedf keyword.

#include <stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
}date;

int compareDate(date d1,date d2){ 
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.day>d2.day){
        return 1;
    }
    if(d1.day<d2.day){
        return -1;
    }
    return 0;
}


int main()
{
    date d1 = {2,8,2023};
    date d2 = {2,8,2023};
    int ans = compareDate(d1,d2);
    if(ans == 1){
        printf("d1 is greater than d2");
    }
    else if(ans == -1){
        printf("d2 is greater than d1");
    }
    else if(ans == 0){
        printf("Both dates are same");
    }
    return 0;
}