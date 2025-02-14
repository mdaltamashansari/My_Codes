#include <stdio.h>
int main()
{
    int length,breath,area;
    printf("Enter the value of Length: ");
    scanf("%d",&length);
    printf("Enter the value of breath: ");
    scanf("%d",&breath);
    area=length*breath;
    printf("Area of Rectangle : %d",area);
    return 0;
}