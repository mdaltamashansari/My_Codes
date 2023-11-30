#include<stdio.h>

int main(){
    float salary, tax;
    printf("Enter the amount of income");
    scanf("%f", &salary);
    if (salary>= 250000 && salary<500000){
        tax = 0.05*salary;
    }
    else if (salary>=500000 && salary<1000000){
        tax = 0.2* salary;
    }
    else if (salary>=1000000){
        tax = 0.3* salary;
    }
    printf("Your tax is %f\n", tax);
    return 0;
}