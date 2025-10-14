#include <stdio.h>
int main()
{
    // abosule value means all number output in postive
    int x;
    printf("Enter Your Number : ");
    scanf("%d",&x);
    if (x>=0) printf("%d",x);
    if (x<0) {
        x = x*(-1);
        printf("%d",x);
    }
    return 0;
}