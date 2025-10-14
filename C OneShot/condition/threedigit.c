#include <stdio.h>
int main()
{
    // three digit number 
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //  && is stand for and
    if (x>99 && x<999)
    {
        printf("Three digit number");
    }
    else printf("Its not three digit number");
    return 0;
}