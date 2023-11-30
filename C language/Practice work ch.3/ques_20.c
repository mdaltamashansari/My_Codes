#include<stdio.h>
//C program to input basic salary of an enmpoyee and calculate its gross salary
int main(){
    int b_salary;
    printf("Enter your basic salary");
    scanf("%d", &b_salary);
    int hra, da, g_salary;
    if(b_salary<=10000){
        hra=b_salary*0.2;
        da=b_salary*0.8;
    }
    else if(b_salary<=20000){
        hra=b_salary*0.25;
        da=b_salary*0.9;
    }
    else if(b_salary>20000){
        hra=b_salary*0.3;
        da=b_salary*0.95;
    }
    g_salary=b_salary+hra+da;
    printf("gross salary is %d", g_salary);
    return 0;
}