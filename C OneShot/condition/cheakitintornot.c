#include <stdio.h>
int main()
{
    // typecasting:- (int/float)value
    float num;
    printf("Enter a real number: ");
    scanf("%f",&num);
    int x=(int)num;
    float a=(float)x;
    if (num-a==0)
    {
        printf("Your number is integer");
    }
    else printf("Your number is not integer");
    return 0;
}