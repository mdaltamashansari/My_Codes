//Write your on version of strcpy function from <string.h>

#include <stdio.h>

void stringcopy(char *target, char *source){
    int i = 0;
    while(source[i] != '\0'){
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}


int main()
{
    char source[] = "Hello";
    char target[30];
    stringcopy(target,source);
    puts(target);
    return 0;
}