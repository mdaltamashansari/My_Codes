//String intro

#include <stdio.h>
int main()
{
    char str[] = "Hello";
    //printing string using loops
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}