#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your Alphabet: ");
    scanf("%c",&ch);
    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("charcter is alphabet");
    }
    else
    {
        printf("charcter is not alphabet");
    }
    return 0;
    }