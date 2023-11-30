//WAP to change the value of a variable to ten times of its current value.Write a function and pass the value by reference.

#include <stdio.h>

void tentimes(int *a){
    
     *a = *a*10;
}

int main()
{
    int n=5;
    printf("The value of n before the function is %d\n",n);
    tentimes(&n);
    printf("The value of n after function call is %d\n",n);
    
    return 0;
}