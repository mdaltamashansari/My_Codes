//Write your own version of strlen function from <string.h>

#include <stdio.h>

int stringlength(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main()
{
    char str[] = "kerala";
    printf("The size of the string is %d\n",stringlength(str));
    return 0;
}