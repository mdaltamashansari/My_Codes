#include <stdio.h>
#include <stdlib.h>
//code showing use of realloc()
int main()
{
    int *ptr,n;
    ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the size of your array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the value of %d element",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    printf("Enter the new size of array: ");
    scanf("%d",&n);
    ptr = realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value of %d element:",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    free(ptr);
    
    return 0;
}