#include <stdio.h>
//reading a character in a file using fgetc()
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt","r");
    char ch;
    ch = fgetc(ptr);
    fclose(ptr);
    printf("%c",ch);
    return 0;
}