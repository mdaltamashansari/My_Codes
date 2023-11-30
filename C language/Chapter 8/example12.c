//WAP to count the occurence of a given character in a string.

#include <stdio.h>

int countOccurence(char*str, char ch){
    int i=0, count=0;
    while(str[i]!='\0'){
        if(str[i] == ch){
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[] = "Program";
    int result = countOccurence(str,'r');
    printf("Occurence of the character is %d times\n", result);
    return 0;
}