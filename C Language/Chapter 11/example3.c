#include <stdio.h>
#include<stdlib.h>
//code showing use of calloc(hardcoaded)
int main()
{
    int *ptr;
    //By allocating memory using malloc,the default value of all the elements will be set to 0
    ptr = (int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}