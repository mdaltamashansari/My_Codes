#include <stdio.h>
//WAP to print all odd no.
int main()
{ 
    int n;
    printf("Enter your no.: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i=i+2)
    {
        printf("%d\n", i);
    }
    
    return 0;
}