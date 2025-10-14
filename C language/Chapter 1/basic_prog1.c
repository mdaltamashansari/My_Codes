#include<stdio.h>
//TAKING USER INPUT
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d", &a); //& --> ADDRESS OF OPERATOR
    printf("ENTER 2ND NUMBER: ");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d\n", a,b,a+b);
    return 0;
}
