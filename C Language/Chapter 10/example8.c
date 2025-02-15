//Q2.WAP to generate multiplication table of a given no. in text format.Make sure that the file is readable and well formatted.

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("table.txt","w");
    int a;
    printf("Enter a no.");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d X %d = %d\n",a,i,a*i);
    }
    fclose(ptr);
    printf("Table succesfully generated.");
    return 0;
}