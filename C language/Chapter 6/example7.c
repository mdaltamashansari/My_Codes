//WAP having a variable i.Print the address of i.Pass this variable to a function and print its address. Are these addresses same? why?

#include <stdio.h>

void printaddress(int n){
    printf("The address of n is %u\n",&n);
}
    
int main()
{
    int i=5;

    printf("The address of i is %u\n",&i);
    printaddress(i);

    return 0;
}
//No the addresses are not same bcz it is a call by value function.