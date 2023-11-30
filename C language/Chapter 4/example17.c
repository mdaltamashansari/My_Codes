#include <stdio.h>
//WACP to enter a no. and print its reverse.
int main()
{
    int n, rev=0,ld;
    printf("Enter your no: ");
    scanf("%d", &n);
    while(n>0){
        ld= n%10;
        rev= (rev*10) + ld;
        n=n/10;
    }
    printf("Reverse of the no. is %d\n", rev);
    return 0;
}