//WAP to illustrate the use of arrow operator --> in C.

#include <stdio.h>

typedef struct student{
    int id;
    float percentage;
    char name[30];
}std;

int main()
{
    std altamash = {101,79.86,"Shadab bro"};
    std *ptr = &altamash;
    printf("Id: %d\n",ptr->id);
    printf("Percentage: %.2f\n",ptr->percentage);
    printf("Name: %s\n",ptr->name);
    
    return 0;
}