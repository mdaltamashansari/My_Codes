#include <stdio.h>
int main()
{
    int num;
    // number is divided by 5 or not
    printf("Enter Your Number: ");
    scanf("%d", &num);
    if (num%5 == 0)
        { 
        printf("Your number is divided by 5");
        }
    else
        {
        printf("Your number is not divided by 5");
         }
    return 0;
}