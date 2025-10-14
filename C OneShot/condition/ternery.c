#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    // condition ? true : false;
    (x%2==0) ? printf("Even ") : printf("Odd");
    return 0;
}