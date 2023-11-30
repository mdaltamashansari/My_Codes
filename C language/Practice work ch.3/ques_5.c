#include<stdio.h>
//C program to check whether a no. is even or odd
int main(){
    int num;
    printf("Enter your num: ");
    scanf("%d", &num);
    if(num%2 ==0){
        printf("num is even\n");
    }
    else{
        printf("num is odd\n");
    }
    return 0;
}