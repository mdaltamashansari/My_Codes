//Quick quiz(OR)

#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    float salary;
    char name[30];
};

int main()
{
    struct employee altamash;
    struct employee aftaab;
    struct employee manish;

    altamash.id = 101;
    altamash.salary = 45634.54;
    strcpy(altamash.name,"altamash");

    aftaab.id = 102;
    aftaab.salary = 56340.54;
    strcpy(aftaab.name,"aftaab");

    manish.id = 103;
    manish.salary = 65214.54;
    strcpy(manish.name,"manish");

    printf("Id : %d\n",altamash.id);
    printf("Salary: %.2f\n", altamash.salary);
    printf("Name: %s\n",altamash.name);

    printf("Id : %d\n",aftaab.id);
    printf("Salary: %.2f\n", aftaab.salary);
    printf("Name: %s\n",aftaab.name);

    printf("Id : %d\n",manish.id);
    printf("Salary: %.2f\n", manish.salary);
    printf("Name: %s\n",manish.name);


    return 0;
}