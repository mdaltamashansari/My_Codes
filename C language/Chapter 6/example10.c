//WAP to print the value of a variable i by using "pointer to pointer" type of variable.

#include <stdio.h>
int main()
{
    int n = 10;
    int *m = & n;
    int **o = &m;

    printf("The value of n using pointer to pointer is %d\n", **o);
    
    return 0;
}