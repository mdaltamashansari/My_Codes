//WAP to check whether a given character is present in a string or not.

#include <stdio.h>

int checkOccurence(char *str, char ch){
    int i =0;
    while(str[i]!='\0'){
        if(str[i] == ch){
            return 1;
        }
        i++;
    }
    return 0;
}


int main()
{
    char str[] = "Program";
    if(checkOccurence(str,'z')){
        printf("The character is present");
    }
    else{
        printf("The character is not present");
    }
    return 0;
}