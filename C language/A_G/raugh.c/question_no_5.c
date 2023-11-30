//WAP to cheak weather a Number is even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter Your Number to cheak even or odd: ");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
    printf("Your Number is even");
    }
    else
    {
        printf("Your Number is odd");
    }
    return 0;
}