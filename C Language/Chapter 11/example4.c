#include <stdio.h>
#include<stdlib.h>
//code showing use of free()
int main()
{
    int *ptr,*ptr2;
    ptr = (int*)malloc(350000*sizeof(int));
    for(int i=0;i<350000;i++){
        ptr2 = (int*)malloc(2000000*sizeof(int));
        printf("Enter the value of %d element: ",i);
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    return 0;
}