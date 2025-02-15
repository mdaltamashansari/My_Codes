#include <stdio.h>
//End Of File(EOF)
int main()
{
    FILE *ptr;
    ptr = fopen("sentence.txt","r");
    char ch;
    while(1){
        ch = fgetc(ptr);
        if(ch == EOF){
            break;
        }
        printf("%c",ch);
    }
    return 0;
}