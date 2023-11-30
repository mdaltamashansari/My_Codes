#include <stdio.h>
//WACP to print all prime no. between 1 to n
int main()
{
    int i, j, end, isprime;
    printf("Find prime no. between 1 to : ");
    scanf("%d", &end);
    printf("All prime no. between 1 to %d are:\n", end);
    for(i=2; i<=end; i++){
        isprime= 1;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if (isprime==1){
            printf("%d\n", i);
        }
    }  
    return 0;
}