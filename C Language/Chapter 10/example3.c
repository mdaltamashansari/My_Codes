#include <stdio.h>
//writing sentence in a file
int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt","w");
    char name[]= "Altamash Ansari";
    fprintf(ptr,"%s",name);
    fclose(ptr);
    return 0;
}