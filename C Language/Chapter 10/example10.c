//Q4.Take name and salary of two employees as input from the user and write them to a text file in the following format:
// name1, 3300
// name2, 7700

#include <stdio.h>
int main()
{
    char name1[20],name2[20];
    int salary1,salary2;

    printf("Enter your first user name: \n");
    gets(name1);
    printf("Enter your second user name: \n");
    gets(name2);
    printf("Enter your first user salary: \n");
    scanf("%d",&salary1);
    printf("Enter your second user salary: \n");
    scanf("%d",&salary2);

    FILE *ptr;
    ptr = fopen("emp.txt","w");
    fprintf(ptr,"%s",%d\n,name1,salary1);
    fprintf(ptr,"%s",%d\n,name2,salary2);
    fclose(ptr);
    
    return 0;
}