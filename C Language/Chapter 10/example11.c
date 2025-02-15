//Q5.WAP to modify a file containing an integer to double its value:
// [2]          -->     [4]
// prev. file          new file

#include <stdio.h>
int main()
{
    FILE *rptr;
    rptr = fopen("que5.txt","w");
    int num;
    fscanf(rptr,"%d",&num);
    fclose(rptr);
    FILE *wptr;
    wptr = fopen("que5.txt","w");
    fprintf(wptr,"%d",num*2);
    fclose(wptr);
    printf("Code executed successfully..");
    return 0;
}