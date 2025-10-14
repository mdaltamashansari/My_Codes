#include <stdio.h>
int main()
{
    //input and output of multi word string
    char str[25];
    printf("Enter your name: ");
    gets(str);  //used to take multi word string
    puts(str);  //used to print output but unlike printf you cant format some additional information/data
    //printf("The input string was :%s",str);
    return 0;
}