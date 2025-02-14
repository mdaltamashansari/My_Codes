#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter Your X axis here: ");
    scanf("%d",&x);
    printf("Enter your Y axis here: ");
    scanf("%d",&y);
    if (x>0 && y>0) printf("Its lie on first Quadrant! ");
    else if (x<0 && y<0) printf("Its lie on second Quadrant! ");
    else if (x>0 && y<0) printf("Its lie on third Quadrant! ");
    else if (x<0 && y>0) printf("Its lie on fourth Quadrant! ");
    else if (x==0 && y==0) printf("Its lie on the orgin! ");
    return 0;
}