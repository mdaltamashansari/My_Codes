#include <stdio.h>
int main()
{
    int x;
    printf("Enter Your Percentage: ");
    scanf("%d",&x);
    if (x>=81) printf("Very Good");
    else if(x>=61) printf("Good");
    else if(x>=41) printf("Average");
    else printf("Fail");
    return 0;
}