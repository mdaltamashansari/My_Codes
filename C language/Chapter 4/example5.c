#include <stdio.h>
//WAP to print all even no.
int main()
{ 
    int n;
    printf("Enter your no.: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i=i+2)
    {
        printf("%d\n", i);
    }
    
    return 0;
}