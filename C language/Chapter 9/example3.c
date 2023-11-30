#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    float salary;
    char name[30];
};



int main()
{
    struct employee alt;
    struct employee *ptr=&alt;


    //first way
    // (*ptr).id = 101;
    // (*ptr).salary = 23470.43;
    // strcpy((*ptr).name,"Altamash");

    // printf("id : %d\n",(*ptr).id);
    // printf("salary: %.2f\n",(*ptr).salary);
    // printf("name: %s\n",(*ptr).name);

    //using arrow operator

    ptr->id = 101;
    ptr->salary = 23470.43;
    strcpy(ptr->name,"Altamash");

    printf("id : %d\n",ptr->id);
    printf("salary: %.2f\n",ptr->salary);
    printf("name: %s\n",ptr->name);

    return 0;
}