//Q.4 Take name and salary of two employees as input from the user and write them to a text file in the follwing format:
//name1, 3300
//name2, 7700

#include <stdio.h>
int main()
{
    int salary1;
    char name1[20];
    int salary2;
    char name2;
    printf("Enter name1: ");
    gets(name1);
    printf("Enter salary1: ");
    scanf("%d",&salary1);
    printf("Enter name2: ");
    gets(name2);
    printf("Enter salary2: ");
    scanf("%d", &salary2);
    
    FILE *ptr;
    ptr = fopen("emp.txt","w");
    fprintf(ptr, "%s , %d\n", name1, salary1);
    fprintf(ptr, "%s , %d\n", name2, salary2);
    fclose;

    return 0;
}