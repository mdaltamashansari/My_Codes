#include <stdio.h>
#include <string.h>

typedef struct employee{
    int id;
    float salary;
    char name[30];
}emp;

void showEmployee(emp e){
    printf("Id : %d\n",e.id);
    printf("Salary: %.2f\n",e.salary);
    printf("name: %s\n\n",e.name);
}



int main()
{
    emp alt = {101,5684.33,"Altamsh"};
    emp aft = {102,51513.32,"Aftaab"};
    emp mns = {103,56513.55,"Manish"};
    // showEmployee(alt);
    // showEmployee(aft);
    showEmployee(mns);



    return 0;
}