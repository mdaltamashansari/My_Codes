#include <stdio.h>
//reading integers from file
int main()
{
    FILE *ptr;
    ptr = fopen("test.txt","r");
    int num1,num2;
    fscanf(ptr,"%d %d",&num1, &num2);
    //fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("%d %d\n",num1, num2);
    return 0;
}