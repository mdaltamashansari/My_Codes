#include <stdio.h>
int main()
{
    //String declared from square brackets cannot be updated
    char name[] = "Altamashh";
    puts(name);
    name[] = "Altamash";
    puts(name);
    
    //String declared from pointers can be updated    
    char *name = "Manishh";
    puts(name);
    name = "Manish";
    puts(name);
    return 0;
}