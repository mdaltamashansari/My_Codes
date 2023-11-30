#include<stdio.h>
//C program to check whether a no. is negative, positive or zero
int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    if(num>0)
    {
        printf("num is positive \n");
    }
    else if(num<0)
    {
        printf("num is negtive\n");
    }
    else{
        printf("num is zero\n");
    }
    return 0;
}