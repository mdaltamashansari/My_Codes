//WAP to C programm to cheak charcter is alphapet or not
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Your charcter: ");
    scanf("%c",&ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("your charcter is Alphabet");
    }
    else
    {
        printf("your charcter is not Alphabet");
    }
    return 0;
}