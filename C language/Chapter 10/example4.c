#include <stdio.h>
//writing a character in a file using fputc() 
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt","w");
    fputc('S',ptr);
    fclose(ptr);
    return 0;
}