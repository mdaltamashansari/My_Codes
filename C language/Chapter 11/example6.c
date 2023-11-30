//Q.1 WAP to dynamically create an array of size 6 capable of storing 6 integers.
//Q.2 Use the array in prblm 1 to store 6 integers entered by the value.
//Q.3 Solve problem 1 using calloc().

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n;
    printf("Enter the size of your array: ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));

    // for(int i=0; i<n; i++){
    //     printf("Enter the value of %d element: ",i);
    //     scanf("%d",&ptr[i]);
    // }
    for(int i=0; i<n; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}