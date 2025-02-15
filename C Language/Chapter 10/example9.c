//Q3.WAP toread a text file character by character and write its content twice in a separate file.

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("que3.txt","r");
    char ch;
    while(1){
        ch = fgetc(ptr);
        if(ch == EOF){
            break;
        }
        //printf("%c%c",ch,ch);
        printf("%c",ch);
    }
    return 0;
}