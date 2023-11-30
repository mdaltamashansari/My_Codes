//Quick Quiz

#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    float salary;
    char name[30];
};

int main()
{
    struct employee altamash= {150, 45896.25, "altamash"};
    struct employee aftab= {250, 78965.32, "aftab"};
    struct employee manish = {240, 45879.32, "manish"};

    

    printf("Id: %d\n",altamash.id);
    printf("salary: %.2f\n",altamash.salary);
    printf("Name: %s\n\n",altamash.name);

    printf("Id: %d\n",aftab.id);
    printf("salary: %.2f\n",aftab.salary);
    printf("Name: %s\n\n",aftab.name);

    printf("Id: %d\n",manish.id);
    printf("salary: %.2f\n",manish.salary);
    printf("Name: %s\n\n",manish.name);

    return 0;
}