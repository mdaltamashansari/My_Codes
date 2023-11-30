//WACP to display "welcome to Abode Graphics" and "Please visit again" using a function.

#include<stdio.h>

void greeting();
void visiting();
int main(){
    greeting();
    visiting();
    return 0;
}

void greeting(){
    printf("Welcome to Abode Graphics\n");
}
void visiting(){
    printf("Please visit again\n");
}