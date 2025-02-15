//Create an array of 10 numbers.Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>
int main()
{
    int arr[10]= {54,65,8,1,35,12,85,36,87,11};
    int *ptr = &arr[0];
    printf("Before updation %d\n", *ptr);
    ptr += 2;
    printf("After updation %d\n", *ptr);
    
    return 0;
}