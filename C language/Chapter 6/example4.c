#include <stdio.h>
int main()
{
    int i= 72;
    int*j= &i;
    int**k= &j;

    // printf("The value of i is %d\n",i);
    // printf("The value of j is %d\n",&j);
    // printf("The value of k is %d\n",k);
    // printf("The address of i is %d\n",&i);
    // printf("The address of j is %d\n",&j);
    // printf("The address of k is %d\n",&k);

    printf("The value of star i is %d\n",*(&i));
    printf("The value of star j is %d\n",*j);
    printf("The value of star k is %d\n",*k);
    printf("The value of star star k is %d\n",**k);

    return 0;
}