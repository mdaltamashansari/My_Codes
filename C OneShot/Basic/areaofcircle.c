#include <stdio.h>
int main()
{
    float Pi=3.14;
    float r;
    printf("Enter the value of radius: ");
    scanf("%f",&r);
    float area=Pi*r*r;
    printf("area of radius : %.2f",area);
    return 0;
}
