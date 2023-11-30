//WAP to cheak its is vowel or contant
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Your chracter to cheak: ");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Your Alphabet is vowel");
    }
    else
    {
        printf("Your Alphabet is not vowel");
    }
    return 0;
}