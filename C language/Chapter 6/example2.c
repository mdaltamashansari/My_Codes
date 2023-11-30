#include <stdio.h>
int main()
{
    int i=4;
    //int*j=&i;
    int*j;
    j=&i;

    printf("The value of i is %d\n",i);
    printf("The address of i is %u\n",&i);
    printf("The value of pointer j is %d\n",j);
    printf("The value of address of j is %u\n",&j);
    printf("The value of *j is %d\n",*j);

    
    return 0;
}