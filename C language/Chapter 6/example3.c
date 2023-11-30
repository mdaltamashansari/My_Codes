#include <stdio.h>
int main()
{
    char a ='S';
    char *b =&a;

    printf("The value of a is %c\n",a);
    printf("The address of a is %u\n",&a);
    printf("The value of b is %d\n",b);
    printf("The address of b is %u\n",&b);
    printf("The value of *b is %c\n",*b);


    return 0;
}