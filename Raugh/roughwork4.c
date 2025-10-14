//Declare a string and take input from the user.Print the string afterwards.

#include <stdio.h>
int main()
{
    char str[10];
    printf("Enter your name:  ");
    gets(str);

    printf("The name you input was \n%s\n",str);

    return 0;
}