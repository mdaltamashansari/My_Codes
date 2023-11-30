//WAP to do question 3 by call by value

void tentimesbyref(int*x){
    *x= *x *10;
}
void tentimesbyval(int x){
    x = x*10;
}

#include <stdio.h>
int main()
{
    int n=5;
    printf("The value of of n before function call is %d\n",n);
    //tentimesbyref(&n);
    tentimesbyval(n);  //call by value doesnot manipulate the value of variable in main function

    printf("The value of n after function call is %d\n",n);
    
    return 0;
}