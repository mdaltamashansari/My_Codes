#include <stdio.h>
#include<stdlib.h>
//code showing use of malloc(user input)
int main()
{
   int *ptr,n;
   printf("Enter the size of your array: ");
   scanf("%d",&n);
   ptr = (int*)malloc(n*sizeof(int));

   for(int i=0;i<n;i++){
    printf("Enter the value of %d element: ",i);
    scanf("%d",&ptr[i]);
   } 
   for(int i=0;i<n;i++){
    printf("The value of %d element is %d\n",i,ptr[i]);
   }
    return 0;
}