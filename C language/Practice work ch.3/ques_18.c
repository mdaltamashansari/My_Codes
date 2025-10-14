#include<stdio.h>
//C program to calculate profit or loss
int main(){
    int CP, SP;
    printf("Enter the Cost price: ");
    scanf("%d", &CP);
    printf("Enter the Selling price: ");
    scanf("%d", &SP);
    if(SP>CP){
        printf("This is a profit of %d", SP-CP);
    }
    else if(CP>SP){
        printf("This is a loss of %d", CP-SP);
    }
    else{
        printf("neither profit nor loss\n");
    }
    return 0;
}