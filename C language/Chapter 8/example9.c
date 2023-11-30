//Write a function slice() to slice a string.It shouldchange the original string such that it is now the sliced string.Take m and n as the start and ending position for slice.

#include <stdio.h>

void slice(char *str, int m, int n){
    int i=0;
    while((i+m)<=n){
        str[i] = str[i+m];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[] = "Alexander";
    printf("string before slice: %s\n",str);
    slice(str,4,7);
    printf("string after slice: %s\n",str);

    return 0;
}