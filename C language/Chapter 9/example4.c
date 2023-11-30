#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    float salary;
    char name[30];
};

void showEmployee(struct employee e){
    printf("Id : %d\n",e.id);
    printf("Salary: %.2f\n",e.salary);
    printf("name: %s\n\n",e.name);
}



int main()
{
    struct employee alt = {101,5684.33,"Altamsh"};
    struct employee aft = {102,51513.32,"Aftaab"};
    struct employee mns = {103,56513.55,"Manish"};
    // showEmployee(alt);
    // showEmployee(aft);
    showEmployee(mns);



    return 0;
}