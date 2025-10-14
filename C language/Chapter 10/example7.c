//Q1.WAP to read three integers from a file.

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rp.txt","r");
    int a,b,c;
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    fclose(ptr);
    printf("The numbers are %d %d %d\n",a,b,c);
    return 0;
}